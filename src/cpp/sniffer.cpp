#include <iostream>
#include <pcap.h>
#include <arpa/inet.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>

void packet_handler(u_char *args, const struct pcap_pkthdr *header, const u_char *packet) {
    struct ip *ip_header = (struct ip *)(packet + 14); // Saltamos Ethernet (14 bytes)
    
    std::cout << "[+] Paquete Capturado - Tamaño: " << header->len << " bytes" << std::endl;
    std::cout << "    Origen: " << inet_ntoa(ip_header->ip_src) << std::endl;
    std::cout << "    Destino: " << inet_ntoa(ip_header->ip_dst) << std::endl;
    std::cout << "    Protocolo: " << (int)ip_header->ip_p << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
}

int main() {
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t *handle;

    // "any" permite escuchar en todas las interfaces de tu Kali
    handle = pcap_open_live("any", BUFSIZ, 1, 1000, errbuf);

    if (handle == NULL) {
        std::cerr << "Error: " << errbuf << std::endl;
        return 2;
    }

    std::cout << "[*] Iniciando sniffer en modo escucha (Ctrl+C para salir)..." << std::endl;
    pcap_loop(handle, 0, packet_handler, NULL);

    pcap_close(handle);
    return 0;
}


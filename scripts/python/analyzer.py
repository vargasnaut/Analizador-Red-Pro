import os

print("--- Analizador de Seguridad Sentinel (Python) ---")
log_path = "../../logs/network.log"

if os.path.exists(log_path):
    with open(log_path, "r") as f:
        lines = f.readlines()
        print(f"[+] Total de paquetes analizados: {len(lines)}")
else:
    print("[!] No se encontró el archivo de log. Ejecuta el sniffer primero.")


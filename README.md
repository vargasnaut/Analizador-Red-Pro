# 🛡️ Network Sentinel: Packet Sniffer & Traffic Analyzer

**Network Sentinel** es una herramienta de monitoreo de red de nivel intermedio desarrollada para entornos **Linux**. Integra la velocidad de **C++** para la captura de bajo nivel y la flexibilidad de **Python** para el análisis de datos, demostrando habilidades de interoperabilidad y gestión de sistemas.

---

## 🚀 Características
* **Captura de paquetes en tiempo real:** Motor desarrollado en C++ utilizando `libpcap`.
* **Análisis de tráfico:** Script de Python que procesa logs para identificar IPs sospechosas.
* **Automatización:** Makefile integrado para una compilación sencilla en Linux.
* **Arquitectura:** Separación clara entre el núcleo de alto rendimiento y la capa de análisis.

## 🛠️ Tecnologías y Herramientas
* **Lenguajes:** C++ (C++17), Python 3.10.
* **Librerías de Sistema:** `libpcap` (Captura de red), `netinet` (Protocolos).
* **Entorno:** Linux (Ubuntu/Debian/Kali).
* **Control de Versiones:** Git & GitHub (Flujo de trabajo basado en ramas).

---

## 📁 Estructura del Proyecto
```bash
.
├── bin/                # Ejecutables compilados
├── src/
│   └── cpp/            # Código fuente del motor de captura (C++)
├── scripts/
│   └── python/         # Scripts de análisis y visualización (Python)
├── logs/               # Archivos de captura generados (.log / .pcap)
├── Makefile            # Automatización de la compilación
└── README.md           # Documentación

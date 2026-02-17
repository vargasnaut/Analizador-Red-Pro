CC = g++
CFLAGS = -Wall
LIBS = -lpcap
TARGET = bin/sniffer

all:
	mkdir -p bin
	$(CC) $(CFLAGS) src/cpp/sniffer.cpp -o $(TARGET) $(LIBS)

clean:
	rm -rf bin/

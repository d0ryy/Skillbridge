#include <pcap/pcap.h>	//incuded providing various structures and defines used by the pcap functions
#include "hacking.h"

void pcap_fatal(const char *failed_in, const char *errbuf) { 	//Function for displaying fatal errors.
   printf("Fatal Error in %s: %s\n", failed_in, errbuf);	// Uses an error buffer to return error and status messages
   exit(1); 
}

int main() {
   struct pcap_pkthdr header;
   const u_char *packet;
   char errbuf[PCAP_ERRBUF_SIZE];	//Error Buffer, size defined in pcap.h (256)
   char *device;
   pcap_t *pcap_handle;			//Similar to file descriptor, used to reference a packet-capturing object
   int i;
device = pcap_lookupdev(errbuf);	//Looks for a suitable device to sniff on. returns as a string pointer referncing static
if(device == NULL)			//If it can't find a device, will return null.
   pcap_fatal("pcap_lookupdev", errbuf);

printf("Sniffing on device %s\n", device);
pcap_handle = pcap_open_live(device, 4096, 1, 0, errbuf);	//Opens a packet-capturing device, returning a handle to it.
if(pcap_handle == NULL)						//Args are: Device to sniff, max packet size, promiscuous flag, tm out
   pcap_fatal("pcap_open_live", errbuf);			// , and a pointer to the error buffer.
for(i=0; i < 3; i++) {
      packet = pcap_next(pcap_handle, &header);		//grabs the next packet. 
      printf("Got a %d byte packet\n", header.len);
      dump(packet, header.len);
   }
   pcap_close(pcap_handle);
}

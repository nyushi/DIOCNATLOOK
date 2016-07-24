#include<sys/ioctl.h>
#include<net/if.h>
#include<net/pfvar.h>
#include<stdio.h>

int main(void){
	printf("DIOCNATLOOK: %lu\n", DIOCNATLOOK);
	printf("PF_OUT: %d\n", PF_OUT);
	return 0;
}

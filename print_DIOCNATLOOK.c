#include<sys/ioctl.h>
#include<net/if.h>
#include<net/pfvar.h>
#include<stdio.h>

int main(void){
	printf("%lu\n", DIOCNATLOOK);
	return 0;
}

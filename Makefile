all: print_DIOCNATLOOK
	./print_DIOCNATLOOK

print_DIOCNATLOOK: print_DIOCNATLOOK.c xnu
	gcc -DPRIVATE -I./xnu/bsd -I./xnu/libkern $@.c -o $@
xnu:
	git clone -b 10.11 https://github.com/opensource-apple/xnu

clean:
	rm -rf ./xnu ./print_DIOCNATLOOK

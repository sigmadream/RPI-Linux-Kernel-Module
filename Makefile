obj-m := hello.o
KernelDIR := /usr/src/linux-headers-4.19.97-v7l+

all:
	make -C$(KernelDIR) M=$(shell pwd) modules

clean:
	make -C$(KernelDIR) M=$(shell pwd) clean
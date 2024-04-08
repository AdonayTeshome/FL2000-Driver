# Fresco Logic FL2000 Linux/Android kernel driver

#### a. Compile the driver

Find your kernel source tree, and edit `src/Makefile`. Locate the following line:
    
    KERNEL_PATH = /usr/src/linux-headers-*.*.*-**-generic`
    
Modify this line so that it points to the correct source tree.
After that, run `make` to create `fl2000.ko` and run `insmod fl2000.ko` to load the driver.

#### 6b. Test the driver

In the `sample` folder, run `make` to create `fltest`. If you you are using a
cross compiler to build the binary for specific platforms, you need to specify that specific
compiler in `src/Makefile`.
    
Run `./fltest 0` as superuser to run the test. The driver provides several
user mode buffer access methods (e.g  copy to kernel internal buffer, or
directly locking down user buffer). Look at `fl2000_ioctl.h` for detailed
information.


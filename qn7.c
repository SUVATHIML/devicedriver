
 #include <asm/io.h>

phys_addr = virt_to_phys(virt_addr);
virt_addr = phys_to_virt(phys_addr);
 bus_addr = virt_to_bus(virt_addr);
virt_addr = bus_to_virt(bus_addr);

/*All this is about accessing ordinary memory. There is also "shared memory" on the PCI or ISA bus. It can be mapped inside a 32-bit address space using ioremap(), and then used via the readb(), writeb() (etc.) functions.Kernel and user space work with virtual addresses (also called linear addresses) that are mapped to physical addresses by the memory management hardware.*/

#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sangkon Han");
MODULE_DESCRIPTION("RPI4 Simple Module");

int mod_init(void)
{
    printk( KERN_INFO "[helloworld module] Hello Wrold!\n");
    printk( KERN_INFO "[helloworld module] Load a module!\n");
    return 0;
}

void mod_exit(void)
{
    printk( KERN_INFO "[helloworld module] Goodbye Bye!\n");
    printk( KERN_INFO "[helloworld module] Unload a module!\n");
}

module_init(mod_init);
module_exit(mod_exit);
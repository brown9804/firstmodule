#include <linux/module.h>	/* Needed by all modules */
#include <linux/kernel.h>	/* Needed for KERN_INFO */
#include <linux/init.h>		/* Needed for the macros */

static int __init hello_2_init(void)
{
		printk(KERN_INFO "Hello, Belinda\n");
			return 0;
}

static void __exit hello_2_exit(void)
{
		printk(KERN_INFO "Goodbye, was a pleasure!\n");
}

module_init(hello_2_init);
module_exit(hello_2_exit);

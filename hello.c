#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE ("GPL");

static int __init example_2_init (void)
{
	printk (KERN_INFO "The first module2\n");
	return 0;
}

static void __exit example_2_exit (void)
{
	printk (KERN_INFO "The module has uninstalled2\n");
}

module_init (example_2_init);
module_exit (example_2_exit);

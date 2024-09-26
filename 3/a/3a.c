#include <linux/module.h>

int init1( void )
{
	printk( "\n   Module Loaded   \n\n" );

	return	0;
}

void exit1(void )
{
	printk( "\n  Module Unloaded  \n\n" );
}

module_exit(exit1);
module_init(init1);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Name");
MODULE_DESCRIPTION("Printing messages in kernel");

//read a txt file and save the content to output.txt in reversed order
//EX: input:a,b,c,d,e --> output:e,d,c,b,a

#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/buffer_head.h>
#include <asm/uaccess.h>
#include <asm/segment.h>

/*
#include <stdio.h>
#include <stdlib.h>
*/
MODULE_DESCRIPTION("fileIO");
MODULE_LICENSE("GPL");

static int fileio_init(void)
{
	
	printk(KERN_INFO "Your resever result had save into the output.txt. !\n");
	return 0;
}

static void fileio_exit(void)
{
	printk(KERN_INFO "You finish the fileIO !\n");
}
ssize_t kernel_read(struct file *file, void *buf, size_t count, loff_t *pos);
ssize_t kernel_write(struct file *file, const void *buf, size_t count,loff_t *pos);

module_init(fileio_init);
module_exit(fileio_exit);


#include <linux/init.h>
#include <linux/string.h>
#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/in.h>
#include <linux/errqueue.h>

MODULE_LICENSE("GPL") ;
MODULE_AUTHOR("STUDENT") ;
MODULE_AUTHOR("STUDENT") ;
MODULE_DESCRIPTION("Printing Process Info") ;

int sysint_init(void) {
  struct task_struct* cur_task;

  printk("\n\nHello World, Module loaded \n\n\n");

  cur_task = get_current();

  printk (KERN_ALERT "\n\n STARTING WITH PROCESS : %s[%d]\r\n", cur_task->comm, cur_task->pid);
  return 0;
}

void sysint_exit(void) {
  printk("\n\nUnloading the modulo\n");
}

module_init(sysint_init);
module_exit(sysint_exit);

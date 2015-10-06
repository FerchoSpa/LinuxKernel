#include <linux/init.h>
#include <linux/kernel.h>

int sysint_init(void) {
  printk("\n\nHello World, Module loaded \n\n\n");
  return 0;
}

void sysint_exit(void) {
  printk("\n\nUnloading the modulo\n");
}

module_init(sysint_init);
module_exit(sysint_exit);

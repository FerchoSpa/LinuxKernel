#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int process_init_data = 30;
int process_noinit_data;

char globalBuffer[100];

void process_prints(void) {
  int process_local_data = 1;
  char localBuffer[100];

  printf("\nProcess PID: %d", getpid());
  printf("\n\n");
  printf("\n Data segment :%p", &process_init_data);
  printf("\n BSS segment  :%p", &process_noinit_data);
  printf("\n Code segment :%p", &process_prints);
  printf("\n Stack segment:%p", &process_local_data);
  printf("\n globalBuffer :%p", &globalBuffer);
  printf("\n localBuffer  :%p", &localBuffer);
  printf("\n\n");
  while(1);
}

int main() {
  process_prints();
  return 0;
}


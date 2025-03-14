#include <stdio.h>

char cookie[] = "ganaste!";

int main(int argc, char *argv[]) {
  char buffer[32];
  printf("cookie: %08x\n", &cookie);

  gets(buffer);
  printf(buffer);
  printf("\n");

  return 0;
}

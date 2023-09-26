/* Compile this with gcc -nostartfiles */

#include <stdlib.h>

void _start() {
  int ret = my_main();
  exit(ret); 
}

int my_main() {
  puts("This is a program without a main() function!");
  return 0; 
}


/* 

This is an example of how to can write and execute a C program without writing a main() function.
This is useful for writing small programs that don’t need a main() function, such as a program that just prints a message and exits.

Compile it with this command:

gcc -o my_main my_main.c –nostartfiles
Run it with this command:

./my_main

*/

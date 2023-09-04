// Program to illustrate using pointers and functions

#include <stdio.h>

// Declare Functions
void test (int *int_pointer) {
  *int_pointer = 100;
}

int main(void) {

  int i = 50, *p = &i;

  printf ("Before the call to test i = %d\n", i);

  test (p);

  printf ("After the call to test i = %d\n", i);
  
  return 0;
}
#include "stdio.h"

int add_func(int a, int b);
void main()
{
  int i = 0;  
  i = i + 2;
  
  int result = add_func(3,4);
  
}

int add_func(int a, int b )
{
  return (a+b);
}

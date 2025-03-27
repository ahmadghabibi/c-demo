#include <stdio.h>
#include "mymath.h"
int main()
{
  vector_h first ;
  vector_h second ;

  first.x = 1 ;
  first.y = 2 ;
  second.x = 3 ;
  second.y = 4 ;
  Add(&first,&second);
  printf("%f", first.x);

}
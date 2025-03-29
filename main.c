#include <stdio.h>
#include "mymath.h"
#include "linkedlist.h"

typedef struct bitFlds
{
  char var1:1;
  char var2:1;
}bitFlds_t;

void print()
{
  printf("print func called\n");
}
int ret_int(int val)
{
  return val*val;
}
int main()
{

  int x = 42;
  void* genericPointer = &x;

  printf("%d x = \n", *(int*)genericPointer);
  genericPointer = print;
  ((void (*)())genericPointer)();
  genericPointer = ret_int;
  printf("generic val is: %d \n ",((int (*)(int))genericPointer)(10));

  /*
  bitFlds_t bits ;
  bits.var1 = 1;
  
  int pixel = 0xFFAACC11;
  unsigned char r = (pixel >> 24);
  unsigned char g = (pixel >> 16);
  unsigned char b = (pixel >> 8);
  unsigned char a = (pixel >> 0);



  
  linkedlist_t* list = CreateLinkedList();
  AppendToLinkedList(list,1);
  AppendToLinkedList(list,2);
  PrintLinkedList(list->head);
*/
  //vector_h first ;
  //vector_h second ;

  //first.x = 1 ;
  //first.y = 2 ;
  //second.x = 3 ;
  //second.y = 4 ;
  //Add(&first,&second);
  //printf("%f", first.x);

}
#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void Test_Stack(Stack *ptr_stack);
 //===========================================================================
 /*
 // Push && Pop character
 int main(){
 Stack stack;
 Stack *ptr_stack = &stack;
 char  element;
 char *ptr_element = &element;
//---------------------------------------------
 int x = 0, temp = 0;
 Init(ptr_stack);
 //----------------------------------
 Push('S', ptr_stack);
 Push('y', ptr_stack);
 Push('s', ptr_stack);
 Push('t', ptr_stack);
 Push('e', ptr_stack);
 Push('m', ptr_stack);
 Push('H',ptr_stack);
 Push('A',ptr_stack);
 Push('D',ptr_stack);
 Push('E',ptr_stack);
 //it is full
 Push('E',ptr_stack);
 Push('R',ptr_stack);
// ----------------------------------------------------
// ----------------------------------------------------
 if(IsFull(ptr_stack)){
 printf("\n Stack is full.");
 } else if(IsEmpty(ptr_stack)){
 printf("\n Stack is empty.");
 } else {
 printf("\n Stack size: %d\n", StackSize(ptr_stack));
 }
 printf("\n ---------------");
 // ----------------------------------------------------
 temp = ptr_stack->top;
 for(x = 0; x <= temp; ++x){
 Pop(ptr_element, ptr_stack);
 printf("\n Element: %c", *ptr_element);
 printf("\n Size: %d", StackSize(ptr_stack));
 printf("\n ---------------");
 }

 return 0;
 }*/

// push and pop string
 int main(){
 Stack stack;
 Stack *ptr_stack = &stack;
// -----------------------------
char  element;
char *ptr_element = &element;
int x = 0;
Init(ptr_stack);
Push(12,ptr_stack);
Push(15,ptr_stack);
Push(16,ptr_stack);
Push(18,ptr_stack);
int result ;
result=Pop(ptr_element,ptr_stack);
printf("pop = %d\n",result);

/* //-----------------------------------------------------
 for(x = 0; x < 5; ++x){
 Push(x, ptr_stack);
 }
 Test_Stack(ptr_stack);
 // ----------------------------------------------------
 //--------------------------------------------------------
 for(x = MAX_SIZE ;x >= 0; --x){
 Pop(ptr_element, ptr_stack);
 printf("\n element pop: %d \n", x);
 printf("size : %d",StackSize(ptr_stack));
 } */

 return 0;
 }


void Test_Stack(Stack *ptr_stack){
if(IsFull(ptr_stack)){
 printf("\n Stack is full.");
 } else if(IsEmpty(ptr_stack)){
 printf("\n Stack is empty.");
 } else {
 printf("\n Stack size: %d\n", StackSize(ptr_stack));
 }
 printf("\n ---------------");
}

#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


#define MAX_SIZE 10
#define DATA_TYPE int

 typedef struct{
 DATA_TYPE elements[MAX_SIZE];
 int top;
 }Stack;

 void Init(Stack *);
 int IsFull(Stack *);
 int IsEmpty(Stack *);
 void Push(DATA_TYPE, Stack *);
 int Pop(DATA_TYPE *, Stack *);
 int StackSize(Stack *);
 void ClearStack(Stack *);

#endif // STACK_H_INCLUDED

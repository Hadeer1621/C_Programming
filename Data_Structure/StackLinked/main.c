 /*
 * Name       :  Stack.c
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */




#include <stdio.h>
#include <stdlib.h>

#define NULL    '\0'
void print (void);
void push( int data);
void pop (void);


typedef struct node {
  int  data ;
  struct Node * next ;
}Node;
Node *top = NULL ;

int main()
{
    push(25);
    print();
    push(13);
    print();
    push(20);
    print();
    push(36);
    print();
   //-----------------------------------------------
    pop();
    print();
  //-----------------------------------------------
    pop();
    print();

     pop();
    print();

     pop();
    print();

    return 0;
}


 void push( int data){
 Node *New_node= malloc(sizeof(Node));
 New_node->data = data;
 if(top == NULL){
    New_node->next = NULL;
 }
 else {
    New_node->next = top;
 }
 top = New_node;
 }


void  pop (void){
if(top == NULL){
    printf(" Stack is empty \n");
}
else {
     Node *temp = top;
    printf("pop element: %d \n",top->data);
    top = top->next;
    free(temp);
}
}


void print (void){
if (top == NULL) {
        printf("\nStack is empty \n");
    } else {
        printf("The stack is \n");
         Node *temp = top;
        while (temp->next != NULL) {
            printf("%d--->", temp->data);
            temp = temp->next;
        }
        printf("%d--->NULL\n\n", temp->data);
    }

}







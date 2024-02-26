 /*
 * Name       :   STACK USING LINKED LIST 
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */
//========================================================
#include <stdio.h>
#include <stdlib.h>
#include"Queue.h"
//============================================
		void Test_Queue(Queue *ptr_queue);
//===================================================

int main()
{
 Queue queue;
 Queue *ptr_queue = &queue;

 DATA_TYPE element;
 DATA_TYPE *ptr_element = &element;

 int x = 0;
 Init(ptr_queue);
 Test_Queue(ptr_queue); // empty
 // ----------------------------------------------------
for(x=0;x< MAX_SIZE;++x){
  Enqueue(x,ptr_queue);
}
Test_Queue(ptr_queue); // full
 // ----------------------------------------------------
 //remove 2
 Dequeue(ptr_element,ptr_queue);
 Dequeue(ptr_element,ptr_queue);

  Test_Queue(ptr_queue); //7
 // ----------------------------------------------------

 // add 2
 Enqueue(11,ptr_queue);
 Enqueue(12,ptr_queue);

 Test_Queue(ptr_queue); // full

 //----------------------------------------------
printf("\n\n ===================================");
printf("\n Front\tElement\tSize after Dequeue");
printf("\n ===================================");
//-------------------------------------------------------
 for(x = 0; x < MAX_SIZE; ++x){
 printf("\n %d",ptr_queue->front);
 Dequeue(ptr_element, ptr_queue);
 printf("\t Element: %d", *ptr_element);
 printf("\t \t %d", QueueSize(ptr_queue));
 printf("\n ---------------");
 }
 // ----------------------------------------------------
    return 0;
}

//================================================

void Test_Queue(Queue *ptr_queue){
    if(IsFull(ptr_queue)){

 printf("\n Queue is full.");

 } else if(IsEmpty(ptr_queue)){

 printf("\n Queue is empty.");

 } else {

 printf("\n Queue size: %d", QueueSize(ptr_queue));
 }

 printf("\n ---------------");
}

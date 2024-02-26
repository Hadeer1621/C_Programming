 /*
 * Name       :  Queue_impelemention.c
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */

//==========================================
#include"Queue.h"
//=============================================
void Init(Queue *ptr_queue){
// front == -1
ptr_queue->front = -1;
// rear == -1
ptr_queue->rear = -1;
}

// ===========================================================================
int IsFull(Queue *ptr_queue){
    // (rear+1)% size =  front is full
if((ptr_queue->rear + 1) % MAX_SIZE == ptr_queue->front){
return 1;
} else { // is no full
return 0;
}
}
// ===========================================================================
int IsEmpty(Queue *ptr_queue){
if((ptr_queue->front == -1) && (ptr_queue->rear == -1)){
return 1;
} else {
return 0;
}
}
// ===========================================================================
int Enqueue(DATA_TYPE element, Queue *ptr_queue){
    // checking is full
if((ptr_queue->rear + 1) % MAX_SIZE == ptr_queue->front){
   return 0;
   }
 // enqueue : empty all or empty index
// Is queue empty?
else if ((ptr_queue->front == -1) && (ptr_queue->rear == -1)){

        ptr_queue->front = ptr_queue->rear = 0;
     }
// criculir queue ( empty index)
else { ptr_queue->rear = (ptr_queue->rear + 1) % MAX_SIZE;
    }

ptr_queue->elements[ptr_queue->rear] = element; // insert element
return 1;
}
// ===========================================================================
int Dequeue(DATA_TYPE *ptr_element, Queue *ptr_queue){
// Is queue empty?
if((ptr_queue->front == -1) && (ptr_queue->rear == -1)){
return 0;
}
/* Dequeue : delete element of front then
 * front ++
 */
*ptr_element = ptr_queue->elements[ptr_queue->front];
// if one element in queue
if (ptr_queue->front == ptr_queue->rear){
// reset queue
ptr_queue->front = ptr_queue->rear = -1;
}
// more element in queue
 else {
ptr_queue->front = (ptr_queue->front + 1) % MAX_SIZE;
}

return 1;
}
// ===========================================================================
int QueueSize(Queue *ptr_queue){

if((ptr_queue->front == -1) && (ptr_queue->rear == -1)){// Is queue empty?
return 0; // elements = 0 ;
}
else if(ptr_queue->front < ptr_queue->rear){ // less than

   return (ptr_queue->rear - ptr_queue->front +1);
}
else if(ptr_queue->rear < ptr_queue->front){ //

return ((MAX_SIZE - ptr_queue->front) + (ptr_queue->rear + 1));

} else {

return 1; // element 1
}
}
// ===========================================================================
void ClearQueue(Queue *ptr_queue){

 ptr_queue->front = -1;
 ptr_queue->rear = -1;
 }

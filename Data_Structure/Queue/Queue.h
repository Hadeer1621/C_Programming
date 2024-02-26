 /*
 * Name       :  Queue_Interface.c
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */



#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

// ----------------------------------------------------

#define MAX_SIZE 10
#define DATA_TYPE  int

typedef struct{
DATA_TYPE elements[MAX_SIZE];
int front;
int rear;
}Queue;

void Init(Queue *);
int IsFull(Queue *);
int IsEmpty(Queue *);
int Enqueue(DATA_TYPE, Queue *);
int Dequeue(DATA_TYPE *, Queue *);
int QueueSize(Queue *);
void ClearQueue(Queue *);

// ----------------------------------------------------

#endif // QUEUE_H_INCLUDED

 /*
 * Name       :   LINKEDLIST.h  
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */




#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include <stdio.h>
#include <stdlib.h>

#define DATA_TYPE char


 typedef struct node{
 DATA_TYPE element;
 struct node *next;
 }Node;

 //======================Prototypes===========================
 // ----------------------------------------------------------
 Node* Append(Node *, DATA_TYPE);
 
 int Length(Node *);
 
 int Get_Element(Node *, int, DATA_TYPE *);
 
 Node* Delete_First_Node(Node *);
 
 int Delete_Node(Node *, int);
 
 Node* Insert_Frist(Node *, DATA_TYPE);
 
 
 int Insert_After(Node *, int, DATA_TYPE);


#endif // LINKEDLIST_H_INCLUDED

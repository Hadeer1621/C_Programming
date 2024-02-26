 /*
 * Name       :   Linked_list.c  
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */

/*==================INCLUDES====================*/
	#include"LinkedList.h"
/*==================GLOBAL_VARIABLES_====================*/
	#define NULL    ((void *) 0)
/*=======================================================*/


/*============IMPLEMENTATION_FUNCTIONS_================*/
// ==========Start_Function_================================//

Node* Append (Node *head, DATA_TYPE element){
		Node *new_node = NULL; // Local (in stack)

				// create a node
				// reserve a block in heap
		new_node =(Node *)malloc(sizeof(Node));

		if(new_node == NULL){
		return NULL;
		}

			// set data into a new node
			new_node->element = element;
			new_node->next = NULL;

				// link the new node to the 'List'
		if(head != NULL){ // linked list is not empty
				// set address in head to 'temp'
			// this address points to 1st node
				Node *temp = head;

		while(temp->next != NULL){
		temp = temp->next;
		}
		temp->next = new_node;
		}
				// return address of new 'Node'
					return new_node;
}


// ==========Start_Function_================================
int Length(Node *head){
	
	int len = 1;

		if(head == NULL){ // linked list is empty
		return 0;
		}
		// set address in head to 'temp'
		// this address points to 1st node
		Node *temp = head;
		
		while(temp->next != NULL){
		
		len++;
		// move temp to the next node
		temp = temp->next;
		}
		
		return len;
		}
		
// =========== Start_Function_============================//
int Get_Element(Node *head, int node_number, DATA_TYPE *element){
		
		if(head == NULL){ // linked list is empty
		return 0;
		}
		
		if((node_number > Length(head)) || (node_number < 1)){
		return -1;
			}
			// set address in head to 'temp'
				// this address points to 1st node
		Node *temp = head;
		int x = 1;
		while(x < node_number){
		// move temp to the next node
		temp = temp->next;
		x++;
		}
		*element = temp->element;
		return 1;
}


//=========== Start_Function_============================//


Node* Delete_First_Node(Node *head){

		// linked list is empty
		if(head == NULL){
		return NULL;
		}
		
		// check List length
		if(Length(head) == 1){
		free(head);
		return NULL;
		} 
		else { // more than one node
		Node *second_node;
		second_node = head->next;
		free(head);
		return second_node;
		}
	}

		
// ===========Start_Function_==========================================================
int Delete_Node(Node *head, int node_number){	
		// linked list is empty
	if((head == NULL)){
	return 0;
	}
	 // Invalid node number
	 if((node_number > Length(head)) || (node_number < 2)){
	 return -1;
				}
	 // --------------------------------------------------
	 // delete any node in the middle or in last
	  Node *prev = head, *current;
	  int x = 1;
	  
	  while(x < node_number - 1){
		prev = prev->next;
		x++;
		}
		
	 current = prev->next;
	 prev->next = current->next;
	 // current->next = NULL;
	 free(current);

		return 1;
 }
 
 
 // ===============Start_Function_=====================================================
 
 
 
 Node* Insert_Frist(Node *head, DATA_TYPE element){
		// linked list is empty
		if(head == NULL){
		return NULL;
		}
		
		Node *first_node;
		
		// create a node
		// reserve a block in heap
		first_node =(Node *)malloc(sizeof(Node));
		
		if(first_node == NULL){
		return head;
		}
		
		// set data into a new node
		first_node->element = element;
		first_node->next = head;
		
		head = first_node;
		
		return head;
 }
 
 
 
 
 // ================Start_Function_=======================================
 int Insert_After(Node *head, int node_number, DATA_TYPE element){

		 // linked list is empty
		 if((head == NULL)){
		 return 0;
		 }

		 // Invalid node number
		 if((node_number > Length(head)) || (node_number < 1)){
		 return -1;
			}
 // --------------------------------------------------
		 Node *prev = head, *current;
		 int x = 1;
		 // create a node
		 // reserve a block in heap
		 current =(Node *)malloc(sizeof(Node));
		 if(current == NULL){
		 return 0;
		 }

		 while(x < node_number){
		 prev = prev->next;
		 x++;
		 }

		 // set data into a new node
		 current->element = element;
		 current->next = prev->next;

		 prev->next = current;

		 return 1;
 }


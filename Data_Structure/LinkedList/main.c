 /*
 * Name       :   Main.c 
 * Author     :   hadeer 
 * Version    :		_1_
 * created on :  13 Nov 2022
 *
 */

/*==================INCLUDES====================*/

#include "LinkedList.h"
/*======================================*/
/*======================================*/
/*======================================*/


int main(){
Node *ptr_head = NULL;
int len = 0, x = 0;

DATA_TYPE element = 0;
DATA_TYPE *ptr_element = &element;

//------------------------------------------------------------
ptr_head = Append(ptr_head, 'S');
Append(ptr_head, 'y');
Append(ptr_head, 's');
Append(ptr_head, 't');
Append(ptr_head, 'e');
Append(ptr_head, 'm');

// ------------------------------------------------------
len = Length(ptr_head);
for(x=1; x<= len; ++x){
Get_Element(ptr_head, x, ptr_element);  // y s t e m = 5
printf("\n 1- %d --> %c", x, *ptr_element);
}
printf("\n ---------");

// -----------------------------------------------------
ptr_head = Delete_First_Node(ptr_head);
len = Length(ptr_head);
for(x=1; x<= len; ++x){
Get_Element(ptr_head, x, ptr_element); // s t e m
printf("\n 2- %d --> %c", x, *ptr_element);
}
printf("\n ---------");
// ------------------------------------------------------
Delete_Node(ptr_head, 5); // s t e m
len = Length(ptr_head);
for(x=1; x<= len; ++x){
Get_Element(ptr_head, x, ptr_element); //
printf("\n 3- %d --> %c", x, *ptr_element);
}

printf("\n ---------");

// ------------------------------------------------------

ptr_head = Insert_Frist(ptr_head, 'A');
len = Length(ptr_head);
for(x=1; x<= len; ++x){
Get_Element(ptr_head, x, ptr_element);
printf("\n 4- %d --> %c", x, *ptr_element);
}

printf("\n ---------");

// --------------------------------------------------
Insert_After(ptr_head, 2, 'M');
len = Length(ptr_head);
for(x=1; x<= len; ++x){
Get_Element(ptr_head, x, ptr_element);
printf("\n 5- %d --> %c", x, *ptr_element);
}

printf("\n ---------");

// --------------------------------------------------

return 0;

}

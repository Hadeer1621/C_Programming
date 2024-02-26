 /*
 * Name       :   Main.c 
 * Author     :   hadeer 
 * Version    :
 * created on :   05 Nov 2022
 *
 */





#include<stdio.h>
#include "Array_interface.h"
#define max_size   100


u8  max = 5 ;
int main(){
	
	 u8 arr[10]= {3,5,6,7,4,8};
	 
	u8 arr_1[10]={3,10,5,6,3,2} ;
//----------------------------------------------
	  printf("=====Traverse=======\n");
	  Traverse(arr, max);
//----------------------------------------------
	  printf("========insert=========\n");
	  Insert(arr,1,4,&max);
	  Insert(arr,2,9,&max);
	  Traverse(arr,max);
//--------------------------------------------------
	  printf("=========Delete=====\n");
	   Delete(arr,2,&max);
	   Traverse(arr,max);
	  
//----------------------------------------------
	  printf("sort\n");
	  sort(arr,max);
	  Traverse(arr,max); 
// ----------------------------------------------
      printf("Reverse\n");
      Reverse (arr, max);
      Traverse(arr, max);	
// ----------------------------------------------
     printf("MAX_VALUE_IN_ARRAY\n");
     int max_value ;
     max_value = Get_max_repeat(arr_1,&max);
     printf("max_value = %d\n", max_value);
     printf("------------------------------\n");
// ----------------------------------------------
     printf("MIN & MAX ELEMENT OF ARRAY \n");
      Min_Max( arr ,&max) ;
     printf("------------------------------\n"); 

//----------------------------------------------
	  printf("========SEARCHING_1==========\n");
	  int search = Search(arr,4, max);
	  printf("%d\n" ,search);
	  printf("------------------------------\n"); 
//----------------------------------------------
	  printf("========SEARCHING_2==========\n");
     int element = 5;
     int found_index = iterativeBinarySearch(arr, 0, max - 1, element);
     if(found_index == -1 ) {
        printf("Element not found in the array = %d\n" ,element);
     }
     else {
        printf("Element found at index : %d \n element is = %d\n",found_index , element);
   }
        printf("------------------------------\n"); 
//----------------------------------------------  
	char  a[5]= {1,2,3,4,5},b[5] = {1,2,3,4,5};
	if(Compare(a,b,max)== 0){
		printf("Arrays have same elements.\n");
	}
	else{
		printf("Arrays have different elements.\n");
	}

//---------------------------------------------- 
    int Size=10 ;
    int num = 2;
    int arr4[max_size]={1,2,2,2,2,3,3,2,2,2};
	countElement(arr4, num,Size);
	
//---------------------------------------------- 
	  //Initialize array
    int arr5[] = {1, 2, 3, 4, 2, 7, 8, 8, 3,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("Duplicate elements in given array: \n");
    DuplicateUnsorted(arr5 , length);

//------------------------------------------------------------
 char str[50]; // size of char string
        printf (" Enter the string: ");
        gets(str); // use gets() function to take string
        
        ReverseString(str);
        printf (" After reversing the string: %s", str);

//------------------------------------------------------------
	



 
	return 0;
}
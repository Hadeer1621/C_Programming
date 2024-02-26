/*
 * Name       :   Array_interface.h  
 * Author     :   hadeer 
 * Version    :
 * created on :   05 Nov 2022
 *
 */
 
/***
 *         _                             ___       _             __                  _     
 *        / \   _ __ _ __ __ _ _   _    |_ _|_ __ | |_ ___ _ __ / _| __ _  ___ ___  | |__  
 *       / _ \ | '__| '__/ _` | | | |    | || '_ \| __/ _ | '__| |_ / _` |/ __/ _ \ | '_ \ 
 *      / ___ \| |  | | | (_| | |_| |    | || | | | ||  __| |  |  _| (_| | (_|  __/_| | | |
 *     /_/   \_|_|  |_|  \__,_|\__, ____|___|_| |_|\__\___|_|  |_|  \__,_|\___\___(_|_| |_|
 *                             |___|_____|                                                 
 */
 
 #ifndef ARRAY_H_
 #define ARRAY_H_
 
#include <stdio.h> 
#include <string.h>
  typedef unsigned char           u8     ;   
  typedef char*                   u8ptr  ;
  typedef float                   f32    ;
  typedef unsigned short int      u32    ; 
 
/*=======================_PROTOTYPES_OF_FUNCTIONS_===================================
  ===================================================================================*/ 
 
/*  1- print array */ 
      void Traverse(u8 arr[], char size); 
/*  2- insert element of array*/     
      u8 Insert(u8 arr[], char index,char data,u8ptr size);
/*  3-  delete element of array*/ 
      void Delete(u8 arr[], char index, u8ptr size);
/*  4- reverse of array*/
      void Reverse (u8 arr[], char size);
/*  5- sorting of array */
      void sort(u8 arr[],char size);
/*  6- delete dulicate of array delete sorting  */  
     void Delete_Dup(u8 arr[],u8ptr size); 
/*  7- search on element of array */ 
      u8  Search(u8 arr[], char data, char size);
      int iterativeBinarySearch(u8 array[], u8 start_index, u8 end_index, u8 element);
/*  8- repeat the element of array */ 
     u8 Get_max_repeat(u8 arr[] , u8ptr size) ;  
/*  9- averge of array  */
    f32 average (f32  arr[] , u8ptr size);
/* 10- min and max of element in array */	
     void Min_Max(u8 arr[] ,u8ptr size) ;
/* 11- updata of array */
 void Update(u8 arr[],char index, char data, char size);
/*  12- compare between arrays contain the same element or not */ 
 int Compare (char arr1[] ,char arr2[] ,char size);
/* 13- count the number of occurrences of a certain number in array*/
  int countElement(int arr[], int num, int size);
/* 14- repeated number in some unsorted array */
  void DuplicateUnsorted(int arr[] , int length); 
 /* 15- Reverse string */
  void ReverseString (char * str);
 
  #endif /* ARRAY_H_ */
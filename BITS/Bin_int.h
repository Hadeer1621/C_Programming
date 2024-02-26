/*
 * Name       :   Bit_int.h  
 * Author     :   hadeer 
 * Version    :
 * created on :   08 Sept 2022
 *
 */
 
 #ifndef  _BIN_INT_H_
 #define  _BIN_INT_H_


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Integer size in bits */
#define INT_SIZE     sizeof(int) * 8 


     /*Binary convert*/
       void Travsre (int arr[]);
       int ConvertToBin(int num , int arr[]);
       int convertBinaryToDecimal(int   bin_num);
      
     /*Bit zeros or ones*/
      int Get_Ones_Zeros(int n );
      int Get_max_Zeros (int n);
      
     /*BIT_MATH_functions*/
      void   Set_Bit   (int num , int bits);
      void   Get_Bit   (int num , int bits);
      void   Clear_Bit (int num , int bits);
      void   Toggle_Bit(int num , int bits);

	 /*Less significat bit */
      void  Get_LSB (int num);
     /* Most significat bit */
      void  Get_MSB (int num);
	  
     /*Frist position of ones*/
      void Get_FP_Ones(int num);
     /*Last position of ones*/
      void Get_LP_Ones(int num);
	  
	
    void PrintInBinary(unsigned n);
	
	unsigned int ReverseTheBits(unsigned int num);  

 #endif  /*BIN_INT_H*/ 
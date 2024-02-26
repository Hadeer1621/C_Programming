/*
 * Name       :   main.c "Bits API"  
 * Author     :   hadeer 
 * Version    :
 * created on :   08 Sept 2022
 *
 */
#include<stdio.h>
#include"Bin_int.h"

/*==================================================================*/
#define max_size   10

int main (){
	 /* int arr[10]= {3,4,5,6,7,8};
	 int num = 20;
	 int bin_num = 1010;
	  //-------------------------------
	  Travsre (arr) ;
	  //---------------------------------
      ConvertToBin( num ,arr) ;
	  //--------------------------------
      convertBinaryToDecimal(bin_num);
	  //--------------------------------
	  */
	 unsigned int data = 7 ;
     unsigned int Ret  = 0  ;
     printf("\n\nEntered Data is " );
     PrintInBinary(data);
     Ret = ReverseTheBits(data);
     printf("\nReverse Data is " );
     PrintInBinary(Ret);
	//---------------------------------

}   
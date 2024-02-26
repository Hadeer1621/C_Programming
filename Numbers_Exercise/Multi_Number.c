 /*
 * Name       :   Multi_Numbers
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
/* 3- Mulitple of two numbers with operator or without */
    int Mulitple (int num_1 , int num_2);
	int Mulitple_Without_Op (int num_1 , int num_2);

/*=======================================================*/
/*=======================================================*/


int main (){
	
int num_1 = 10 ; 
int num_2 = 5;


   int  result_muli = Mulitple (num_1 ,  num_2);
	 printf("Result of Multiple = %d\n" ,result_muli);
	 printf("---------------------------\n");



	 Mulitple_Without_Op ( num_1 , num_2)  ;
	 printf("---------------------------\n");	



}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
/*============================================================================================*/
/*==============================START_FUNCTION_======================================*/	
    int Mulitple (int num_1 , int num_2){
		  return (num_1 * num_2);
	}
/*==============================END_FUNCTION_======================================*/
 
 
/*==============================START_FUNCTION_======================================*/	
	
int Mulitple_Without_Op(int num_1 , int num_2){
	int product = 0 ;
	while(num_2>0)
	{
		product=product+num_1;
		num_2--;
	}
	printf("The product is :%d\n",product);
	return 0;
}	
/*==============================END_FUNCTION_======================================*/ 

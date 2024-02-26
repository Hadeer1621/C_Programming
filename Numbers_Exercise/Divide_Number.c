 /*
 * Name       :   Divide_Numbers
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
 /* 4- Divition of two numbers with operator or without */	
    int Divide(int num_1 , int num_2);
	int Divide_without_Op(int num_1 , int num_2) ;
/*=======================================================*/
/*=======================================================*/


int main (){
	
int num_1 = 10 ; 
int num_2 = 5;


 	int result_div = Divide(num_1 , num_2);
	 printf("Result of Division = %d\n" ,result_div);
     printf("---------------------------\n");
	
	
	 Divide_without_Op( num_1 , num_2);	



}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
/*============================================================================================*/
/*==============================START_FUNCTION_======================================*/	
	
    int Divide(int num_1 , int num_2){
		return (num_1 / num_2);
	}
/*==============================END_FUNCTION_======================================*/ 

/*==============================START_FUNCTION_======================================*/	
	int Divide_without_Op(int num_1 , int num_2) {
	  int Result_Divide = 0;//variable declaration
     // from the user - input from keyboard
 
     while(num_1>= num_2) {
            num_1=num_1- num_2;
     Result_Divide++;
     }
     printf("Division of resultis: %d\n",Result_Divide);
     return 0;	
		
	}	
/*==============================END_FUNCTION_======================================*/ 

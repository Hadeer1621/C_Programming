 /*
 * Name       :   Reminder_Numbers
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
/* 5- Reminder of two numbers with operator or without */	
	int Reminder (int num_1 , int num_2);
/*=======================================================*/
/*=======================================================*/


int main (){
	
int num_1 = 10 ; 
int num_2 = 3;


  	int  result_rem = Reminder ( num_1 , num_2);
	 printf("Result of Reminder = %d\n" ,result_rem);
     printf("---------------------------\n");	



}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/

	int Reminder (int num_1 , int num_2){
		return (num_1 % num_2);
	}

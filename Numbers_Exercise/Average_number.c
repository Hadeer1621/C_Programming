 /*
 * Name       :   Average_Numbers
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
/* 6- Average of two numbers with operator or without */	
	int Average (int num_1 , int num_2);
/*=======================================================*/
/*=======================================================*/


int main (){
	
int num_1 = 10 ; 
int num_2 = 5;


  	 int  result_avg = Average (num_1 ,  num_2);
	 printf("Result of average = %d\n" ,result_avg);
     printf("---------------------------\n");	



}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
	int Average (int num_1 , int num_2){
		int sum = 0;
		sum = num_1+num_2;
		return (sum/2);
	}

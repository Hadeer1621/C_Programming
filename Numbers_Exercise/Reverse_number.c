 /*
 * Name       :   Reverse_number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
 /*  Reverse of number  */	
	int Reverse (int num);
/*=======================================================*/
/*=======================================================*/


int main (){

int num = 25; 		
		Reverse( num);
	 printf("---------------------------\n");


}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
/*==============================START_FUNCTION_======================================*/	
	int Reverse (int num){ 
		int Reminder , Reverse =0;
		while (num != 0){
			Reminder = num % 10;
			Reverse = Reverse *10 + Reminder ;
			 num /= 10 ;
		}
		printf("Reverse_num = %d\n" , Reverse);
		
		return 0 ;
	}

	
/*==============================END_FUNCTION_======================================*/ 

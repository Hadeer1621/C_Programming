 /*
 * Name       :   Factorical_Number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
/* 8- factorial of number  */	
	int factorial (int num); 
/*=======================================================*/
/*=======================================================*/


int main (){
	
int fact = 6 ;


  	 factorial (fact);
	 printf("---------------------------\n");



}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
	int factorial (int num){
     int  fact = 1;
     // shows error if the user enters a negative integer
     if (num < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
     else {
        for (int i = 1; i <= num; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %d\n", num, fact);
    }
    return 0;
	}
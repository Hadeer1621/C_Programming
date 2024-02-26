 /*
 * Name       :   Max_Min_number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
  	 
 /* - max of number between two numbers */	
	int Max_Number(int num_1 ,int  num_2);
	
 /* - min of number between two numbers */	
	int Min_Number(int num_1 ,int  num_2);
/*=======================================================*/
/*=======================================================*/


int main (){
int num_1 = 10 ; 
int num_2 = 5;	
	
//---------------------------------------------------------	
	 Max_Number( num_1 , num_2);
	 printf("---------------------------\n");

//---------------------------------------------------------	
	 Min_Number( num_1 , num_2);
	 printf("---------------------------\n");


}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
 /*==============================START_FUNCTION_======================================*/
	int Max_Number(int num_1 ,int num_2){
	 /* int max ;
	 max = (num_1 > num_2) ? num_1 : num_2;
	 printf("Maximum between %d and %d = %d\n ", num_1, num_2, max);
      return 0;
	   */
	switch(num_1 > num_2)
    {   
        // If condition (num1>num2) is false 
        case 0: 
            printf("%d is maximum\n", num_2);
            break;

        // If condition (num_1>num_2) is true 
        case 1: 
            printf("%d is maximum \n", num_1);
            break;
    }
    return 0;  

	}
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/	
	int Min_Number(int num_1 , int num_2){
		/* int min ; 
		min = (num_1 < num_2)? num_1 : num_2 ;
		printf("Minimum between %d and %d = %d\n", num_1, num_2, min);
       return 0;
		*/
	 switch(num_1 < num_2)
     {   
         // If condition (num1< num2) is false 
         case 0: 
             printf("%d is minimum \n", num_2);
             break;
	 
         // If condition (num_1< num_2) is true 
         case 1: 
             printf("%d is minimum \n", num_1);
             break;
     }
     return 0; 	
	}

/*==============================END_FUNCTION_======================================*/ 

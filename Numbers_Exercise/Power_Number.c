 /*
 * Name       :   Power_number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
 /* 9- power  of number  */	
	int Power_number (int num , int power);
/*=======================================================*/
/*=======================================================*/


int main (){
	
	
int power = 3;
int num_pow = 2;
	
	  Power_number (num_pow ,power);
	 printf("---------------------------\n");


}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
 
/*==============================START_FUNCTION_======================================*/	
	
	int Power_number (int num , int power){
        int result = 1;   //define result Equal 1
       while (power != 0) //******To make Loop With While **********
       {
           result *= num;  // to make Pointer To Number 
           power--;
       }
    printf("Power_number = %d\n", result);
    return 0;
	}
	
/*==============================END_FUNCTION_======================================*/ 

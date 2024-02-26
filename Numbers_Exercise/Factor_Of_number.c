 /*
 * Name       :   Factor_of_number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
 /* 7- factors of number  */	
	int Factors_of_number(int num);
/*=======================================================*/
/*=======================================================*/


int main (){
	int num = 81; 
	
	 Factors_of_number( num);
	 printf("---------------------------\n");	

}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
 
/*==============================START_FUNCTION_======================================*/	
	
int Factors_of_number(int num){
	 int  i;  
    for(i=1; i <= num; ++i)
    {
        if (num%i == 0) //***** to Check Reminder of i 
        {
            printf("factors of number :%d\n",i);
        }
    }
    return 0;
}	
/*==============================END_FUNCTION_======================================*/ 

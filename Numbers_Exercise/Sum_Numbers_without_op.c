 /*
 * Name       :   Sum_Numbers_wthout_operatior
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
  /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
/* 1- sum of two numbers with operator*/
	int Sum_Without_OP(int num_1 , int num_2);
//=======================================================================================



int main (){
	
int num_1 = 10 ; 
int num_2 = 5;
//-----------------------------------------------------
		Sum_Without_OP( num_1 , num_2);
}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
/*============================================================================================*/
/*==============================START_FUNCTION_======================================*/
 	int Sum_Without_OP(int num_1 , int num_2){
	 while (num_1 > 0){
		num_2 ++;
		num_1 --;
	}
	printf(" result of sum without op = %d\n " ,num_2);	
	return 0;
	}
/*==============================END_FUNCTION_======================================*/ 

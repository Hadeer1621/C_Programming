 /*
 * Name       :   Squre Or Sqroot number 
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
	int squre (int num);
	
	int sqroot(int n);
	
/*=======================================================*/
/*=======================================================*/


int main (){
	
	
int Num_Squre  = 3;
int num_Sqroot = 25;
	
	  int result_Squre = squre (Num_Squre);
	  printf("result_Squre = %d\n" ,result_Squre);
	 
	int result_Sqroot =  sqroot(num_Sqroot);
		printf("result_Sqroot = %d\n",result_Sqroot);

}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
/*==============================START_FUNCTION_======================================*/


			int squre (int num){
			num*=num ;
			return num;
			}

/*==============================END_FUNCTION_======================================*/ 

/*==============================START_FUNCTION_======================================*/
		int sqroot(int n){
			int i = 1;
			while (i <= n/2)
			{
				if(i*i == n){
					return i;
					}
				else{
					i++;
				}
			}
		return 0;
		}

/*==============================END_FUNCTION_======================================*/ 
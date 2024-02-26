 /*
 * Name       :   Odd_Even_Number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
 /* 15- number is even or odd */
	int Odd_Even(int num);
/*=======================================================*/
/*=======================================================*/


int main (){
	
	int num = 10 ;
	
		Odd_Even(num);
	printf("---------------------------\n");

}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
 
/*==============================START_FUNCTION_======================================*/	
	
	int Odd_Even(int num){
		/* if(num & 1)
      {
          printf("%d :is odd\n", num);
      }
      else
      {
          printf("%d :is even\n", num);
      }
	  
      return 0;
	  */
	    (num%2 == 0)? printf("%d:The number is EVEN \n",num): printf(" %d :The number is ODD \n" ,num);
	  
       return 0;
	  
	}
 
/*==============================END_FUNCTION_======================================*/ 

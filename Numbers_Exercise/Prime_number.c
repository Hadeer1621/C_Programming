 /*
 * Name       :   Prime_number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
 /* 10- prime of number or not */
     int prime(int n);
	 int primebetween2num(int number1 , int number2);
/*=======================================================*/
/*=======================================================*/


int main (){
	
	int num_P = 7,result = 0, result_2 , number_1 = 1,  number_2 = 20;
	
			result = prime(num_P);
	if(result == 0) {
		printf("%d : the number is prime\n ",num_P);
		printf("---------------------------\n");
	}
	else {
		printf("%d : the number is not prime\n",num_P);
		printf("---------------------------\n");
	}

		result_2 = primebetween2num(number_1 , number_2);


}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
 
/*==============================START_FUNCTION_======================================*/	

   int prime(int n)
   {
   	int i;
   	for(i=2;i<=n/2;i++)    
   	{   
   		if(n%i!=0)
   		 continue;   
   		//return 0;
   		else
   			return 1;
   	}
   	return 0;
   }
 /*==============================END_FUNCTION_======================================*/ 
 
 
 /*==============================START_FUNCTION_======================================*/  
  
  int primebetween2num(int number1 , int number2){
   int i,j,flag;
   for(i=number1+1;i<number2;i++){// interval between two numbers
      flag=0;
      for(j=2;j<=i/2;++j){ //checking number is prime or not
         if(i%j==0){
            flag=1;
            break;
         }
      }
      if(flag==0)
         printf("%d \t",i);
   }

} 
/*==============================END_FUNCTION_======================================*/ 

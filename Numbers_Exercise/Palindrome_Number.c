 /*
 * Name       :   Palindrome_number
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
 
 /*===========================_INCLUDES_==============================================*/
  #include <stdio.h>
  #include<stdlib.h>
/*============================_PROTOTYPES_==========================================*/ 
/*  parlindrome of number or not */	
	int Palindrome (int num);// 12321
/*=======================================================*/
/*=======================================================*/


int main (){
	
	
	 int palindrome = 12321;
     int palindrome1 = 711326;	 
	 Palindrome( palindrome);
	 printf("---------------------------\n");
	 Palindrome( palindrome1);
	 printf("---------------------------\n");

}

/*==============================IMPLEMENTATION_FUNCTION_======================================*/
 
/*==============================START_FUNCTION_======================================*/	
	
	int Palindrome (int num){
     int temp , reminder,reverse_num = 0; 
     temp=num;
    	while (  temp!=0 )   
       { 
        reminder=temp%10; 
    	reverse_num=reverse_num*10+reminder; 
    	temp=temp/10;    
       }
      if(reverse_num==num)
      printf("%d : this is number is palindrome\n" ,num);
     else
    	printf("%d: this is number is not palindrome\n",num);
	}
	
/*==============================END_FUNCTION_======================================*/ 

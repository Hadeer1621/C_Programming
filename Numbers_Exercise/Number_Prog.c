 /*
 * Name       :   Number_API.c  
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
  /***
 *     _   _                 _              ______                      
 *    | \ | |               | |             | ___ \                     
 *    |  \| |_   _ _ __ ___ | |__   ___ _ __| |_/ _ __ ___   __ _   ___ 
 *    | . ` | | | | '_ ` _ \| '_ \ / _ | '__|  __| '__/ _ \ / _` | / __|
 *    | |\  | |_| | | | | | | |_) |  __| |  | |  | | | (_) | (_| || (__ 
 *    \_| \_/\__,_|_| |_| |_|_.__/ \___|_|  \_|  |_|  \___/ \__, (_\___|
 *                                     ______                __/ |      
 *                                    |______|              |___/       
 */

 #include "Number_Int.h"
 /*==============================IMPLEMENTATION_FUNCTION_======================================*/
/*============================================================================================*/
/*==============================START_FUNCTION_======================================*/

    int Sum (int num_1 , int num_2){
		return (num_1 + num_2) ;
	}
/*==============================END_FUNCTION_======================================*/ 
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
/*==============================START_FUNCTION_======================================*/
	
    int Sub (int num_1 , int num_2){
		return (num_1 - num_2) ;
	}
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/		
	int Sub_Without_Op(int num_1 , int num_2) {
      int sum;
     sum = num_1 + ~num_2 + 1;
     printf("Substract of two integers: %d\n",sum);
     
	 return 0;
		
	}
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/	
    int Mulitple (int num_1 , int num_2){
		  return (num_1 * num_2);
	}
//-------------------------------------------------------------------------------		
int Mulitple_Without_Op(int num_1 , int num_2){
	int product = 0 ;
	while(num_2>0)
	{
		product=product+num_1;
		num_2--;
	}
	printf("The product is :%d\n",product);
	return 0;
}	
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/	
	
    int Divide(int num_1 , int num_2){
		return (num_1 / num_2);
	}
//--------------------------------------------------------
	int Divide_without_Op(int num_1 , int num_2) {
	  int Result_Divide = 0;//variable declaration
     // from the user - input from keyboard
 
     while(num_1>= num_2) {
            num_1=num_1- num_2;
     Result_Divide++;
     }
     printf("Division of resultis: %d\n",Result_Divide);
     return 0;	
		
	}	
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/	
	int Reminder (int num_1 , int num_2){
		return (num_1 % num_2);
	}
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/
	int Average (int num_1 , int num_2){
		int sum = 0;
		sum = num_1+num_2;
		return (sum/2);
	}

/*==============================END_FUNCTION_======================================*/ 
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
/*==============================START_FUNCTION_======================================*/	
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
/*==============================END_FUNCTION_======================================*/ 
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
 /*======================================================================*/  
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
/*==============================START_FUNCTION_======================================*/

int nearest_10th(int num){
    
   if((num % 10) >= 5){ 
    return    num += (10 - (num % 10));
	
   }
   else{
     return    num -= (num % 10);
	
   }
   
}

/*==============================END_FUNCTION_======================================*/ 
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
/*==============================START_FUNCTION_======================================*/	
  int Number_Of_Digit (int num){
	 int count = 0;
	 // Till num becomes 0
     while(num != 0)
     {
        num /= 10;  // Extract the last digit of num
        count++;
     }

     // print the number of digits 
     printf("Number of digits = %d\n", count); 
	  
	 return 0; 
  }
  
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/	   

 /*==============================END_FUNCTION_======================================*/ 
 /*==============================START_FUNCTION_======================================*/	 
   
   int Sum_Frist_Last_Digit(int num){
	   int sum =0, firstDigit, lastDigit;    
      /* Find last digit to sum */
      lastDigit = num % 10;
     /* Copy num to first digit */
      firstDigit = num;
     /* Find the first digit by dividing num by 10 until first digit is left */
       while(num >= 10)
       {
           num = num / 10;
       }
       firstDigit = num;
      /* Find sum of first and last digit*/
      sum = firstDigit + lastDigit; 
	  
     printf("Sum of first and last digit = %d\n", sum);
    
	 return 0;
  
   }
   
 /*==============================END_FUNCTION_======================================*/ 
 /*==============================START_FUNCTION_======================================*/	  
      
     int Sum_Of_Digit (int num){
	 int sum=0,m;   
	 while(num>0) {   
		m=num%10; 
		sum=sum+m;  
		num=num/10;  
       }  
	 return sum ;
	 }
 /*==============================END_FUNCTION_======================================*/ 
 /*==============================START_FUNCTION_======================================*/		 
	 
 int Check_Number (int num){
	if(num > 0)
    {
        printf("%d : Number is POSITIVE \n" ,num);
    }
    if(num < 0)
    {
        printf("%d :Number is NEGATIVE \n" ,num);
    }
    if(num == 0)
    {
        printf(" %d :Number is ZERO \n" ,num);
    }

    return 0;
 }	 
 
  /*==============================END_FUNCTION_======================================*/ 
 /*==============================START_FUNCTION_======================================*/	
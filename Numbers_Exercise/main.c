 /*
 * Name       :   main.c "API"
 * Author     :   hadeer 
 * Version    :
 * created on :   09 Sept 2022
 *
 */
 
#include "Number_int.h" 

int main(){
	
//------------------------------------------------------------------------------------	
int num = 25; 
int fact = 6 ;
int num_1 = 10 ; 
int num_2 = 5;
int power = 3;
int num_pow = 2;
int num_of_digit = 6523;  
int result ,result_sum , result_sub , result_muli ,result_div , result_rem , result_avg; 
//-----------------------------------------------------
     result_sum = Sum( num_1 , num_2);
	 printf("Result of sum = %d\n" ,result_sum);
	 printf("---------------------------\n");
      //---------------------	 
	 Sum_Without_OP( num_1 , num_2);
     printf("---------------------------\n");
//=======================================================
     result_sub = Sub (num_1 ,num_2);
	 printf("Result of sub = %d\n" ,result_sub);
     printf("---------------------------\n"); 
     //----------------------------------------
	 Sub_Without_Op(num_1 ,num_2);	
     printf("---------------------------\n"); 	 
//=======================================================	 
     result_muli = Mulitple (num_1 ,  num_2);
	 printf("Result of Multiple = %d\n" ,result_muli);
	 printf("---------------------------\n");
	  //---------------------
	 Mulitple_Without_Op ( num_1 , num_2)  ;
	 printf("---------------------------\n");
//=======================================================   
	result_div = Divide(num_1 , num_2);
	 printf("Result of Division = %d\n" ,result_div);
     printf("---------------------------\n");
	   //------------------------
	 Divide_without_Op( num_1 , num_2);
	 printf("---------------------------\n");
//---------------------------------------------------------	 
	 result_rem = Reminder ( num_1 , num_2);
	 printf("Result of Reminder = %d\n" ,result_rem);
     printf("---------------------------\n");
//---------------------------------------------------------	

     result_avg = Average (num_1 ,  num_2);
	 printf("Result of average = %d\n" ,result_avg);
     printf("---------------------------\n");
//---------------------------------------------------------	
	 Factors_of_number( num);
	 printf("---------------------------\n");
//---------------------------------------------------------		 
	 factorial (fact);
	 printf("---------------------------\n");
//---------------------------------------------------------		 
	 Power_number (num_pow ,power);
	 printf("---------------------------\n");

//---------------------------------------------------------	
	int num_P = 7,res=0;
	res = prime(num_P);
	if(res == 0) {
		printf("%d : the number is prime\n ",num_P);
		printf("---------------------------\n");
	}
	else {
		printf("%d : the number is not prime\n",num_P);
		printf("---------------------------\n");
	}

// ========================================================	
//---------------------------------------------------------	
	 Max_Number( num_1 , num_2);
	 printf("---------------------------\n");

//---------------------------------------------------------	
	 Min_Number( num_1 , num_2);
	 printf("---------------------------\n");

//---------------------------------------------------------	
	 Reverse( num);
	 printf("---------------------------\n");

//---------------------------------------------------------	

	 int palindrome = 12321;
     int palindrome1 = 711326;	 
	 Palindrome( palindrome);
	 printf("---------------------------\n");
	 Palindrome( palindrome1);
	 printf("---------------------------\n");
//---------------------------------------------------------	
//---------------------------------------------------------	
	Odd_Even(num);
	printf("---------------------------\n");
//-----------------------------------------------------------
//===========================================================	
	  Number_Of_Digit (num_of_digit );      //6523 = 4
	  printf("---------------------------\n");
  
//---------------------------------------------------------
      int result_of_digit; 
      result_of_digit =  Sum_Of_Digit (num_of_digit ); //6523 = 16
      printf("result_of_digit is=%d\n",result_of_digit);  
	  printf("---------------------------\n");
	 
//---------------------------------------------------------		 
	  Sum_Frist_Last_Digit(num_of_digit );  //6523 = 9
	  printf("---------------------------\n");
//---------------------------------------------------------		 
//---------------------------------------------------------	
	 int num_pos = 123 ,num_neg = -50 ,num_zero = 0;
	   Check_Number (num_pos)  ;
	   Check_Number (num_neg)  ;
	   Check_Number (num_zero)  ;
	   printf("---------------------------\n");
 
 
 return 0;
 }
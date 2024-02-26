/*
 * Name       :   Bit_Program.c
 * Author     :   hadeer 
 * Version    :
 * created on :   08 Sept 2022
 *
 */
 
 
 
 #include "Bin_int.h"
 

#define CHAR_BITS  8  // size of character

#define INT_BITS  ( sizeof(int) * CHAR_BITS)

#define BITS     sizeof(int) * 8
/*==============================IMPLEMENTATION_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 
	
int ConvertToBin(int num , int arr[]){
   int i;
   for(i=0;num>0;i++)    
   {   
   arr[i]=num%2;    
   num=num/2;    
   }   

}
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 
  
  int convertBinaryToDecimal(int   bin_num){
	int  decimal_num = 0, base = 1, reminder; 	
		 while ( bin_num > 0)  
    {  
         reminder = bin_num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
	     decimal_num = decimal_num + reminder * base; 
         base = base * 2;  
		 //  bin_num = bin_num / 10; // divide the number 
		 bin_num = bin_num / 10 ;
		
    }  
	
	return decimal_num ;
  }
 
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/  

  int Get_Ones_Zeros(int num ){
	  int ones = 0 , zeros = 0;
	 while(num >0){
		  if(num &1){
			 ones++;
		     }
		  else{
			zeros++;
		    }
		   num = num >> 1;
	     }
	 printf("ones after = %d\n" , ones);
	 printf("zeros after = %d\n" ,zeros);
    }
	
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 	
  int Get_max_Zeros (int n){
	  	int count = 0;
	    int countFlag = 0;
	    int max = 0;

	 /* loop until number equals zero
	 * and in every loop delete 
	 * the rightmost bit: 
	 */
	 for( ; n > 0; n >>= 1 )
	 {
		// if the rightmost bit is one:
		if( n % 2 )
		{   // set maximum:
			if( count > max ) 
		     max = count;
		 
		 // restart count:
		 count = 0;
 		 // raise the count flag:
		 countFlag = 1;
		}
		// else if it's a zero and count flag
		// is raised, increment count:
		else if ( countFlag )
			count++;
	 }
    }
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/  
  void   Set_Bit   (int num , int bits){   
	   num |= 1<< bits ;
	   printf("Set = (%d ,%d)", num , bits);
     }
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/   
  void   Get_Bit   (int num , int bits){
	  int bitStatus ;
	 /* Right shift num, n times and perform bitwise AND with 1 */
     bitStatus = (num >> bits) & 1;
     printf("The %d bit is set to %d", bits, bitStatus);
     }
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 	 
  void   Clear_Bit (int num , int bits){
	     num &= ~(1 << bits);
	   printf("Clear = (%d ,%d)", num , bits);
  }
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 
  void   Toggle_Bit(int num , int bits){
	   num ^= 1<< bits ;
	  printf("Toggle (%d , %d )" , num , bits);
  }

/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 
  void  Get_LSB (int num){
	   if(num & 1)
        printf("LSB of %d is set (1).\n", num);
    else
        printf("LSB of %d is unset (0).\n", num);

  }


  void  Get_MSB (int num){
	  int msb ;
	  /* Move first bit of 1 to highest order */
     msb = 1 << (BITS - 1);
      /* Perform bitwise AND with msb and num */
      if(num & msb)
        printf("MSB of %d is set (1).\n", num);
      else
        printf("MSB of %d is unset (0).\n", num);

    }
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 

  void Get_FP_Ones(int num){
	  int  order, i;
	   /* Initially set the order to max size of integer */
       order = INT_SIZE - 1;
      /* Iterate through each bit of integer */
     for(i=0; i<INT_SIZE; i++){
	 /* If current bit is set */
        if((num>>i) & 1){
            order = i;
            /* Terminate the loop */
            break;
        }
     }
     printf("Lowest order set bit in %d is %d", num, order);
    }
/*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 	
	
  void Get_LP_Ones(int num){
	  int order = -1, i;
	  /* Iterate over each bit of integer */
     for(i=0; i<INT_SIZE; i++)
     {
        /* If current bit is set */
        if((num>>i) & 1)
            order = i;
     }
     if (order != -1)
        printf("the position of the last one in %d is bit number %d", num, order);
     else 
        printf("0 has no set bits.");
  }
 /*==============================END_FUNCTION_======================================*/ 
/*==============================START_FUNCTION_======================================*/ 


void PrintInBinary(unsigned n)
{
	short int iPos;
	
	for (iPos = (INT_BITS -1) ; iPos >= 0 ; iPos--)
	{
	  (n & (1 << iPos))? printf("1"): printf("0");	
	}
		
}

 //--------------------------------------------------
unsigned int ReverseTheBits(unsigned int num)
{
    unsigned int iLoop = 0;
    unsigned int tmp = 0;         //  Assign num to the tmp 
	int iNumberLopp = (INT_BITS - 1);     
  
    for(; iLoop < iNumberLopp; iLoop++)
    {
	      
      if((num & (1 << iLoop))) // check set bits of num
      {
      	tmp |= 1 << ((INT_BITS - 1) - iLoop); //putting the set bits of num in tmp
	  }    
    }
    
    return tmp;
}
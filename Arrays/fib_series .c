
/*
 *   c function to fib series to stroe in array 
 */
 #include <stdio.h>
 #include <stdlib.h>
 
 #define max_size    100
 
 int main(){
	 // 0 1 1 2 4 7 13 24 
	 
	    int fib[max_size];
        int i;
		int size ; 
		
     printf("Enter size of the array : ");
      scanf("%d", & size);
	  
        fib[0] = 0;
        fib[1] = 1;
		fib[2] = 1;
		
		 /*for  write the frist term to ready it  
	       - if :i = 3 begin term 3rd
		   - if i = 0 begin term 1
		   */
        for(i = 3; i < size; i++) {
             fib[i] = fib[i-1] + fib[i-2]+ fib[i-3];     
		// fib[i] = 0 + 1+1
		}
		
		// print the stroe of number in array 
		
        for (i = 0; i < size; i++){
                printf(" %d\t",fib[i]);
		}
	
	 
	 

	 return 0;
 }
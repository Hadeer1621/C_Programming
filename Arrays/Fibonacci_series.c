/*
 * c function to Fibonacci series without recursion
 */

#include <stdio.h>
#include<stdlib.h>

int main(){
	
	int n , i ;
	
	int num1 = 0 ;
    int num2 = 1 ;
    int num = num1 + num2;
	
	
	printf("enter the terms :");
	scanf("%d" ,&n);

    printf("%d , %d ," ,num1,num2);
	
    /*for  write the frist term to ready it  
	 - if :i = 3 begin term 3rd
	 - if i = 0 begin term 1 */
	for(i=3 ; i<n ;i++){
		printf("%d , " ,num); // new term 
		num1= num2;
		num2 = num;
		num = num2+ num1;
	}
	
	return 0;
}
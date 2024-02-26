

       /**********************SUM_OF_ARRAY****************************/
#include <stdio.h>
#include<stdlib.h>
#define MAX_SIZE    100

int main(){
	int arr[MAX_SIZE];
	int i , n , sum = 0;
	
	printf("enter the size of  array :");
	scanf("%d" , &n);
	
	printf("enter the element of array = %d " , n);
	for (i = 0 ; i< n ; i++){
		scanf("%d" , & arr[i]);	
	}
	// sum of array 
	for (i=0; i<n ; i++){
		sum += arr[i] ;
	}
	printf(" sum = %d" , sum);
	
	
	
	return 0;
}
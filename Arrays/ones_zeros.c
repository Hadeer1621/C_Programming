


#include <stdio.h>
#include <math.h>

int count (int n ) ;

 
int main(){
	 int n = 9;
	 count(n);
	 
	
return 0;	
}


int count (int n ){
	 int ones = 0 , zeros = 0;
	 
	 while(n>0){
		 if(n&1){
			 ones++;
		 }
		 else{
			zeros++;
		 }
		   n = n >> 1;
		   
	 }
	      printf("ones after = %d\n" , ones);
	      printf("zeros after = %d\n" ,zeros);

 }
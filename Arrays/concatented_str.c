


#include <stdio.h>
#include <stdlib.h>


#define max_size 100




int main()
{
    // using array
    char str1[max_size] , str2[max_size] ;
    int i , j;
printf("Enter first string: ");
    gets(str1);
  printf("Enter second string: ");
    gets(str2);

    i= 0;
    while(str1[i] != '\0'){
        i++;
    }
    j=0;
    while(str2[j] != '\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i] != '\0';

    printf("string = %s",str1);
    return 0;
}


/*=================================================================================================================*/
 /*  int main(){
		// using pointer
		char str1[max_size] , str2[max_size] ;
		char *s1 = str1 ;
		char *s2 = str2;

		printf("Enter first string: ");
		gets(str1);
		printf("Enter second string: ");
		gets(str2);

		while (*(++s1));
		while(*(s1++)= *(s2++));
		 printf("string = %s",str1);


		return 0;
		}
*/

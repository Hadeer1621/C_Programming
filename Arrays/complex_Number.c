


#include <stdio.h>
#include <stdlib.h>




typedef struct complex {
    float real;
    float imag;
} complex;





complex add(complex n1, complex n2);
complex sub(complex n1, complex n2);
complex mul(complex n1, complex n2);
complex divcom(complex n1, complex n2);
void PrintComplex(complex Pri);





int main() {
	
    complex n1, n2,result;
    unsigned char selec;

    printf("For 1st complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("\nFor 2nd complex number \n");
    printf("Enter the real and imaginary parts: ");
    scanf("%f %f", &n2.real, &n2.imag);
    printf("1-Add\n2-Sub\n3-Mul\n4-Div\n");
    scanf("%d",&selec);

    switch(selec)
    {
    case 1:
        result=add(n1,n2);
       PrintComplex(result);

        break;
    case 2:
        result=sub(n1,n2);
       PrintComplex(result);

        break;
    case 3:
        result=mul(n1,n2);
       PrintComplex(result);

        break;
    case 4:
        result=divcom(n1,n2);
        PrintComplex(result);

        break;
    }
    return 0;
}


complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

complex sub(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real - n2.real;
    temp.imag = n1.imag - n2.imag;
    return (temp);
}

complex mul(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real * n2.real - n1.imag * n2.imag ;  /*x+yi * a+bi =  (x*y-y*b)+(x*b+y*a)i*/
    temp.imag = n1.real * n2.imag + n2.real * n1.imag ;
    return (temp);
}

complex divcom(complex n1, complex n2)
 {
       complex temp;
       float x,y,z;
        if (n2.real == 0 && n2.imag == 0)
        {
        printf("Division by 0 + 0i isn't allowed.");
		}
        else   /*n1 = x+yi & n2 =a+bi */
        {
        x = n1.real * n2.real + n1.imag * n2.imag;  /*x = x*a + y*b */
        y = n1.imag * n2.real - n1.real * n2.imag;  /*y = y*a - x*b */
        z = n2.real * n2.real + n2.imag * n2.imag;  /*z = a*a + b*b */
        temp.real = x/z ;
        temp.imag = y/z ;
        return (temp);
      }
}

void PrintComplex(complex Pri)
{
      if (Pri.imag >= 0)
		  {
            printf("The result = %.1f + %.1fi\n",Pri.real, Pri.imag);
		  }
          else
		  {
            printf("The result = %.1f   %.1fi\n",Pri.real, Pri.imag);
		  }
}

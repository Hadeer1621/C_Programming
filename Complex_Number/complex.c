#include <stdio.h>
#include <assert.h>
#include "complex.h"

/* Creation */
COMPLEX CreateComplex(double real, double imaginary){
    //Add your code here
   COMPLEX temp ;
   temp.real = real;
   temp.imaginary = imaginary;

   return temp;
   // End of your code
}

/* Destruction */
void DestroyComplex(CPTR complex){
//Add your code here
    complex->real = 0;
    complex->imaginary = 0;
// End of your code

}

/* Addition */
COMPLEX AddComplex(CPTR first, CPTR second){
//Add your code here

// (a+c)+(b+d)i

COMPLEX Result_Add;

    Result_Add.real = first->real + second->real;

    Result_Add.imaginary = first->imaginary + second->imaginary;

    return Result_Add;
// End of your code
}

/* Subtraction */
COMPLEX SubtractComplex(CPTR first, CPTR second){
//Add your code here

// (a - c )+(b- d)i
  COMPLEX Result_Sub;
    Result_Sub.real = first->real - second->real;
    Result_Sub.imaginary = first->imaginary - second->imaginary;

    return Result_Sub;
// End of your code

}

/* Multiplication */
COMPLEX MultiplyComplex(CPTR first, CPTR second){
//Add your code here

// (a*c - b*d)  + (b*c + a*d)i

 COMPLEX Result_Multpule;

    Result_Multpule.real  = ((first->real * second->real)-(first->imaginary * second->imaginary));
    Result_Multpule.imaginary = ((first->imaginary * second->real) + (first->real * second->imaginary));

    return Result_Multpule;
// End of your code
}


/* Conjugate */
COMPLEX ConjugateComplex(CPTR complex){
//Add your code here   // a-bi
COMPLEX Result_Conj ;
	Result_Conj.real = complex -> real ;
	Result_Conj.imaginary =complex->imaginary * -1 ;
   return Result_Conj ;
// End of your code
}


/* Division */
COMPLEX DivideComplex(CPTR first, CPTR second){
//Add your code here
 // (a*c + b*d / c*c + d*d) + (b*c - a*d / c*c + d*d)

   COMPLEX Result_Div;
       float num_1,num_2,Denom;
        if (second->real == 0 && second->imaginary == 0)
        {
        printf("Division  not allowed.");
		}
        else
        {
        num_1 = first->real * second->real + first ->imaginary  * second->imaginary;    // num_1 = ac + bd
        num_2= first ->imaginary  * second->real - first->real * second->imaginary;    // num_2 =bc - ad
        Denom = second->real * second->real + second->imaginary * second->imaginary;  //Denom = c*c + d*d
        Result_Div.real = num_1/Denom ;
        Result_Div.imaginary = num_2/Denom ;
        return Result_Div;
      }
// End of your code
}


/* Printing */
void PrintComplex(CPTR complex)
{
    printf("\n %.1f + %.1f i \n", complex->real, complex->imaginary);
}


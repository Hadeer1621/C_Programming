#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

struct complex{
  double real;
  double imaginary;
};

typedef struct complex COMPLEX, * CPTR;

COMPLEX CreateComplex(double real, double imaginary);
void DestroyComplex(CPTR complex);
COMPLEX AddComplex(CPTR first, CPTR second);
COMPLEX SubtractComplex(CPTR first, CPTR second);
COMPLEX MultiplyComplex(CPTR first, CPTR second);
COMPLEX ConjugateComplex(CPTR complex);
COMPLEX DivideComplex(CPTR first, CPTR second);
void PrintComplex(CPTR complex);


#endif // COMPLEX_H_INCLUDED

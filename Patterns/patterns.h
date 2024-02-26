/*
	*  @file    : patterns.h
	*  @author  : Hadeer Azab
	*  @version : 1.0.0
	*  @data    : 15 mar 2023
	*  @brief   : Design  some of patterns using C programming languange
    *
 */


#ifndef PATTERNS_H_INCLUDED
#define PATTERNS_H_INCLUDED

//==================HEADER_FILE_=================================================//
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//_______________________________________________________________________________//

//==================DECLARATION_OF_FUNCTIONS_===================================//

//=======================SolidRectangle=====================================//
//					* * * * *
//					* * * * *
//					* * * * *

void SolidRectangle(unsigned int Rows, unsigned int Colums);

//========================HollowRectangle===============================//
//					*  *  *  *  *
//					*           *
//                  *           *
//					*  *  *  *  *
void HollowRectangle(unsigned int Rows, unsigned int Colums);

//=============== Half_Triangle_Stars_Pattern_=========================================//
//					*
//					**
//					***
//					****
//					*****

void HalfTriangleStar (unsigned int Rows);

//===============Inverse_Half_Triangle_Stars_Pattern_=========================================//
//					****
//					***
//					**
//					*

void InvHalfTriangleStar(unsigned int Rows);
//===============Half_Triangle_Numbers_Pattern_=========================================//
//					1
//					12
//					123
//					1234
//					12345

void HalfTriangleNumbers (unsigned int Rows);
//===============Inverse_Half_Triangle_Numbers_Pattern_=========================================//
//				 12345
//				 1234
//				 123
//				 12
//				 1

void InvHalfTriangleNumbers (unsigned int Rows);


//===============Half_Triangle_Characters_Pattern=========================================//
//               A
//               B  B
//               C  C  C
//               D  D  D  D


void HalfTriangleChar2(unsigned char input);

//
//				 A
//				 AB
//				 ABC
//				 ABCD
//				 ABCDE
//				 ABCDEF

void HalfTriangleChar(unsigned char input);

//===============Full_Triangle_Stars_Pattern_=========================================//
//					*
//				   ***
//				  *****
//				 *******
//				*********

void FullTriangleStar(unsigned int Rows);
//===============Inverse_Full_Triangle_Stars_Pattern_=========================================//
//				 *********
//				  *******
//				   *****
//					***
//					 *


void InvFullTriangleStar(unsigned int Rows);

//===============Full_Triangle_Numbers_Pattern_=========================================//
//					     1
//					   2 3 2
//					 3 4 5 4 3
//				   4 5 6 7 6 5 4
//				 5 6 7 8 9 8 7 6 5

void FullTriangleNumbers(unsigned int Rows);

//   			          1
//   			       1   1
//   			     1   2   1
//   			    1   3   3   1
//   			 1   4   6   4   1
//

void FullTriangleNum2(unsigned int Rows);

//=================Flayd's_Triangle_Numbers_Pattern_=========================================//
//					1
//					2 3
//					4 5 6
//					7 8 9 10
//					11 12 13 14 15


void FlaydrTriangleNumbers(unsigned int Rows);

// =========================Palindrome_Triangle_pattern_=====================================//
// 						 1
// 						 1 2 1
// 						 1 2 3 2 1
// 						 1 2 3 4 3 2 1
// 						 1 2 3 4 5 4 3 2 1
// 						 
void palindrometriangle(unsigned int Rows) ;


// =========================Hollow_Triangle_Numbers_pattern_=====================================//
//						  1
//						  1  2
//						  1    3
//						  1      4
//						  1  2  3  4  5

void HollowTriangleNumbers(unsigned int Rows);

//================END_DECLARATION_FUNCTIONS_==============================//

#endif // PATTERNS_H_INCLUDED

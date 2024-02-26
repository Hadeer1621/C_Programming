
 /*
	*  @file    : main.c
	*  @author  : Hadeer Azab
	*  @version : 1.0.2
	*  @data    : 15 mar 2023
	*  @brief   : Design  some of patterns using C programming languange
    *
 */

//==========================Includes============================//
    #include "patterns.h"
//================================================================//


int main()
{
    unsigned int Rows, Colums ;
    unsigned char alphabt ;

    printf("Enter the alphabt of the characters: \n");
    scanf("%c",&alphabt);

    printf("Enter the Rows and Colums of Rectangle: \n");
    scanf(" %d %d", &Rows,&Colums);

	printf("====================================\n");
    SolidRectangle(Rows,Colums);
    printf("====================================\n");
    HalfTriangleChar(alphabt);
    printf("====================================\n");
    HalfTriangleChar2(alphabt);
    printf("====================================\n");
    HalfTriangleNumbers(Rows);
    printf("====================================\n");
    FlaydTriangleNumbers(Rows);
    printf("====================================\n");
    InvHalfTriangleNumbers(Rows);
    printf("====================================\n");
    HollowRectangle(Rows , Colums);



    return 0;
}




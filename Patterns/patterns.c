/*
	*  @file    : patterns.c
	*  @author  : Hadeer zab
	*  @version : 1.0.2
	*  @data    : 15 mar 2023
	*  @brief   : Design  some of patterns using C programming languange
    *
 */

//========================_INCLUDES_FILES_=================================//
#include "patterns.h"
//=========================================================================//

//================================Start_functions_=======================//

void SolidRectangle(unsigned int Rows, unsigned int Colums)
{
    unsigned int i, j ;
    for ( i= 1; i<= Colums; i++)
    {
        for(j=1 ; j<= Rows ; j++)
        {
            printf("* ");

        }
        printf("\n");


    }
}

//=========================End_Functions_================================//
//================================Start_functions_=======================//

void HollowRectangle(unsigned int Rows, unsigned int Colums)
{
    unsigned int i, j ;
    for ( i= 1; i<= Colums; i++)
    {
        for(j=1 ; j<= Rows ; j++)
        {

            if (i==1 || i== Colums || j==1 || j== Rows)
            {

                printf("*");

            }


            else
            {
                printf(" ");
            }

        }

        printf("\n");

    }

}
//=========================End_Functions_================================//
//================================Start_functions_=======================//

void HalfTriangleStar (unsigned int Rows)
{
    unsigned int   i, j ;

    for( i= 1 ; i <= Rows ; i++)
    {
        for( j = 1 ; j<= i ; j++)
        {
            printf(" *");
        }

        printf(" \n");
    }

}

//=========================End_Functions_================================//
//================================Start_functions_=======================//


void InvHalfTriangleStar(unsigned int Rows)
{
    unsigned int   i, j ;

    for( i= 1 ; i <= Rows ; i++)
    {
        for( j = Rows -i ; j>= 1; --j)
        {
            printf(" *");
        }

        printf(" \n");
    }
}

//=========================End_Functions_================================//
//================================Start_functions_=======================//

void HalfTriangleNumbers (unsigned int Rows)
{
    unsigned int   i, j ;

    for( i=Rows; i >= 1 ; --i)
    {
        for( j = 1 ; j<= Rows-i+1 ; j++)
        {
            printf("  %d",j);
        }

        printf(" \n");
    }

    // ==================================================
    // unsigned int   i , j ;

    // for( i=1; i <=Rows ; ++i)
    // {
    // for( j = 1 ; j<= i ; j++)
    // {
    // printf("%d",j);
    // }

    // printf(" \n");
    // }

}

//=========================End_Functions_================================//
//================================Start_functions_=======================//

void InvHalfTriangleNumbers (unsigned int Rows)
{
    unsigned int   i, j ;

    for( i=1; i <=Rows ; ++i)
    {
        for( j = 1 ; j<= Rows-i+1; j++)
        {
            printf("  %d",j);
        }

        printf(" \n");
    }
}



//=========================End_Functions_================================//
//================================Start_functions_=======================//

void HalfTriangleChar2(unsigned char input)
{
    unsigned int   i, j ;
    unsigned char alphapt = 'A';

    for (i = 1; i <= (input -'A' +1) ; i++)
    {
        for(j = 1; j<= i ; j++)
        {
            printf("  %c",alphapt);
        }
        alphapt ++ ;
        printf(" \n");
    }

}

//=========================End_Functions_================================//
//================================Start_functions_=======================//

void HalfTriangleChar(unsigned char input)
{
    unsigned int   i, j ;

    for( i=1; i <=(input -'A'+1); ++i)
    {
        for( j = 1 ; j<= i ; j++)
        {
            printf("  %c",('A' + j-1));

        }

        printf(" \n");
    }
}

//=========================End_Functions_================================//
//=========================Start_functions_==============================//

void FullTriangleStar(unsigned int Rows)
{
    unsigned int i, j, space, star = 0 ;

    for( i =1; i<= Rows; i++)
    {
        for(space = 1; space <= Rows-i; space++)
        {
            printf("  ");
        }
        while (star != 2*i-1)
        {
            printf("* ");
            star++;
        }
        star = 0;
        printf("\n");
    }


}

//=========================End_Functions_================================//
//========================Start_functions_==============================//
void InvFullTriangleStar(unsigned int Rows)
{
    unsigned int i, j, space, star = 0 ;
    for(i = Rows ; i>= 1 ; --i )
    {
        for(space = 0; space <= Rows-i; space++)
        {
            printf("  ");
        }
        while (star != 2*i-1)
        {
            printf("* ");
            star++;
        }
        star = 0;
        printf("\n");

    }
//================anthor_way_=================================//
    // for (i = Rows; i >= 1; --i) {
    // for (space = 0; space < Rows - i; ++space)
    // printf("  ");
    // for (j = i; j <= 2 * i - 1; ++j)
    // printf("* ");
    // for (j = 0; j < i - 1; ++j)
    // printf("* ");
    // printf("\n");
    // }

}

//=========================End_Functions_================================//
//========================Start_functions_==============================//

void FullTriangleNumbers(unsigned int Rows)
{
    unsigned int i, space, count = 0, count_1 = 0, number = 0 ;

    for (i = 1; i <= Rows; ++i)
    {
        for (space = 1; space <= Rows - i; ++space)
        {
            printf("  ");
            ++count;
        }
        while (number != 2 * i - 1)
        {
            if (count <= Rows - 1)
            {
                printf("%d ", i + number);
                ++count;
            }
            else
            {
                ++count_1;
                printf("%d ", (i + number - 2 * count_1));
            }
            ++number;
        }
        count_1 = count = number= 0;
        printf("\n");
    }

}

//=========================End_Functions_================================//
//=========================Start_functions_=============================//


void FullTriangleNum2(unsigned int Rows)
{
    unsigned int i, j,  space, coef = 1 ;

    for (i = 0; i < Rows; i++)
    {
        for (space = 1; space <= Rows - i; space++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            printf("%4d", coef);
        }
        printf("\n");
    }
}

//=========================End_Functions_================================//
//========================Start_functions_===============================//

void FlaydTriangleNumbers(unsigned int Rows)
{
    unsigned int i, j, number = 0 ;

    for (i = 1; i <= Rows; ++i)
    {
        for (j = 1; j <=  i; ++j)
        {
            ++number;
            printf(" %d",number);
        }

        printf("\n");
    }
}
//=========================End_Functions_================================//
//========================Start_functions_===============================//

void palindrometriangle(unsigned int Rows)
{
	unsigned int i, j ,k; 
	
	for(i= 1; i<= Rows ; i++)
	{
		for(j=1; j<= i ; j++)
		{
			  printf(" %i",j);
		}
		for(k= i-1 ; k >= 1 ; -- k)
			{
				printf(" %i" , k) ;
			}
		printf(" \n");
	}
}

//=========================End_Functions_================================//
//========================Start_functions_===============================//
void HollowTriangleNumbers(unsigned int Rows)
{
	unsigned int i, j; 
	
	for(i= 1; i<= Rows ; i++)
	{
		for(j=1; j<= i ; j++)
		{
			if(i==1 || i== Rows || j==1 || j==i)
			{
				printf("  %i",j);
			}
			else
			{
				printf("  ");
			}
		}
			  
		printf(" \n");
	}
}
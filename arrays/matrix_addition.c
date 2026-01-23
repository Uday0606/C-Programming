#include<stdio.h>
#define  ROWS 3
#define  COLS 4

void matrix_addition(int A[ROWS][COLS],
                int B[ROWS][COLS],
                int R[ROWS][COLS])
{
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            R[i][j]=A[i][j]+B[i][j];
        }
    }
}
int main()
{
    int A[ROWS][COLS]=
    {
        {2,2,2,2},
        {3,3,3,3},
        {1,1,1,1}
    };
    int B[ROWS][COLS]=
    {
        {2,2,2,2},
        {3,3,3,3},
        {1,1,1,1}
    };

    int R[ROWS][COLS];
    matrix_addition(A,B,R);

    //print the matrix
    for(int i=0;i<ROWS;i++)
    {
        for(int j=0;j<COLS;j++)
        {
            printf("%d ",R[i][j]);
        }
       printf("\n");
    }
    return 0;
}
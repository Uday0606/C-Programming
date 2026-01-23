#include<stdio.h>

#define R 3
#define C 4
void matrix_transpose(int A[R][C],int T[C][R]);
int main()
{
    int A[R][C]=
    {
        {1,2,3,4},
        {7,8,9,6},
        {5,3,2,1}
    };

    int T[C][R];
    matrix_transpose(A,T);
     
    //print the matrix
    for(int i=0;i<C;i++)//columns of T
    {
        for(int j=0;j<R;j++)//rows of T
        {
            printf("%d ",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void matrix_transpose(int A[R][C],int T[C][R])
{
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            T[j][i]=A[i][j];
        }
    }
}
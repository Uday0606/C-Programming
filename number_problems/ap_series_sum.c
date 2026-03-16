/*
Problem: Find Sum of Arithmetic Progression (AP) Series

Description:
An Arithmetic Progression (AP) is a sequence where the difference between
consecutive terms is constant.

Example:
AP: 2, 5, 8, 11, 14

This program calculates the sum of AP series using two methods:
1) Using a loop
2) Using the AP formula  S = n/2 × (2a + (n−1)d)

*/

#include <stdio.h>

 /* - Using Loop - */
 int main()
{
    int a,d,n,sum=0;
    printf("Enter first term,difference,number of terms:\n");
    scanf("%d %d %d",&a,&d,&n);

    int term=a;
    for(int i=1;i<=n;i++)
    {
        sum+=term; //add current term to sum
        term+=d;   // generate next term
    }
    printf("sum of AP series:%d\n",sum);
    return 0;
}

/* - Method 2: Using Formula -*/
/*int main()
{
    int a,d,n,sum;
    printf("Enter first term,differnce,no.of terms:\n");
    scanf("%d %d %d",&a,&d,&n);

    sum=n*(2*a+(n-1)*d)/2;
    printf("sum of AP series:%d\n",sum);

    return 0;
}*/


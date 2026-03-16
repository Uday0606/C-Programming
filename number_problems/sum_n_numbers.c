/*Problem: Find Sum of First N Natural Numbers

Example:Input: 5
        Output: 15
 1 + 2 + 3 + 4 + 5 = 15
1) Using a loop
2) Using the formula: n(n+1)/2
*/
#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter a number\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
        sum+=i;

    printf("Sum of numbers:%d\n",sum);
    return 0;
}

/* Using Formula*/

/*int main()
{
    int n,sum=0;
    printf("Enter the no.of terms\n");
    scanf("%d",&n);

    sum=n*(n+1)/2;
    printf("%d",sum);
    return 0;
}
*/

/* Given a range of numbers, find all the palindrome numbers in the range..*/

  #include<stdio.h>
  int check_palindrome(int num);
  int main()
  {
    int min,max;
    printf("Enter two postive numbers (min max):\n");
    scanf("%d %d",&min,&max);
    
    printf("Palindromes between %d and %d are: ",min,max);
    for(int i=min;i<=max;i++)
    {
        if(check_palindrome(i))
            printf("%d ",i);
    }

    return 0;
  }

  int check_palindrome(int num)
  {
    int temp=num,reverse=0;

    while(temp)
    {
        int digit=temp%10;
        reverse=reverse*10+digit;
        temp/=10;
    }
   return reverse==num;
  }
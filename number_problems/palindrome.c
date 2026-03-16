/*Problem: Check Palindrome Number

A palindrome number is a number that remains the same when its digits
are reversed.

Examples:
121, 1331, 4554*/

  #include<stdio.h>
  int check_palindrome(int num);
  int main()
  {
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    
    if(num<0)
    num=-num; //make positive
    
    if(check_palindrome(num))
      printf("It is a palindrome:%d\n",num);
    else
      printf("It is not a palindrome:%d\n",num);
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
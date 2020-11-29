#include <stdio.h>
int ispalindrome(int n)
{
    int temp=n;
    int rev,remainder;
    while(n!=0)
    {
    remainder=n%10;
    rev=rev*10+remainder;
    n=n/10;
    }
    //printf("%d",rev);
    if(temp==rev)
        return 1;
    else
        return 0;

}
int main()
{
    int num;
    printf("Enter the number \n");
    scanf("%d",&num);
    if(ispalindrome(num))
        printf("Palindrome number");
    else
        printf("Not a palindrome");
    return 0;
}

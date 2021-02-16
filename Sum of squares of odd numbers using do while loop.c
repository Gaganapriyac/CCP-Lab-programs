#include <stdio.h>
int main()
{
    int a, i=0, sum=0;
    printf("Enter the value upto which sum of squares of odd number has to be printed\n");
    scanf("%d", &a);
    do //while(i<=a)
    {
        if(i%2!=0)
        {
            sum=sum+(i*i);
        }
        i++;
    }
    while(i<=a);
    printf("The sum of squares of odd numbers upto %d is : %d", a,sum);
    return 0;
}

#include <stdio.h>
#include<conio.h>
int main()
{
    float C,F;
    printf("Enter the temperature in farhenheit\n");
    scanf("%f", &F);
    c=(F-32)*5/9;
    printf("The temperature in degree Celsius is %f",C);
    getch();
    return 0;
}

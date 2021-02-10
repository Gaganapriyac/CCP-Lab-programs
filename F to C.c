#include <stdio.h>
#include<conio.h>
int main(){
    float c,f;
    printf("Enter the degree in farhenheit");
    scanf("%f", &f);
    c=(f-32)*(5/9);
    printf("%f degrees farhenheit when converted into celsius is = %f degrees centigrade", f,c);
    getch();
    return 0;
}

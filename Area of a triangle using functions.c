#include<stdio.h>      

#include<conio.h>

#include<math.h>

float area(float b,float h )

{

 float a;

  a=(b*h)/2;

  return a;

}

 int main()

{ float b,h,ar;

  clrscr();

  printf("Enter the values of base and height");

  scanf("%f %f",&b,&h);

  ar=area(b,h);

  printf("The area of a triangle is %f",ar);

  getch();

  return 0;

}

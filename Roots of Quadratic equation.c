include<stdio.h>

#include<math.h>

int main()

{ float a,b,c,root1,root2,

    discriminant,realnum,imgnum;

printf("\n Enter coefficients of a,b,c\n");

scanf("%f %f %f",&a,&b,&c);

discriminant=(b*b)-(4*a*c);

if(discriminant>0)

{ root1=(-b+sqrt(discriminant))/(2*a);

  root1=(-b-sqrt(discriminant))/(2*a);

}

else if(discriminant==0)

{ root1=root2=-b/(2*a);

  printf("root1=root2=%f",root1);

}

else

{realnum=(-b/(2*a));

imgnum=sqrt(-discriminant)/(2*a);

printf("root1=%f+%fi and root2=%f-%fi",realnum,imgnum);

}

return 0;

}              

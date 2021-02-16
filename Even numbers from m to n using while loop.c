#include <stdio.h>
int main()
{
 int m,n;
 printf("Enter the starting number:\n");
 scanf("%d",&m);
 printf("Enter the ending number:\n");
 scanf("%d",&n);   
 while(m<=n)     
  { 
    if(m%2==0)       
        printf("\n %d");  
    m++;
  }    
 return 0;
}            

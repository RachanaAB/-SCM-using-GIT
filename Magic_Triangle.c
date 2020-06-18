#include <stdio.h>


int main()
{
    int i,j,n=5;

 //Half pyramid
 printf("The Half Pyramid\n");
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=i;j++)
     {
         printf("* ");
     }
     printf("\n");
 }
 printf("\n");
 //Inverted half pyramid
 printf("The Inverted Half Pyramid\n");
 for(i=1;i<=n;i++)
 {
     for(j=i;j<=n;j++)
     {
         printf("* ");
     }
     printf("\n");
 }

 //Full pyramid
 printf("\n");
 printf("The Full Pyramid\n");
 for(i=1;i<=n;i++)
 {
     for(j=n-i;j>=1;j--)
     {
         printf(" ");
     }
        for(j=1;j<=i;j++)
     {
        printf("*");
     }
     for(j=1;j<i;j++)
     {
         printf("*");
     }
     printf("\n");
 }


    return 0;
}

#include<stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("*");
        }
        for(int l=1;l<=4-i;l++)
        {
            printf("*");
        }
          printf("\n");
    }
      return 0;
}
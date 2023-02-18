#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<=12;i++)
    {
        for(j=0;j<=19;j++)
        {
            if((j>=2-i&&j<=6+i)||(j>=13-i&&j<=17+i)&&(j>=i-3&&j<=21-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
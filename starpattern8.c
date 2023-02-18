#include <stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                if((i==3&&j==3)||(i==3&&j==5)||(i==4&&j==2)||(i==4&&j==6)||(i==2&&j==4))
                {
                    printf("2");
                }
                else if((i==3&&j==4)||(i==4&&j==3)||(i==4&&j==5))
                {
                    printf("3");
                }
                else if(i==4&&j==4)
                {
                    printf("4");
                }
                else if((i==1&&j==4)||(i==2&&j==3)||(i==2&&j==5)||(i==3&&j==2)||(i==3&&j==6)||(i==4&&j==1)||(i==4&&j==7))
                {
                    printf("1");
                }
                else
                {
                    printf(" ");
                }
            
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
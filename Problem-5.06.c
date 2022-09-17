

#include<stdio.h>

void main()
{
    int n;
    printf("Enter how many even natural numbers you want:-->>\n\n");
    scanf("%d",&n);
    printf("The first %d even natural numbers are:-->>\n\n",n);
    for(int i=1;i<=(n*2);i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}
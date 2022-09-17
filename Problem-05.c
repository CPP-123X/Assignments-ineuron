

#include<stdio.h>

void main()
{
    int i=19;
    printf("The first 10 odd natural numbers in Reverse Order:-->>\n\n");
    int count=10;
    while(i>=1)
    {
        printf("ODD NUMBER %d -->> %d\n",count,i);
        i-=2;
        count--;
    }
}



#include<stdio.h>

void main()
{
    int i=20;
    printf("The first 10 even natural numbers in Reverse Order:-->>\n\n");
    int count=10;
    while(i>=2)
    {
        printf("EVEN NUMBER %d -->> %d\n",count,i);
        i-=2;
        count--;
    }
}
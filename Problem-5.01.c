


#include<stdio.h>

void main()
{
    int n;
    printf("Enter many times you want \"MySirG\" to get printed on screen:-->> \n\n");
    scanf("%d",&n);
    int i=1;
    while(i<=n)
    {
        printf("%d times --->> MySirG\n",i);
        i++;
    }
    printf("The Above statement is printed %d times\n",i-1);
}



#include<stdio.h>

void main()
{
    int n;
    printf("Enter how many squares you want to print:-->> \n\n");
    scanf("%d",&n);
    printf("The squares till %d are:-->>\n",n);
    for(int i=1;i<=n;i++)
    {
        printf("Square of %d --->> %d\n",i,(i*i));
    }
}
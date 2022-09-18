

#include <stdio.h>

void main()
{
    int x, y;
    printf("Enter two Numbers whose LCM you want:-->> \n\n");
    scanf("%d %d", &x, &y);
    int LCM=0;
    for (LCM = (x > y) ? x : y; LCM <= (x * y); LCM = LCM + (x > y ? x : y))
    {
        if (LCM % x == 0 && LCM % y == 0)
        {
            break;
        }
    }
    printf("LCM of %d and %d is %d\n",x,y,LCM);
}
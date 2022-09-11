

#include <stdio.h>

int main()
{
    printf("Hello Students\n");

    printf("Hello\n");

    printf("Students\n");

    printf("\"MySirG\"");

    double r;
    printf("\nEnter the value of r:-->\n");
    scanf("%lf", &r);
    printf("Area of circle is %.3lf having radius %.3lf:--> \n", 3.14 * r, r);

    printf("The length of the string \"MySirG Coaching Classes\" is %d\n", 23);

    printf("\"Hello , Amit Kumar\"\n\n\n");

    printf("\n");

    printf("%%d\n");

    printf("\\n");
    printf("\n");

    printf("\\\\");

    printf("\n\n\nDate Printing\n\n\n");
    int d, m, y;
    printf("Enter the Date , Month and year in the Format DD/MM/YYYY\n\n");
    scanf("%d%d%d", &d, &m, &y);
    printf("Input Format-->> %d/%d%d", d, m, y);
    printf(" Output Format-->> Day - %d , Month - %d , Year - %d", d, m, y);
    printf("\n\n\n");

    printf("Time printing\n\n");
    printf("Enter the hours and minutes\n\n");
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    printf("Input Format-->> %d:%d\n\n", hour, minute);
    printf("Output Format-->> %d hours and %d minutes", hour, minute);

    // int x = printf(“ineuron”);
    // printf(“% d”, x);
    // This piece of code will mot work because we have assigned a string to an integer type value.
    return 0;
}
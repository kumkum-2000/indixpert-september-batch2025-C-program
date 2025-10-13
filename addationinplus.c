#include <stdio.h>
int main()
{
    int subject;
    int maths;
    int science;
    int hindi;
    int total;
    float percentage;

    printf("enter marks of maths:");
    scanf("%d", &maths);

    printf("enter marks of science:");
    scanf("%d", &science);

    printf("enter marks of hindi:");
    scanf("%d", &hindi);
    total = maths + science + hindi;
    percentage = total / 3;

    printf("total marks is: %d\n", total);

    printf("percentage is: %f", percentage);

    return 0;
}

#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;
    avg=0;
    scanf("%d%d%d",&a,&b,&c);
    avg=(a+b+c)/3.0;
    printf("Average: %.2f",avg);
    return 0;
}
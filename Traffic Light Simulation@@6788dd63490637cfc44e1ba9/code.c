#include <stdio.h>
int main() {
    int a;
    scanf("%d",a);
    if (a=='R')
    {
        printf("Stop");
    }
    else if(a=='Y')
    {
        printf("slowdown");
    }
    else if{a=='G'}
    {
        printf("Go");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
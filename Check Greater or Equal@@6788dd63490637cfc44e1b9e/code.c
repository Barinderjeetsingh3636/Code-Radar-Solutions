#include <stdio.h>

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b &&b>a)
    {
        printf("Yes");
    }
    else if (a==b)
    {
        printf("equal to the second");
    }
    else
    {
        printf("No");
    }
    return 0;
}
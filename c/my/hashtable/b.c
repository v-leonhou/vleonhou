#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

void k(int **a,int **b)
{
    int *p;
    p = *a;
    *a = *b;
    *b = p;
}

int main()
{
    // int *a,*b;
    // k(&a,&b);
    char *a = "women";
    char *b = "women";
    if( a == b)
    {
        printf("a = b\n");
    }

    // printf("你好，世界");
    // printf("a的值为%p\nb的值为%p\n",a,b);

    return 2;
}

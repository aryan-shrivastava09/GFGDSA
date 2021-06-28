#include<stdio.h>
typedef struct t
{
    int c[2];
}T[2];
int main()
{
    int a[] ={1}, b[] = {3};
    T x;
    x[0].c = a; x[1].c = b;
    printf("%d %d", (x[0])[0], (x[1])[0]);
}

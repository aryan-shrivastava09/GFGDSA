#include<stdio.h>
struct astr
{
    int n;
    struct bstr *B;
};
struct bstr
{
    int n;
    struct astr *A;
};
int main()
{
    struct astr a;
    struct bstr b;
    a.n = 1, b.n=0;
    a.B = &b; b.A =&a;
    for(;a.B->n<5&&b.A->n<4;a.n++,b.n++)
    {
        printf("%d",a.n+b.n);
    }
}

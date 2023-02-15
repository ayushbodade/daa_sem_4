#include <stdio.h>
#include <math.h>
int n;
void f1()
{
    int ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = n;
        printf("%d %d", n, ans[n]);
        printf("\n");
    }
}
void f2()
{
    int ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = n * n * n;
        printf("%d %d", n, ans[n]);
        printf("\n");
    }
}
void f3()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = pow(2, n);
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
void f4()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = pow(1.5, n);
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
double f5()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        if (n == 0)
        {
            continue;
        }
        ans[n] = log(n);
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
double f6()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = log10(n);
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
double f7()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = sqrt(log2(n));
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
double f8()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = n * pow(2, n);
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
double f9()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = exp(n);
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
double f10()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = pow(2, log2(n));
        printf("%d %.2f", n, ans[n]);
        printf("\n");
    }
}
double fac(int i)
{
    if (i >= 1)
        return i * fac(i - 1);
    else
        return 1;
}
double f11()
{
    double ans[100];
    for (n = 0; n <= 100; n++)
    {
        ans[n] = fac(n);
        printf("%.2f", ans[n]);
        printf("\n");
    }
}
int main()
{
    printf("Function:\n1.n\n2.n^3\n3.2^n\n4.(3/2)^n\n5.ln(n)\n6.lg(n)\
n7.square root lgn\n8.n*2^n\n9.e^n\n10.2^(log(n))\n11.n!");
    printf("\nEnter your choice:");
    int ch;
    scanf("%d", &ch);
    if (ch == 1)
    {
        f1();
    }
    else if (ch == 2)
    {
        f2();
    }
    else if (ch == 3)
    {
        f3();
    }
    else if (ch == 4)
    {
        f4();
    }
    else if (ch == 5)
    {
        f5();
    }
    else if (ch == 6)
    {
        f6();
    }
    else if (ch == 7)
    {
        f7();
    }
    else if (ch == 8)
    {
        f8();
    }
    else if (ch == 9)
    {
        f9();
    }
    else if (ch == 10)
    {
        f10();
    }
    else if (ch == 11)
    {
        f11();
    }
}
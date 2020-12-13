#include <stdio.h>

float integr(float a, float b, int n, float f(float));
float g(float);

int main()
{
    float a,b;
    int n;
    scanf("%f %f %d", &a,&b,&n);
    printf("значение интеграла = %f", integr(a, b, n, g));
}

float g(float x)
{
    return x*x;
}

float integr(float a, float b, int n, float f(float))
{
    float x,s,h; int i;
    h=(b-a)/n;
    s=(f(a)+f(b))/2;
    x=a;
    for(i=1;i<n;i++)
    {
        x=x+h;
        s=s+f(x);
    }
    return h*s;
}

﻿
#include <iostream>
#include <cmath>
using namespace std;
//float rec(float x,int iter)
//{  
//
//
//
//}
int factorial(int n)
{

    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}


int main()
{
    float E;
    float x;
    printf("Enter the E value:");
    scanf_s("%f", &E);
    printf("Enter the x value:");
    scanf_s("%f", &x);
    int i = 2;
    int j = 0;
    float slog = 0;
    float sum = 0;
    float contr_sum = 0;
    contr_sum = sin(x) - cos(x) + 1;
    while (bool start=true)
    {
        slog = pow(-1, j) * pow(x, 2 * j + 1) * (i + x) / factorial(i);
        if(abs(slog) < E)
        {
            break;

        }
        sum = sum + slog;
        i += 2;
        j += 1;


    }
    printf("The sum of row with E mistake:%f\nControl sum:%f", sum, contr_sum);
  
    
}


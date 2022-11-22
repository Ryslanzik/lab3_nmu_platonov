#include <iostream>
#include <stdio.h>

double input_value(double *x, double *y, double *z);
double s2_math1(double x, double y, double z, double *tmp_a);
double s2_math2(double x, double y, double z, double *tmp_b);
double s2_math3(double x, double y, double z, double *tmp_c);
double all_math(double *tmp_a, double *tmp_b, double *tmp_c, double *s2);
double println_value(double s2);

int main()
{
    double x = 0, y = 0, z = 0, s2 = 0;
    double tmp_a = 0, tmp_b = 0, tmp_c = 0;
    
    if (input_value(&x, &y, &z))
    {
        printf("Err, Maybe you input incorrect data!");
        return 1;
    }
    else {
        s2_math1(x, y, z, &tmp_a);
        s2_math2(x, y, z, &tmp_b);
        s2_math3(x, y, z, &tmp_c);
        all_math(&tmp_a, &tmp_b, &tmp_c, &s2);
        println_value(s2);
        return 0;
    }
}

double input_value(double *x, double *y, double *z) 
{
    printf("Input x y z: ");
    scanf_s("%lf %lf %lf", x, y, z);
    if (*x == 0 or *y == 0 or *z == 0) {
        return 1;
    }
    return 0;
}

double s2_math1(double x, double y, double z,double *a)
{
    *a = ((2 * y * z) / (5 * x));
    return 0;
}

double s2_math2(double x, double y, double z, double *b)
{
    *b = ((32 * x * z) / (2.5 * y));
    return 0;
}

double s2_math3(double x, double y, double z, double *c)
{
    *c = ((5.2 * x * y) / (2.1 * z));
    return 0;
}

double all_math(double *tmp_a, double *tmp_b, double *tmp_c, double *s2)
{
    *s2 = *tmp_a - *tmp_b + *tmp_c;
    return 0;
}
double println_value(double s2) {
    printf("Output: %lf", s2);
    return 0; 
}

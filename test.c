#include <stdio.h>
#include <math.h>

static float g_pi = 3.14;

int main()
{
    char* name = "Charlie";
    int radius = 4;
    double area = g_pi * pow(radius, 2);

    printf("Circle '%s' with radius %d and area %lf\n", name, radius, area);

    return 0;
}

#include <stdio.h>

int main()
{
    float radius;
    float pi =3.14;
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius);
    printf(" Diameter of circle is %f\n",2*radius);
    
    printf(" Circumference of circle is %f\n",2*pi*radius);
    
    printf(" Area of circle is %f\n",pi*radius*radius);
    

    return 0;
}

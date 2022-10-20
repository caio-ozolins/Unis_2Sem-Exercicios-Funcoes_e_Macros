#include <stdio.h>
#include "areaCircle.h"

int main(){

    float radius;

    printf("Type the radius (cm):");
    scanf("%f", &radius);
    printf("The area of the circle is %.2fcm%c", areaCircle(radius), 253);

    return 0;
}
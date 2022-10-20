#include <stdio.h>
#include "areaCircle.h"
#include "volumeSphere.h"

int main(){

    float radius;

    printf("Type the radius of the circle (cm):");
    scanf("%f", &radius);
    printf("The area of the circle is %.2fcm%c\n", areaCircle(radius), 253);
    printf("Type the radius of the sphere (cm):");
    scanf("%f", &radius);
    printf("The volume of the sphere is %.2fcm%c\n", volumeSphere(radius), 252);

    return 0;
}
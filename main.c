#include <stdio.h>
#include "areaCircle.h"
#include "volumeSphere.h"
#include "areaSquare.h"
#include "volumeCube.h"

int main(){

    float radius, sideLen;

    printf("Type the radius of the circle (cm):");
    scanf("%f", &radius);
    printf("The area of the circle is %.2fcm%c\n", areaCircle(radius), 253);

    printf("Type the radius of the sphere (cm):");
    scanf("%f", &radius);
    printf("The volume of the sphere is %.2fcm%c\n", volumeSphere(radius), 252);

    printf("Type the length of the square (cm):");
    scanf("%f", &sideLen);
    printf("The area of the square is %.2fcm%c\n", areaSquare(sideLen), 252);

    printf("Type the lenght of the cube (cm):");
    scanf("%f", &radius);
    printf("The volume of the cube is %.2fcm%c\n", volumeCube(sideLen), 252);

    return 0;
}
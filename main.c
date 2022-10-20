#include <stdio.h>
#include "areaCircle.h"
#include "volumeSphere.h"
#include "areaSquare.h"
#include "volumeCube.h"

int main(){

    float radius, sideLen;
    int choose;

    printf("*****************\n");
    printf("| 1. Circle     |\n");
    printf("| 2. Sphere     |\n");
    printf("| 3. Square     |\n");
    printf("| 4. Cube       |\n");
    printf("*****************\n\n");

    printf("Choose a geometric figure:");
    scanf("%d", &choose);

    switch (choose) {
        case 1:
            printf("Type the radius of the circle (cm):");
            scanf("%f", &radius);
            printf("The area of the circle is %.2fcm%c\n", areaCircle(radius), 253);
            break;
        case 2:
            printf("Type the radius of the sphere (cm):");
            scanf("%f", &radius);
            printf("The volume of the sphere is %.2fcm%c\n", volumeSphere(radius), 252);
            break;
        case 3:
            printf("Type the length of the square (cm):");
            scanf("%f", &sideLen);
            printf("The area of the square is %.2fcm%c\n", areaSquare(sideLen), 252);
            break;
        case 4:
            printf("Type the length of the cube (cm):");
            scanf("%f", &sideLen);
            printf("The volume of the cube is %.2fcm%c\n", volumeCube(sideLen), 252);
            break;
        default:
            printf("Invalid choice");
            break;
    }

    return 0;
}
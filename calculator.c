#include <math.h>
#include <stdio.h>

// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}

// 2. Subtraction
 
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
 
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a * b;
    printf("The product is %d\n", result);
}
// 4. Division
 
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a / b;
 
}
// 5. Exponentiation
void calcExponentiation() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = pow(a,b);
    printf("The answer is %d\n", result);
}


// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %f", answer);
}

// 7. Cosine
void calcCosine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = cos(radians);

    printf("The cos value is %f", answer);
}
// 8. Tangent
void calcTangent() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = tan(radians);

    printf("The tan value is %f", answer);
}
// 9. Floor
void calcFloor() {
    printf("\nEnter a numbers: \n");
    int a;
    scanf("%d", &a);
    int result = floor(a);
    printf("The answer is %d\n", result);
}
// 10. Ceiling

// 11. Round

// 12. Absolute value

int main() {
    int choice;
    printf(
        "Welcome to the Cool Calculator program!\n\n"
        "1. Addition\n"
        "2. Subtraction\n"
        "3. Multiplication\n"
        "4. Division\n"
        "5. Exponentiation\n"
        "6. Sine\n"
        "7. Cosine\n"
        "8. Tangent\n"
        "9. Floor\n"
        );

    scanf("%d", &choice);

    switch (choice) {
                case 1:
            calcAddition();
            break;

        case 2:
 
            break;
        case 5:
        	 calcExponentiation();
            break;

        case 6:
            calcSine();
            break;

        case 7:
        	calcCosine();
            break;
        case 8:
        	calcTangent();
            break;
        case 9:
        	calcFloor();
        	break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}

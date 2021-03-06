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
//Subtraction
void calcSubtraction() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a - b;
    printf("The subtraction of a and b is %d\n", result);
}
//Multiplication
void calcMultiplication() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a * b;
    printf("The product of a and b is %d\n", result);
}
//Division
void calcDivision() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a / b;
    printf("The division of a and b is %d\n", result);
}
//Exponent
void calcexpo() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = pow(a,b);
    printf("The Exponentation of a and b is %d\n", result);
}
//Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = sin(radians);

    printf("The sine value is %f", answer);
}
//Cosine
void calcCosine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = cos(radians);

    printf("The cosine value is %f", answer);
}
//Tangent
void calcTan() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = tan(radians);

    printf("The tangent value is %f", answer);
}
//Floor
void calcFloor() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = floor(radians);

    printf("The floor value is %f", answer);
}
//Ceiling
void calcCeil() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = ceil(radians);

    printf("The ceiling value is %f", answer);
}
//Round
void calcRound() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = round(radians);

    printf("The rounding value is %f", answer);
}
//Absolute value
void calcAbs() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);

    // Convert degrees to radians
    double radians = angle / 180.0 * 3.14;
    double answer = abs(radians);

    printf("The absolute value is %f", answer);
}

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
        "10. Ceiling\n"
        "11. Round\n"
        "12. Absolute value\n\n"
        "Enter your choice: ");

    scanf("%d", &choice);

    switch (choice) {
        // 1. Addition
        case 1:
            calcAddition();
            break;

        case 2:
        // 2. Subtraction
        	calcSubtraction();
            break;
        case 3:
        // 3. Multiplication
        	calcMultiplication();
            break;
        case 4:
        // 4. Division
        	calcDivision();
            break;
        case 5:
        // 5. Expo
        	calcexpo();
            break;

        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:
        	calcCosine();
            break;
        case 8:
        	calcTan();
            break;
        case 9:
        	calcFloor();
            break;
        case 10:
        	calcCeil();
            break;
        case 11:
        	calcRound();
            break;
        case 12:
        	calcAbs();
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}

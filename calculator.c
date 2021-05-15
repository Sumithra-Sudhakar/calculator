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

// Fill the rest of the functionality here!
// 2. Subtraction
void calcSubtraction(){
  printf("\nEnter two numbers: \n");
  int a, b;
  scanf("%d%d", &a, &b);
  int result = a - b;
  printf("The subtraction is %d\n", result);
}
// 3. Multiplication
void calcMultiply(){
  printf("\nEnter two numbers: \n");
  int a, b;
  scanf("%d%d", &a, &b);
  int result = a * b;
  printf("The product is %d\n", result);
}

// 4. Division
void calcDivide(){
  printf("\nEnter two numbers: \n");
  int a, b;
  scanf("%d%d", &a, &b);
  int result = a / b;
  printf("The division is %d\n", result);
}
// 5. Exponentiation
void calcExponent(){
  printf("\nEnter two numbers: \n(Result will be a^b)\n");
  int a, b;
  scanf("%d%d", &a, &b);
  int result = pow(a,b);
  printf("The result is %d\n", result);
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

// Fill the rest of the functionality here!
// 7. Cosine
void calcCosine(){
  printf("\nEnter the angle in degrees: ");
  int angle;
  scanf("%d", &angle);
  double radians = angle / 180.0 * 3.14;
  double answer = cos(radians);
  printf("The cosine value is %f", answer);
}
// 8. Tangent
void calcTangent(){
  printf("\nEnter the angle in degrees: ");
  int angle;
  scanf("%d", &angle);
  double radians = angle / 180.0 * 3.14;
  double answer = tan(radians);
  printf("The tangent value is %f", answer);
}
// 9. Floor
void calcFloor(){
  printf("\nEnter the angle in degrees: ");
  int angle;
  scanf("%d", &angle);
  double radians = angle / 180.0 * 3.14;
  double answer = floor(radians);
  printf("The floor value is %f", answer);
}
// 10. Ceiling
void calcCeiling(){
  printf("\nEnter the angle in degrees: ");
  int angle;
  scanf("%d", &angle);
  double radians = angle / 180.0 * 3.14;
  double answer = ceil(radians);
  printf("The ceiling value is %f", answer);
}
// 11. Round
void calcRound(){
  printf("\nEnter the value to round off: ");
  float value;
  scanf("%f", &value);
  printf("The rounded off is %f", round(value));
}
// 12. Absolute value
void calcAbsolute(){
  printf("\nEnter the value: ");
  int value;
  scanf("%d", &value);
  printf("The absolute value is %d", abs(value));
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
            calcSubtraction();
            break;

        case 3:
            calcMultiply();
            break;
        case 4:
            calcDivide();
            break;
        case 5:
            calcExponent();
            break;

        // 6. Sine
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
        case 10:
            calcCeiling();
            break;
        case 11:
            calcRound();
            break;
        case 12:
            calcAbsolute();
            break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}

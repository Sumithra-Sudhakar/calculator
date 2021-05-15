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

void calcSubtraction(){
  printf("\nEnter two numbers: \n");
  int a, b;
  scanf("%d%d", &a, &b);
  int result = a - b;
  printf("The difference is %d\n", result);
}

void calcMultiplication(){
  printf("\nEnter two numbers: \n");
  int a, b;
  scanf("%d%d", &a, &b);
  int result = a * b;
  printf("The product is %d\n", result);
}

void calcDivision(){
  printf("\nEnter two numbers: \n");
  float a, b;
  scanf("%f%f", &a, &b);
  float result = a / b;
  printf("The quotient is %f\n", result);
}

void calcExponentiation(){
  printf("\nEnter two numbers: \n");
  int a, b;
  scanf("%d%d", &a, &b);
  int result = pow(a,b);
  printf("The Exponentiation of %d and %d is %d\n",a,b,result);
}

// Fill the rest of the functionality here!
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Exponentiation

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

void calcCosine(){
  printf("\nEnter the angle in degrees: ");
  int angle;
  scanf("%d", &angle);

  // Convert degrees to radians
  double radians = angle / 180.0 * 3.14;
  double answer = cos(radians);

  printf("The cosine value is %f", answer);
}

void calcTangent(){
  printf("\nEnter the angle in degrees: ");
  int angle;
  scanf("%d", &angle);

  // Convert degrees to radians
  double radians = angle / 180.0 * 3.14;
  double answer = tan(radians);

  printf("The tangent value is %f", answer);
}

void calcCeil(){
  printf("\nEnter a number \n");
  float a;
  scanf("%f", &a);
  int result = ceil(a);
  printf("The ceil of %f is %d",a,result);
}

void calcFloor(){
  printf("\nEnter a number \n");
  float a;
  scanf("%f", &a);
  int result = floor(a);
  printf("The ceil of %f is %d",a,result);
}

void calcRound(){
  printf("\nEnter a number \n");
  float a;
  scanf("%f", &a);
  int result = round(a);
  printf("The round of %f is %d",a,result);
}

void calcAbs(){
  printf("\nEnter a number \n");
  int a;
  scanf("%d", &a);
  int result = abs(a);
  printf("The absolute value of %d is %d",a,result);
}

// Fill the rest of the functionality here!
// 7. Cosine
// 8. Tangent
// 9. Floor
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

        case 2:calcSubtraction();break;
        case 3:calcMultiplication();break;
        case 4:calcDivision();break;
        case 5:calcExponentiation();break;

        // 6. Sine
        case 6:
            calcSine();
            break;

        case 7:calcCosine();break;
        case 8:calcTangent();break;
        case 9:calcFloor();break;
        case 10:calcCeil();break;
        case 11:calcRound();break;
        case 12:calcAbs();break;
        default:
            printf("Invalid choice!");
    }
    return 0;
}

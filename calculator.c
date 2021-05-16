#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// 1. Addition
void calcAddition() {
    printf("\nEnter two numbers: \n");
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a + b;
    printf("The sum is %d\n", result);
}

// 2. Subtraction 
void calcSubtraction() {
printf("\nEnter two numbers: \n"); 
    int a,b;
    scanf("%d%d",&a,&b);
    int result = a-b; printf("The difference is %d\n",result); 
}
// 3. Multiplication 
void calcMultiplication() {
        printf("\nEnter two numbers: \n"); 
        int a,b; 
        scanf("%d%d",&a,&b); 
        int result = a*b;
        printf("Multiplication of the given two nummber is %d\n",result);
    }
// 4. Division
 void calcDivision() { 
        printf("\nEnter two numbers a and b like a greater than b: \n"); 
        int a,b; 
        scanf("%d%d",&a,&b);
        int result = a/b; 
        printf("Division of the given two nummber is %d\n",result);
 }
// 5. Exponentiation 
void calcExponential() {
        printf("\nEnter two numbers a and b like a greater than b: \n"); 
        int a,b; 
        scanf("%d%d",&a,&b); 
        int result = a^b;  
        printf("Division of the given two nummber is %d\n", result);
} 

// 6. Sine
void calcSine() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);
    double radians = angle / 180.0 * 3.14;
    double result = sin(radians);
    printf("\nThe sin of the given angle is %f\n",result);
}
// 7. Cosine
void calcCos() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);
    double radians = angle / 180.0 * 3.14;
    double result = cos(radians);
    printf("\nThe cos of the given angle is %f\n",result);
}
// 8. Tangent
void calcTan() {
    printf("\nEnter the angle in degrees: ");
    int angle;
    scanf("%d", &angle);
    double radians = angle / 180.0 * 3.14;
    double result = tan(radians);
    printf("\nThe tan of the given angle is %f\n",result);
}

// 9. Floor
void calcFloor(){
    printf("\nEnter a numbers: \n");
    float a;
    scanf("%f", &a);
    int result = floor(a);
    printf("\nThe floor of the number is %d\n",result);
}
    
// 10. Ceiling
void calcCeil(){
    printf("\nEnter a numbers: \n");
    float a;
    scanf("%f", &a);
    int result = ceil(a);
    printf("\nThe ceil of the number is %d\n",result);
}
// 11. Round
void calcRound(){
    printf("\nEnter a numbers: \n");
    float a;
    scanf("%f", &a);
    int result = round(a);
    printf("\nThe rpund of the number is %d\n",result);
}
// 12. Absolute value
void calcAbs(){
    printf("\nEnter a numbers: \n");
    int a;
    scanf("%d", &a);
    int result = abs(a);
    printf("\nThe absolute value of the number is %d\n",result);
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
            calcMultiplication();
            break;
        case 4:
            calcDivision();
            break;
        case 5:
            calcExponential();
            break;           
        case 6:
            calcSine();
            break;
        case 7:
            calcCos();
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

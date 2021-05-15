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

        
      "Enter your choice: ");

  
        "9. Floor\n"
        );
   
  
  

    scanf("%d", &choice);

    switch (choice) {
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
            calcExponentiation();
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
        
 
        
        
        default:
            printf("Invalid choice!");
    }
    return 0;
}

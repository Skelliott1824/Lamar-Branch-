#include<stdio.h>
int main(){
  printf("hello world");
  return 0;

  int num1, num2, sum; // Declare integer variables

    printf("Enter first number: ");
    scanf("%d", &num1); // Read first integer from user

    printf("Enter second number: ");
    scanf("%d", &num2); // Read second integer from user

    sum = num1 + num2; // Calculate the sum

    printf("The sum of %d and %d is %d\n", num1, num2, sum); // Display the result
    return 0;
}

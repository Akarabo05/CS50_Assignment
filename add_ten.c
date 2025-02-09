#include <stdio.h>

int main() {
    int num;
    
    // Get user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Add 10 to the number
    int result = num + 10;

    // Print the result
    printf("The result is: %d\n", result);

    return 0;
}

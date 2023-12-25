#include <stdio.h>

void swap(int *a, int *b);

int main()
{
int num1, num2;
// Enter values of num1 and num2
     printf("Enter the value for num1: ");
         scanf("%d", &num1);
     printf("Enter the value for num2: ");
         scanf("%d", &num2);
// call values before swapping
     printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
// Call the swap function with call by reference
         swap(&num1, &num2);
// Display values after swapping
     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);
  
return 0;
}

// Function to swap values using pointers (call by reference)
void swap(int *a, int *b) {
     int temp = *a;
     *a = *b;
     *b = temp;
}

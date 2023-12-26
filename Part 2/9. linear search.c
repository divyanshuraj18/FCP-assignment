#include <stdio.h>

int linearSearch(int array[], int size, int key) {
for (int i = 0; i < size; i++) {
if (array[i] == key) {
return i; 
}
}
return -1; 
}

int main() {
int array[100], size, key;
// enter the size of the array
printf("Enter the size of the array: ");
scanf("%d", &size);
// enter array elements
printf("Enter the elements of the array:\n");
for (int i = 0; i < size; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &array[i]);
}
// enter the key to search
printf("Enter the key to search: ");
scanf("%d", &key);
// Perform linear search
int result = linearSearch(array, size, key);
// Display the result
if (result != -1) {
printf("Key found at index: %d\n", result);
} else {
printf("Key not found in the array.\n");
}
return 0;
}

#include <stdio.h>

int main()

{
  int array[] = {10, 30, 40, 20, 50, 60, 90, 80, 70, 100};
  int length = sizeof(array) / sizeof(array[0]);
    
  printf("Elements at odd indices in the array:\n");
         for (int i = 1; i < length; i += 2)
    {
            printf("array[%d] = %d\n", i, array[i]);
    }
  
  return 0;
}

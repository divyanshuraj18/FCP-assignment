#include <stdio.h>

int main()
{
  int array[] = {17, 47, 78, 88, 59, 19, 77, 99};
  int length = sizeof(array) / sizeof(array[0]);
  int largest = array[0]; 
      for (int i = 1; i < length; i++)
    {
        if (array[i] > largest)
    {
        largest = array[i];
    }
  }
  printf("The largest element in the array is %d\n", largest);

  
return 0;
}

#include "sort.h"
#include "array.h"
#include <stdio.h>
#include <stdlib.h>



int main() {
  int arr[] = {87, 48, 93, 20, 73, 29, 72, 13, 91, 24, 11, 75, 46, 34, 89, 49, 98, 67, 56, 37, 8, 31};
  //           1 2   4       8 
  //int arr[] = {1,3,2};
  //int arr[] = {8,9,5};
  int length = sizeof(arr)/sizeof(int);

  printArray(arr,length);
  heapSort(arr,length);
  printArray(arr,length);

  return 0;  
}

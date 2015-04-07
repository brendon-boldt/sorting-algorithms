#include "sort.h"
#include "array.h"
#include <stdio.h>
#include <stdlib.h>



int main() {
  int arr[] = {0,3,8,2,5,1,4};
  //int arr[] = {1,3,2};
  //int arr[] = {8,9,5};
  int length = sizeof(arr)/sizeof(int);


  printArray(arr,length);
  heapSort(arr,length);
  printArray(arr,length);

  return 0;  
}

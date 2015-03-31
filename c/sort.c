#include "sort.h"
#include "array.h"
#include <stdio.h>
#include <stdlib.h>



int main() {
  int arr[] = {9,3,8,2,5,1,4,3,8,55,2,-1,3,6,865,4,-3533};
  //int arr[] = {1,3,2};
  //int arr[] = {8,9,5};
  int length = sizeof(arr)/sizeof(int);


  printArray(arr,length);
  quickSort(arr,length);
  printArray(arr,length);

  return 0;  
}

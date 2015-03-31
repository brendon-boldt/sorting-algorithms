#include <stdlib.h>
#include <stdio.h>
#include "../c/array.h"

void quickSort(int arr[], int length) {
  if (length <= 1)
    return;
  else if (length == 2) {
    if (arr[0] > arr[1])
      swap(&arr[0],&arr[1]);
      return;
  }
  printArray(arr,length);
  int pivot = arr[length-1];
  int hi = length-2;
  int lo = 0;

  while (lo != hi) {
    if (arr[lo] > pivot) {
      swap(&arr[lo],&arr[hi--]);
    } else {
      lo++;
    }
  }
  if (arr[lo] < pivot)
    lo++;
  swap(&arr[length-1],&arr[lo]);
  printArray(arr,length);
  quickSort(arr,lo);
  quickSort(arr+lo+1,length-lo-1);
}

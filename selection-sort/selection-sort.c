#include <stdlib.h>
#include <stdio.h>
#include "../c/array.h"

/*
void swap(int * x, int * y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}
*/

void selectionSort(int arr[], int length) {
  if (length < 1)
    return;
  int max = 0;
  for(int i = 0; i < length; ++i) {
    if (arr[i] > arr[max])
      max = i;
  }
  swap(&arr[max],&arr[length-1]);
  selectionSort(arr,length-1);
}

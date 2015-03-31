#include <stdlib.h>
#include <stdio.h>
#include "../c/array.h"


void insertionSort(int arr[], int length) {
  if (length < 1)
    return;
  int min = 0;
  for(int i = 0; i < length; ++i) {
    if (arr[i] < arr[min])
      min = i;
  }
  insert(arr,min,0);
  insertionSort(arr+1,length-1);
}

#include <stdio.h>
#include <stdlib.h>

void printArray(int arr[], int length) {
  for(int i = 0; i < length; ++i) {
    printf("%d ",arr[i]);
  }
  printf("%s","\n");
}

void swap(int * x, int * y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

void insert(int arr[], int index, int before) {
  int value = arr[index];
  for(int i = index; i > before; --i) {
    arr[i] = arr[i-1];
  }
  arr[before] = value;
}


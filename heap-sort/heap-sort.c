#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../c/array.h"

int parent(int arr[], int i) {
  return arr[(i-1)/2];
}

int leftChild(int arr[], int i) {
  return arr[i*2+1];
}

int rightChild(int arr[], int i) {
  return arr[i*2+2];
}

int maxPow2(int x) {
  int y = 1;
  while (y < x+1) {
    y *= 2;
  }
  return y/2-2;
}

void sink(int index, int tree[], int length) {
  printf("Sink: %d\n",tree[index]);
  if (index*2+1 < length) {
    if (index*2+2 < length) {
      if (leftChild(tree,index) > rightChild(tree,index)) {
        if (leftChild(tree,index) > tree[index]) {
          swap(&tree[index],&tree[index*2+1]);
          sink(index*2+1,tree,length);
        }
      } else {
        if (rightChild(tree,index) > tree[index]) {
          swap(&tree[index],&tree[index*2+2]);
          sink(index*2+2,tree,length);
        }
      }
    } else {
      if (leftChild(tree,index) > tree[index]) {
        swap(&tree[index],&tree[index*2+1]);
        sink(index*2+1,tree,length);
      }
    }
  }
}

void heapify(int end, int tree[], int length) {
  if (end < 2)
    return;
  for (int i = end; i > maxPow2(end); i -= 2) {
    //printf("%d %d\n",tree[i],tree[i+1]);
    int max = 1;
    if (tree[i+1] < tree[i])
      max = 0;
    if (tree[i+max] > parent(tree,i)) {
      swap(&tree[i+max],&tree[(i-1)/2]);
      sink(i+max,tree,length);
    }
  }
  printArray(tree,length);
  heapify(maxPow2(end)+1,tree,length);
}

void buildTree(int tree[], int length) {
  heapify(length,tree,length);
  //printArray(tree,length);
}


void heapSort(int arr[], int length) {
  // Remove malloc when finished
  int * tree = malloc(length*sizeof(int));
  memcpy(tree,arr,length*sizeof(int));
  buildTree(tree,length);
  printArray(tree,length);
  free(tree);
}

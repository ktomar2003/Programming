/*
#include <stdio.h>

int main() {
  int a[10]={60,30,80,90,50,100,20,10,40,70};
  for (int i = 0; i < 9; i++) {
    int min = i;
    for (int j = i + 1; j < 10; j++) {
      if (a[j] < a[min])
        min = j;
    }
    a[min]=a[min]^a[i];
    a[i]=a[min]^a[i];
    a[min]=a[min]^a[i];
  }
  printf("Sorted array in Acsending Order:\n");
  for (int k = 0; k < 10; k++) {
    printf("%d  ", a[k]);
  }
  return 0;
}
*/

// Selection sort in C

#include <stdio.h>

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

    // put min at the correct position
    swap(&array[min_idx], &array[step]);
  }
}

// function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// driver code
int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}

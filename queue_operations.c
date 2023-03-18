#include <stdio.h>
#define SIZE 5

void enQueue(int);
void deQueue();
void display();

int queue[SIZE], f = -1, r = -1;

int main() {
  deQueue();

  enQueue(10);
  enQueue(20);
  enQueue(30);
  enQueue(40);
  enQueue(50);

  enQueue(60);

  display();

  deQueue();

  display();

  return 0;
}

void enQueue(int val) {
  if (r == SIZE - 1)
    printf("\nQueue is Full!! Overflow!!!");
  else {
    if (f == -1)
        f = 0;
    r++;
    queue[r] = val;
    printf("\nInserted -> %d", val);
  }
}

void deQueue() {
  if (f == -1)
    printf("\nQueue is Empty!! Underflow!!!");
  else {
    printf("\nDeleted : %d", queue[f]);
    f++;
    if (f > r)
      f = r = -1;
  }
}

void display() {
  if (r == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = f; i <= r; i++)
      printf("%d  ", queue[i]);
  }
  printf("\n");
}

#include <stdio.h>

int sumavg(int num, int a[]) {
  int sum = 0, avg;
  for (int i = 0; i < num; i++) {
    sum = sum + a[i];
  }
  avg = sum / num;
  return avg;
}
int main() {
  int num, a[50];
  printf("enter number");
  scanf("%d", &num);
  printf("enter number now ");
  for (int i = 0; i < num; i++) {
    scanf("%d", &a[i]);}

  int average = sumavg(num, a);
  printf("%d", average);

  return 0;
}
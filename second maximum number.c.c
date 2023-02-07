#include <stdio.h>
int main() {
  int n, i, a[100];
  printf("Enter size of array: ");
  scanf("%d", &n);
  printf("Enter elements: ");
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
  int max1 = a[0], max2 = a[0];
  for (i = 1; i < n; i++) {
    if (a[i] > max1) {
      max2 = max1;
      max1 = a[i];
    } else if (a[i] > max2 && a[i] != max1) {
      max2 = a[i];
    }
  }
  printf("Second maximum number is: %d\n", max2);
  return 0;
}

#include <stdio.h>
#include <stdlib.h>


int main() {
  int n, search, i;
  printf("Dizinin boyutunu girin: ");
  scanf("%d", &n);
  int arr[n];
  printf("Dizinin elemanlarýný girin: ");
  for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Aranacak elemaný girin: ");
  scanf("%d", &search);
  for(i=0; i<n; i++) {
    if(arr[i] == search) {
      printf("%d sayýsý dizinin %d. indeksinde bulunuyor.", search, i);
      break;
    }
  }
  if(i == n) {
    printf("%d sayýsý dizide bulunamadý.", search);
  }
  return 0;
}


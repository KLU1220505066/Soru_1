#include <stdio.h>
#include <stdlib.h>


int main() {
  int n, search, i;
  printf("Dizinin boyutunu girin: ");
  scanf("%d", &n);
  int arr[n];
  printf("Dizinin elemanlar�n� girin: ");
  for(i=0; i<n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Aranacak eleman� girin: ");
  scanf("%d", &search);
  for(i=0; i<n; i++) {
    if(arr[i] == search) {
      printf("%d say�s� dizinin %d. indeksinde bulunuyor.", search, i);
      break;
    }
  }
  if(i == n) {
    printf("%d say�s� dizide bulunamad�.", search);
  }
  return 0;
}


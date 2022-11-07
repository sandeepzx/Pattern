#include <stdio.h>
int i,n=5,j;
int main(void) {
  for(i=0;i<n;i++){
    for(j=0;j<n/2;j++){
      printf("*");
    }
    printf("\n");
  }
}
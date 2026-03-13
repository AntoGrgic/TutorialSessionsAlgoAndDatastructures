/*

gcc search.c -o search; ./search  # Linux
gcc search.c -o search; ./search  # Windows (UCRT64)
gcc search.c -o search; ./search  # Mac

*/

#include <stdio.h>

#define n 5

int large, second;


int a[] = {11, 1, 4, -3, 22};



int main() {
  if (a[0] > a[1]) {
    large = a[0];
    second = a[1];
  }
  else {
    large = a[1];
    second = a[0];
  }

  for (int i = 2; i < n; i++) { 
    if(a[i] > large){
      second = large;
      large = a[i];
    }
    else if(a[i] > second){
      second = a[i];
    }
  }
  printf("%d", second);

}  


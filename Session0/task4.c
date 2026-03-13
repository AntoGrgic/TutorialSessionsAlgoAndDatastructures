/*

gcc search.c -o search; ./search  # Linux
gcc search.c -o search; ./search  # Windows (UCRT64)
gcc search.c -o search; ./search  # Mac

*/

#include <stdio.h>

#define n 4

int large, second;


int a[n][n] =  {
              {2,4,1,3}, 
              {5,7,8,2}, 
              {9,6,4,1}, 
              {3,8,5,6}
            };


int main() {
  int sum = 0;
  for (int i = 0; i < n; i++) { 
    for (int j = 0; j < n; j++ ){
        if(i == j){
          sum += a[i][j];
        }
    }
  }
  printf("%d", sum);

}  


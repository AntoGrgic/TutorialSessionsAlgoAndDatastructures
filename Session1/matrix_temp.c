/*

gcc matrix.c -o matrix; ./matrix 1 3 2 2  # Linux
gcc matrix.c -o matrix; ./matrix 1 3 2 2  # Windows (UCRT64)
gcc matrix.c -o matrix; ./matrix 1 3 2 2  # Mac

*/

#include <stdio.h>

#define N 2

int m[N][N];
int o[N][N];

int main(int argc, char **argv) {
  int i, j, k;
  
  sscanf(argv[1], "%d", &m[0][0]);     //This has to do with pointers, 
  sscanf(argv[2], "%d", &m[0][1]);     //we'll look it in depth in class no.6
  sscanf(argv[3], "%d", &m[1][0]);
  sscanf(argv[4], "%d", &m[1][1]);

  /* matrix multiplication */
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {
      o[i][j] = 0;
      for (k = 0; k < N; k++) {
        o[i][j] = o[i][j] + m[i][k] * m[k][j];
      }
    }
  }

  /* printing output to terminal */
  printf(" input    output\n");
  for (i = 0; i < N; i++) {
    for (j = 0; j < N; j++) {


      printf("%3d", m[i][j]);    //%3d just means make it at least 3 char long
                                 //ex: m[1][j] = 3  -> "  3"
                                 //ex: m[i][j] = 30 -> " 30"
    }
    printf("    ");    
    for (j = 0; j < N; j++) {
      printf("%3d", o[i][j]);   
    }
    printf("\n");
  }

}

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define m 1000000

int A[m];
int i, j, n, c;

//-----------------------------------------------------

void printA() {
  if (n < 10) {
    printf("A = ");
    for (i = 0; i < n-1; i++) { printf("%d,", A[i]); }
    printf("%d\n", A[n-1]);
  } else {
    printf("(n=%d)\n", n);
  }
}

//-----------------------------------------------------

bool pairSum(int *out_i, int *out_j) {
  for (i = 0; i < n; i++) {
    for (j = i+1; j < n; j++) {
      if (A[i] + A[j] == c) {
        *out_i = i;
        *out_j = j;
        return true;
      }
    }
  }
  return false;
}

//-----------------------------------------------------

bool pairSumSorted(int *out_i, int *out_j) {
  i = 0; j = n - 1;
  while (i < j) {
    if (A[i] + A[j] == c) {
      *out_i = i;
      *out_j = j;
      return true;
    }
    else if (A[i] + A[j] < c) { i++; }
    else { j--; }
  }
  return false;
}

//-----------------------------------------------------

int main(int argc, char **argv) {
  int s, r, pi, pj;
  sscanf(argv[1], "%d", &s);
  sscanf(argv[2], "%d", &r);
  sscanf(argv[3], "%d", &n);
  sscanf(argv[4], "%d", &c);

  srand(s);
  if (r) { A[0] = rand() % (10 * n); } else { A[0] = rand() % 10; }
  for (i = 1; i < n; i++) {
    if (r) {
      A[i] = rand() % (10 * n);
    } else {
      A[i] = A[i-1] + rand() % 10;
    }
  }
  printf("the array was filled with random integers\n");
  printA();

  // measure pairSum runtime
  clock_t start_pairSum = clock();
  int result_pairSum = pairSum(&pi, &pj);
  clock_t end_pairSum = clock();
  double time_pairSum = (double)(end_pairSum - start_pairSum) / CLOCKS_PER_SEC;

  // measure pairSumSorted runtime
  clock_t start_pairSumSorted = clock();
  int result_pairSumSorted = pairSumSorted(&pi, &pj);
  clock_t end_pairSumSorted = clock();
  double time_pairSumSorted = (double)(end_pairSumSorted - start_pairSumSorted) / CLOCKS_PER_SEC;

  if (result_pairSum || result_pairSumSorted) {
    printf("%d and %d add up to %d\n", A[pi], A[pj], c);
  } else {
    printf("no pair adds up to %d\n", c);
  }

  printf("pairSum() execution time: %f seconds\n", time_pairSum);
  printf("pairSumSorted() execution time: %f seconds\n", time_pairSumSorted);

  return 0;
}
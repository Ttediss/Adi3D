//#define _CRT_SECURE_NO_WARNINGS
//#include <omp.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//
//int sum_arr(int *a, const int n) {
//  int sum = 0, i;
//#pragma omp parallel shared(a, i) reduction (+: sum) num_threads(2)
//{
//# pragma omp for
//    for (int i = 0; i < n; ++i)
//      sum += a[i];
//} // #pragma omp parallel
//  return sum;
//}
//
//int main(int argc, char *argv[]) {
//	if (argc < 2) {
//		printf("error arg\n");
//		return 1;
//	}
//	
//  int *a;
//  int n;
//	
//	sscanf(argv[1], "%d", &n);
//
//  a = new int[n];
//
//  srand(time(NULL));
//  for (int i = 0; i < n; ++i)
//    a[i] = rand() % 10;
//
//	printf("ok: %d\n", sum_arr(a, n));
//
//  delete []a;
//}

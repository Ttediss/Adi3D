//#include <stdio.h>
//#include <omp.h>
//
//int main()
//{
//	int i;
//	printf("hello, world!\n");
//	#pragma omp parallel for
//	for (i = 0; i < 1000000; i++)
//		printf("%d ", i);
//	
//	return 0;
//}

//int sum_arr(int* a, const int n) {
//    int sum = 0;
//    #pragma omp parallel shared(a) reduction (+: sum) num_threads(10)
//    {
//        # pragma omp for
//        for (int i = 0; i < n; ++i)
//            sum += a[i];
//    }
//    return sum;
//}

//#include "omp.h"
//#include <iostream>
//int main() {
//    int a[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    int q = 99999;
//    int summ = sum_arr(&q, 99);
//    std::cout << summ ;
//}
//

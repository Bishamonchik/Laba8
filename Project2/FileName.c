//#include <stdio.h> 
//#include <conio.h> 
//
//#define N 10
//
//void main() {
//    int A[N];
//    int positiveIndex = 0;
//
//    // Находим первый положительный элемент 
//    while (positiveIndex < N && A[positiveIndex] < 0) {
//        positiveIndex++;
//    }
//
//    // Перемещаем отрицательные элементы в конец массива 
//    for (int i = positiveIndex + 1; i < N; ++i) {
//        if (A[i] < 0) {
//            // Находим первый положительный элемент после positiveIndex 
//            while (positiveIndex < N && A[positiveIndex] < 0) {
//                positiveIndex++;
//            }
//
//            // Обмениваем элементы 
//            int temp = A[i];
//            A[i] = A[positiveIndex];
//            A[positiveIndex] = temp;
//        }
//    }
//    // Вывод итогового массива 
//    printf("Массив A с отрицательными в конце:\n");
//    for (int i = 0; i < N; ++i) {
//        printf("%d ", A[i]);
//    }
//
//    _getch();
//}
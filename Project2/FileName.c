//#include <stdio.h> 
//#include <conio.h> 
//
//#define N 10
//
//void main() {
//    int A[N];
//    int positiveIndex = 0;
//
//    // ������� ������ ������������� ������� 
//    while (positiveIndex < N && A[positiveIndex] < 0) {
//        positiveIndex++;
//    }
//
//    // ���������� ������������� �������� � ����� ������� 
//    for (int i = positiveIndex + 1; i < N; ++i) {
//        if (A[i] < 0) {
//            // ������� ������ ������������� ������� ����� positiveIndex 
//            while (positiveIndex < N && A[positiveIndex] < 0) {
//                positiveIndex++;
//            }
//
//            // ���������� �������� 
//            int temp = A[i];
//            A[i] = A[positiveIndex];
//            A[positiveIndex] = temp;
//        }
//    }
//    // ����� ��������� ������� 
//    printf("������ A � �������������� � �����:\n");
//    for (int i = 0; i < N; ++i) {
//        printf("%d ", A[i]);
//    }
//
//    _getch();
//}
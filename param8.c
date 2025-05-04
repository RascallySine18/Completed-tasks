/*
!Param8. Описать процедуру RemoveX(A, N, X),
удаляющую из целочисленного массива A размера N элементы,
равные целому числу X. Массив A и число N являются входными и выходными параметрами.
С помощью этой процедуры удалить числа XA, XB, XC из массивов A, B, C
размера NA, NB, NC соответственно и вывести размер и содержимое полученных массивов.
Выполнил Базан Игорь 303ИС-22
04.05.2025
Контрольный пример:
ввод:
5
1 2 3 4 1
1
4
1 2 3 4
3
6
1 2 3 3 3 4
3
вывод:
3 2 3 4
3 1 2 4
3 1 2 4
Время выполнения: ≈15 минут
*/

#include <stdio.h>

void RemoveX(int A[], int* N, int X) {
    int j = 0;
    for (int i = 0; i < *N; i++)
        if (A[i] != X)
            A[j++] = A[i];
    *N = j;
}
int main() {
    int NA, XA;
    scanf("%d", &NA);
    int A[10];
    for (int i = 0; i < NA; i++) scanf("%d", &A[i]);
    scanf("%d", &XA);
    RemoveX(A, &NA, XA);

    int NB, XB;
    scanf("%d", &NB);
    int B[10];
    for (int i = 0; i < NB; i++) scanf("%d", &B[i]);
    scanf("%d", &XB);
    RemoveX(B, &NB, XB);

    int NC, XC;
    scanf("%d", &NC);
    int C[10];
    for (int i = 0; i < NC; i++) scanf("%d", &C[i]);
    scanf("%d", &XC);
    RemoveX(C, &NC, XC);

    printf("%d ", NA);
    for (int i = 0; i < NA; i++) printf("%d ", A[i]);
    printf("\n%d ", NB);
    for (int i = 0; i < NB; i++) printf("%d ", B[i]);
    printf("\n%d ", NC);
    for (int i = 0; i < NC; i++) printf("%d ", C[i]);
    return 0;
}
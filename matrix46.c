/*
!Matrix46. Дана целочисленная матрица размера M ? N.
Найти элемент, являющийся максимальным в своей строке
и минимальным в своем столбце.
Если такой элемент отсутствует, то вывести 0.
Выполнил Базан Игорь 303ИС-22
04.05.2025
Контрольный пример:
ввод:
3 3
1 2 3
3 4 5
6 7 8
вывод - 3
Время выполнения: ≈15 минут
*/

#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);
    int matrix[10][10];
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            scanf("%d", &matrix[i][j]);
    for (int i = 0; i < M; i++) {
        int max_in_row = matrix[i][0];
        int col_index = 0;
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] > max_in_row) {
                max_in_row = matrix[i][j];
                col_index = j;
            }
        }
        int is_min_in_col = 1;
        for (int k = 0; k < M; k++) {
            if (matrix[k][col_index] < max_in_row) {
                is_min_in_col = 0;
                break;
            }
        }
        if (is_min_in_col) {
            printf("%d", max_in_row);
            return 0;
        }
    }
    printf("0");
    return 0;
}
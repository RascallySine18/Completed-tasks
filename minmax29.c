/*
!Minmax29. Дано целое число N и набор из N целых чисел.
Найти максимальное количество подряд идущих минимальных элементов из данного набора.
Выполнил Базан Игорь 303ИС-22
04.05.2025
Контрольный пример:
ввод:
5
1 2 3 1 1
вывод - 2
Время выполнения: ≈13 минут
*/

#include <stdio.h>

int main() {
    int N, num, min, count = 0, max_count = 0;
    scanf("%d", &N);
    scanf("%d", &min);
    count = max_count = 1;
    for (int i = 1; i < N; i++) {
        scanf("%d", &num);
        if (num == min) {
            count++;
            if (count > max_count) max_count = count;
        }
        else if (num < min) {
            min = num;
            count = max_count = 1;
        }
        else {
            count = 0;
        }
    }
    printf("%d", max_count);
    return 0;
}
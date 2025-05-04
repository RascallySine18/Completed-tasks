/*
+Series36. Дано целое число K, а также K наборов ненулевых целых чисел.
Каждый набор содержит не менее двух элементов,
признаком его завершения является число 0.
Найти количество наборов, элементы которых возрастают.
Выполнил Базан Игорь 303ИС-22
04.05.2025
Контрольный пример:
ввод:
5
1 2 0
2 3 1 0
5 4 3 2 0
2 3 4 5 6 0
5 6 7 8 9 10 0
вывод - 3
Время выполнения: ≈13 минут
*/

#include <stdio.h>

int main() {
    int k, count = 0;
    scanf("%d", &k);
    while (k--) {
        int prev, curr, is_increasing = 1;
        scanf("%d %d", &prev, &curr);
        while (curr != 0) {
            if (curr <= prev) is_increasing = 0;
            prev = curr;
            scanf("%d", &curr);
        }
        if (is_increasing) count++;
    }
    printf("%d", count);
    return 0;
}
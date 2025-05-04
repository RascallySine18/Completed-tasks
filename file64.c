/*
!File64. Дан строковый файл.
Создать новый строковый файл,
содержащий все строки исходного файла
наименьшей длины (в том же порядке).
Выполнил Базан Игорь 303ИС-22
04.05.2025
Контрольный пример:
содержимое исходного файла in.txt:
Системное
программирование
на
языке
Си
содержимое нового файла out.txt:
на
Си
Время выполнения: ≈15 минут
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE* in = fopen("in.txt", "r"), * out = fopen("out.txt", "w");
    char s[1000];
    int min = 1000, len, first = 1;
    while (fgets(s, 1000, in)) {
        len = strlen(s);
        if (s[len - 1] == '\n') len--;
        if (first || len < min) min = len;
        first = 0;
    }
    rewind(in);
    while (fgets(s, 1000, in)) {
        len = strlen(s);
        if (s[len - 1] == '\n') len--;
        if (len == min) fputs(s, out);
    }
    fclose(in);
    fclose(out);
    return 0;
}
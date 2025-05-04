/*
!Recur13. Описать рекурсивную функцию Palindrome(S) логического типа,
возвращающую True, если строка S является палиндромом
(т. е. читается одинаково слева направо и справа налево), и False в противном случае.
Оператор цикла в теле функции не использовать.
Вывести значения функции Palindrome для пяти данных строк.
Выполнил Базан Игорь 303ИС-22
04.05.2025
Контрольный пример:
ввод:
кмпо опмк
Кмпо опмк
level
radar
Radar
вывод:
True
False
True
True
False
Время выполнения: ≈15 минут
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool Palindrome(const char* S, int left, int right) {
    if (left >= right) return true;
    if (S[left] != S[right]) return false;
    return Palindrome(S, left + 1, right - 1);
}
int main() {
    char S[101];
    for (int i = 0; i < 5; i++) {
        fgets(S, 100, stdin);
        S[strcspn(S, "\n")] = '\0';
        int len = strlen(S);
        printf("%s\n", Palindrome(S, 0, len - 1) ? "True" : "False");
    }
    return 0;
}
#include <stdio.h>

int main(){
    // Завдання 1: Поділити два цілих числа 5 та 2 і вивести результат як float
    int a = 5;
    int b = 2;
    float division = (float)a/b;
    printf("division = %.1f\n", division);

    // Завдання 2: Оголосити константну змінну типу float та присвоїти їй значення 3.14. Вивести її значення на екран.
    const float pi = 3.14f;
    printf("pi = %.2f \n",pi);


    // Завдання 3: Написати програму, яка оголошує змінну типу char та виводить її ASCII-код.
    char ch = 'A'; // Приклад символу
    printf("ASCII code symbols '%c' = %d\n", ch, ch);

    // Завдання 4: Користувач вводить ціле і дробове число. Виведіть їх суму.
    int num1;
    float num2;
    printf("Enter a whole number and a fractional number: ");
    scanf("%d %f", &num1, &num2);
    printf("Sum: %.2f\n", num1 + num2);

    // Завдання 5: Напишіть програму, яка зчитує символ та виводить наступний символ у таблиці ASCII.
    char inputChar;
    printf("Enter symbols: ");
    scanf(" %c", &inputChar);
    printf("Next symbols: %c\n", inputChar + 1);

    return 0;
}
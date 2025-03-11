#include <stdio.h>

int main(){
    //Завдання 1
    //Створи програму, яка виводить рядок "Hello" на екран
    printf("Hello world!\n");

    //Завдання 2
    //Створи програму, яка оголошує змінну int зі значенням 10 і виводить її на екран
    int a = 10;
    printf("a = %d \n",a);

    //Завдання 3
    //Напиши програму, що оголошує змінну float зі значенням 3.14 і виводить її з двома знаками після коми.
    float b = 3.14f;
    printf("b = %.2f \n",b);

    //Завдання 4
    //Напиши програму, яка додає два цілих числа 5 і 7 і виводить результат.
    int d = 5, p = 7;
    int sum = d + p;
    printf("sum = %d \n", sum);


    //Завдання 5
    //Напиши програму, яка виводить символ табуляції між словами "Hello" і "World"
    printf("Hello \t world! \n");

    //Завдання 6
    //Оголоси змінну float і виведи її з шириною 8 символів і 3 знаками після коми
    float m = 6.19f;
    printf("m = %8.3f \n",m);
    
    //Завдання 7
    //Створи програму, що додає 3.5 і 2.7 і виводить результат.
    float first_number = 3.5;
    float second_number = 2.7;
    printf("Sum = %.1f \n", first_number+second_number);


    //Завдання 8
    //Створи програму, що конвертує температуру з Цельсія в Фаренгейт(формула : F = C * 9 / 5 + 32)
    double t;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &t);
    double F = t * 9 / 5 + 32;
    printf("F = %.1f \n",F);

    //Завдання 9
    //Напиши програму, яка перевіряє, чи є число парним, і виводить "Парне" або "Непарне"
    int new_number;
    printf("Enter number: ");
    scanf("%d", &new_number);
    printf("Your number is %s\n", (new_number % 2) ? "odd" : "even");


    //Завдання 10
    //Напиши програму, яка порівнює два числа і виводить більше з них
    int first__number, second__number;
    printf("Enter first number: ");
    scanf("%d",&first__number);
    printf("Enter second number: ");
    scanf("%d",&second__number);
    if(first__number > second__number){
        printf("The first number is greater. First(greater) number = %d", first__number);
    }
    else if (first__number == second__number)
    {
        printf("The numbers are even.");
    }
    else{
        printf("The second number is greater. Second(greater) number = %d", second__number);
    }
    
    return 0;
}
/*
Калькулятор на языке Си:
Сложение, вычитание, умножение, деление, извлечения корня квадратного из числа,
Деления двух чисел нацело со взятием остатка,
Геометрическая последовательность
@author IVAN
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
@link https://github.com/neolnoel

*/
#include <stdio.h>
#include <math.h>

/*
@return Возвращает код ошибки в систему;
*/
int main() {
    double a, b, d;
    int error;
    char c = 0;
    while(c != 'E') {
        //Обработка ошибок
        switch (error) {
            case -1:
                printf("Ошибка ввода\n");
                break;
            case -2:
                printf("Невозможно разделить на 0!\n");
                break;
            case -3:
                printf("множитель должен быть больше 0!\n");
                break;
            case -4:
                printf("квадратный корень не может быть меньше 0!\n");
                break;
            case -5:
                printf("n не может больше или равно 0!\n");
                break;
        }
        error = 0;
        
    scanf("%lg %c %lg", &a, &с, &b);
    switch (с) {
        case '+':
            printf("%lg + %lg = %lg\n", a, b, a + b);
            break;
        case '-':
            printf("%lg - %lg = %lg\n", a, b, a - b);
            break;
        case '*':
            printf("%lg * %lg = %lg\n", a, b, a * b);
            break;
        case '/':
            d = divide(a, b, &error);
            if (0 == error) printf("%lg / %lg = %lg\n", a, b, d;
            break;
        case 'G':
            computeProgression(a, b, &error);
            break;
        case 'D':
            d = intDivide(a, b, &error);
            if (0 == error) printf("%lg % %lg = %lg\n", a, b, d);
            break;
        case 'S':
            if (a >= 0) printf("%lg S = %lg\n", a, sqrt(a));
            else error = -4;
            break;
        default:
            error = -1;
            break;
    }
}
return 0;
}

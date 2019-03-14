/*
Код с дополнительными и сложными вычислениями
Калькулятор на языке Си:
Сложение, вычитание, умножение, деление, извлечения корня квадратного из числа, 
Деления двух чисел нацело со взятием остатка, геометрическая последовательность
@author IVAN
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
@link https://github.com/neolnoel/1/new/master
*/
#include <stdio.h>

/*
@example (Деление чисел) 3/3=1;
@param (a) делимое, (b) делитель, (*error) код ошибки;
@return a/b||0;
@throws (-2) ошибка деления на 0|*error, (0) ошибок нет;
*/
double divide(double a, double b, int *error)
{
    if(0==b)
    {
        *error=-2;
        return o;
    }
    *error=0;
    return a/b;
}
/*
@example (Деления двух чисел нацело со взятием остатка) 17%3=2;
@param (a) делимое, (b) делитель, (*error) код ошибки;
@return a/b||0;
@throws (-2) ошибка деления на 0|*error, (0) ошибок нет;
*/
double divide(double a, double b, int *error)
{
    if(0==b)
    {
        *error=-2;
        return o;
    }
    *error=0;
    return a/b;
}
/*
@exempl (квадратный корень числа) sqrt(16) = 4;
@param a (подкоренное значение), error (возможные ошибки);
@return sqrt(a)||0;
@throws (-2) ошибка деления на 0|*error, (0) ошибок нет;
*/
double root(double a, int *error){
    if (a > 0){
        *error = 0;
        return sqrt(a);
    }
    *error = 3;
    return 0;      
}

/*
Проектное задание №1.
по консоли и ARGV / ARGC
КЛЬКУЛЯТОР по примеру ввода ./calc ФУНКЦИЯ (y = 9 * x + 7) SET (x = 7)
@author ИВАН
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
@link https://github.com/neolnoel
*/

#include <string.h>
#include <stdio.h>
#include "1cFunction.c"
#include "2cFunction.c"

#define ARGNUM 256

int main(int argc, char *argv[]) {
    int i;
    char argName[ARGNUM];
    int argVal[ARGNUM];
    int argCnt = 0;
    char y, x;
    int a, b;

    for (i = 1; i < argc; i++) {
        if (0 == strncmp(argv[i], "SET", strlen("SET"))) {
            parseSet(argv[i], argName, argVal, &argCnt);
            
        }
        if (0 == strncmp(argv[i], "FUNCTION", strlen("FUNCTION")))
            parseFunction(argv[i], &y, &x, &a, &b);
    }
    computeFunction(argName, argVal, argCnt, a, b, x, y);
    return 0;
}

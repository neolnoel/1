/*
@example FUNCTION(z=8+1*x) |y = z|
@param str(текущий аргумент)
@return 0
@throws -
*/
int getY(char *str, char *y) {
    int i;
    for (i = 9;  i < (int)strlen(str) && str[i] != '='; i++) ;
    if ('(' == str[i-2])
        *y = str[i-1];
    else
        *y = str[i+1];       
    return 0;
}

/*
@example UNCTION(z=8+1*y) |a = 1 , x = y|
@param str(текущий аргумент)
@return 0
@throws -
*/

int getAX(char *str, char *x, int *a) {
    int i;
    for (i = 8; i < (int)strlen(str) && str[i] != '*'; i++) ;
    if (1 == isdigit(str[i+1])){
        *x = str[i-1];
        *a = atoi((char *)(&str[i+1]));
    }
    else {
        *x = str[i+1];
        for (i--; str[i] != '(' && 1 == isdigit(str[i]); i--);
        i++;
        *a = atoi((char *)(&str[i]));
    }
    return 0;
}

/*
@example UNCTION(z=8+1*x) |b = 8|
@param str(текущий аргумент)
@return 0
@throws -
*/
int getB(char *str, int *b) {
    int i;
    for (i = 9; i < (int)strlen(str) && str[i] != '*' && str[i] != '+'; i++) ;
    if ('*' == str[i]){
        for(i++; i < (int)strlen(str) && str[i] != '+'; i++) ;
        *b = atoi((char *)(&str[i+1]));
    }
    else {
        for (i--; str[i] != '(' && 1 == isdigit(str[i]); i--) ;
        *b = atoi((char *)(&str[i+1]));
    }
    
    return 0;
}

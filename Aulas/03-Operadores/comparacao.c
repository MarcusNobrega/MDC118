#include <stdio.h>

int main() {
    int x = 10;
    int y = 30;

    /* maior que */
    printf("x > y? %d\n" , x > y ); // 0 ẽ falso e 1 verdadeiro

    /* menor que */
    printf("x < y? %d\n" , x < y );

    /* igual a */
    printf("x = y? %d\n" , x == y );

    /* maior e igual que */
    printf("x <= y? %d\n" , x >= y ); 

    /* menor e igual que */
    printf("x <= y? %d\n" , x <= y );

    /* menor e igual que */
    printf("x != y? %d\n" , x != y ); // ! operador logico negacao not

    return 0;
}
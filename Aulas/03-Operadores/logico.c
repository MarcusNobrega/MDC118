#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    /* operador E */
    printf("%d\n", x > y); 
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y && x - 10 > y); // falso E qualquer coisa eh falso
    
    /* operador OU */
    printf("%d\n", x > y); 
    printf("%d\n", x - 10 > y);
    printf("%d\n", x > y || x - 10 > y); // falso OU qualquer coisa eh falso

    /* operador NAO */
    printf("%d\n", !(x > y)); 
    printf("%d\n", !(x - 10 > y));
    printf("%d\n", !(x > y || x - 10 > y)); // falso OU qualquer coisa eh falso

    return 0;
} 
    
#include <stdio.h>
#include <string.h>

int main(){

    char sq1[80];
    int sq2, sq3;

    printf("Coloque até 80 números:\n");
    scanf("%[^\n]s",sq1);

    sq2=strlen(sq1);

    for(sq3=sq2;sq3>-1;sq3--){
        printf("%c\n", sq1[sq3]);
    }

    return 0;
}

/* I wrote this on my phone lol. */

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int gen_num(void) {
        return rand() % 999 + 1;
}

char gen_op(void) {
        int i = rand() % 4;
        switch (i) {
                case 0: return '+';
                case 1: return '-';
                case 2: return '*';
                case 3: return '/';
        }

        printf("ok but like how?\n");
}

int main(void) {
        srand(time(0));
        for (int i = 0; i < 25; i++) printf("%d %c %d = ", gen_num(), gen_op(), gen_num());
}

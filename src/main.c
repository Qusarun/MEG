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

char* get_input(void) {
        char* s = malloc(sizeof(char) * 16);
        fgets(s, 16, stdin);
        s[strcspn(s, "\n")] = 0;
        if (!strcmp(s, "exit")) exit(0);
        return s;
}

void equation(void) {
        int i = gen_num(), j = gen_num();
        char c = gen_op();
        int result = c == '+'? i + j : c == '-'? i - j : c == '*'? i * j : i / j;
        printf("%d %c %d = ", i, c, j);
        char* s = get_input();
        if (result == atoi(s))
                printf("Correct.\n");
        else
                printf("Wrong. %d %c %d = %d.\n", i, c, j, result);
}

int main(void) {
        srand(time(0));
        for (;;) equation();
}

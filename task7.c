#include <stdio.h>
#include <stdlib.h>

int main()
{
        unsigned int Q, best_P, best_Q, eq, min;
        int input;
        Q = 1;
        min = ~0;

        do {
                scanf("%d", &input);
        } while (input < 1 || input > 1E6);

        while (Q * Q <= input) {
                for (int P = 1; P <= Q; P++) {
                        eq = abs(input - Q * Q - P * P);
                        if (eq < min) {
                                best_P = P;
                                best_Q = Q;
                                min = eq;
                        }
                }
                Q++;
        }

        printf("%d %d\n", best_P, best_Q);

        return 0;
}

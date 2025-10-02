#include <stdio.h>
#include <math.h>

int main()
{
        unsigned int P, Q, best_P, best_Q, eq, min;
        int input;
        P = Q = 1;
        min = ~0;

        do {
                scanf("%d", &input);
        } while (input < 1 || input > 1E6);

        while (P + Q <= (int)sqrt(input)) {
                for (int i = 1; i < Q; i++) {
                        eq = (int)fabs(input - pow(i, 2) - pow(Q, 2));
                        if (eq < min) {
                                best_P = i;
                                best_Q = Q;
                                min = eq;
                        }
                }
                Q++;
        }

        printf("%d %d\n", best_P, best_Q);

        return 0;
}

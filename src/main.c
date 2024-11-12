#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
    if (argc == 4 || (argc == 3 && strcmp(argv[1], "car") == 0)) {
        char* op = argv[1];
        double r = 0;

        // Cas où l'opération est "add", "sub", "mul", ou "div" (nécessite 3 arguments)
        if (argc == 4) {
            double a = atof(argv[2]);
            double b = atof(argv[3]);

            if (strcmp(op, "add") == 0) {
                r = _add(a, b);
                printf("%lf\n", r);
            } else if (strcmp(op, "sub") == 0) {
                r = _sub(a, b);
                printf("%lf\n", r);
            } else if (strcmp(op, "mul") == 0) {
                r = _mul(a, b);
                printf("%lf\n", r);
            } else if (strcmp(op, "div") == 0) {
                if (b != 0) {
                    r = _div(a, b);
                    printf("%lf\n", r);
                } else {
                    printf("Erreur : Division par zéro\n");
                }
            } else {
                printf("Erreur : Opération inconnue\n");
            }
        }
        // Cas où l'opération est "car" (nécessite 2 arguments)
        else if (argc == 3 && strcmp(op, "car") == 0) {
            double a = atof(argv[2]);
            r = _car(a);
            printf("%lf\n", r);
        } else {
            printf("Erreur : Opération ou nombre d'arguments incorrect\n");
        }
    } else {
        printf("Erreur : Nombre d'arguments incorrect\n");
    }
    return 0;
}


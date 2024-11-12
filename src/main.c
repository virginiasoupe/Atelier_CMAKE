#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./../include/calculator.h"

int main(int argc, char *argv[]) {
	if (argc == 4 || (argc == 3 && strcmp(argv[1], "car") == 0)) {
		char* op = argv[1];
		char* a = argv[2];
		double r = 0;

		if (strcmp(op, "add") == 0) {
			r = _add(atof(a), atof(argv[3]));
			printf("%lf", r);
		}
		else if (strcmp(op, "sub") == 0) {
			r = _sub(atof(a), atof(argv[3]));
			printf("%lf", r);
		}
		else if (strcmp(op, "mul") == 0) {
			r = _mul(atof(a), atof(argv[3]));
			printf("%lf", r);
		}
		else if (strcmp(op, "div") == 0) {
			r = _div(atof(a), atof(argv[3]));
			printf("%lf", r);
		}
		else if (strcmp(op, "car") == 0) {
			r = _car(atof(a));
			printf("%lf", r);
		}
		else {
			printf("Erreur de parametres");
		}
	} else {
		printf("Erreur de parametres");
	}
	return 0;
}

	else {printf("Erreur de parametres");}
	return 0;
}

		

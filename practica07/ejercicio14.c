#include <stdio.h>

/*
INSTRUCCIONES:
Completa:
- switch
- operaciones
- validación de división por cero
*/

int main() {
    int a, b, op, c;
    float d;
    printf("Ingrese dos numeros (a b): ");
    scanf("%d %d", &a, &b);

    printf("Seleccione la operacion a realizar\n");
    printf("1.Suma 2.Resta 3.Multiplicacion 4.Division\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("%d\n", c=a+b);
            break;
        case 2:
            printf("%d\n",c=a-b);
            break;
        case 3:
            printf("%d\n", c=a*b);
            break;
        case 4:
            if (b==0) {
                printf("Error: division por cero\n");
            } else {
                printf("%.2f\n", d=(float)a/(float)b);
            }
            break;
    }

    return 0;
}

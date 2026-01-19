#include <stdio.h>
#include <math.h>

int main(void)
{

    int a, b, c;
    float x, x0, x1, x2, delta;
        printf("----------Résolution de l'équation du second degré---------\n Une équation du second degré est sous la forme de ax²+bx+c=0\n");

        printf("Veuillez entrer a, a = ");
        scanf("%d", &a);

        printf("Veuillez entrer b, b = ");
        scanf("%d", &b);

        printf("Veuillez entrer c, c = ");
        scanf("%d", &c);

        printf("Votre équation est %dx² + %dx + %d = 0\n", a, b, c);

        

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Toutes les valeurs de x sont solutions\n");
            } else {
                printf("Pas de solution\n");
            }
        } else {
            printf("Une solution : x = %f\n", -c / b);
        }
    } else {
        delta = pow(b,2) - 4 * a * c;
        printf(" delta = %.2f\n", delta);
        if (delta > 0) {
            printf("Deux solutions réelles :\n");
            printf("x1 = %f\n", (-b + sqrt(delta)) / (2 * a));
            printf("x2 = %f\n", (-b - sqrt(delta)) / (2 * a));
        } else if (delta == 0) {
            printf("Une solution réelle :\n");
            printf("x = %f\n", -b / (2 * a));
        } else {
            printf("Pas de solution réelle\n");
        }
    }
    return(0);
}
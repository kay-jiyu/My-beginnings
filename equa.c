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

        if (a == 0 && b == 0){
            printf("L'équation n'admet pas de solution.\nSoit SR l'ensemble des solutions dans R, SR:{ }\nMerci d'avoir utilisé ce programme.");
        }
        else if(a == 0){
            x = -c/b;
            printf("L'equation admet une solution unique x = %.1f, soit SR l'ensemble des solutions dans R, SR:{%.1f}", x ,x);
        }

        
        if (a != 0){
            delta = pow(b,2)-(4*a*c);
            printf("Δ= %2.f\n", delta);
        }

        if (delta > 0 && a != 0){
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            printf("Δ>0 alors l'équation admet deux solutions distinctes X1 et X2 telles que X1= %f et X2= %f\nSoit SR l'ensemble des solutions dans R, SR:{%f;%f}\nMerci d'avoir utilisé ce programme.", x1, x2, x1, x2); 
        }
        else if(delta == 0 && a != 0){
            x0 = (-b)/(2*a);
            printf("Δ= %2.f, alors l'équation admet une solution unique X0 telle que X0= %.2f\nSoit SR l'ensemble des solutions dans R, SR:{%.2f}\nMerci d'avoir utilisé ce programme.", delta, x0, x0);
        }

        else if(delta < 0 && a != 0){
            printf("Δ<0, alors l'équation n'admet aucune solution dans R\nSoit SR l'ensemble des solutions dans R, SR:{ }\nMerci d'avoir utilisé ce programme.");
        }
    return(0);
}
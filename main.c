#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c;
	printf("Entrer A : ");    
	scanf("%d", &a);
    printf("Entrer B : ");    
	scanf("%d", &b);
    printf("Entrer C : ");    
	scanf("%d", &c);
    
    int d = b*b - (4*a*c);

    double s1,s2;

    printf("\n\n");
    printf("La valeur de A = %d\n", a);
    printf("La valeur de B = %d\n", b);
    printf("La valeur de C = %d\n", c);

    if(d>0){
        s1 = (-b - sqrt(d)) / (2*a);
        s2 = (-b + sqrt(d)) / (2*a);

        printf("Solution 1 = %.1f\n", s1);
        printf("Solution 2 = %.1f\n", s2);
    }
    else if(d==0){
        s1 = -b / (2*a);
        printf("Solution = %.1f\n", s1);
    }
    else{
        printf("Pas de solution");
        return 1;
    }

    //int ma_valeur = 4;
    //double r = sqrt(ma_valeur);
    //printf("La racine de %d est : %.3f\n", ma_valeur, r);

    return 0;
}


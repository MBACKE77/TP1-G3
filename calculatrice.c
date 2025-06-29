//directive de compilation par saliou
#define PI 3.14
#ifdef DEBUG
    printf("Mode debug activé\n");
#endif

//foction de soustraction par Diakhoumpa
int soustraction(int a, int b) {
    return a - b;
}


//fonction de Multiplication pat Rayan
int multiplication(int a, int b) {
    return a * b;
}

// fonction de division par Saliou
float division(int a, int b) {
    if (b == 0) {
        printf("Erreur : division par zéro\n");
        return 0;
    }
    return (float)a / b;
}

// fonction d'addition par Diakhoumpa
int addition(int a, int b) {
    return a + b;
}

// fonction de puissance par Rayan
int puissance(int base, int exposant) {
    int resultat = 1;
    for(int i = 0; i < exposant; i++) {
        resultat *= base;
    }
    return resultat;
}
//Méthode main par Saliou
#include <stdio.h>

int main() {
    int a = 10, b = 2;

    printf("Addition : %d + %d = %d\n", a, b, addition(a, b));
    printf("Soustraction : %d - %d = %d\n", a, b, soustraction(a, b));
    printf("Multiplication : %d * %d = %d\n", a, b, multiplication(a, b));
    printf("Division : %d / %d = %.2f\n", a, b, division(a, b));
    printf("Puissance : %d ^ %d = %d\n", a, b, puissance(a, b));

    return 0;
}
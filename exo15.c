#include <stdio.h>
#include <stdlib.h>
int somme(int *tab, int taille){
    int j = 0, r = 0, tmp = 0;
    tmp = tab[0];
    for (j = 1 ; j < taille ; j++)
    {  
        r = tmp + tab[j];
        tmp = tab[j];
    }
    return r;
}

int produit(int *tab2, int taille2){
    int k = 0, r2 = 0, tmp2 = 0;
    tmp2 = tab2[0];
    for (k = 1 ; k < taille2 ; k++)
    {  
        r2 = tmp2 * tab2[k];
        tmp2 = tab2[k];
    }
    return r2;
}

int main(int argc, char *argv[])
{
    int nombreDElements = 0, i = 0, rSomme = 0, rProduit = 0;
    int* nombre = NULL;

    printf("Combien de nombres dans le tableau ? ");
    scanf("%d", &nombreDElements);

    if (nombreDElements > 0)
    {
        nombre = malloc(nombreDElements * sizeof(int));
        if (nombre == NULL)
        {
            exit(0); // On arrête tout
        }

        // On demande l'âge des amis un à un
        for (i = 0 ; i < nombreDElements ; i++)
        {
            printf("Quel est l'élément du tableau numero %d ? ", i + 1);
            scanf("%d", &nombre[i]);
        }

        rSomme = somme(nombre, nombreDElements);
        rProduit = produit(nombre, nombreDElements);
        printf("Somme des éléments du tableau %d ? ", rSomme);
        printf("Produit des éléments du tableau %d ? ", rProduit);
        // On libère la mémoire allouée avec malloc, on n'en a plus besoin
        free(nombre);
    }

    return 0;
}
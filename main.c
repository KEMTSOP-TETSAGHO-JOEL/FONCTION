#include <stdio.h>
#include "lib.h"

int main(void)
{
    
    int nbr_enseignant = 0;
    char sexe[10];
    /*
    int result = power( 2, 3 );
    printf( "2^3 == %d\n", result );
    result = fact( 6 );
    printf( "6! == %d\n", result );
    /*************************************************/

    
    //result = addition( 3 /* counter */, 4, 5, 6 );
    /*
    printf( "addition( 3, 4, 5, 6 ) = %d\n", result ); /* 15 */
    /*
    Bonjour();
    inverse_nombre_trois_chiffre(122);
    produit(4,5);
    is_even_odd(12);
    compare(12,5);
    afficher_entier_croissant(12,9,923);
    char chaine1[] = "toto";
    char chaine2[] = "tata";

    printf("\nAvant la permutation:\nchaine1 = %s, chaine2 =%s", chaine1,chaine2);
    permuter_char(chaine1,chaine2);
    printf("\nApres la permutation:\nchaine1 = %s, chaine2 =%s", chaine1,chaine2);
    printf("La somme de 40 + 16 est %d", Somme(40,16));
    */
    
    /*
    printf("\n****************************************************************************************\n");


    printf("Combien d'enseignants avez vous dans votre tableau:\n");
    scanf("%d", &nbr_enseignant);

    Enseignant *tab_enseignant;
    tab_enseignant = malloc(sizeof(*tab_enseignant) * nbr_enseignant);
    Enseignant ens = {"24ENSPM710", "kader","abdel","assistant", "masculin"};

    creer_vecteur_enseignant(tab_enseignant,nbr_enseignant);
    printf("_______________Liste total d'enseignant:_______________\n");
    for (int i = 0; i < nbr_enseignant; i++)
        {
            printf("[\n");
            printf("CODE : %s\n", tab_enseignant[i].code);
            printf("NOM :%s\n", tab_enseignant[i].nom);
            printf("PRENOM :%s\n", tab_enseignant[i].prenom);
            printf("GRADE :%s\n", tab_enseignant[i].grade);
            printf("SEXE :%s\n", tab_enseignant[i].sexe);
            printf("]\n");

        }

    is_exist_teacher(tab_enseignant,nbr_enseignant, ens);

    printf("Vous voulez obtenir la liste d'enseignant de quelle sexe?\n");
    scanf("%s", sexe);

    afficher_liste_enseignant_par_sexe(tab_enseignant,nbr_enseignant,sexe);
    


    free(tab_enseignant);
    */

    int tab[5] = {23,4,2,1,3};
    afficher_tab(tab,5);
    tri_tableau_insertion(tab,5);
    printf("\n Tri a insertion\n");
    afficher_tab(tab,5);
    return 0;
}


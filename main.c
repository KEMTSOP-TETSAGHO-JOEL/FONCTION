#include <stdio.h>
#include "lib.h"

int main(void)
{
    int result = power( 2, 3 );
    printf( "2^3 == %d\n", result );
    result = fact( 6 );
    printf( "6! == %d\n", result );
    /*************************************************/

    result = addition( 3 /* counter */, 4, 5, 6 );
    printf( "addition( 3, 4, 5, 6 ) = %d\n", result ); /* 15 */
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
    printf("\n****************************************************************************************\n");

    Enseignant tab_enseignant[4];
    Enseignant ens = {"24ENSPM710", "kader","abdel","assistant", "masculin"};

    creer_vecteur_enseignant(tab_enseignant,4);
    is_exist_teacher(tab_enseignant,4, ens);
    afficher_liste_enseignant_par_sexe(tab_enseignant,4,"masculin");
    



    return 0;
}
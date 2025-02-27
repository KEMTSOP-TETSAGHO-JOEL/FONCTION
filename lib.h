#ifndef __LIB__H__
#define __LIB__H__

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <stdarg.h>

    typedef enum Bool
    {
        False,
        True
    }Bool;

    typedef struct Enseignant
    {
        char code[20];
        char nom[20];
        char prenom[20];
        char grade[25];
        char sexe[10];
    }Enseignant;
    


    //Definition de prototype de fonction
    unsigned int fact( unsigned int value );
    int power( int value, unsigned int pow );
    int addition( int counter, ... ); 
    void Bonjour(void);
    void inverse_nombre_trois_chiffre(int nombre);
    float produit(float nombre1, float nombre2);
    void is_even_odd(int nombre);
    void compare(int a, int b);
    void afficher_entier_croissant(int nombre1,int nombre2, int nombre3);
    void permuter_char(char *chaine1, char *chaine2);
    int Somme(int nombre1,int nombre2);

    void creer_vecteur_enseignant(Enseignant tab_enseignant[], int taille_tab);
    void is_exist_teacher(Enseignant tab_enseignant[],int taille_tab, Enseignant ens);
    void afficher_liste_enseignant_par_sexe(Enseignant tab_enseignant[],int taille_tab, char sexe[]);
    void afficher_tab(int *tab, int size_tab);
    void tri_tableau_bulle(int *tab, int size_tab);
    void tri_tableau_insertion(int *tab, int size_tab);
    int partition(int tab[], int low, int high);
    void tri_tableau_rapide(int tab[], int low, int high); 



#endif


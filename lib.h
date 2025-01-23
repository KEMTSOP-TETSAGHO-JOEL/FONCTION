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



#endif


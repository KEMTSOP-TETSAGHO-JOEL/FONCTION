#include "lib.h"

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) 
{
    unsigned int result = 1;
    while ( value > 1 ) {
    result *= value;
    value --;
}
 return result;
}
/******************************************************************/
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) 
{
    if ( pow == 0 ) return 1;
    if ( pow == 1 ) return value;
    int accumulator = 1;
    while( pow > 0 ) {
    accumulator *= value;
    pow--;
}
 return accumulator;
}
/******************************************************************/
//Definition d'une fonction d'addition de nombre
int addition( int counter, ... ) 
{
    int sum = 0;
    va_list parametersInfos;
    /* Initialize the va_list structure */
    va_start( parametersInfos, counter );
    /* for all unnamed integer, do an addition */
    while( counter > 0 ) 
    {
        /* Extraction of the next integer */
        sum += (int) va_arg( parametersInfos, int );
        counter --;
    }
    /* Release va_list resources */
    va_end( parametersInfos );
    return sum;
}
/******************************************************************/
void Bonjour(void)
{
    printf("Bonjour");
}
/******************************************************************/

void inverse_nombre_trois_chiffre(int nombre)
{
    while (nombre <20 || nombre > 999)
    {
        printf("Entrer un nombre a 03 chiffres:\n");
        scanf("%d", &nombre);
    }
    int inverse = 0;
    int temp = nombre;
    while (nombre != 0)
    {
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }

    printf("\nL'inverse du nombre (%d) entre est : %d\n",temp, inverse);

}
/******************************************************************/
float produit(float nombre1, float nombre2)
{
    printf(" (%.3f) * (%.3f) = %.3f\n", nombre1,nombre2,nombre1*nombre2);
    return nombre1*nombre2;
}
/******************************************************************/
void is_even_odd(int nombre)
{
    if ((nombre % 2) == 0)
        printf("%d est paire\n", nombre);
    else
        printf("%d est impaire\n", nombre);
}
/******************************************************************/
void compare(int a, int b)
{
    if ((a-b)>0)
        printf("%d > %d", a,b);   
    else if(a-b == 0)
        printf("%d = %d", a,b);  
    else
        printf("%d < %d", a,b); 
}
/******************************************************************/
void afficher_entier_croissant(int nombre1,int nombre2, int nombre3)
{
    if (nombre1 < nombre2 && nombre2 < nombre3)
        printf("\nLes nombres saisie dans l'ordre croissant :\n%d < %d < %d",nombre1,nombre2,nombre3);
    else if (nombre1 < nombre2 && nombre3 < nombre2)
        printf("\nLes nombres saisie dans l'ordre croissant :\n%d < %d < %d",nombre1,nombre3,nombre2);
    else if (nombre2 < nombre1 && nombre1 < nombre3)
        printf("\nLes nombres saisie dans l'ordre croissant :\n%d < %d < %d",nombre2,nombre1,nombre3);
    else if (nombre2 < nombre3 && nombre3 < nombre1)
        printf("\nLes nombres saisie dans l'ordre croissant :\n%d < %d < %d",nombre2,nombre3,nombre1);
    else if (nombre3 < nombre1 && nombre1 < nombre2)
        printf("\nLes nombres saisie dans l'ordre croissant :\n%d < %d < %d",nombre3,nombre1,nombre2);
    else if (nombre3 < nombre2 && nombre2 < nombre1)
        printf("\nLes nombres saisie dans l'ordre croissant :\n%d < %d < %d",nombre3,nombre2,nombre1);
    else
        printf("\nLes nombres saisie dans l'ordre croissant :\n%d = %d = %d",nombre3,nombre2,nombre1);
    
}
/******************************************************************/
void permuter_char(char *chaine1, char *chaine2)
{
    //int taille_chain1 = strlen(chaine1);
    //int taille_chain2 = strlen(chaine2);

   

    char *temp = malloc(strlen(chaine1) + 1);
    strcpy(temp, chaine1);
    strcpy(chaine1, chaine2);
    strcpy(chaine2, temp);


    
    free(temp);
    
}
/******************************************************************/
int Somme(int nombre1,int nombre2)
{
    return nombre1 + nombre2;
}
/******************************************************************/
void creer_vecteur_enseignant(Enseignant tab_enseignant[], int taille_tab)
{
    int i;

    for (i = 0; i < taille_tab; i++)
        {
            printf("Entrer le code de l'enseignat(%d) :\n", i+1);
            scanf("%s",tab_enseignant[i].code);

            printf("Entrer le nom de l'enseignat(%d) :\n", i+1);
            scanf("%s",tab_enseignant[i].nom);

            printf("Entrer le prenom de l'enseignat(%d) :\n", i+1);
            scanf("%s",tab_enseignant[i].prenom);

            printf("Entrer le grade de l'enseignat(%d) :\n", i+1);
            scanf("%s",tab_enseignant[i].grade);

            printf("Entrer le sexe de l'enseignat(%d) :\n", i+1);
            scanf("%s",tab_enseignant[i].sexe);

        }
}
/******************************************************************/
void is_exist_teacher(Enseignant tab_enseignant[],int taille_tab, Enseignant ens)
{
    int k = 0;
    for (int i = 0; i < taille_tab; i++)
        {
            if (strcmp(tab_enseignant[i].code , ens.code) == 0)
                k++;
       
        }
    if (k == 0)
        printf("L'enseignant n'existe pas\n");
    else
        printf("L'enseignant existe \n");
}
/******************************************************************/
void afficher_liste_enseignant_par_sexe(Enseignant *tab_enseignant,int taille_tab, char sexe[])
{
    printf("_______________Les enseignants de sexe %s sont:_______________\n",sexe);
    for (int i = 0; i < taille_tab; i++)
        {
            if (strcmp(tab_enseignant[i].sexe,sexe) == 0)
                {
                    printf("[\n");
                    printf("CODE : %s\n", tab_enseignant[i].code);
                    printf("NOM :%s\n", tab_enseignant[i].nom);
                    printf("PRENOM :%s\n", tab_enseignant[i].prenom);
                    printf("GRADE :%s\n", tab_enseignant[i].grade);
                    printf("]\n");

                }
        }

}
/******************************************************************/
void afficher_tab(int *tab, int size_tab)
{
    for (int i = 0; i < size_tab; i++)
        printf("tab[%d] = %d\n", i+1, tab[i]);
}
/******************************************************************/
void tri_tableau_bulle(int *tab, int size_tab)
{
    int i,j,temp;
    for (i = size_tab-1; i > 0; i--)
        for(j = 0; j< i; j++)
            {
                if (tab[j] > tab[j+1])
                    {
                        temp = tab[j];
                        tab[j] = tab[j+1];
                        tab[j+1] = temp;
                    }
            }
}
/******************************************************************/
void tri_tableau_insertion(int *tab, int size_tab)
{
    for (int i = 1; i < size_tab; i++) {
        int key = tab[i];
        int j = i - 1;

        // Déplacer les éléments de tab[0..i-1] qui sont plus grands que key
        while (j >= 0 && tab[j] > key) {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = key;
    }
}
/******************************************************************/

int partition(int tab[], int low, int high) 
{
    int pivot = tab[high]; // le dernier élément comme pivot
    int i = (low - 1); // index du plus petit élément

    for (int j = low; j < high; j++) {
        // Si l'élément courant est plus petit que le pivot
        if (tab[j] < pivot) {
            i++; // incrémenter l'index du plus petit élément
            int temp = tab[i];
            tab[i] = tab[j];
            tab[j] = temp;
        }
    }
    // Échanger le pivot avec l'élément à l'index i + 1
    int temp = tab[i + 1];
    tab[i + 1] = tab[high];
    tab[high] = temp;
    return (i + 1);
}
/******************************************************************/
// Fonction pour le tri rapide
void tri_tableau_rapide(int tab[], int low, int high) 
{
    if (low < high) {
        // partitionner le tableau
        int pi = partition(tab, low, high);

        // trier les éléments séparément avant et après la partition
        tri_tableau_rapide(tab, low, pi - 1);
        tri_tableau_rapide(tab, pi + 1, high);
    }
}
/******************************************************************/
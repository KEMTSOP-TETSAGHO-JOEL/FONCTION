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


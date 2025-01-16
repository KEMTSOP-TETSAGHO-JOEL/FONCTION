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


    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
}//end function

char* reverse( char str1[] ) {
    char *output ;
    int N = 999, i ;
    printf( "Enter str1 : " ) ;
    gets( str1 ) ;
    for( i = 0 ; i < N ; i++ ) if( str1[i] == '\0' ) break ;
    N = i ;
    output = new char[ N + 1 ] ;
    for( i = 0 ; i < N ; i++ ) output[ i ] = str1[ N - i - 1 ] ;
    output[i] = '\0' ;
    printf( "FUNC : %s\n", output ) ;
    return output ;
}

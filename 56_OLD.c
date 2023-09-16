#include <stdio.h>
#include <stdlib.h>

int** merge(int** intervals, int intervalsSize, int *intervalsColSize, int* returnSize, int** returnColumnSizes);

int main () {
    int **entry = ( int** ) malloc( 4 * sizeof( int* ) );
    for ( int i = 0; i < 4; i++ ) {
        entry[ i ] = ( int* ) malloc ( 2 * sizeof( int ) );
    }
    entry[ 0 ][ 0 ] = 1;
    entry[ 0 ][ 1 ] = 3;
    entry[ 1 ][ 0 ] = 2;
    entry[ 1 ][ 1 ] = 6;
    entry[ 2 ][ 0 ] = 8;
    entry[ 2 ][ 1 ] = 10;
    entry[ 3 ][ 0 ] = 15;
    entry[ 3 ][ 1 ] = 18;

    int intervalsColSize = 2;
    int **result = merge ( entry, 4, &intervalsColSize, *entry, entry);
    for ( int i = 0; i < 4; i++ ) {
        for ( int i2 = 0; i2 < 2; i2++ ) {
            printf( "%d ", result[i][i2] );
        }
        printf( "\n" );
    }
}

int** merge(int** intervals, int intervalsSize, int *intervalsColSize, int* returnSize, int** returnColumnSizes){

    int **result = ( int** ) malloc( intervalsSize * sizeof( int* ) );
    for ( int i = 0; i < intervalsSize; i++ ) {
        result[ i ] = ( int* ) malloc ( 2 * sizeof( int ) );
    }

    for ( int i = 1; i < intervalsSize; i++ ) {
        if ( intervals[ i ][ 0 ] <= intervals[ i - 1 ][ 1 ] ) {
            result[ i - 1 ][ 0 ] = intervals[ i - 1 ][ 0 ];
            result[ i - 1 ][ 1 ] = intervals[ i ][ 1 ];
        } else {
            result[ i - 1 ][ 0 ] = intervals[ i - 1 ][ 0 ];
            result[ i - 1 ][ 1 ] = intervals[ i - 1 ][ 1 ];
        }
    }
    *returnColumnSizes = result[0];
    *returnSize = sizeof(result) / sizeof( int );

    return result;
}
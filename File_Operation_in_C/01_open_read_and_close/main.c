
// C program to Open a File,
// Read from it, And Close the File

# include <stdio.h>
# include <string.h>

int main( )
{


    FILE *filePointer ;


    char dataToBeRead[50];

    filePointer = fopen("test.c", "r") ;


    if ( filePointer == NULL )
    {
        printf( "test.c file failed to open." ) ;
    }
    else
    {

        printf("The file is now opened.\n") ;

        while( fgets ( dataToBeRead, 50, filePointer ) != NULL )
        {

            // Print the dataToBeRead
            printf( "%s" , dataToBeRead ) ;
        }


        fclose(filePointer) ;

        printf("Data successfully read from file test.c\n");
        printf("The file is now closed.") ;
    }
    return 0;
}

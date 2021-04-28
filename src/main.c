#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declare function defined in asm
int procedure(char* c1);

int main() {

    // declare input characters and result
    //char str1[20], str2[20];
    //char *strpt1 = &str1, strpt2 = &str2;

    char *str = (char*) malloc(20);
    strcpy(str, "4");

    // get the input character from stdin
    /*printf("Please enter two words.\n");
    if (!fgets(str1, 20, stdin)){// || !fgets(str2, 20, stdin)) {
        return -1;
    }*/

    // run the procedure and place value in r
    int r = procedure(str);

    // print the result
    printf("The result is %d\n", r);
    
    // free memory
    free(str);

    // return success code 0
    return 0;
}

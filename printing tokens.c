#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    if (s == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    
    char *token = strtok(s, " ");  
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");  
    }
    free(s);
    return 0;
}

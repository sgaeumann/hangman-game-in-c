#include "function.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* chooseMysteryWord(char* words[]) {
    const int i= rand()%NBR_OF_WORDS;
    return words[i];
}

int fillResponseTab(char* wordToGuess, char* responseTab) {
    char letter;
    int t=0;
    printf("Guess one character (lowercase) of the mystery word:");
    scanf("%c", &letter);
    fflush(stdin); //or else he keeps the return and the printf appears two times
        int j=0, match=0;
        for (j=0;j< strlen(wordToGuess);j++) {
            if (wordToGuess[j]==letter) {
                responseTab[j]=letter;
                match++;
            }
        }
        printf("%s\n", responseTab);
        if (match!=0) {
            return 0;
        } else {
            return 1;
        }
}

int hasWon(char* wordToGuess, char* responseTab) {
    int i=0;
    for (i=0;i< strlen(wordToGuess);i++) {
        if (wordToGuess[i]!=responseTab[i]) {
            return 0;
        }
    }
    return 1;
}

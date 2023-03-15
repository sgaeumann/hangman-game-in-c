#include <stdio.h>
#include "function.h"
#include <string.h>
#include <time.h>
#include <stdlib.h>

int main() {
    printf("\n====================== The Hangman ======================\n");

    char * words[NBR_OF_WORDS]={"kitten","family","guitar","luxury","island"};

    //choose word to guess
    srand(time(0)); //time seed to pick a new word each time
    const char* wordToGuess = chooseMysteryWord(words); //pick a word to guess stocked in char WordToGuess
    int wordToGuessLength;
    wordToGuessLength=strlen(wordToGuess);

    //initialize responseTab
    int i=0;
    char responseTab[wordToGuessLength];
    for (i=0;i<wordToGuessLength;i++){ //Set responseTab to '_'
        responseTab[i]='_';
    }

    //
    int incorrect=0;
    while (incorrect<NBR_OF_TRIES){ //game stops after x tries defined by NBR_OF_TRIES
        if (fillResponseTab(wordToGuess, responseTab)) {
            incorrect=incorrect+1;
        }
        //checks if player has won
        if (hasWon(wordToGuess, responseTab)) {
            printf("Congratulations! You have won.");
            break;
        }
    }
    if (!hasWon(wordToGuess, responseTab)) {
        printf("You lost!");
    }
    return 0;
}

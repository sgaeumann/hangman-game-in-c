#ifndef TP5_EXO8_FUNCTION_H
#define TP5_EXO8_FUNCTION_H

char* chooseMysteryWord(char* words[]); //chooses randomly word from the given word list and returns it

int fillResponseTab(char* wordToGuess, char* responseTab); //plays one try. returns 1 if incorrect guess, otherwise 0.

int hasWon(char* wordToGuess, char* responseTab); //checks if player has won

#endif //TP5_EXO8_FUNCTION_H

#define NBR_OF_TRIES 8
#define NBR_OF_WORDS 5
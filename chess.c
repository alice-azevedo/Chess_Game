#include <stdio.h>

//Create the Translator Function 
void translator(int language, int *message) {
        const char *dictionary[2][2] = { //create the language*message table

            { //English table
                "Welcome to my chess game",
                "You've chosen English",
            },

            { //Portuguese table
                "Bem-Vindo ao meu jogo de Xadrez",
                "Voce escolheu Portugues",
            }


        };

        printf("%s\n", dictionary[language][*message]); //ptints message in the language chosen
        (*message)++; //changes message to the next one possible
};


int main(void) {
    int language, message = 0; //declare necessary variables

    printf("0-English\n1-Portugues\n");
    scanf("%d", &language); //user choses the language it wants to paly on

    if (language < 0 || language > 1) { //checks if user's answer is valid
        printf("Invalid choice. Please choose 0 for English or 1 for Portugues.\n");
        return 1;
    }

    translator(language, &message); 
    translator(language, &message);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Create the Translator Function 
void translator(int language, int *message) {
    const char *dictionary[2][4] = { //create the language*message table

        { //English table
            "Welcome to my chess game",
            "You've chosen English",
            "Do you know how to play?(0-Yes; 1-No)",
        },

        { //Portuguese table
            "Bem-Vindo ao meu jogo de Xadrez",
            "Voce escolheu Portugues",
            "Voce sabe jogar?(0-Sim; 1-Não)",
        }

    };

    printf("%s\n", dictionary[language][*message]); //ptints message in the language chosen
    (*message)++; //changes message to the next one possible
};

void rules(int language) {
    if (language == 0) {
        printf("#### CHESS RULES ####\n\n");
        printf("1. How pieces Move\n");
        printf(">Pawns (P): Can move foward one square at a time;\n");
        printf("\t\tExcept on its first move, in which it can move foward two squares\n");
        printf("\t\tCan only capture diagonally\n");
        printf(">Rooks (R): Can move as many squares as you want horizontally and vertically\n");
        printf(">kNights (N): Can move two squares to any in one direction and then\n ");
        printf("\t\t Moves at a 90 degree angle to another direction L shape\n");
        printf(">Bishop (B): Can move as many squares as you want diagonally\n");
        printf(">Queen (Q): Can move as many squares as you want in any direction\n");
        printf(">King (K): Can move only one square in any direction\n\n");
        printf("2. Special Moves\n");
        printf(">Promote Pawn: if a pawn crosses the board and reaches the last square on the\n");
        printf("\t\t other side, it can become any piece, except the King\n");
        printf(">Castle: the king can move two squares to one side, and the rook can 'jump over'\n");
        printf("\t\t the king and land on its other side\n");
        printf(">>Casteling Rules:\n");
        printf("It must be the king's first move\n");
        printf("It must be that rook's very first move\n");
        printf("There cannot be any pieces between the king and rook to move\n");
        printf("The king may not be in check or pass through check\n");
        printf(">En Passant: If a pawn moves out two squares on its first move,\n ");
        printf("\t\t and by doing so lands to the side of an opponent's pawn (effectively\n");
        printf("\t\t jumping past the other pawn's ability to capture it), that other pawn has\n");
        printf("\t\t the option of capturing the first pawn as it passes by.\n\n");
        printf("3. How to win\n");
        printf(">Check: When the King is threatened but can run away\n");
        printf(">Check Mate: When the king is threatened and can't move without getting captured\n");
        printf(">Draw: if there's no more possible moves for either player\n");
        printf(">The King Must move if it's threatened\n");
    }
    else {
        printf("#### Regras Xadrez ####\n\n");
        printf("1. Como as pecas se movem\n");
        printf(">Peoes (P): Podem mover-se uma casa para frente por vez;\n");
        printf("\t\tExceto no primeiro movimento, quando podem mover-se duas casas para frente\n");
        printf("\t\tSo podem capturar na diagonal\n");
        printf(">Torres (R): Podem mover-se quantas casas quiser horizontalmente e verticalmente\n");
        printf(">Cavalos (N): Podem mover-se duas casas em uma direcao e depois\n");
        printf("\t\tMover em um angulo de 90 graus em outra direcao, formando um L\n");
        printf(">Bispos (B): Podem mover-se quantas casas quiserem na diagonal\n");
        printf(">Rainha (Q): Podem mover-se quantas casas quiserem em qualquer direcao\n");
        printf(">Rei (K): So pode mover-se uma casa em qualquer direcao\n\n");
        printf("2. Movimentos Especiais\n");
        printf(">Promocao do Peao: Se um peao atravessa o tabuleiro e chega a ultima casa do\n");
        printf("\t\toutro lado, ele pode se transformar em qualquer peca, exceto o Rei\n");
        printf(">Roque: O rei pode mover-se duas casas para um lado, e a torre pode 'pular por cima'\n");
        printf("\t\tdo rei e parar ao seu lado\n");
        printf(">>Regras do Roque:\n");
        printf("Deve ser o primeiro movimento do rei\n");
        printf("Deve ser o primeiro movimento da torre\n");
        printf("Nao pode haver pecas entre o rei e a torre\n");
        printf("O rei nao pode estar em xeque ou passar por uma casa em xeque\n");
        printf(">En Passant: Se um peao avanca duas casas no seu primeiro movimento,\n");
        printf("\t\te com isso para ao lado de um peao adversario (efetivamente\n");
        printf("\t\tpulando a capacidade de captura do outro peao), esse peao adversario tem\n");
        printf("\t\ta opcao de capturar o peao que passou por ele.\n\n");
        printf("3. Como vencer\n");
        printf(">Xeque: Quando o Rei esta ameacado, mas pode escapar\n");
        printf(">Xeque-Mate: Quando o rei esta ameacado e nao pode se mover sem ser capturado\n");
        printf(">Empate: Se nao houver mais movimentos possiveis para nenhum dos jogadores\n");
        printf(">O Rei deve se mover se estiver ameacado\n"); 
    }
};

int main(void) {
    int language, message = 0, how_play; //declare necessary variables

    printf("0-English\n1-Portugues\n");
    scanf("%d", &language); //user choses the language it wants to paly on

    if (language < 0 || language > 1) { //checks if user's answer is valid
        printf("Invalid choice. Please choose 0 for English or 1 for Portugues.\n");
        return 1;
    }

    translator(language, &message); 
    translator(language, &message);

    translator(language, &message);
    scanf("%d", &how_play);
    
    if (how_play == 0) {
        printf("\nokay");
    }
    else if (how_play == 1) {
        rules(language);
    }
    else {
        printf("please insert a valid number");
    }

    return 0;
}

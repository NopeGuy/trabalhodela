#include "camadadedados.h"
#include <stdlib.h>
#include "board.h"

ESTADO *inicializar_estado() {
    ESTADO *e = (ESTADO *) malloc(sizeof(ESTADO));
    e->jogador_atual = 1;
    e->num_jogadas = 0;
    e->ultima_jogada.linha = 5;
    e->ultima_jogada.coluna = e;
    return e;
}



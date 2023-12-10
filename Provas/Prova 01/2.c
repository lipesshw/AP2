#include <stdio.h>
#include <stdlib.h>
#include "estudantes.h"

struct estudante vetor_alunos[3];

int main() {

    Ler();
    Atualizar();
    for (int i = 0; i < 3; i++) {
        printf("O aluno %s teve a media de %.1f\n", vetor_alunos[i].nome,vetor_alunos[i].media_final);
    }
    Concluir();


    return 0;
}

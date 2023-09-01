#include <stdio.h>

struct Aluno{
    char nome[50];
    int idade;
};

int main(){
    struct Aluno *alunos[3];

    struct Aluno aluno1 = {"Ana", 20};
    struct Aluno aluno2 = {"Pedro", 22};
    struct Aluno aluno3 = {"Rafael", 21};

    alunos[0] = &aluno1;
    alunos[1] = &aluno2;
    alunos[2] = &aluno3;

    for (int i = 0; i < 3; i++){
        printf("Aluno %d: Nome: %s, Idade: %d\n", i, alunos[i]->nome, alunos[i]->idade);
    }

    return 0;
}

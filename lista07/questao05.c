#include <stdio.h>
#include <stdlib.h>

struct professor{
    char nome [80];
};

struct disciplina{
    struct professor docente;
    char nomeDisciplina [80];
};

int main(){
    struct professor p1;
    struct disciplina d1;
    
    printf("Digite o nome do professor: ");
    fgets(p1.nome, 80, stdin);
    d1.docente = p1;

    printf("Digite o nome da disciplina: ");
    fgets(d1.nomeDisciplina, 80, stdin);

    printf("Nome da disciplina: %s\n", d1.nomeDisciplina);
    printf("Nome do professor ligado a disciplina: %s\n", d1.docente.nome);

}
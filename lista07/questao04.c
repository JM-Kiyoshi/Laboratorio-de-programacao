#include <stdio.h>
#include <stdlib.h>

struct aluno{
    float nota1;
    float nota2;
    float media;
};

int main(){
    struct aluno a1;
    struct aluno a2;
    struct aluno a3;

    struct aluno v[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Digite a primeira nota: ");
        scanf("%f", &v[i].nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &v[i].nota2);

        v[i].media = (v[i].nota1 + v[i].nota2) / 2;

        printf("Media: %f\n", v[i].media);
    }
    
    float mediaAlunos = 0;
    for (int i = 0; i < 3; i++)
    {
        mediaAlunos += v[i].media;
    }
    mediaAlunos = mediaAlunos / 3;
    printf("media dos alunos: %f\n", mediaAlunos);
    
}
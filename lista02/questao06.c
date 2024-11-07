#include <stdio.h>

int main(){
    int op = 1;
    int confirma = 0;
    int votosPaulo = 0;
    int votosRenata = 0;
    int votosNulosEBrancos = 0;

    while(op > 0){
        printf("===================\n");
        printf("Candidatos:\n");
        printf("Paulo - 5\n");
        printf("Renata - 7\n");
        printf("Digite o numero do seu candidato: ");
        scanf("%d", &op);

        if(op < 0){
            printf("Votacoes encerradas!\n");
            break;
        }
        switch (op)
        {
        case 5:
            printf("Gostaria de confirmar o Voto em paulo?(1 - sim; diferente de 1 - nao)\n");
            scanf("%d", &confirma);
            if(confirma == 1){
                votosPaulo++;
            }
            break;
        case 7:
            printf("Gostaria de confirmar o Voto em Renata?(1 - sim; diferente de 1 - nao)\n");
            scanf("%d", &confirma);
            if(confirma == 1){
                votosRenata++;
            }
            break;
        default:
            printf("Gostaria de confirmar o Voto nulo/branco?(1 - sim; diferente de 1 - nao)\n");
            scanf("%d", &confirma);
            if(confirma == 1){
                votosNulosEBrancos++;
            }
            break;
        }
    }
    printf("===================\n");
    printf("Votos de Paulo: %d\n", votosPaulo);
    printf("Votos de Renata: %d\n", votosRenata);
    printf("Votos nulos e brancos: %d\n", votosNulosEBrancos);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define INI 0
#define RN 8


void MenuArmarios(unsigned char armarios){
    unsigned char mask = 128;
    printf("===================\n");
    printf("ARMARIOS: \n");
    for(int i = 0; i < 8; i++){
        if((mask & armarios) == mask){
            printf("1 ");
        }
        else{
            printf("0 ");
        }
        mask = mask >> 1;
    }
    printf("\n===================\n");
    printf("\n");
}

void MenuOpcoes(){
    printf("====== MENU ======\n");
    printf("1. Ocupar armario.\n");
    printf("2. Liberar armario.\n");
    printf("4. Mostrar os armarios.\n");
    printf("3. Sair.\n");
    printf("==================\n");
}

int main(){
    unsigned char mask = 1;
    unsigned char armarios = 0;
    int op;
    int numArmario = 0;
    int liberaArmario = 0;

    while(op != 3){
        MenuOpcoes();
        numArmario = INI + rand()%RN;
        printf("numArmario: %d\n", numArmario);
        printf("Digite uma opcao: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            mask = 1;
            mask = mask << numArmario;
            if ((mask & armarios) == mask)
            {
                printf("Armario ja em uso, tente outro.\n");
            }
            else{
                armarios = armarios | mask;
                printf("Armario ocupado com sucesso.\n");
            }
            break;
        
        case 2:
            mask = 1;
            printf("Digite o numero do armario que deseja liberar: ");
            scanf("%d", &numArmario);
            mask = mask << numArmario;
            if ((mask & armarios) == mask)
            {
                armarios = armarios ^ mask;
                printf("Armario liberado com sucesso.\n");
            }
            else{
                printf("O armario não está ocupado, portanto nao pode ser liberado, tente novamente.\n");
            }
            break;
        case 3:
            break;
        case 4:
            MenuArmarios(armarios);
        default:
            break;
        }
    }
    
    return 0;
}
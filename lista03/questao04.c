#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 80

int main(){

    char string1[TAM];
    char string2[TAM];

    fgets(string1, TAM, stdin);
    fgets(string2, TAM, stdin);

    if(strcmp(string1, string2) == 0){
        printf("Com strcmp, as strings são iguais.\n");
    }
    else{
        printf("Com strcmp, as strings não são iguais.\n");
    }

    int i = 0;
    int flag = 1;
    while(string1[i] != '\0' && string2[i] != '\0'){
        if(string1[i] != string2[i]){
            flag = 0;
            break;
        }
        i++;
    }

    if(flag == 1){
        printf("Sem strcmp, as strings são iguais.\n");
    }
    else{
        printf("Sem strcmp, as strings não são iguais.\n");
    }
    
    return 0;
}
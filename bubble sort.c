#include<stdio.h>
#include <stdlib.h>

//função pra ordenar o vetor, recebe o vetor e o tamanho dele
void bubbleSort(int *vetor, int tamanho) {

    //indice para o atual valor
    int atual = 0;

    //indice para o proximo valor
    int proximo = 0;

    //auxiliar de troca
    int auxiliar = 0;

    //para o atual em 1 e o atual sendo menor q o maximo
    for (atual = 1; atual < tamanho; atual++) {

        //o proximo em zero sendo menor que o tamanho maximo -1 para nao chegar no final
        for (proximo = 0; proximo < tamanho-1; proximo++) {

            //se o valor na posição do proximo for maoir que o proximo mais (pos seguinte)
            if (vetor[proximo] > vetor[proximo+1]) {

                //o auxiliar recebe o valor no proximo
                auxiliar = vetor[proximo];

                //o proximo recebe o da frente
                vetor[proximo] = vetor[proximo+1];

                //o da frente recebe o auxiliar que tava segurando o valor
                vetor[proximo+1] = auxiliar;

            }
        }
    }
}



int main (){

    //cria o vetor
    int vetor[5];

    int i = 0;

    //receber valores
    for(int i = 0; i<5; i++){
        printf("Insira valores: ");
        fflush(stdin);
        scanf("%d", &vetor[i]);
    }

    //printa antes da ordenação
    printf("\nVetor antes da ordenacao\n");

    for (int i = 0; i < 5; i++){
        printf("%d ",vetor[i]);
    }

    //ordena
    bubbleSort(vetor, 5);

    //printa pós ordenação
    printf("\n\nVetor ordenado\n");

    for (int i = 0; i < 5; i++){
        printf("%d ",vetor[i]);
    }


return 0;

}

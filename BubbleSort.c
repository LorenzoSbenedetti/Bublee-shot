#include <stdio.h>
#include <stdlib.h>

void Sort(int *P){
    int aux, i, j;

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            if(*(P+j) > *(P+j+1)){
                aux = *(P+j);
                *(P+j) = *(P+j+1);
                *(P+j+1) = aux;
            }
        }

    }
}
int main() {
    int *P, i;

    P = malloc(10 * sizeof(int));
    srand(time(0));

    for(i = 0; i < 10; i++)
        *(P+i) = 1+rand()%19;

    printf("Vetor Deserdenado: ");
    for(i = 0; i < 10; i++)
        printf("%d ", *(P+i));
    printf("\nVetor Ordenado:    ");

    Sort(P);

    for(i = 0; i < 10; i++)
        printf("%d ", *(P+i));
}

# trabalhos-facul
Tudo da facul
#include <stdio.h>
#include <stdlib.h>

// tamanho do vetor
#define MAX 6

void quick_sort(int *a, int esq, int dir);

int main()
{
    int i, vet[MAX];

    // ler os valores para armazenar
    for(i = 0; i < MAX; i++)
    {
    printf("Digite um valor: ");
    scanf("%d", &vet[i]);
    }

    // chamada de função que ordena os valores no vetor em ordem crescente
    quick_sort(vet, 0, MAX - 1);

    // imprimir os valores
    printf("\nValores em ordem:\n");
    for(i = 0; i < MAX; i++)
    {
    printf("%d\n", vet[i]);
    }

    system("pause");
    return 0;
}

void quick_sort(int *a, int esq, int dir) {
    int i, j, pivo, aux;

    i = esq;
    j = dir;
    pivo = a[(esq + dir) / 2];

    while(i <= j) { //verificar se ainda tem elementos para serem comparados
        while(a[i] < pivo && i < dir) {
            i++;
        }
        while(a[j] > pivo && j > esq) {
            j--;
        }
        if(i <= j) {
            aux = a[i];
            a[i] = a[j];
            a[j] = aux;
            i++;
            j--;
        }
    }

    if(j > esq) {
        quick_sort(a, esq, j);
    }
    if(i < dir) {
        quick_sort(a, i, dir);
    }
}

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


/*O código implementa o algoritmo de ordenação Quick Sort em linguagem C. O objetivo do programa é solicitar ao usuário que digite seis valores, armazená-los em um vetor e, em seguida, ordenar os valores usando a função de ordenação Quick Sort. Por fim, o programa exibe os valores ordenados na tela.

A primeira linha do código inclui as bibliotecas stdio.h e stdlib.h. A primeira biblioteca é necessária para entrada e saída de dados, enquanto a segunda é necessária para alocar memória dinamicamente.

Em seguida, é definida uma constante MAX com valor 6, que é o número de elementos que o vetor pode armazenar.

O protótipo da função quick_sort é definido a seguir. Ele recebe um ponteiro para um vetor, um valor esquerdo e um valor direito como parâmetros. A função não retorna nada.

A função main começa declarando duas variáveis: i e vet[MAX]. A variável i é usada em um loop para ler os valores digitados pelo usuário e a variável vet[MAX] é usada para armazenar esses valores. A função scanf é usada para ler os valores digitados pelo usuário.

Em seguida, o programa chama a função quick_sort, que recebe o vetor lido e os índices esquerdo e direito do vetor. A função quick_sort é responsável por ordenar os valores no vetor em ordem crescente.

Por fim, o programa exibe os valores ordenados na tela usando um loop for e a função printf.

A função quick_sort é implementada abaixo da função main. O algoritmo Quick Sort é implementado usando um método de divisão e conquista. O pivô é selecionado como o elemento do meio do vetor. Os elementos menores que o pivô são colocados à esquerda e os elementos maiores que o pivô são colocados à direita. Isso é feito usando dois loops while e uma instrução condicional if.

Depois disso, a função é chamada recursivamente para a parte esquerda e direita do vetor até que todos os elementos estejam classificados. */
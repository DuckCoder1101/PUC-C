#include <stdio.h>
#include <limits.h>

void ex1()
{
    int matriz[20][20], soma = 0, tamanho;

    printf("Digite o tamanho da matriz quadrada (max 20): ");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i == j)
            {
                soma += matriz[i][j];
            }
        }
    }

    printf("Matriz: [%d][%d]\n", tamanho, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma dos elementos da diagonal principal: %d\n", soma);
}

void ex2()
{
    int matriz[5][5] = { 1, 2, 3, 4, 5,
                         6, 7, 8, 9, 10,
                         11, 12, 13, 14, 15,
                         16, 17, 18, 19, 20,
                         21, 22, 23, 24, 25 };
    int maior = matriz[0][0], mI = 0, mJ = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                mI = i;
                mJ = j;
            }
        }
    }

    printf("Maior elemento: %d\n", maior);
    printf("Posicao: [%d][%d]\n", mI, mJ);
}

void ex3()
{
    int matriz[5][3], transposta[3][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transposta[j][i] = matriz[i][j];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", transposta[i][j]);
        }
    }
}

void ex4()
{
    int matriz[10][10];
    int soma4 = 0, menor5 =INT_MAX, menorDiag = INT_MAX, menorDiagPos;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 4)
            {
                soma4 += matriz[i][j];
            }

            if (j == 5)
            {
                if (matriz[i][j] < menor5)
                {
                    menor5 = matriz[i][j];
                }
            }

            if (i == j && matriz[i][j] < menorDiag)
            {
                menorDiag = i;
                menorDiagPos = matriz[i][j];
            }
        }
    }

    printf("Soma dos elementos da linha 4: %d\n", soma4);
    printf("Menor elemento da coluna 5: %d\n", menor5);
    printf("Menor elemento da diagonal principal: %d\n", menorDiagPos);
    printf("Posicao do menor elemento da diagonal principal: [%d][%d]\n", menorDiag, menorDiag);
}

void ex5()
{
    int matrizA[20][20], matrizB[20][20], matrizC[20][20];
    int linhasA, colunasA, linhasB, colunasB;

    printf("Digite o numero de linhas e colunas da matriz A (max 20): ");
    scanf("%d %d", &linhasA, &colunasA);

    printf("Digite o numero de linhas e colunas da matriz B (max 20): ");
    scanf("%d %d", &linhasB, &colunasB);

    if (colunasA != linhasB)
    {
        printf("Multiplicacao impossivel. Numero de colunas de A deve ser igual ao numero de linhas de B.\n");
        return;
    }

    for (int i = 0; i < linhasA; i++)
    {
        for (int j = 0; j < colunasA; j++)
        {
            printf("Digite o valor para a posicao [%d][%d] da matriz A: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for (int i = 0; i < linhasB; i++)
    {
        for (int j = 0; j < colunasB; j++)
        {
            printf("Digite o valor para a posicao [%d][%d] da matriz B: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < linhasA; i++)
    {
        for (int j = 0; j < colunasB; j++)
        {
            matrizC[i][j] = 0;
            for (int k = 0; k < colunasA; k++)
            {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Matriz A\n");
    for (int i = 0; i < linhasA; i++)
    {
        for (int j = 0; j < colunasA; j++)
        {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("Matriz B\n");
    for (int i = 0; i < linhasB; i++)
    {
        for (int j = 0; j < colunasB; j++)
        {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("Matriz C (resultado da multiplicacao A x B)\n");
    for (int i = 0; i < linhasA; i++)
    {
        for (int j = 0; j < colunasB; j++)
        {
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    return 0;
}
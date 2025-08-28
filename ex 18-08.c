#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void ex1()
{
    int n;
    float v1[20], v2[20], v3[20];

    printf("Digite o tamanho dos vetores (max 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) 
    {
        printf("Tamanho inválido!");
    }

    else 
    {
        for (int i = 0; i < n; i++) 
        {
            printf("Digite o %d° número dos vetores: ", i);
            scanf("%f %f", &v1[i], &v2[i]);

            v3[i] = v1[i] * v2[i];
        }

        printf("Os valores são: \n");
        for (int i = 0; i < n; i++)
        {
            printf("%d | %f | %f | %f", i, v1[i], v2[i], v3[i]);
        }
    }
}

void ex2()
{
    int n, nums[20];
    int max = INT_MIN, min = INT_MAX;

    printf("Digite o tamanho do vetor (max 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) 
    {
        printf("Tamanho inválido!");
    }

    for (int i = 0; i < n; i++) 
    {
        printf("Digite o n° %d do vetor: ");
        scanf("%d", &nums[i]);

        if (i > max) max = nums[i];
        else if (i < min) min = nums[i];
    }

    printf("Máximo: %d", max);
    printf("Mínimo: %d", min);
}

void ex3()
{
    int n, nums[20];
    int max = INT_MIN, min = INT_MAX;
    int maxIndex, minIndex;

    printf("Digite o tamanho do vetor (max 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) 
    {
        printf("Tamanho inválido!");
    }

    for (int i = 0; i < n; i++) 
    {
        printf("Digite o n° %d do vetor: ");
        scanf("%d", &nums[i]);

        if (i > max)
        {
            max = nums[i];
            maxIndex = i;
        }

        else if (i < min)
        {
            min = nums[i];
            minIndex = i;
        }
    }

    printf("Máximo: %d", maxIndex);
    printf("Mínimo: %d", minIndex);
}

void ex4()
{
    int x[20], y[20], n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20)
    {
        printf("Tamanho inválido!");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &x[i]);

        y[n - i] = x[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d - %d: ", x[i], y[i]);
    }
}

void ex5()
{
    int nums[20], pares, multiplosDe5;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um fuking numero denovo: ");
        scanf("%d", &nums[i]);

        if (nums[i] % 2 == 0)
        {
            pares++;
        } 

        if (nums[i] % 5 == 0)
        {
            multiplosDe5++;
        }
    }

    printf("Pares: %d, multiplos de 5: %d", pares, multiplosDe5);
}

void ex6()
{
    float reais[20], media = 0;
    int menores = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um número real: ");
        scanf("%f", &reais[i]);

        media += reais[i];
    }

    media /= 20;

    for (int i = 0; i < 20; i++)
    {
        if (reais[i] < media)
        {
            menores++;
        }
    }
}

void ex7()
{
    int nums[20];
    bool swapped = false;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um fuking numero denovo: ");
        scanf("%d", &nums[i]);
    }

    do
    {
        swapped = false;

        for (int i = 0; i < 20; i++)
        {
            int aux = nums[i + 1];

            if (nums[i] > aux)
            {
                nums[i + 1] == nums[i];
                nums[i] = aux;

                swapped = true;
            }
        }
    } while (swapped);

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", nums[i]);
    }
}

void ex8()
{
    int nums[20];
    bool swapped = false;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um fuking numero denovo: ");
        scanf("%d", &nums[i]);
    }

    do
    {
        swapped = false;

        for (int i = 0; i < 20; i++)
        {
            int aux = nums[i + 1];

            if (nums[i] < aux)
            {
                nums[i + 1] == nums[i];
                nums[i] = aux;

                swapped = true;
            }
        }
    } while (swapped);

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", nums[i]);
    }
}

void ex9()
{
    int nums[10], count = 0;
    int digit;
    
    while (count < 10)
    {
        printf("Digite um número: ");
        scanf("%d", &digit);

        if (digit < 0) break;

        nums[count] = digit;
        count++;
    }

    for (int i = 0; i <= count; i++)
    {
        printf("%d\n", nums[i]);
    }
}

void ex10()
{
    int nums[10] = {0, 1, 2, 3, 4, 5};

    for (int i = 9; i >= 3; i--)
    {
        nums[i] = nums[i - 1];
    }

    nums[3] = 5;

    for (int i = 2; i < 9; i++)
    {
        nums[i] = nums[i + 1];
    } 
}

int main()
{
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    ex6();
    ex7();
    ex8();
    ex9();
    ex10();

    return 0;
}
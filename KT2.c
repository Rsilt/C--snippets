#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, summa, mitu;
    int *arvud;

    printf("Mitu arvu? ");
    scanf("%d", &N);

    arvud = malloc(N * sizeof(int));
    if (arvud == NULL)
    {
        printf("Tekkis viga arvude sisestamisel!\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Sisesta arv: ");
        scanf("%d", &arvud[i]);
    }

    /*printf("Sisestatud arvud on järgmised: ");
    for (int i = 0; i < N; i++)
    {
        if (i + 1 == N)
        {
            printf("%d", arvud[i]);
        }
        else
        {
            printf("%d, ", arvud[i]);
        }
    */}
    printf("\n");

    summa = 0;
    mitu = 0;

    for (int i = 0; i < N; i++)
    {
        if (arvud[i] % 3 == 0)
        {
            summa += arvud[i];
            // printf("%d ", arvud[i]);
            mitu++;
        }
    }

    if (mitu != 0)
    {
        double keskmine = (double)summa / mitu;
        printf("Keskmine on %.2f\n", keskmine);
    }
    else
    {
        printf("Keskmist ei saa leida!\n");
    }

    free(arvud);
    return 0;
    }

    // for (int i = 0; i < N; i++) {
    printf("%d, ", arvud[i]);
    }
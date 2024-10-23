#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, summa, mitu;
    int *arvud;

    printf("Mitu arvu? ");
    scanf("%d", &N);

    arvud = malloc(N * sizeof(int));
    if (arvud == NULL) // kontroll
    {
        printf("Tekkis viga arvude sisestamisel!\n");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
        printf("Sisesta arv: ");
        scanf("%d", &arvud[i]); // salvestus massiivi
    }

    printf("Sisestatud arvud on järgmised: ");
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", arvud[i]);
    }
    printf("\n");

    summa = 0;
    mitu = 0;

    for (int i = 0; i < N; i++) // tsükkel, et läbida massiiv
    {
        if (arvud[i] % 3 == 0) // kui jagub 3-ga siis lisatakse summasse ja mitu suureneb 1 võrra
        {
            summa += arvud[i];
            mitu++;
        }
    }

    if (mitu != 0) // kui mitu ei ole 0, siis leitakse nende arvude keskmine, mis jaguvad kolmega
    {
        double keskmine = summa / mitu;
        printf("Keskmine on %.2f\n", keskmine);
    }
    else
    {
        printf("Keskmist ei saa leida!\n");
    }

    free(arvud); // vabastan eraldatud mälu
    return 0;
}
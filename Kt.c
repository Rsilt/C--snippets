#include <stdio.h>

int main()
{
    int arvud[100];
    int paar;
    printf("Mitu arvupaari sisestad? ");
    scanf("%d", &paar);
    for (int i = 0; i < paar; i++)
    {
        printf("Sisesta arvude paar tühikutega eraldatult:");
        int arv1, arv2;
        scanf("%d %d", &arv1, &arv2);
        printf("Sisestati arvud %d ja %d\n", arv1, arv2);
        printf("Nendest suurem on");
        if (arv1 <= arv2)
        {
            printf(" %d\n", arv2);
            arvud[i] = arv2;
        }
        else
        {
            printf(" %d\n", arv1);
            arvud[i] = arv1;
        }
        printf("Lisatud arvud on järgmised:\n");
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", arvud[j]);
        }
        printf("\n");
    }
    return 0;
}

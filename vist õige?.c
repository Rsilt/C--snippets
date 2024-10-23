/*Tõlgi järgnev pythoni-keelne programm C-keelde. Uus programm peab käituma sarnaselt nii väliselt kui ka sisemiselt ja ksutama võimaluse piires sarnaseid keelevahendeid. arvud = list()
n = int(input("Mitu arvupaari sisestad?"))
for i in range(n):
    sisend = input("Sisesta arvude paar tühikutega eraldatult:")
    arv1, arv2 = sisend.split()
    arv1 = int(arv1)
    arv2 = int(arv2)
    print("Sisestati arvud", arv1, "ja", arv2)
    print("Nendest suurem on", end='')
    if arv1 <= arv2:
        print(arv2)
        arvud.append(arv1)
    print("Sisestatud arvud on järgmised:")
    for arv in arvud:
        print(arv,end='')
        */

#include <stdio.h>

int main()
{
    int arvud[100];
    int n;
    printf("Mitu arvupaari sisestad?: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Sisesta kaks arvu tühikuga eraldatult: ");
        int arv1, arv2;
        scanf("%d %d", &arv1, &arv2);
        printf("Sisestati %d ja %d\n", arv1, arv2);

        if (arv1 <= arv2)
        {
            arvud[i] = arv2;
        }
        else
        {
            arvud[i] = arv1;
        }
    }

    printf("Sisestatud arvud: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arvud[j]);
    }
    printf("\n");

    return 0;
}
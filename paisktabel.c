#include <stdio.h>
#define M 11

int hash(int key)
{
    return key % M;
}

int linearProbing(int j, int key)
{
    return j;
}

int doubleHashing(int j, int key)
{
    int doubleHashValue = (1 + (key % (M - 2)));
    printf("teine paiskväärtus %d\n", doubleHashValue);
    return j * doubleHashValue;
}

int main()
{
    int hashTable[M] = {0};
    int key, hashValue, attempt, pos;

    for (int i = 0; i < 10; i++)
    {
        printf("Sisesta võti ");
        scanf("%d", &key);
        hashValue = hash(key);
        printf("paiskväärtus %d\n", hashValue);
        if (hashTable[hashValue] == 0)
        {
            hashTable[hashValue] = key;
        }
        else
        {
            attempt = 0;
            pos = hashValue;
            while (hashTable[pos] != 0)
            {
                attempt++;
                pos = (hashValue + doubleHashing(attempt, key)) % M;
            }
            hashTable[pos] = key;
        }
        for (int j = 0; j < M; j++)
        {
            printf("%d ", hashTable[j]);
        }
        printf("\n");
    }
}
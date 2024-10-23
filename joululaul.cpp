#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<long long> gifts(N + 1, 0);

    for (int day = 1; day <= N; day++)
    {
        for (int i = 1; i <= day; i++)
        {
            gifts[i] += day;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << gifts[i] << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int k = 1; k <= N; ++k)
    {
        long long totalGifts = (long long)(N - k + 1) * k;
        cout << totalGifts << endl;
    }

    return 0;
}

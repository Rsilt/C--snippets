#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long N;
    cin >> N; // Magnetid
    string magnets;
    cin >> magnets;

    // Numbrisort ><
    sort(magnets.begin(), magnets.end());

    // String kaheks ja + vahele
    string leftPart = magnets.substr(0, N / 2); // Vasak pool
    string rightPart = magnets.substr(N / 2);   // Parem pool

    // stringid arvuks ja summa
    long long result = stoll(leftPart) + stoll(rightPart);

    // Min värts
    cout << result << endl;

    return 0;
}

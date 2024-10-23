#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main()
{
    vector<string> pics(5);
    for (auto &s : pics)
    {
        cin >> s;
    }

    int n;
    cin >> n;
    vector<string> clicks(n);
    map<string, int> currentNumbers;

    for (int i = 0; i < n; ++i)
    {
        cin >> clicks[i];

        if (currentNumbers[clicks[i]] == 0)
        {
            currentNumbers[clicks[i]] = i + 1;
        }
        else
        {
            int removedNum = currentNumbers[clicks[i]];
            currentNumbers[clicks[i]] = 0;
            for (auto &entry : currentNumbers)
            {
                if (entry.second > removedNum)
                {
                    entry.second--;
                }
            }
        }
    }

    vector<string> vastus;
    int nextNumber = 1;

    for (int i = 0; i < 5; ++i)
    {
        string currentPic = pics[i];
        if (currentNumbers[currentPic] != nextNumber)
        {
            if (currentNumbers[currentPic] != 0)
            {
                vastus.push_back(currentPic);
                currentNumbers[currentPic] = 0;
            }
            vastus.push_back(currentPic);
            currentNumbers[currentPic] = nextNumber;
        }
        nextNumber++;
    }

    cout << vastus.size() << '\n';
    for (const auto &s : vastus)
    {
        cout << s << '\n';
    }

    return 0;
}

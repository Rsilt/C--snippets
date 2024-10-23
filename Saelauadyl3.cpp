#include <iostream>
#include <vector>
using namespace std;

struct Laud
{
    int x1, y1, x2, y2;
};

int main()
{
    int n;
    cin >> n;
    vector<Laud> lauad(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> lauad[i].x1 >> lauad[i].y1 >> lauad[i].x2 >> lauad[i].y2;
    }

    bool kattuvad = false;
    for (int i = 0; i < n && !kattuvad; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (lauad[i].x2 <= lauad[j].x1 ||
                lauad[j].x2 <= lauad[i].x1 ||
                lauad[i].y2 <= lauad[j].y1 ||
                lauad[j].y2 <= lauad[i].y1)
            {
                continue;
            }
            else
            {
                kattuvad = true;
                break;
            }
        }
    }

    if (kattuvad)
    {
        cout << "JAH" << '\n';
    }
    else
    {
        cout << "EI" << '\n';
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int H, M, N;
    cin >> H >> M;
    int currentTime = H * 60 + M;
    cin >> N;
    vector<int> Hi(N), Mi(N), Ji(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> Hi[i] >> Mi[i] >> Ji[i];
    }

    int bestStop = -1;
    int maxTimeDifference = -1;
    int closestMissStop = -1;
    int minTimeMiss = 1000000;

    for (int i = 0; i < N; ++i)
    {
        int busTime = Hi[i] * 60 + Mi[i];
        int jukuArrivalTime = currentTime + Ji[i];

        if (jukuArrivalTime <= busTime)
        {
            int timeDifference = busTime - jukuArrivalTime;
            if (timeDifference > maxTimeDifference)
            {
                maxTimeDifference = timeDifference;
                bestStop = i + 1;
            }
        }
        else
        {
            int timeMiss = jukuArrivalTime - busTime;
            if (timeMiss < minTimeMiss)
            {
                minTimeMiss = timeMiss;
                closestMissStop = i + 1;
            }
        }
    }

    if (bestStop != -1)
    {
        cout << "JAH" << endl;
        cout << bestStop << endl;
    }
    else
    {
        cout << "EI" << endl;
        cout << closestMissStop << endl;
    }

    return 0;
}

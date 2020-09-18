#include <iostream>
#include <map> 
#include <queue>
#include <vector>

using namespace std;

int main() 
{

    int myTeam, y = 1;

    while (scanf("%d", & myTeam) == 1 && myTeam != 0) 
    {
        printf("Scenario #%d\n", y++);

        queue < int > myQueue[myTeam + 1];
        int i, j, k, l = 0, m, n, co = 0, num[200003];
        map < int, int > number;
        

        for (i = 1; i <= myTeam; i++) 
        {
            scanf("%d", & n);
            for (j = 0; j < n; j++) 
            {
                scanf("%d", & m);
                number[m] = i;
            }
        }
        
          string s;

        while (cin >> s && (s != "STOP")) 
        {
            if (s == "ENQUEUE") 
            {
                scanf("%d", & n);
                m = number[n];
                myQueue[m].push(n);
                for (i = l; i < co; i++) 
                {
                    if (num[i] == m) break;
                }
                if (i == co) 
                {
                    num[co++] = m;
                }
            }
            if (s == "DEQUEUE") 
            {
                int f = 0;
                for (i = l; i < co; i++) 
                {
                    m = num[i];
                    while (!myQueue[m].empty()) 
                    {
                        printf("%d\n", myQueue[m].front());
                        myQueue[m].pop();
                        f = 1;
                        break;
                    }
                    if (myQueue[m].empty()) l++;
                    if (f == 1) break;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
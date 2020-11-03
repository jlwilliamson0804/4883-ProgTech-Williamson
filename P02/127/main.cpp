
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

 
struct Card
 {
    char val;
    char suit;
};

 Card c[52];
 vector<stack<Card> >v;
string str;
 
 
int judge(Card x, Card y) {
    if (x.val == y.val || x.suit == y.suit)
        return 1;
    return 0;
}
 
 
void solve() {
         v.clear();
    for (int i = 0; i < 52; i++) {
        stack<Card>s;
        s.push(c[i]);
         v.push_back(s);
        Card temp;
        
        for (int j = v.size() - 1 ; j < v.size() ; j++)
         {
          temp = v[j].top();
           if (j >= 3) {
              if (judge(temp, v[j-3].top())) {
                 v[j-3].push(temp);
                   v[j].pop();
                      if (v[j].empty())
                        v.erase(v.begin() + j);
                          j -= 4;
                }
             else 
             {
                if (judge(temp, v[j-1].top())) 
                {
                   v[j-1].push(temp);
                   v[j].pop();
                   if (v[j].empty()) 
                   v.erase(v.begin() + j);
                  j -= 2; 
                    }
                }
            }
            else if (j > 0 && j < 3) 
            {
               if (judge(temp, v[j-1].top()))
                {
                v[j-1].push(temp);
                v[j].pop();
                if (v[j].empty()) 
                 v.erase(v.begin() + j);
                   j -= 2; 
                }
            }
 
        }
    }
}
 

void output() {
         int ans = v.size();
         if (ans == 1) 
        cout <<"1 pile remaining:";
    else
        cout << ans << " piles remaining:";
    for (int i = 0; i < ans; i++)
    {
        cout << " " << v[i].size();
      
    }
    cout << endl;
    
}
 

int main() {
    
    int i;
    while (cin >> str && str != "#") {
        i = 0;
        c[i].val = str[0];
        c[i].suit = str[1];
        for (i = 1; i < 52; i++) {
            cin >> str;
            c[i].val = str[0];
            c[i].suit = str[1];
        }
        solve();
        output();
    }
}
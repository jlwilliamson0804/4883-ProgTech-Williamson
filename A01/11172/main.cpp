#include <iostream>
using namespace std;

int main() {
  int cases, x, y =0;
  cin >> cases;
  for(int i = 0;i<cases;i++)
  {
    cin>>x>>y;
    if(x<y)
      cout<< "<";
    else if(x>y)
      cout<< ">";
    else
      cout << "=";
    cout<<endl;
  }
}
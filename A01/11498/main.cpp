#include <iostream>
using namespace std;

int main() {
  int queries =0;
  int dp1,dp2;
  int x,y;

  cin>> queries;
  while(queries !=0)
  {
    cin>>dp1>>dp2;
    for(int i =0;i < queries;i++)
    {
      cin>>x>>y;
      if(x==dp1 || y ==dp2) //on the division
        cout<<"divisa" << endl;
      else if(x<dp1 && y<dp2) //South West
        cout <<"SO" <<endl;
      else if(x<dp1&&y>dp2) // North West
        cout << "NO" << endl;
      else if(x>dp1 && y >dp2) //North East
        cout << "NE" << endl;
      else // South East
        cout<< "SE" << endl;
    }
    cin>>queries;

  }


}
#include <iostream>
#include <string>
using namespace std;

int main()
{
  
int cases =0;
string operation = "";
int donation = 0;
int total = 0;

cin>>cases;
for(int i = 0;i<cases;i++)
{
cin>>operation;
if(operation == "donate")
{
  cin>>donation;
  total += donation;

}
else if(operation == "report")
{
  cout<< total << endl;
}
}
}
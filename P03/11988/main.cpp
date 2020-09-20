#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() 
{
queue <char> TheQueue; //regular
queue <char> MyQueue; //bejuit
string MyString;

while (getline(cin,MyString))
{
  for(int i = 0; i < MyString.size();i++)
  {
    if(MyString[i] != '[' && MyString[i] != ']')
    TheQueue.push(MyString[i]);

    else if(MyString[i] == '[')
    {
      for(int j = i+1; MyString[j]!= '[' && MyString[j]!= ']'&& (j+1)<MyString.size();j++)
      {
        MyQueue.push(MyString[j]);
        i=j;
      }
    }
  }
 
  while(!MyQueue.empty())
  {
    cout<<MyQueue.front();
    MyQueue.pop();
  }
  
  while(!TheQueue.empty())
  {
    cout<<TheQueue.front();
    TheQueue.pop();
  }
  
}

}
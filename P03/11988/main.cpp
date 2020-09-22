#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() 
{
deque <char> TheQueue; //regular
deque <char> MyQueue; //bejuit
string MyString;

while (getline(cin,MyString))
{
  
  for(int i = 0; i < MyString.size();i++)
  {
    if(MyString[i] != '[' && MyString[i] != ']')
    {
    TheQueue.push_back(MyString[i]);
    }

   else if(MyString[i] == '[')
    {
      while((i+1)<MyString.size() && MyString[i+1]!= '[' && MyString[i+1]!=']')
      {
        MyQueue.push_back(MyString[i+1]);
        i++;
      }
      while(!MyQueue.empty())
      {
        TheQueue.push_front(MyQueue.back());
        MyQueue.pop_back();
      }
    }

     else if(MyString[i] == ']')
    {
      if(MyString[i+1] != '[' && MyString[i+1] != ']' && (i+1)<MyString.size())
      {
        i++;
        TheQueue.push_back(MyString[i]);
      }
    }
  }
    
  

 
  while(!MyQueue.empty())
  {
    cout<<MyQueue.front();
    MyQueue.pop_front();
  }
  
  while(!TheQueue.empty())
  {
    cout<<TheQueue.front();
    TheQueue.pop_front();
  }
    cout << endl;
}
}

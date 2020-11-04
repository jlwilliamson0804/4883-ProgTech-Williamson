#include <iostream>
#include <deque>

using namespace std;

int main() 
{
  int N;
  int next;
  deque <int> incoming;
  deque <int> cars;
  deque <int> hold;
  deque <int> wanted;

  cin>>N;

  while(N!=0)
  {
    //cout << N << endl;
    //cout << "incoming: ";
    for(int i =1;i<N+1;i++)
    {
      incoming.push_back(i);
      //cout << i << " ";
    }
    //cout << endl;
    
    cin>>next;
    
    while(next!= 0)
    {
      int index = 0;
      
      //cout << "wanted: ";
      for(int i = 0; i< N;i++)
      {
        if(next!= 0)
        {
          wanted.push_back(next);
        //  cout << next << " ";
        }
        cin>>next;
      }
      //cout << endl;

      //do work lol
      for(int i = 0;i<N;i++)
      {
        if(incoming[i] == wanted[index])
        {
          cars.push_back(incoming[i]);
          index++;
          
          for(int j =0;j<i;j++)
          {
            if(!hold.empty())
            {
              if(hold.back() == wanted[index])
              {
                cars.push_back(hold.back());
                hold.pop_back();
                index++;
              }
            }
          }
        }
        else if(incoming[i] != wanted[index])
        {
          hold.push_back(incoming[i]);
          
        }
      }
      while(!hold.empty())
      {
        int temp = hold.back();
        cars.push_back(temp);
        hold.pop_back();
      }

      //cout << "cars: ";
      //for (int i = 0; i<N;i++)
      //{
        //cout << cars[i] << " ";
      //}
      //cout << endl;

      if(wanted == cars) cout << "Yes" << endl;
      else cout << "No" << endl;

      wanted.clear();
    incoming.clear();
    hold.clear();
    cars.clear();
      
    } //while !next
    cout << endl;
    cin >> N;
    wanted.clear();
    incoming.clear();
    hold.clear();
    cars.clear();

  } //while !N
  cout << endl;
} //main
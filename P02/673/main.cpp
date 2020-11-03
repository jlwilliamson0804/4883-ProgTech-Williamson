#include <iostream>
#include <stack>

using namespace std;
int main()
{
    string line;
    
    int n;
    while(scanf("%d",&n)!=EOF)
    {
      getchar();

        for(int i=1; i<=n; i++)
        {
            
            stack<char>myStack;
            
            getline(cin,line);
            int x=0;
            for(int j=0; j<line.size(); j++)
            {
                if(line[j]=='('||line[j]=='[')
                {
                    myStack.push(line[j]);
                }
                else if(((!myStack.empty())&&(myStack.top()=='('))&&(line[j]==')'))
                {
                    myStack.pop();
                }
                else if(((!myStack.empty())&&(myStack.top()=='['))&&(line[j]==']'))
                {
                    myStack.pop();
                }
                else
                {
                    x=1;
                }
            }
            if(x==1||myStack.size()>=1)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
          
        }
    }
  
}
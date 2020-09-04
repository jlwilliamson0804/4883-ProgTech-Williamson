#include <iostream>
using namespace std;


int main() {
int cases;
int emp1,emp2,emp3;

cin>>cases;
for(int i =0;i<cases;i++)
{
cin>>emp1>>emp2>>emp3;

if((emp1>emp2&&emp1<emp3)|| (emp1<emp2&&emp1>emp3))
cout<<"Case " << i+1 <<": " << emp1 <<endl;

else if((emp2>emp1&&emp2<emp3)||(emp2<emp1&&emp2>emp3))
cout<<"Case " << i+1 <<": " << emp2 <<endl;

else
cout<<"Case " << i+1 <<": " << emp3 <<endl;

}

}
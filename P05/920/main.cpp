#include <iostream>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

struct MyPoint
{
  double xcord;
  double ycord;
};

//used to sort 
bool compare(MyPoint a, MyPoint b) {
	return b.xcord < a.xcord;
}

double euclidean (MyPoint a, MyPoint b);

int main()
{
int cases=0; //number of cases
int numpoints=0; // number of points in the case
double CurrentMaxY = 0;
double distance = 0;
vector <MyPoint> PointArray;

cin >> cases;

while (cases--)
{
cin >> numpoints;

for(int i = 0; i < numpoints; i++)
{
  MyPoint point;
  cin >> point.xcord >> point.ycord;
  PointArray.push_back(point);
  
}

sort(PointArray.begin(), PointArray.end(), compare);


CurrentMaxY = 0;
distance = 0;
for(int j = 1; j < PointArray.size();j++)
{
  if(PointArray[j].ycord > CurrentMaxY)
  {
    distance += euclidean(PointArray[j], PointArray[j - 1]) 
                          * (PointArray[j].ycord - CurrentMaxY) / (PointArray[j].ycord - PointArray[j - 1].ycord); 
                CurrentMaxY = PointArray[j].ycord;
  }

}
  cout << fixed << setprecision(2) << distance << endl;
  
  while(!PointArray.empty())
  {
    PointArray.pop_back();
  }
}



}

double euclidean (MyPoint a, MyPoint b)
{

    return sqrt((double)(a.xcord - b.xcord) * (a.xcord - b.xcord)
                      + (a.ycord - b.ycord) * (a.ycord - b.ycord));
}


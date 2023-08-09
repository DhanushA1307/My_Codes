#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    int x1,y1,x2,y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    float d1 = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    float d2 = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    float d3 = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
    if(d1==d2 || d2==d3 || d3==d1)
       cout << "SQUARE";
    else
       cout << "RECTANGLE";


}
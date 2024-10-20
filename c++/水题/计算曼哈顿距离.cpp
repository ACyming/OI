#include <iostream>
using namespace std;

float absolute(float x1,float x2)
{
    float ans;  
    if(x1 > x2) ans = x1-x2;
    else ans = x2-x1;
    return ans;
}

int main()
{
    float x1,x2,y1,y2;
    float mht;
    cin>>x1>>y1>>x2>>y2;
    mht = absolute(x1,x2)+absolute(y1,y2);
    printf("%0.3lf",mht);
    cout<<endl;
    return 0;
}

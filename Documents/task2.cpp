#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float x1,y1,x2,y2,x3,y3;
    float l1,l2,l3,p;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    l1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    l2=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    l3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    if ((l1+l2>l3) and (l1+l3>l2) and (l2+l3>l1) and (abs(l1-l2)<l3) and (abs(l2-l3)<l1) and (abs(l1-l3)<l2)){
        p=(l1+l2+l3)/2;
        cout<<(sqrt(p*(p-l1)*(p-l2)*(p-l3)));
    }
    else{
        cout<<"this triangle does not exist";
    }
    return 0;
}

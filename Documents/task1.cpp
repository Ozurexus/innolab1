#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if ((a+b>c) and (a+c>b) and (b+c>a) and (b-c<a) and (b-a<c) and a-c<b){
        cout<<"this triangle exists";
    }
    else{
        cout<<"this triangle does not exist";
    }
    return 0;
}

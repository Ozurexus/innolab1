#include <iostream>

using namespace std;

int main()
{
    int x,y,gcd,number;
    number=max(x,y);
    cin>>x>>y;
    for (int i=1; i<(number+1);i++){
        if ((x%i==0) and (y%i==0)){
            gcd=i;
        }

    }
    cout<<gcd;
    return 0;
}

#include "cstring.h"
#include "cstring.cpp"
using namespace std;

int main(){
    cstring s,x;
    cin>>s>>x;
    cout << s << endl;
    cout << x << endl;
    if(s>x) cout<<"s lon hon x";
    else if(s < x)
        cout << "s nho hon x";
    else 
        cout << "s bang x";
    return 0;
}
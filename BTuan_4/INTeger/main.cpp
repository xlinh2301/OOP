#include"INTEGER.h"
#include "INTEGER.cpp"

int main()
{
    INTEGER x,y;
    cin>>x>>y;
    cout<<x+y<<endl;
    cout<<x-y<<endl;
    cout<<x*y<<endl;
    cout<<x/y<<endl;
    x = x++;
    y = y--;
    cout<<x<<" "<<y;
    system("pause");
}
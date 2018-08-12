#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a!=0 && b!=0 && c!=0 && a!=180 && b!=180 &&c!=180 && a+b+c==180)
            cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;


        }

    return 0;
}

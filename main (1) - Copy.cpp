
#include <iostream>
using namespace std;
int main()
{
    int factorial=1,n;
    cin>>n;
    for(int i=2;i<=n;i++){
        factorial*=i;

    }
    cout<<factorial<<endl;


    return 0;
}
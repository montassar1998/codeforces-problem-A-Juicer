#include <iostream>
 
using namespace std;
 
int main()
{
    int i,n,b,d;
    cin>>n>>b>>d;
    int t[n];
    for(i=0;i<n;i++){
        cin>>t[i];
    }
    i=0;
    int waste=0,nb=0;
    while(i<n){
        if(t[i]<=b){
            waste+=t[i];
        }
        if(waste>d){
            nb++;
            waste=0;
        }
    i++;
    }
    cout<<nb;
    return 0;
}

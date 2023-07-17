#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,m;
    cin>>a>>b;
    m=(a>b)?a:b;
    do{
        if(m%a==0&&m%b==0){
            cout<<m;
            break;
        }
        else 
        m++;
    }while(true);
    return 0;
    
}
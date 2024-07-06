#include<bits/stdc++.h>
using namespace std;
int main(){
int sum=0;
    int n;
    cin>>n;
    while(n/5>0){
        sum+=n/5;
        n/=5;


    }
    cout<<sum;

}
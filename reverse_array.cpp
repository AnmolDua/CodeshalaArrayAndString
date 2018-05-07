#include<bits/stdc++.h>
using namespace std;
int main(){
long long int a[100000],i,n;
cin>>n;
for(i=0;i<n;i++){
    cin>>a[i];
}
reverse(a,a+n);
for(i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}

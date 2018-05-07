 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 long long int n,l,r,i,a[100000],sum=0;
 cin>>n;//>>l>>r;
 for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
 cin>>l>>r;
 for(i=l;i<=r;i++){
    sum=sum+a[i];
 }
 cout<<sum;
 return 0;
 }

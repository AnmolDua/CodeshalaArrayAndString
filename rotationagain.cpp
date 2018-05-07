 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 long long int n,m,a[100000],i;
 cin>>n>>m;
 for(i=0;i<n;i++){
    cin>>a[i];
 }
 m=(m-1)%n;
for(i=0;i<n;i++){
    cout<<a[(i+(m))%n]<<" ";
 }
 return 0;
 }

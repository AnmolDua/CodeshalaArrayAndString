 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 long long int a[100000],i,n;
 cin>>n;
 for(i=1;i<=n;i++){
    cin>>a[i];
 }
 a[0]=a[n];cout<<a[0]<<" ";
  for(i=1;i<n;i++){
    cout<<a[i]<<" ";
 }
return 0;
 }

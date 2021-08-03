#include <iostream>
using namespace std;


int main(){
long long int a[100000];
int n,ans[100];
cin>>n;
for(int i=0;i<n;i++){

    cin>>a[i];
}
for(int i=0;i<n;i++){

   ans[i] =ans[i]^a[i];
   
}
cout<<ans[];
// for(int i=0;i<n;i++){

//    cout<<ans[i];
// }

}
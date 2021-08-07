#include<iostream>
using namespace std;


int isPrime(int n){
    bool arr[n+1];
    for(int i=0;i<n;i++){
        arr[i]= true;
    }
    arr[0]=false;
    arr[1]=false;
    for(int i=2 ;i*i<=n;i++){
        if(arr[i]==true){
            for(int j=i*i;j<=n;j=j+i){
                arr[j] =false;
            }
        }

    }

    int count=0;
    for(int i=0;i<=n;i++){
        if(arr[i] ==true){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int printPrime = isPrime(n);
    cout<<printPrime<<endl;
    return 0;
}
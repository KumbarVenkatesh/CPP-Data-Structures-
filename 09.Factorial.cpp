#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    return fact(n-1)*n;
}
int Ifact(int n){
    int f=1;
    for(int i=0;i<=n;i++){
        f=f*i;
    }
    return f;
}

int main(){
    int r = fact(5);
    cout<<r<<endl;
}

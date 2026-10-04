#include<iostream>
#include <algorithm>
using namespace std;;
int main(){
int i,j;
while(cin>>i>>j){
    int start=min(i,j);
    int end=max(i,j);
    int max=0;
    for(int k=start;k<=end;k++){
    long long int count=1;
    long long n=k;

    while(n!=1){
        if(n%2==0)
           n/=2;
        else
            n=n*3+1;

        count++;
    }
    if(count>max){
        max=count;
    }

    }
    cout<<i<<" "<<j<<" "<<max<<endl;

}



}

#include<iostream>
#include<cmath>

using namespace std;
int main(){

int n;

while(cin>>n){

int a[n]={};
bool c[n];
bool m=true;
int diff;

    for(int i=0;i<=n;i++){
            c[i]=false;
        }

    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    for(int j=0;j<n-1;j++){
        diff=abs(a[j]-a[j+1]);

        if(diff<n && diff>=1){
        c[diff]=true;
        }

    }
    for(int i=1;i<n;i++){
        if(c[i]==false){
            m=false;
            break;

        }
    }


    if(m==true){

        cout<<"Jolly"<<endl;
    }
    else{

        cout<<"Not jolly"<<endl;
    }




    }



}





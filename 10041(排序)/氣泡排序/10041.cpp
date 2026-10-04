#include<iostream>
#include<cmath>

using namespace std;

int main(){

int n;

cin>>n;

for(int i=0;i<n;i++){

    int r;
    cin>>r;

    if(r==0){
        cout<<"0"<<endl;
        continue;
    }

    int s[500]={};



    for(int j=0;j<r;j++){
        cin>>s[j];


    }

    for(int j=0;j<r-1;j++){
        for(int k=j+1;k<r;k++){
                if(s[j]>s[k]){
                    int b;
                    b=s[j];
                    s[j]=s[k];
                    s[k]=b;

                }


        }

    }
    int m=s[r/2];
    int sum=0;

    for(int j=0;j<r;j++){

        sum+=abs(s[j]-m);

    }
    cout<<sum<<endl;




}




}


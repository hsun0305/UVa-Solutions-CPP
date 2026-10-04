#include<iostream>
using namespace std;

int main(){
int c;
cin>>c;

for(int i=0;i<c;i++){

int count=0;
int length;


cin>>length;
int a[length];

for(int j=0;j<length;j++){
    cin>>a[j];
}

for(int m=0;m<length-1;m++){
    for(int k=0;k<length-1-m;k++){
        if(a[k]>a[k+1]){
            int h;
            h=a[k];
            a[k]=a[k+1];
            a[k+1]=h;
            count++;
        }
    }
}


cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;


}
}

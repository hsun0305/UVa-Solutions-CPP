#include<iostream>
#include <cstring>

using namespace std;

int main(){

    int m,n;
    int cnt=0;

    while(cin>>n>>m){

            if(n==0 && m==0){
                break;
            }

            if(cnt>0){
                cout<<endl;
            }



        char a[105][105];
        int b[105][105];
        memset(b, 0, sizeof(b));//設定b陣列內數字皆為0

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                cin>>a[i][j];

                if(a[i][j]=='*'){
                    b[i][j]=10;

                }

            }

        }

        cout<<"Field #"<<++cnt <<":"<<endl;

        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                if(a[i][j]=='*'){
                    for(int k=-1;k<=1;k++){
                    b[i-1][j+k]++;
                    b[i+1][j+k]++;

                    }
                    b[i][j-1]++;
                    b[i][j+1]++;
                }

                }

            }

            for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

                if(b[i][j]>=10)
                cout<<"*";
                else
                cout<<b[i][j];
                }
                cout<<endl;

            }

        }



}





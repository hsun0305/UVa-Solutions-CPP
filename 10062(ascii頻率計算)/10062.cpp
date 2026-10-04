#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main(){

    string str;

    bool first=true;

    while(getline(cin,str)){

        if(first!=true)
            cout<<endl;

        first=false;

        int cnt[129]={0};

        int maxcnt=0;

        for(int i=0;i<str.length();i++){

            char c;
            int asc;

            c=str[i];
            asc=c;

            cnt[asc]++;

            if(cnt[asc]>maxcnt)
                maxcnt=cnt[asc];

        }
        for(int i=1;i<=maxcnt;i++){
        for(int j=128;j>=1;j--){

                if(cnt[j]==i){
                    cout<<j<<" "<<i<<endl;

                }



        }
        }




    }








}

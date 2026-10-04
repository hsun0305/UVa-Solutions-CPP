#include<iostream>
#include<algorithm>
#include<map>
#include<iomanip>

using namespace std;

int main(){

    int n;

    cin>>n;
    cin.ignore();//處理緩存區
    cin.ignore();//處理換行

    while(n>0){

        n--;

        map<string,int> countMap;

        int total=0;

        string A;

        while(getline(cin,A) && !A.empty()){

            countMap[A]++;
            total++;

        }

        for(auto it=countMap.begin();it!=countMap.end();++it){//這邊的countMap.end()指的是最後一筆資料的下一個位置（結尾標記）

        cout<<it->first<<" "<<fixed<<setprecision(4)<<((double)it->second/total*100)<<endl;
        }

        if(n>0){
        cout<<"\n";}

    }

}

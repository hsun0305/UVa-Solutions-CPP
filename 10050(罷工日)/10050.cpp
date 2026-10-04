#include<iostream>
#include<vector>

using namespace std;

int main(){

int c;

cin>>c;

for(int i=0;i<c;i++){

    int days,party;

    cin>>days>>party;

    vector<int> a(party);

    for(int j=0;j<party;j++)
        cin>>a[j];

    vector<bool> note(days+1,false);

    for(int j=0;j<party;j++){
        for(int k=a[j];k<=days;k+=a[j]){

            if(k%7!=0 && k%7!=6){
                note[k]=true;

            }


        }



    }

    int cnt=0;

    for(int j=1;j<=days;j++){
        if(note[j]==true){

            cnt++;
        }


    }

    cout<<cnt<<endl;



}


}

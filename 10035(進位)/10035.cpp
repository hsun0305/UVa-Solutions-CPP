#include<iostream>
using namespace std;
int main(){
    long long int i,j;

    while(cin>>i>>j){

        if(i==0 && j==0){
            break;
        }

        long long int cpi,cpj;
        cpi=i;
        cpj=j;
        int cnt=0;
        int carry=0;
        int sum=0;

        while (cpi > 0 || cpj > 0 || carry > 0) {

            sum=cpi%10+(cpj%10)+carry;

            if(sum>9){
                cnt++;
                carry=1;

            }
            else{
                carry=0;
            }
            cpi/=10;
            cpj/=10;



        }

        if(cnt==0)
        {
            cout<<"No carry operation."<<endl;


        }
        else if(cnt>1){
            cout<<cnt<<" carry operations."<<endl;

    }
        else{
            cout<<cnt<<" carry operation."<<endl;
        }

    }



}

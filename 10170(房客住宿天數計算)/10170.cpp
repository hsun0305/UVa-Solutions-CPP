#include<iostream>

using namespace std;

int main(){

    long long int S,D;

    while(cin>>S>>D){

        long long int cntt=0;
        long long int cnt=0;

        while(cnt<D){



            cnt+=(S+cntt);

            if(cnt>=D){
                break;
            }

            cntt++;


        }

        cout<<(S+cntt)<<endl;



    }






}

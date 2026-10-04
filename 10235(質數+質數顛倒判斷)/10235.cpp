#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

bool isPrime(int n){

    if (n <= 1) return false;

    for(int i=2;i<=sqrt(n);i++){

        if(n%i==0){
            return false;
        }

    }

    return true;



}

bool isEmirp(int n){

    int org=n;
    int rev=0;

    while(n>0){

        rev=rev*10+(n%10);
        n/=10;

    }

    if(rev==org){
        return false;
    }
    else{

        return isPrime(rev);
    }





}

int main(){

    int n;

    while(cin>>n){

        if(!isPrime(n)){

            cout<<n<<" is not prime."<<endl;

        }
        else{

            if(!isEmirp(n)){

                cout<<n<<" is prime."<<endl;
            }
            else{

                cout<<n<<" is emirp."<<endl;
            }


        }

    }

}

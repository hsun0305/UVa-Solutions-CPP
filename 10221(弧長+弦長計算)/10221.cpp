#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){

    double PI=acos(-1);//製造pi

    double s,a;

    string m;

    while(cin>>s>>a>>m){

        if(m=="min"){
            a/=60;
        }

        if(a>180){
            a=360-a;
        }

        double r,ad,cd;

        r=s+6440;

        ad=2*PI*r*a/360;

        cd=2*r*sin((a/2)*(PI/180));//弦長公式=2Rsin(a/2)，(sin內部是弧度)

        cout<<fixed<<setprecision(6)<<ad<<" "<<cd<<endl;


    }







}

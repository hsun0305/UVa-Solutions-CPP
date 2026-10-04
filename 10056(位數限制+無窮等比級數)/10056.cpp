#include<iostream>
#include<cmath>//pow惠璶
#include<iomanip>//ノ计

using namespace std;

int main(){

    int s;

    cin>>s;

    for(int i=0;i<s;i++){

        int N,I;
        double p,q;


        cin>>N>>p>>I;

        if (p == 0.0) {
            cout << fixed << setprecision(4) << 0.0000 << endl;
            continue;
        }

        q=1.0-p;

        double ans;

        ans=(pow(q,(I-1))*p)/(1.0-pow(q,N));//礚絘单ゑ计pow(┏计,Ωよ)

        cout<<fixed<<setprecision(4)<<ans<<endl;//fixed 眏ㄏノ计翴Ατ獶厩癘腹setprecision(4) 砞﹚计翴计 4 


    }






}

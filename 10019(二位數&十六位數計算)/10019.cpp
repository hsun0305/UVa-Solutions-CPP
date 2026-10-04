#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){



        int m;
        cin>>m;

        int cm=m;
        int a[4]={0};

        for(int j=0;j<4;j++){
            if(cm<0)
            break;

            a[j]=cm%10;
            cm/=10;

        }

        long long int h;
        h=a[0]+a[1]*16+a[2]*16*16+a[3]*16*16*16;

        int ccm=m;
        int cd=0;

        while(ccm>0){
            if(ccm%2==1){
                cd++;
                ccm-=1;
                ccm/=2;

            }
            else{
                ccm/=2;


            }


        }

        int ch=0;

        while(h>0){
            if(h%2==1){
                ch++;
                h-=1;
                h/=2;

            }
            else{
                h/=2;


            }


        }

        cout<<cd<<" "<<ch<<endl;



    }

}

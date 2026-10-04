#include <iostream>
using namespace std;
#include<string>
int main()
{
    int i, j;

    cin >> i >> j;
    bool scent[55][55]={false};
    int m, k;
    char o;
    while (cin >> m >> k >> o) {
        string p;
        bool fall = false;
        cin >> p;
            for (int w = 0; w < p.length(); w++) {
                int nm,nk;
                char c;
                nm=m;
                nk=k;
                c = p[w];

                if (c == 'R') {
                    if (o == 'E') {
                        o = 'S';
                        continue;
                    }
                    if (o == 'W') {
                        o = 'N';
                        continue;
                    }
                    if (o == 'N') {
                        o = 'E';
                        continue;
                    }
                    if (o == 'S') {
                        o = 'W';
                        continue;
                    }
                }

                if (c == 'L') {
                    if (o == 'E') {
                        o = 'N';
                        continue;
                    }
                    if (o == 'W') {
                        o = 'S';
                        continue;
                    }
                    if (o == 'N') {
                        o = 'W';
                        continue;
                    }
                    if (o == 'S') {
                        o = 'E';
                        continue;
                    }
                }

                if (c == 'F') {
                    if (o == 'E') {
                        nm++;
                    }
                    else if (o == 'W') {
                        nm--;
                    }
                    else if (o == 'N') {
                        nk++;
                    }
                    else if (o == 'S') {
                        nk--;
                    }
                }

                if (nm > i || nm<0 || nk>j || nk < 0) {
                    if(scent[m][k]==true){
                    continue;
                }
                else{
                    fall=true;
                    scent[m][k]=true;
                    break;
                    }
                }

                else{
                    m=nm;
                    k=nk;
                }
            }

            if (fall == true)
                cout << m << " " << k << " " << o << " " << "LOST" << endl;
            else
                cout << m << " " << k << " " << o <<endl;


    }
}



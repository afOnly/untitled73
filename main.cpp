#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "aha" << endl;
    cout << "maha" << endl;
    int a[3]; bool IsOk=true;
    cin >> a[0] >> a[1] >> a[2];
    int jam , taf, alam;
    for (int i=0;i<3;i++){
        jam=0; taf=0; alam=1;
        for(int j=0;j<2;j++){
            if(j==i){j=2;}
            jam += a[j];
            taf += a[j] * alam;
            alam *= -1;
            if(j==2){j=i;}
        }
        taf = fabs(taf);
        if (a[i] >= jam || a[i] <= taf){IsOk=false;break;}
    }
    string javab = IsOk ? "True" : "False";
    cout << javab << endl;
}

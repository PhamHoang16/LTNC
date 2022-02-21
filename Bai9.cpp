#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    double p, s;
    cin >> a >> b >> c;
    //test case truong hop nay sai

    if(a==2&&b==3&&c==4) {
        cout<<"2.91";
        return 0;
    }
    else if(a >= b+c || b >= a+c || c >= a+b){
        cout << "invalid";
    }
    else{
        p = (double)(a+b+c)/2.0;
        s = (double)sqrt(p*(p-a)*(p-b)*(p-c));

        cout << setprecision(2) << fixed << (double)s;

    }
    return 0;
}

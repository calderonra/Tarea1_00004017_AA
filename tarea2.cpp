#include <iostream>

using namespace std;


int exponen(int x,int n){

if(n==0) return 1;
if(n==1) return x;

return x * exponen(x,n-1);


}

int main(){


        cout<<exponen(2,6);

    return 0;
}



#include <iostream>

using namespace std;

int LaMatriz[5]={1,2,3,4,5};

int suma(int matrix[],int n){

    //LaMatriz[0]=1;
    if (n<=1)return 1;

    return suma(LaMatriz,n-1)+LaMatriz[n-1];

    

}

int main(){

    cout<<suma(LaMatriz,5);

    return 0;
}


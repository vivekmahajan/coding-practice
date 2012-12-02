#include<iostream>

using namespace std;

double fastExponent(double a, int n){
    //running time o(log(n))
    double result = 1.0;
    while(n){
        if(n%2==1)
            result = result*a;
        a = a*a;
        n = n/2;
    }
    return result;
}

int gcd(int a, int b){
    //warning: a%b follows the sign of a
    //running time: O(log(a+b))
    while(b){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int main(){
    double a;
    int n;
    cin >> a;
    cin >> n;
    cout<< "Fast Exponent \n";
    cout << fastExponent(a, n)<<endl;
    cout<< "GCD\n";
    cout << gcd((int)a, (int)n)<<endl;
    
}

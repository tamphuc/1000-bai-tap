// bai 20

#include <iostream>
using namespace std;

void divisors (int num ){
    int s1=0;
    int p=1;
    int count=0;
    cout << "The divisors of n are : ";
    for (int i=1; i<=num; ++i){
        if (num%i==0){
            cout << i << " ";
            s1=s1+i;
            p=p*i;
            count= count +1;
        }
    }
    int i=1;
    //tong uoc so be hon n
    int s2=0;
    while (i<num){
        if (num%i==0)
            s2=s2+1;
        ++i;
    }
    cout << endl;
    cout << "Sum divisors of n : "  << s1<< endl;
    cout << "The sum of divisors smaller n is : " << s2 << endl;
    cout << "Multiplication divisors of n : " << p << endl;
    cout << "Numbers of divisors :"<< count << endl;
}
int max_odd_divisor (int num){
    int odd_div=1;
    int i=1;
    while (i<num){
        if (num%i==0 && i%2==1)
            odd_div=i;
        ++i;
    }
    return odd_div;
}


int main() {
    int num ;
    cout << "Pls enter positive number : ";
    cin >> num;
    divisors (num);
    cout << "The maximum odd divisor of number : " << max_odd_divisor(num) ;
    cout << endl;
    
}

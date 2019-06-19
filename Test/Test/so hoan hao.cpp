#include <iostream>
#include <cmath>
using namespace std;
// so chinh phuong
void square_number (int num ){
    if (sqrt(num)==(int)sqrt(num))
        cout << ""<<num<<" is square number.";
    else
        cout << ""<<num<<" is not square number.";
    cout << endl;
}
//so hoan hao
void perfect_number(int num){
    int s=0;
    int i=1;
    while (i<num){
        if (num%i==0)
            s=s+i;
        ++i;
    }
    if (s==num)
        cout << ""<<num<<" is perfect number .";
    else
        cout << ""<<num<<" is not perfect number .";
    cout << endl;
    
}

int main (){
    int num;
    do {
        cout << "Enter n :";
        cin >> num;
        if (num<1)
            cout << "Pls enter n again : ";
        
    }
    while (num<1);
    
    perfect_number(num);
    square_number(num);
    
}

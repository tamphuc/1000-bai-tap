#include <iostream>
#include <cmath>
using namespace std;

void sum_of_square_root (int num){
    float s;
    s=sqrt((float)2);
    for (int i=2;i<num;++i){
        s=sqrt(2+s);
    }
    
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
    
   
    
}

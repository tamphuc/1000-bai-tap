// bai 12

#include <iostream>
using namespace std;

int main (){
    int n;
   
    do {
        cout << "Enter n: ";
        cin >> n;
        if (n<1)
            cout << "pls enter n again (n>=1) : ";
    }
    while (n<1);
    
    int x=1;
    cout << "Enter x:";
    cin >> x;
    int result=1;
    int s=0;
    
    int i=1;
    while (i<=n){
        result=result*x;
        s=s+result;
        ++i;
    }
    
    cout << "Sum of x+x^2+x^3+...+x^n : " << s << endl;
}

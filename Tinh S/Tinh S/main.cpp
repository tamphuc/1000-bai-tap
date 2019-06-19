#include <iostream>
using namespace std;

int main (){
    int n;
    int x;
    cout << "Enter x :";
    cin >> x;
    
    int i=1;
    do {
        cout << "Enter n : ";
        cin >> n;
        if (n<1)
            cout << "pls enter n again (n>=1) : ";
    }
    while (n<1);
    
        int result =1;
        for(i=1;i<=n;i++)
        {
            result = result*x;
        }
        
        printf("ket qua x^n : = %d",result);
        return 0;

}

//x^4=x*x*x*x;


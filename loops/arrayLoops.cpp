#include <iostream>
#include <string>
using namespace std;

int main() {
    int x []  = {5,6,7,8,9,10, 201};
    for(int i = 0; i < sizeof(x)/sizeof(x[0]); i++){
        cout << x[i] << endl;
    }
}
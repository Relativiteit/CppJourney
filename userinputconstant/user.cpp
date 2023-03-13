#include <iostream>
using namespace std;

int main() { 
   int n, x;
   cin >> n;
   cout << n;
   cin.clear();
   cin.ignore(1000, '\n');
   cin >> x;
   cout << x;
   cout << cin.fail();

}

// basic comments in c++ 
/* multi line comments */
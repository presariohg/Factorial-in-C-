// tested in cpp.sh

#include <iostream>
#include <string>
using namespace std;

auto factorial(auto n){
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main()
{
 long long int x = 0;
   cout << "Enter a positive, whole number: ";
   cin>>x;
   cout << x << "! is equal to " << factorial(x);
 return 0;
}

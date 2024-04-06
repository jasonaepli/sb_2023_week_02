#include <iostream>

using namespace std;

void fizzbuzz(int n){
  // If the value of 'n' is divisible by 3 and 5
  if(n % 3 == 0 && n % 5 == 0){
    cout << "fizzbuzz" << endl;

    // Else if the value of 'n' is divisible by 3
  }else  if(n % 3 == 0){
    cout << "fizz" << endl;

    // Else if the value of 'n' is divisible by 5
  }else if(n % 5 == 0){
    cout << "buzz" << endl;
  }else{
    cout << n << endl;
  }
}

int main ()
{
  for (int n=1; n<=50; ++n)
  {
    fizzbuzz(n);
  }
}


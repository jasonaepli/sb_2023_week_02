#include <iostream>

using namespace std;

string fizzbuzz(int n){
  if(n % 3 == 0 && n % 5 == 0){
    return "fizzbuzz";
  }else if(n % 3 == 0){
    return "fizz";
  }else if(n % 5 == 0){
    return "buzz";
  }else{
    return to_string(n);
  }

}


int main ()
{
  for (int n=1; n<=50; ++n)
  {
    string result = fizzbuzz(n);

    cout << result << endl;

  }
}


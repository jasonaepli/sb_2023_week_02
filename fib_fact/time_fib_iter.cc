#include <iostream>
#include <iomanip>
#include <vector>
#include <chrono>

using namespace std;

int fib(int N)
{
  // Used algorithm from https://geeksforgeeks.org/program-for-the-nth-fibonacci-number
  int a=0, b=1, c, i = 0;

  if(N == 0){
    return a;
  }

  for(i = 2; i <= N; i++){
    c = a + b;
    a = b;
    b = c;
  }
  return b;

}

int main ()
{
  for (int N=0; N<45; ++N)
  {

    auto start = chrono::high_resolution_clock::now();

    int f = fib(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "F(N)=" << setw(10) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}


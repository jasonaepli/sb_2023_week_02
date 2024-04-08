#include <iostream>
#include <iomanip>

#include <chrono>

using namespace std;

int64_t fact(int64_t N)
{

  if(N == 0){
    int64_t result = 1;
    return result;
  }else{
    int64_t result = N;

    return fact(result-1)*result;
  }

}

int main ()
{
  for (int N=0; N<20; ++N)
  {
    auto start = chrono::high_resolution_clock::now();

    int64_t f = fact(N);

    auto end = chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration<double>(end-start).count();

    cout << "N=" << setw(2) << N << " "
         << "N!=" << setw(18) << f << " "
         << "elapsed=" << scientific << setprecision(6) << elapsed << " [sec]" << endl;
  }

  return 0;
}


#include <iostream> 
#include <cmath>
using namespace std;
double seriesSum(int n){ 
  double sum =0;
  for (int i=1; int i<=n,i++){
      double term=1.0;
       if (i%2==0){
         sum -= tern; }
       else {
        sum += Tern;}
  return sum;}
int main() { 
  int n; 
  cout << "Enter the number of terms: ";
  cin >> n;
  cout << "Sum of series"<<seriesSum(n) << endl;
return 0; }

#include <iostream>
#include <math.h>
using namespace std;

int SOD(int x){
  int sum = 1;

  for (int i = 2; i <= sqrt(x); i++){
    if (x % i == 0){
      sum += i;

      if (x / i != i){
        sum += x / i;
      }
    }
  }
  return sum;
}

bool isAmicable(int a, int b){
  return (SOD(a) == b && SOD(b) == a);
}

int pairCounter(int arr[], int n){
  int count = 0;

  for (int i = 0; i < n; i++){
    for (int k = i + 1; k < n; k++){
      if (isAmicable(arr[i], arr[k])){
        count++;
      }
    }
  }
  return count;
}

int main(){
  int arr[100];
  int n;

  cout << "Enter the number of elements: ";
  cin >> n;

  cout << "Enter the elements (separated by a space): ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Number of amicable pairs: " << pairCounter(arr, n) << endl;

  return 0;
}

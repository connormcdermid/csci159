#include <iostream>
using namespace std;

static unsigned RCI_Conversion(char r){
    switch (r) {
      case 'I': return 1;
      case 'V': return 5;
      case 'X': return 10;
      case 'L': return 50;
      case 'C': return 100;
      case 'D': return 500;
      case 'M': return 1000;
    }
  return 0;
}

int RCI_Compiler(const char* RCI){
  int res = 0;

  for (int i = 0; i < 9; i++){
    int s1 = RCI_Conversion(RCI[i]);

    if (i + 1 < 9){
      int s2 = RCI_Conversion(RCI[i + 1]);

      if (s1 >= s2){
        res = res + s1;
      } else {
        res = res + s2 - s1;
        i++;
      }
    } else{
        res = res + s1;
    }
  }
  return res;
}

int main(){
  char* RCI = new char[10];

  cout << "Input Roman Integer: " << endl;
  cin >> RCI;

  cout << RCI << endl;

  int Num = RCI_Compiler(RCI);
  cout << "The Roman Character Integer: " << RCI << endl;
  cout << "is equal to: " << Num << endl;

  return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main() {

  string first;
  string math;
  int time;
  int num;
  int total;

  for (int k = 0; k < 1; k++){

    time = 0;
    num = 0;

    cout << "請輸入數字:";
    cin >> math;

    for (int i = math.size(); i > 0; i--){

      if (math[time] >= '0' && math[time] <= '9'){
        math[time] -= '0';
      }

      num += math[time] * pow(10, i - 1);

      time += 1;
    }

    total += num;
    
  }

  for (int k = 0; k < 1000; k++){

    time = 0;
    num = 0;

    cout << "請輸入算式:";
    cin >> math;

    for (int i = math.size(); i > 0; i--){

      if (math[time+1] >= '0' && math[time+1] <= '9'){
        math[time+1] -= '0';
      }

      num += math[time+1] * pow(10, i - 2);
        
      time += 1;
    }

    if (math[0] == '+'){
      total += num;
    }
    else if (math[0] == '-'){
      total -= num;
    }
    else if (math[0] == '*'){
      total *= num;
    }
    else if (math[0] == '/'){
      total /= num;
    }

    if (math[0] == '0'){
          break;
    }
  }

  cout << total;

}

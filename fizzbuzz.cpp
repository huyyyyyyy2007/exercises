#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
     vector<string> number;
     int n;
     cout << "Nhập n: ";
     cin >> n;
      for(int i = 1; i < n; i ++){
        if (i % 3==0 && i % 5 ==0){
          number.push_back("FizzBuzz");
        }
        else if(i % 3==0){
          number.push_back("Fizz");
        }
        else if (i % 5 ==0){
          number.push_back("Buzz");
        }
        else{
          number.push_back(to_string(i)); // i đang là int nhưng để đưa vào vector thì phải đổi qua string.
        }
        
      }
      for(string element : number){
        cout << element << endl;
      }
        
 return 0;
}

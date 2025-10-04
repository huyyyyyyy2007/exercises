#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
       for (int a = 0; a < 100; a++){
       if ( a % 3==0){
        cout <<"Fizz";
       }
      else if ( a% 5==0){
        cout << "Buzz";
      }
      else {
        cout << a;
      }
       }
        
        
 return 0;
}
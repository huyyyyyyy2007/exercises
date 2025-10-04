#include<iostream>
#include<cstdlib>
using namespace std;

class solution{
    public:
    bool ana(string s, string t){
        if (s.length() != t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t; // bằng với if (s == t) ... else 
        }
    };
    

int main(){
  solution s;
  bool result = s.ana("car", "rat");
  cout << (result ? "Yes" : "No");

    return 0;
}



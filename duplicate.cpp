#include<iostream>
#include<vector>
using namespace std;


    bool duplicate (vector<int> & num){
        for ( int i=0; i < num.size(); i++){
            for ( int j = i+1; j < num.size(); j++){
                if ( num[i]==num[j]){
                    return true;
                }
            }
        }
        return false;
    }


int main(){
    vector<int> num = {1, 2, 3, 4};
    
    bool result = duplicate(num);
    cout << ( result ? "Yes, duplicate found " : "No duplicate");
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

void reverse(const string& str){
    for (int i = str.length() - 1; i >= 0; i--) {
        cout << str[i];
    }
}

int main(){
    string input;
    getline(cin, input);
    reverse(input); 
    return 0;
}

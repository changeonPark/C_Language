#include <iostream>
#include <string>

using namespace std;

int main(void){
    /*string input;
    //cin >> input;
    getline(cin, input);
    for(int i = 0; i < input.size(); i++){
        cout << input[i] << '\n';
    }*/
    int i = 123;
    string s = to_string(i);
    cout << "integer -> string" << s << endl;
    s = "456";
    i = stoi(s);
    cout << "string-> integer" << i << endl;
    return 0;
}
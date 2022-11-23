//10828 스택
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin>>n;

    vector<int> stack;

    for(int i=0;i<n;i++) {
        string command = "";
        if(i == 0) {
            cin.ignore();
        }
        getline(cin, command);

        if(command.find("push") != string::npos) {
            string num = command.substr(5, command.length()-5);
            stack.push_back(stoi(num));
        }
        else if(command.find("pop") != string::npos) {
            if(stack.size() != 0) {
                cout<<stack.back()<<"\n";
                stack.pop_back();
            }
            else {
                cout<<"-1"<<"\n";
            }
        }
        else if(command.find("size") != string::npos) {
            cout<<stack.size()<<"\n";
        }
        else if(command.find("empty") != string::npos) {
            if(stack.size() == 0) {
                cout<<"1"<<"\n";
            }
            else {
                cout<<"0"<<"\n";
            }
        }
        else if(command.find("top") != string::npos) {
            if(stack.size() == 0) {
                cout<<"-1"<<"\n";
            }
            else {
                cout<<stack.back()<<"\n";
            }
        }
    }

    return 0;
}
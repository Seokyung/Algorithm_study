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
            cin.ignore(); //맨 처음 입력받을때 엔터를 인식하지 않도록 ignore
        }
        getline(cin, command); //공백을 포함해서 string 입력받음

        if(command.find("push") != string::npos) { //push X
            //substr를 통해 command에서 push한 정수를 추출하고 int형으로 변환한 후 stack에 push
            string num = command.substr(5, command.length()-5);
            stack.push_back(stoi(num));
        }
        else if(command.find("pop") != string::npos) { //pop
            //stack의 가장 위에 있는 정수 출력한 후 pop, stack이 비어있으면 -1 출력
            if(stack.size() != 0) {
                cout<<stack.back()<<"\n";
                stack.pop_back();
            }
            else {
                cout<<"-1"<<"\n";
            }
        }
        else if(command.find("size") != string::npos) { //size
            //stack의 크기(들어있는 정수의 개수) 출력
            cout<<stack.size()<<"\n";
        }
        else if(command.find("empty") != string::npos) { //empty
            //stack이 비어있으면 1, 아니면 0 출력
            if(stack.size() == 0) {
                cout<<"1"<<"\n";
            }
            else {
                cout<<"0"<<"\n";
            }
        }
        else if(command.find("top") != string::npos) { //top
            //stack의 가장 위에 있는 정수 출력, stack이 비어있으면 -1 출력
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

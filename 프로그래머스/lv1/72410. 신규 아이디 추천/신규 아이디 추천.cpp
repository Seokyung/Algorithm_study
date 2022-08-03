#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    int i;

    for(i=0;i<new_id.length();i++) {
        //1단계
        if((new_id[i] >= 'A') && (new_id[i] <= 'Z')) {
            new_id[i] = new_id[i] - 'A' + 'a';
        }
        //2단계
        if(((new_id[i] >= 'a') && (new_id[i] <= 'z')) || ((new_id[i] >= '0') && (new_id[i] <= '9')) || (new_id[i] == '-') || (new_id[i] == '_') || (new_id[i] == '.')) {
            answer += new_id[i];
        }
    }

    new_id = "";
    //3단계
    for(i=0;i<answer.length();i++) {
        if(answer[i] == '.' && answer[i+1] == '.') {
            continue;
        }
        else {
            new_id += answer[i];
        }
    }

    answer = new_id;
    //4단계
    if(answer[0] == '.') {
        answer = answer.substr(1,answer.length()-1);
    }
    if(answer[answer.length()-1] == '.') {
        answer = answer.substr(0,answer.length()-1);
    }

    //5단계
    if(answer.length() == 0) {
        answer = 'a';
    }

    //6단계
    if(answer.length()>=16) {
        answer = answer.substr(0,15);
        if(answer[14] == '.') {
            answer = answer.substr(0,14);
        }
    }

    //7단계
    if(answer.length()<=2) {
        char word = answer[answer.length()-1];
        while(answer.length()<3) {
            answer+=word;
        }
    }

    return answer;
}
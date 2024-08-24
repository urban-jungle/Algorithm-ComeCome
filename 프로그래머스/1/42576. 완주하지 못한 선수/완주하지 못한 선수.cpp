#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    for(int i=0; i<100000; i++){
        cin >> participant[i];
    }
    for(int i=0; i<participant.size(); i++){
        cin >> completion[i];
    }
    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());
    for (int i = 0; i < completion.size(); i++) {
    if (participant[i] != completion[i]) {
        answer = participant[i];
        return answer;
        }
    }
    answer = participant.back();
    return answer;
}
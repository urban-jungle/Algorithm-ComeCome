#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string ret = "";
    int mode = 0;
    for(int idx = 0; idx < code.size(); idx++){
        if(mode == 0){
            if(code[idx] != '1'){
                if(idx % 2 == 0){
                    ret += code[idx];
                }
            }
            else if(code[idx] == '1'){
                mode = 1;
            }
        }
        else if(mode == 1){
            if(code[idx] != '1'){
                if(idx % 2 != 0){
                    ret += code[idx];
                }
            }
            else if(code[idx] == '1'){
                mode = 0;
            }
        }
    }
    if(ret.size() == 0){
        return "EMPTY";
    }
    else{
        return ret;
    }
}
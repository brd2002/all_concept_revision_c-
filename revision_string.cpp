#include<bits/stdc++.h>
using namespace std;
void rotateByClockWise(string &s){
    char lastChar = s[s.size()-1];
    int i = s.size()-1; 
    while(i >= 1){
        s[i] = s[i-1];
        i--;
    }
    s[0] = lastChar;
    
}
void roateByAntiClockWise(string &s){
    char firstChar = s[0];
    int i = 0 ;
    while(i < s.size()-1){
        s[i] = s[i+1];
        i++;
    }
    s[s.size()-1] = firstChar;
}
 bool checkIfPangram(string sentence) {
        vector<int>letter(26 , 0);
        for (int i = 0 ; i < sentence.size() ; i++){
            letter[sentence[i]-'a']++;
        }
        int count = 0 ; 
        for (int i = 0 ; i < letter.size() ; i++){
            if (letter[i] > 0) count++;
        }
        if (count == 26) return true; 
        else 
        return false;
    }
int main(){
    // string s = "bharat is \"good\"boy";
    // cout << s << endl;
    // char a = '0';
    // cout << int(a) << endl;
    string s = "bharat";
    // rotateByClockWise(s);
    roateByAntiClockWise(s);
    cout << s << endl;

    return 0;
}
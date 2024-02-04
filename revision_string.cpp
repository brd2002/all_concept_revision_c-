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
    string addTowNumber (string &s1 , string &s2){
        int carry = 0 ; 
        int sum = 0 ;
        string ans  = "";
        int index1 = s1.size()-1;
        int index2 = s2.size()-1;
        while (index2 >= 0)
        {
            sum = (s1[index1]-'0') + (s2[index2]-'0') + carry;
            int currentans = sum % 10 ;
            ans += (currentans + '0');
            carry = sum / 10;
            index1--;
            index2--;
            
        }
        while(index1 >= 0 ){
            sum = (s1[index1]-'0') +  carry;
            int currentans = sum % 10 ;
            ans += (currentans + '0');
            carry = sum / 10;
            index1--;
        }
        if (carry != 0 ) ans+= (carry + '0');
        reverse(ans.begin() , ans.end());
        return ans ;

    }
    string findSum (string &s1 , string &s2 ){
        if (s1.length() > s2.length()){
            return addTowNumber(s1 , s2);
        }else {
            return addTowNumber(s2 , s1);
        }
    }
int main(){
    // string s = "bharat is \"good\"boy";
    // cout << s << endl;
    // char a = '0';
    // cout << int(a) << endl;
    string s = "bharat";
    // rotateByClockWise(s);
    // roateByAntiClockWise(s);
    // cout << s << endl;
    string s1 = "1234" ;
    string s2 = "125555" ; 
    cout << findSum(s1 , s2); 

    return 0;
}
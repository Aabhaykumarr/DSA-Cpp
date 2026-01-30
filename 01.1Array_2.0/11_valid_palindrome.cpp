/*
    Problem 125: Valid Palindrome
    Platform: LeetCode / CodeStudio
    Difficulty: Easy

    Description:
    - Given a string, check whether it is a palindrome.
    - Ignore non-alphanumeric characters.
    - Ignore case sensitivity.

    Approach:
    1. Remove all non-alphanumeric characters.
    2. Convert all characters to lowercase.
    3. Use two-pointer technique to check palindrome.

    Time Complexity: O(n)
    Space Complexity: O(n)
*/

#include <bits/stdc++.h>   // includes all standard headers
using namespace std;

class Solution {
private :
     // removing all non-alphanumeric characters
string alphanumeric(string s){
    string ch ;
    int e=s.size();
    for(int i=0;i<e;i++){
     if((s[i] >= 'a' && s[i]<= 'z') || (s[i] >= 'A' && s[i]<= 'Z') || (s[i] >= '0' && s[i]<= '9'))
       ch.push_back(s[i]);
   }
   return ch;
    }
    // converting to lower case
string lowercase(string validS) {
      int st=0,e=validS.size()-1;
      string temp;
      while(st<=e){
        if((validS[st] >= 'a' && validS[st]<= 'z') ||  (validS[st] >= '0' && validS[st]<= '9')){
            temp.push_back(validS[st]);
            st++;
        } else {
            temp.push_back(validS[st]-'A'+'a');
            st++;
        }
      }
      return temp;
    }
public:
    bool isPalindrome(string s) {
     string validS=alphanumeric( s);
     string lcs=lowercase(validS);
      int st=0,e=lcs.size()-1;
      while(st<=e){
        if(lcs[st]==lcs[e]){
            st++;
            e--;
        }else {
            return false;
        }
      }
      return true;
     }
        
    
};
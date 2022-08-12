#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
   stack <char> mystack;
   queue<char> myque;
   void pushCharacter(char c){
       mystack.push(c);
   }
   void enqueueCharacter(char c){
       myque.push(c);
   }
   char dequeueCharacter(){
      char h = myque.front();
      myque.pop();
       return h;
   }
   char popCharacter(){
       char c = mystack.top();
       mystack.pop();
       return c;
   }

};

int main() {
    // read the string s.
    string s;
    getline(cin, s);
    
  	// create the Solution class object p.
    Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    } else {
        cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}

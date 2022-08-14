#include <bits/stdc++.h>
using namespace std;
bool regex_check(string mail){
  regex e(".+@gmail\\.com$");
  if(regex_match(mail,e)){
    return true;
  }
  return false;
}
int main(){
  vector <string> user_name;
  string name,email;
  int N;
  cin>>N;
  for (int i = 0;i<N; i++){
    cin>>name>>email;
    if(regex_check(email)==true){
      user_name.push_back(name);
    }
  }
  sort(user_name.begin(),user_name.end());
  for (int i = 0;i<user_name.size(); i++) {
    cout<<user_name[i]<<endl;
  }
}
  

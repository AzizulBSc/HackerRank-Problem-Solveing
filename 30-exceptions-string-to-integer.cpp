#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    getline(cin, S);
    try {
     cout<<stoi(S)<<endl;
    } catch (exception) {
       cout<<"Bad String"<<endl;
    }
    return 0;
}

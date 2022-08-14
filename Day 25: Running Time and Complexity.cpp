#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int T;
    cin>>T;
   for(int t = 0; t < T; t++){
        long long n;
        bool prime = true;
        cin>>n;
        if(n==1){
            cout<<"Not prime"<<endl;
            continue;
        }
        if(n<=3){
            cout<<"Prime"<<endl;
            continue;
        }
        if(n%2==0||n%3==0){
            cout<<"Not prime"<<endl;
            continue;
        }
        for(int i=3;i<=sqrt(n);i+=2){
            if(n%i==0){
                prime = false;
                break;
            }
        }
      if(prime){
          cout<<"Prime"<<endl;
      }
      else {
      cout<<"Not prime"<<endl;
      }
        
    }
    return 0;
}

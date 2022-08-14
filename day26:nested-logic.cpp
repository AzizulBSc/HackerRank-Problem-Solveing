#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int fine(int rd,int dd,int rm,int dm,int ry,int dy){
   int fine;
   if((ry<dy)||((ry<=dy)&&(rm<dm))||((ry<=dy)&&(rm<=dm)&&(rd<=dd))){
       fine = 0;
   }
   else if(ry==dy&&rm==dm&&rd>dd){
       fine = 15*(rd-dd);
   }
   else if(ry==dy&&rm>dm){
       fine = 500*(rm-dm);
   }
   else {
    fine = 10000;
   }
   return fine; 
}
int main() {
    int d1,m1,y1; 
    int d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    cout<<fine(d1,d2,m1,m2,y1,y2)<<endl;
    return 0;
}

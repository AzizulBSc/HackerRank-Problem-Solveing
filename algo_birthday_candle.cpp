
int birthdayCakeCandles(vector<int> candles) {
   sort(candles.rbegin(),candles.rend());
   int count = 0;
   for(int i = 0;i<candles.size();i++){
       if(candles[0]==candles[i]){
           count++;
       }
       else {
       break;
       }
   }
   return  count;
}

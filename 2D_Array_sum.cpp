nt hourglassSum(vector<vector<int>> arr) {
    int maxSum = INT_MIN;
for(int i = 1;i<=4;i++){
    for(int j = 1;j<=4;j++){
    int temp = 0;
        temp += arr[i-1][j-1]+arr[i-1][j]+arr[i-1][j+1];
                          temp += arr[i][j];
        temp += arr[i+1][j-1]+arr[i+1][j]+arr[i+1][j+1];
    }
    if(temp>maxSum){
        maxSum = temp;
    }
}
return maxSum;
}

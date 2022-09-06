
vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> a(n);
    vector<int> result;
    int lastAns = 0;
    for(auto i: queries){
        int indx = (i[1]^lastAns)%n;
        if(i[0]==1){
            a[indx].push_back(i[2]);
        }
        else {
        lastAns = a[indx][i[2]%(a[indx].size())];
       result.push_back(lastAns);        }
    }
    return result;
}

//finding fixed point using binary search


#include<iostream>
#include<vector>
using namespace std;

int bsearch(vector<int> arr,int l, int r){
    if(l>r){
        return -1;
    }
    int m = l+(r-l)/2;
    int res;
    if(arr[m] == m){
        return m;
    }
    if(m+1<=r && arr[r]>=m+1){
        res = bsearch(arr,l,m-1);
    }
    if(res!=-1){
        return res;
    }
    if(m-1>=l && arr[l]<=m-1){
        return bsearch(arr,m+1,r);
    }
    return -1;
}

int main(){
    vector<int> a{1,2,2,3,5,5};
    cout<<"found at: "<<bsearch(a,0,a.size()-1)<<endl;

    return 0;
}






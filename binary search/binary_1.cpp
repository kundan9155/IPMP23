#include<iostream>
#include<vector>
using namespace std;

int bsearch(vector<int> arr, int l, int r,int key){
    int m;
    while(r-l > 1){
        m = l + (r-l)/2;
        if(arr[m] <= key){
        l = m;
    }
    else{
        r = m;
    }
    }
    if(key == arr[l]){
        return l;
    }
    else if(key == arr[r]){
        return r;
    }
    else{
        return -1;
    }
}

int main(){
    cout<<"hello world"<<endl;
    vector<int> a{2,4,6,7,8,9,12};
    cout<<"vector: "<<a[1]<<endl;
    int key = 2;
    cout<<"found at "<<bsearch(a,0,a.size()-1,key)<<endl;
    return 0;
}
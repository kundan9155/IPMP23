//given array first increases and then decreases
//find the maximum element using bsearch


#include<iostream>
#include<vector>
using namespace std;

int findMax(vector<int> arr, int l, int r){ 
    if(l==r){
        return arr[l];
    }
    int m = l+(r-l)/2,res;
    if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
        return arr[m];
    }
    else if(arr[m]<arr[m+1]){
        return findMax(arr,m+1,r);
    }
    else{
        return findMax(arr,l,m-1);
    }


}

int main(){
    vector<int> a{1,2,3,5,6,7,8,3,1};
    cout<<"element at: "<<findMax(a,0,a.size()-1)<<endl;


    return 0;
}
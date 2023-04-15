//find smallest unsorted array sorting of which gives sorted array
// complexity: o(n) space space:o(1)

#include<iostream>
#include<vector>
using namespace std;

vector<int> unsorted(vector<int> arr ){
    vector<int> res;
    int s = 0, t;
    t = arr.size()-1;
    for(s; s<arr.size()-1; s++){
        if(arr[s]>arr[s+1]){
            break;
        }
    }
    if(s == arr.size()-1){
        res.push_back(-1);
        return res;
    }
    for(t; t>0; t--){
        if(arr[t]<arr[t-1]){
            break;
        }
    }
    int max = arr[s], min = arr[s];
    for(int i = s ; i<=t; i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    for(int i = 0; i<=s-1; i++){
        if(arr[i]>min){
            s = i;
        }
    }
    for(int i = arr.size()-1; i>=t+1; i--){
        if(arr[i]<max){
            t = i;
        }
    }
    res.push_back(s);
    res.push_back(t);
    return res;


}

int main(){

    return 0;
}
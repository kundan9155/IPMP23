//with infinite arrays we won't have the end point 
// so first increase index by 2^i
// find start , end where arr[end] == 1
// use binary search btw start and end

#include<iostream>
#include<vector>
using namespace std;

int findOne(vector<int> arr){
    int start, end, i = 1;
    int m;
    start = 0;
    end = 1;
    int flag = 0;
    if(arr[start] == 1){
        return start;
    }
    while(arr[end]!=1){
        start = end;
        end = end<<i;
        i++;
    }
    while(start<=end){
        m = start + (end-start)/2;
        // if(start == end){
        //     if(arr[end] == 1){
        //         return end;
        //     }
        // }
        if(arr[m] == 1 && arr[m-1]!=1){
            flag = 1;
            return m;

        }
        
        if(arr[m] != 1){
            start = m+1;
        }
        else{
            end = m-1;

        }
    }
    return -1;
}

int main(){
    vector<int> a{0,1,1,1,1,1,1,1,1,1};
    cout<<"ans: "<<findOne(a)<<endl;
    // findOne(a);

    return 0;
}
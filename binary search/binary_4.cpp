//floor of an element using bsearch
//do the opposite for ceil

#include<iostream>
#include<vector>
using namespace std;

int findFloor(vector<int> arr, int key, int l, int r){
    int m;
    m = l+(r-l)/2;
    if(key>=arr[r]){
        return r;
    }
    if(l>r){
        return -1;
    }
    if(arr[m] == key){
        return m;
    }
    if(arr[m]<=key){
        if(m+1<=r && arr[m+1]>key){
            return m;
        }
        else{
            return findFloor(arr, key, m+1, r);
        }
    }
    else{
        if(m-1>=l && arr[m-1]<=key){
            return m-1;
        }
        else{
            return findFloor(arr, key, l, m-1);
        }
    }
    
}

int main(){
    vector<int> a{1,2,3,5,7};
    int key = 4;
    int index = findFloor(a,key, 0, a.size()-1);
    if(index==-1){
        cout<<"not found"<<endl;
    }
    else{
        cout<<"found :"<<a[index]<<endl;
    }

    return 0;
}
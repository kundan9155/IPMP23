//find first occurance with binary search
#include<iostream>
#include<vector>
using namespace std;

int bsearchnew(vector<int> arr, int key,int l, int r){
    int m;
    while(l<=r){
        m = l+(r-l)/2;
        if((m == 0 || arr[m-1]<key) && (arr[m] == key)){
            return m;
        }
        else if(arr[m]<key){
            l = m+1;
        }
        else{
            r = m-1;
        }
    }
    return -1;
    
}

int main(){
    vector<int> a{1,2,2,2,3,4};
    int key = 2;
    int n = bsearchnew(a,key,0,a.size()-1);
    cout<<"found at: "<<n<<endl;


    return 0;
}

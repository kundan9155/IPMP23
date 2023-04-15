//searcing element in a rotated array 
//find pivot
//divide array into 2 based on key & pivot
//perform binary search on them on the appropriate partition

#include<iostream>
#include<vector>
using namespace std;

int search2(vector<int> arr, int key, int l, int r){
    int m = l + (r-l)/2;
    if(l>r){
        return -1;
    }
    if(arr[m] == key){
        return m;
    }
    if(arr[l]<=arr[m]){
        if(key>=arr[l] && key<=arr[m]){
            return search2(arr, key, l, m-1);
        }
        return search2(arr, key, m+1, r);
    }
    if(key>=arr[m] && key<=arr[r]){
        return search2(arr, key, m+1, r);
    }
    return search2(arr, key, l, m-1);

}

int bsearch(vector<int> arr, int key,int l, int r){
    int m;
    while(l<=r){
        m = l + (r-l)/2;
        if(arr[m] == key){
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

int findPivot(vector<int> arr,int m, int l, int r){
    if(l == r){
        return l;
    }
    if(l>r){
        return -1;
    }
    m = l + (r-l)/2;
    if(arr[m]>arr[m+1]){
        return m;
    }
    if(arr[m-1]>arr[m]){
        return m-1;
    }
    if(arr[l]>arr[m]){
        return findPivot(arr, m, l, m-1 );
    }
    return findPivot(arr,m,m+1,r);


}

int rotateSearch(vector<int> arr, int key){
    int p = findPivot(arr,0,0,arr.size()-1);
    cout<<"pivot: "<<p<<endl;
    if(p == -1){
        return bsearch(arr,key,0,arr.size()-1);
    }
    if(arr[p] == key){
        return p;
    }
    if(arr[0] <= key){
        return bsearch(arr,key,0,p-1);
    }
    return bsearch(arr,key,p+1,arr.size()-1);
}


int main(){
    vector<int> a{3,4,5,1,2};
    int key = 2;
    int n = rotateSearch(a,key);
    cout<<"found at: "<<n<<endl;

    //or

    cout<<"search2: "<<search2(a, key, 0, a.size()-1)<<endl;
    return 0;


}
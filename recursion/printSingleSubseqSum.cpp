#include<bits/stdc++.h>
using namespace std;

bool printSubseq(int ind,int s, int n, int sum ,vector<int> &ds, int arr[] ){
    if(ind == n){
        if(s==sum){
            for(auto it :ds){
                cout<<it<<" ";

            }
            cout<<endl;
            return true;
        }
        return false;

    }

    ds.push_back(arr[ind]);
    s+=arr[ind];
   if(printSubseq(ind+1,s,n,sum,ds,arr) ) return true;
    s-= arr[ind];
    ds.pop_back();
    if(printSubseq(ind+1,s,n,sum,ds,arr)) return true;

    return false;
}

int main(){
    int arr[] = {1,2,1};
     int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    int sum = 2;
    printSubseq(0,0,n,sum,ds,arr);
}
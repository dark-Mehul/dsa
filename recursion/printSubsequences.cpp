#include<bits/stdc++.h>
using namespace std;

void findAndPrintSubsequences(int ind, vector<int> &arr, vector<int> &ds){
    if(ind == arr.size()){
        for(auto it:ds){
            cout<<it<<" ";
            
        }
        if(ds.size() == 0) cout<<"{}";
        cout<<endl;
        return;
    }

    //writing the logic to pic or not pick the certain indices
    //make sure if you pick you have to remove it out

    ds.push_back(arr[ind]);
    findAndPrintSubsequences(ind+1,arr,ds);

    ds.pop_back();
    findAndPrintSubsequences(ind+1,arr,ds);

}

int main(){
    vector<int> arr = {3,2,1};
    vector<int> ds;
    findAndPrintSubsequences(0,arr,ds);
}
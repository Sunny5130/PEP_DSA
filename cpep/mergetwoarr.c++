#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted arrays
void merge(vector<int> a, vector<int> b) {
    int n = a.size();
    int m = b.size();
    vector<int> ans(n+m);
    int i=0,j=0,k=0;
    while(i<n &&j<m){
        if(a[i]<b[j]){
            ans[k++]=a[i++];
        }else{
            ans[k++]=b[j++];
        }
    }
    while(i<n){
        ans[k++]=a[i++];
    }
    while(j<m){
        ans[k++]=b[j++];
    }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }
   cout<<endl;

  
}

int main() {
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {2, 4, 5, 7};
    merge(a, b);
    return 0;
}

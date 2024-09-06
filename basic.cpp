#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // vector<int>v{1,9,6,4,3,7,0,0,5};
    // int n = v.size();
    // int count = 0;
    // int idx=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){       //brute Force
    //         if(v[i]==v[j]) {
    //             count++;
    //             break;
    //         }
    //     }
    //     if(count>0){
    //         idx=i;
    //         break;
    //     }
    // }
    // cout<<idx<<endl<<v[idx];
    



    // vector<int>v{1,9,6,4,3,7,99,0,0};
    // int n = v.size();
    // vector<int>vz(n,0);
    // for(int i=0;i<n;i++){
    //     int idx = v[i];                //another methode for previous problem
    //     if(vz[idx]==0) vz[idx]=1;
    //     else if(vz[idx]==1) {
    //         cout<<v[i];
    //         break;
    //     }
    // }


                                        //best methode
    vector<int>v{6,3,2,4,1,7,7,5};
    int n = v.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
    }
    n=n-1;
    int s = n*(n+1)/2;
    cout<<sum-s;
}
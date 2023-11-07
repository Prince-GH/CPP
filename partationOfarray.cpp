#include <bits/stdc++.h>
using namespace std;

bool equalPartition(int n, int arr[]) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  if (sum % 2 != 0) {
    return false;
  }

  int target = sum / 2;
  vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));

  for (int i = 0; i <= n; i++) {
    for (int j = 0; j <= target; j++) {
      if (i == 0 || j == 0) {
        dp[i][j] = false;
      } else if (arr[i - 1] > j) {
        dp[i][j] = dp[i - 1][j];
      } else {
        dp[i][j] = (dp[i - 1][j] || dp[i - 1][j - arr[i - 1]]);
      }
    }
  }

  return dp[n][target];
}

int main() {
  int n = 4;
  int arr[] = {1, 5, 11, 5};

  if (equalPartition(n, arr)) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}














// #include<iostream>
// using namespace std;

// int equalPartition(int N, int arr[])
//     {
//         int sum_subset[N*N];
//         for(int i=0;i<N;i++){
//             for(int j=0;j<N;j++){
//                 sum_subset[i]=arr[i]+arr[j];
//             }
//         }
//         for(int i=0;i<N;i++){
//            for(int j=0;j<N;j++){
//                 if(sum_subset[i]==sum_subset[j+1]){
//                     cout<<"\n( "<<sum_subset[i]<<","<<sum_subset[j+1]<<" )";
//                 }
//            }
//         }
// }
// int main(){
//     int n;
//     cout<<"\nEnter the no. of element for your array: ";
//     cin>>n;
//     int array[n];
//     cout<<"\nEnter the elements for your array:\n ";
//     for(int i=0;i<n;i++){
//       cin>>array[i];
//     }
//     cout<<"\nYour array: ";
//     for(int i=0;i<n;i++){
//         cout<<"|"<<array[i];
//     }
//     equalPartition(n,array);
//     return 0;
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main() {
//     int n;
//     cin >> n; // Read the value of 'n' from input
//     vector<int> dp(n);
//     for (int i = 0; i < n; i++) {
//          cin >> dp[i];
//     }
//     sort(dp.begin(), dp.end());
//     int cnt = 0;
//     while (dp[n-1] - dp[0] > 1) {
//         dp[0]++;
//         dp[n-1]--;
//         cnt++;
//         sort(dp.begin(), dp.end());
//     }
//     cout << cnt;
//     return 0;
// }









//**Give TLE in some test case
// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<int> dp(n);
//     for (int i = 0; i < n; i++) {
//         cin >> dp[i];
//     }

//     // Use a priority queue (max heap) to maintain the maximum element at the top.
//     priority_queue<int> maxHeap;
//     priority_queue<int, vector<int>, greater<int>> minHeap;
//     for (int i = 0; i < n; i++) {
//         maxHeap.push(dp[i]);
//         minHeap.push(dp[i]);
//     }

   
//     long long cnt = 0;
//     while (maxHeap.top() - minHeap.top() > 1) {
//         int maxVal = maxHeap.top();
//         maxHeap.pop();
//         int minVal = minHeap.top();
//         minHeap.pop();

//         // Update the values and push them back into the heaps.
//         maxHeap.push(maxVal - 1);
//         minHeap.push(minVal + 1);

//         cnt++;
//     }

//     cout << cnt;

//     return 0;
// }




#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> dp(n);
    long long sum=0;
    for (int i = 0; i < n; i++) {
        cin >> dp[i];
        sum+=dp[i];
    }
    
    long long mean=sum/n;
    int k=n*(mean+1)-sum;
    int rest=n-k;
    long long ans=0;
    for(int i=0;i<k;i++){
         ans+=abs(dp[i]-mean);
    }
    for(int i=k;i<n;i++){
         ans+=abs(dp[i]-mean-1);
    }
    cout<<ans/2<<endl;
    return 0;
}

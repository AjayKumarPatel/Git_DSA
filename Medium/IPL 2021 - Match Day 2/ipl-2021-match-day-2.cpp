//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        vector<int>ans;
        int i=0;
        int j=0;
        int max=0;
        while(j<n)
        {
        
             if(arr[j]>max){
                    max=arr[j];
                }
            if(j-i+1<k){
           
                
                j++;
            }
            else if(j-i+1==k){
                
                ans.push_back(max);
                if(arr[i]!=max){
                    i++;
                    j++;
                }
                else if(arr[i]==max)
            {
                max=0;
                i++;
                j=i;
            }
                          }
           
           
            
           
            
            
        }
        return ans;
        
        
        
        
        
        
        
        
        //BRUTFORCE APPROACH
        // vector<int>ans;
        // for(int i=0;i<n-k+1;i++)
        // {
        //     int largerValue=0;
        //     for(int j=i;j<k+i;j++)
        //     {
        //         if(arr[j]>largerValue){
        //             largerValue=arr[j];
        //         }
                
        //     }
        //     ans.push_back(largerValue);
        // }
        // return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends
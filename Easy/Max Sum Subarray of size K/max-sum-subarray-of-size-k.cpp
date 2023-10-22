//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &Arr , int N){
        // code here
        int i=0;
        int j=0;
        long long int sum=0;
        long long int total=0;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                total=max(sum,total);
                sum=sum-Arr[i];
                i++;
                j++;
            }
        }
        return total;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends
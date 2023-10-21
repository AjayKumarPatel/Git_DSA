//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    long long sumOfDivisors(int N)
    
    
    
    {
        
      //OPTMIZED
      long sum = 0;
        for(int i=1;i<=N;i++){
            sum = sum + i*(N/i);
        }
        return sum;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // Write Your Code here
    //     long long total_sum=0;
    //     int sum=0;
    //     while(N>0){
    //     for(int i=1;i<=N;i++){
    //         if(N%i==0){
    //             sum+=i;
    //         }
    //     }
    //     total_sum+=sum;
    //     sum=0;
    //     N--;
    // }
    // return total_sum;
    }
    
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        long long ans  = ob.sumOfDivisors(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends
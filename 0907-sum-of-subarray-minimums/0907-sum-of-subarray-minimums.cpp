// 

class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {

        stack<int>st;
        int n=arr.size();

        int nse[n];

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()]>=arr[i]){
                st.pop();
            }

            nse[i]=st.empty()?n:st.top();
            st.push(i);
        }

        stack<int>st1;
        int pse[n];

        for(int i=0;i<n;i++){
            while(!st1.empty() && arr[st1.top()]>arr[i]){
                st1.pop();
            }

            pse[i]=st1.empty()?-1:st1.top();
            st1.push(i);
        }

        long long sum=0;
        long long mod=1e9+7;

        for(int i=0;i<n;i++){
            int right=nse[i]-i;
            int left=i-pse[i];

            sum=(sum+(right*left)%mod*arr[i])%mod;


        }

        return sum;
        
    }
};
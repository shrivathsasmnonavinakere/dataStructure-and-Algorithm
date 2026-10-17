class Solution {
public:
    int trap(vector<int>& height) {
        stack<int>st;
        
      

        int sum=0;
        for(int i=0;i<height.size();i++){
           
            
            while(!st.empty() &&height[ st.top()]<=height[i]){
            
                int bottom=st.top();
                st.pop();
                if(st.empty()){
                    break;
                }

                int width=i-st.top()-1;
                
                int height1=min(height[i],height[st.top()])-height[bottom];

                sum=sum+height1*width;
        
            }
            st.push(i);
            
        }


        return sum;
        
        
    }
};
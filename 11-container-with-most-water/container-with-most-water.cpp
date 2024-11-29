class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0 ;  
        int i=0;
        int j=height.size() - 1 ;
        
        while ( i < height.size() && j > 0){

           int vol= ( j - i ) * min(height[j],height[i]);
            if ( max < vol){
                max=vol;
            }
            if ( height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
        }

        return max; 
    }
};
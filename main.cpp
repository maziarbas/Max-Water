#include<iostream>
#include<vector>
#include<cmath>

using std::min;
using std::vector;
using std::cout;

int maxArea(vector<int>& height) {
        
        int len = height.size();
        int max=0;
        int cur=0;
        
        for(int i=0;i<len;i++)
        {
            for(int j=i+1;j<len;j++)
            {
                cur= (min(height[i], height[j])) * (j-i);
                if(max<cur)
                    max=cur;
            }      
        }
        return max;
    }
int main()
{
    vector<int> test {1,8,6,2,5,4,8,3,7};

    cout<<maxArea(test)<<"\n";
}
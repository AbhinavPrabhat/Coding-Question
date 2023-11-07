class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<pair<int,int> > v; 
        
        stack<int> s;
        
        int n1 = nums1.size();
        int n2 = nums2.size();

        for(int i = n2-1;i>=0;i--){
            if(s.size()==0){
                v.push_back({nums2[i],-1});
            }else if(s.size()>0 && s.top()>nums2[i]){
                v.push_back({nums2[i],s.top()});

            }else if(s.size()>0 && s.top()<=nums2[i]){
                while(s.size()>0 && s.top()<=nums2[i]){
                    s.pop();
                }
                if(s.size()==0){
                    v.push_back({nums2[i],-1});
                }else v.push_back({nums2[i],s.top()});
            }
            s.push(nums2[i]);
        }

        // to push in the result array
    vector<int> ans;

    for(int i = 0; i < n1; i++) {
        for(const auto& p : v) {
            if(nums1[i] == p.first) {
                ans.push_back(p.second);
                break;
            }
        }
    }
         return ans;
    }
};
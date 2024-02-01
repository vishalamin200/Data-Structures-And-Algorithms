
    class info {
    public:
        int data,row,col;
        info(int d, int r, int c) {
            data = d;
            row = r;
            col = c;
        }
    };

    class compare {
    public:
        bool operator()(info* first, info* second) {
            return first->data > second->data;
        }
    };

class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int mini = INT_MAX;
        int maxi = INT_MIN;

        priority_queue<info*, vector<info*>, compare> minHeap;
        // step 1) Insert first k elements and store the max element

        for (int i = 0; nums.size(); i++) {
            int ele = nums[i][0];
            
            info* temp = new info(ele, i, 0);
            minHeap.push(temp);

            mini = min(mini,ele);
            maxi = max(maxi,ele);
        }

        int newMini = mini;
        int newMaxi = maxi;

        // step 2 ) min element ko aage slide karo

        while (!minHeap.empty()) {
            // step i )min Heap ke  top element ko liya and values store kara li
            info* top = minHeap.top();
            int topEle = top -> data;
            int topRow = top -> row;
            int topCol = top -> col;

            // step ii) top element ko pop kardiya
            minHeap.pop();
            mini = topEle;

            // step iii) mini aur mixi ko update kiya kyoki unki hi sabse kam
            // range aa jaye
            if(maxi-mini < newMaxi-newMini) {
               newMini = mini;
               newMaxi = maxi;
            }

            // step iv) new Element ko insert karo, agar valid range me hai to ,
            // aur max ko updata kardo agar vo bada hai to.
            if (topCol + 1 < nums[topRow].size()) {
                maxi = max(maxi, nums[topRow][topCol + 1]);

                info* newInfo = new info(nums[topRow][topCol + 1], topRow, topCol+1);
                minHeap.push(newInfo);
            } 

            else {
                break;
            }
        }

        vector<int> ans ;
        ans.push_back(newMini);
        ans.push_back(newMaxi);
        return ans;
    }
};
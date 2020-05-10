class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        
        int h[1005]={0};
        int i,j,c=0;
        
        for(i=0;i<trust.size();i++)
        {
            h[trust[i][0]] = 1;
        }
        
        for(i=1;i<=N;i++)
        {
            if(h[i] == 0)
            {
                c = i;
            }
        }
        
        if(c==0)
        {
            return -1;
        }
        
        for(i=0;i<trust.size();i++)
        {
            if(trust[i][1] == c)
            {
                h[trust[i][0]]--;
            }
        }
        
        int d=0;
        
        for(i=1;i<=N;i++)
        {
            if(h[i]>0)
            {
                d++;
            }
        }
        
        if(d!=0)
        {
            return -1;
        }
        else
        {
            return c;
        }
    }
};

/* OUTPUT

Example 1:
Input: N = 2, trust = [[1,2]]
Output: 2

Example 2:
Input: N = 3, trust = [[1,3],[2,3]]
Output: 3

Example 3:
Input: N = 3, trust = [[1,3],[2,3],[3,1]]
Output: -1

Example 4:
Input: N = 3, trust = [[1,2],[2,3]]
Output: -1

Example 5:
Input: N = 4, trust = [[1,3],[1,4],[2,3],[2,4],[4,3]]
Output: 3

*/

ic:
    int jump(vector<int>& nums) {
        
        int n = nums.size();

        if (n == 1)
            return 0;

        int farthest = 0;
        int jumps = 0;
        int lastfarthest = farthest;

        for (int i = 0; i < n - 1; i++) {

            if (farthest >= i)
                lastfarthest = farthest;
                farthest = max(farthest, i + nums[i]);

            if ( lastfarthest != farthest ){
                jumps++ ;
                if (farthest >= n-1 ) return jumps;
            }
        }
        return jumps ;
    }
};
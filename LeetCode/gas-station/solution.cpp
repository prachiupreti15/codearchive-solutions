class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int n = gas.size();

        int gasTotal = 0 ;
        int costTotal = 0 ;

        for ( auto x : gas ){
            gasTotal += x ;
        }
        for ( auto x : cost ){
            costTotal += x ;
        }

        if (costTotal > gasTotal) return -1;


        
    }
};
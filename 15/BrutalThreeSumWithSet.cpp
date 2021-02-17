//
//  BrutalWithSet.cpp
//  LeetCode
//
//  Created by Vick on 2021/2/15.
//

#include "BrutalThreeSumWithSet.hpp"


vector<vector<int>> BrutalThreeSumWithSet::process(vector<int>& nums){
    vector<vector<int>> result;
    sort(nums.begin(),nums.end());
    vector<int>::iterator itr = nums.begin();
    multiset<int> dict;
    for(;itr!=nums.end();itr++)//O(N)
    {
        dict.insert(*itr);
    }
    for(itr = nums.begin();itr!=nums.end();itr++)//O(N)
    {
        if(itr>nums.begin() && *itr==*(itr-1))
        {
            continue;
        }
        dict.erase(dict.find(*itr));
        vector<int>::iterator itr2 = itr+1;
        set<int> acceptSet;
        for(;itr2!=nums.end();itr2++)//O(N)
        {
            if(itr2>itr+1 && *itr2==*(itr2-1))
            {
                continue;
            }
            int acceptValue = -(*itr + *itr2);
            if(acceptValue>=*itr2&&acceptSet.find(*itr2)==acceptSet.end()){
                dict.erase(dict.find(*itr2));
                if(dict.find(acceptValue)!=dict.end())//O(logN)
                {
                    vector<int> solution;
                    solution.push_back(*itr);
                    solution.push_back(*itr2);
                    solution.push_back(acceptValue);
                    result.push_back(solution);
                    acceptSet.insert(acceptValue);
                }
                dict.insert(*itr2);
            }
        }
        dict.insert(*itr);
    }
    return result;
}

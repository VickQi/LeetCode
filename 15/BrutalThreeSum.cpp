//
//  BrutalThreeSum.cpp
//  LeetCode
//
//  Created by Vick on 2021/2/15.
//

#include "BrutalThreeSum.hpp"

vector<vector<int>> BrutalThreeSum::process(vector<int>& nums){
    vector<vector<int>> result;
            vector<int>::iterator itr = nums.begin();
            for(;itr!=nums.end();itr++){
                vector<int>::iterator itr2 = itr+1;
                for(;itr2!=nums.end();itr2++){
                    vector<int>::iterator itr3 = itr2+1;
                    for(;itr3!=nums.end();itr3++){
                        if(*itr+*itr2+*itr3==0){
                            vector<int> tempSolution;
                            tempSolution.push_back(*itr);
                            tempSolution.push_back(*itr2);
                            tempSolution.push_back(*itr3);
                            sort(tempSolution.begin(),tempSolution.end());
                            result.push_back(tempSolution);
                        }
                    }
                }
            }
            sort(result.begin(),result.end());
            result.erase(unique(result.begin(),result.end()),result.end());
            return result;
}

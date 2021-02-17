//
//  BrutalThreeSum.hpp
//  LeetCode
//
//  Created by Vick on 2021/2/15.
//

#ifndef BrutalThreeSum_hpp
#define BrutalThreeSum_hpp

#include <stdio.h>
#include "ThreeSum.hpp"

class BrutalThreeSum:public ThreeSum{
    
public:
    vector<vector<int>> process(vector<int>& nums);
};
#endif /* BrutalThreeSum_hpp */

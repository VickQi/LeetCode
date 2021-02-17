//
//  ThreeSum.hpp
//  LeetCode
//
//  Created by Vick on 2021/2/15.
//

#ifndef ThreeSum_hpp
#define ThreeSum_hpp

#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

class ThreeSum {
public:
    virtual vector<vector<int>> process(vector<int>& nums);
    vector<int> testCase1();
    string getResultStr(vector<vector<int>> resultVec);
    bool validateTestCase1(string result);
};
#endif /* ThreeSum_hpp */

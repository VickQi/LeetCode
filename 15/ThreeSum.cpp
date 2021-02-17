//
//  ThreeSum.cpp
//  LeetCode
//
//  Created by Vick on 2021/2/15.
//

#include "ThreeSum.hpp"

vector<vector<int>> ThreeSum::process(vector<int>& nums){
    vector<vector<int>> result;
    return result;
}

vector<int> ThreeSum::testCase1(){
    vector<int> nums;
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(-1);
    nums.push_back(-4);
    return nums;
}

string ThreeSum::getResultStr(vector<vector<int>> resultVec){
    string resultStr("[");
    for(vector<vector<int>>::iterator itr1 = resultVec.begin();itr1<resultVec.end();itr1++){
        resultStr += "[";
        for(vector<int>::iterator itr2 = (*itr1).begin();itr2<(*itr1).end();itr2++){
            resultStr += to_string(*itr2);
            if(itr2+1 < (*itr1).end()){
                resultStr += ",";
            }
        }
        resultStr += "]";
    }
    resultStr += "]";
    return resultStr;
}

bool ThreeSum::validateTestCase1(string result){
    string expected = "[[-1,-1,2][-1,0,1]]";
    return expected==result;
}

//
// Created by 13584 on 2019/6/1.
//

#ifndef LEETCODE_LEETCODE_9_ISPALINDROME_H
#define LEETCODE_LEETCODE_9_ISPALINDROME_H


class leetcode_9_isPalindrome {
public:
    bool isPalindrome(int x) {
        if( x < 0)
            return false;
        //将int转化为str
        string temp = to_string(x);
        int right = temp.length() - 1;
        int left = 0;
        while(right > left){
            if(temp[left] != temp[right])
                return false;
            right--;
            left++;
        }
        return true;
    }
};


#endif //LEETCODE_LEETCODE_9_ISPALINDROME_H


//
//  switch.cpp
//  test
//
//  Created by 邓淏天 on 11/04/20.
//  Copyright © 2020 邓淏天. All rights reserved.
//
#include<iostream>
using namespace std;

int main()
{
//switch(表达式)
// case 情况    
// break   跳出switch 
//default 默认

//给一个电影打分 10～9 经典电影 8～7 好电影 6 ～ 5一般电影 5一下 烂片
//switch缺点，在判断时候只能是整型或者字符型，不可以是一个区间, 不break会顺序往下执行
//switch优点，结构清晰，执行效率搞
    int score = 0;
    cout << "请个电影打分（0～10）:" << endl;
    cin >> score;
    cout << "您打的分数:" << score << endl;
    switch(score) //判断时候只能是整型或者字符型，不可以是一个区间
    {
        case 9: //情况 10 时
            cout << "经典电影" <<endl;
            break; //退出当前分支
        case 7:
            cout << "好电影" <<endl;
            break;
        default:
            cout << "随意电影" << endl;
            break;
               

    }



    
    return 0;
}
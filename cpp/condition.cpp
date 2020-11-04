
//
//  condition.cpp
//  test
//
//  Created by 邓淏天 on 11/03/20.
//  Copyright © 2020 邓淏天. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

int main(){
//选择结构
    //if 单行if， 多行if， 多条件if
    //单行if，用户输入分数，如果分数大于600，则视为考上，屏幕输出恭喜
        int score = 0;
        cout<<"请输入一个分数："<<endl;
        cin>>score;
        if(score>600)
        {
            cout<<"恭喜你考试一本大学"<<endl;
        }
    //多行if if else
        if(score>700)
        {
            cout<<"if"<<endl;
        }
        else
        {
            cout<<"else"<<endl;
        }
    //多条件if语句 if{}else if{}else if{}else
        if(score>600)
        {
            cout<<"恭喜您考上一本大学："<<endl;
        }
        else if(score>500)  //第二个条件
        {
            cout<<"恭喜你考上二本大学"<<endl;
        }
        else if(score>400) //第三个条件
        {
           cout<<"恭喜你考上三本大学"<<endl;
        }
        else
        {
            cout<<"很遗憾未考上大学"<<endl;
        }


    return 0;
}


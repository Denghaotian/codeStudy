
//
//  Operator.cpp
//  test
//
//  Created by 邓淏天 on 10/28/20.
//  Copyright © 2020 邓淏天. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

int main(){
//运算符 
    //算数运算符 + - * / %（取模，取余） ++ -- 
    int a1 = 10;
    int b1 =3;

    cout<<a1+b1 << endl;
    cout<<a1-b1 << endl;
    cout<<a1*b1<< endl;
    cout<<a1/b1<< endl; //两个整数相除 结果依然是整数，将小数部分去除

    double d1 =0.5;
    double d2=0.25;
    cout << "两个小数相除"<< d1/d2 <<endl;
    int a2 =50;
    int b2=20;
    cout <<"取模："<<a2%b2<<endl; //两个小数不能做取模运算
    
    int a = 10;
    int b = 10;
    ++a; //前置递增，让变量+1（先让变量+1，然后进行表达式运算）
    b++; //后置递增让变量+1 （然后进行表达式运算，后让变量+1，）
    int a3 = 10;
    int b3 = a3++ * 10; //b3=100, a3后加1 =11
    cout << "b3 ="<<b3<<endl;

    //赋值运算符 = += -= *= /= %=
    int m = 10;
    m = 100;
    m -=2;
    cout << "m ="<<m<<endl;

    //比较运算符 ==(相等) !=（不等） <（小于） >（大于） <=（小于等于） >=（大于等于） 非0数字都为真
    int x =10;
    int y=20;
    cout << (x==y) << endl; //输出假，0,


    //逻辑运算符 !（非） &&（与） ||（或）
    int k = 10;
    cout << "对k取反"<<!k << endl;
    cout << "对k取反反"<<!!k << endl;
    // && 同真为真，其余都假
    // || 同假为假，其余为真


    
    return 0;
}

//
//  TernaryOperator.cpp
//  test
//
//  Created by 邓淏天 on 11/04/20.
//  Copyright © 2020 邓淏天. All rights reserved.
//
//三元运算符

#include<iostream>
using namespace std;

int main(){

//三元运算符 语法：表达式1 ？表达式2 : 表达式3
// 如果表达式1为真，执行表达式2，并返回表达式2的结果；如果表达式1为假，执行表达式3，并返回表达式3的结果。

//创建三个变量 a,b,c; 将a和b进行比较，将变量大的值赋值给变量c
    int a =10;
    int b =20;
    int c =0;

    c = (a > b ? a : b);

    cout << "C的值为"<< c  <<endl;
    //在C++中三元运算符返回的是变量，可以继续赋值
    ( a > b ? a : b) = 100;
    cout << "a =" << a << endl;
    cout << " b = " << b << endl;

    return 0;
}
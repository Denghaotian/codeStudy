//
//  dataType.cpp
//  test
//
//  Created by 邓淏天 on 10/24/20.
//  Copyright © 2020 邓淏天. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;

int main(){
    
//整型
    //short range -32768~32767
    short num1 = 32767;
    cout << num1 << endl;
    cout<<"short:"<<sizeof(short)<<"bytes"<<endl;
    cout<<"int:"<<sizeof(int)<<"bytes"<<endl;
    cout<<"long:"<<sizeof(long)<<"bytes"<<endl;
    cout<<"long long:"<<sizeof(long long)<<"bytes"<<endl;
 
//浮点型
    //float 单精度 4字节 7位有效数字，小数点前也是有效数字
    //double 双精度 8字节  15～16位有效数字
    float f1 = 3.1415926f; //f末尾表示是float，不用double转化float
    cout<< f1 << endl;
    double f2 = 3.1415926;
    cout << f2 << endl;
    //C++默认输出一个小数，会显示出6位有效数字
    //统计float和double占有内存空间用sizeof
    //科学计数法
    float f3 = 3e2; // 3*10**2
    float f4 = 3e-2; // 3*0.1**2
    cout <<"f3:"<<f3 <<endl<<"f4:" <<f4<<endl;

//字符型
    char ch = 'a';
    cout << "ch:" <<sizeof(ch)<<endl;
    //占一个字节，存的ascii码
    //常见错误，不可“”用这个创建字符型变量，要用单引号；单引号内只能有一个字符
    //ASCII码
    cout<<"a的ASCII值"<<(int)ch<<endl; //（int）强制转换成整型
//转义字符 用与表示一些不能显示出来的ASCII字符 \n \\ \t
    cout <<"\\"<<endl; //输出反斜杠
    //水平制表符 \t 作用可以整齐的输出数据
    cout <<"aaa\thelloworld"<<endl;
    
//字符串
    //c风格字符串 char 变量名[]= “字符串值”
      //注意： char 字符串名后有[]； 等号后面要用双引号包含
    char str[]="Hello world";
    cout << str <<endl;
    
    //c++风格字符串 string 变量名
      //c++风格头文件加 #inclue <string>
    string str2 = "C++ style string";
    cout << str2 <<endl;

//布尔类型 bool 只有0，1两个值，表示真假，占个字节
    // true -- 真（1）
    //false -- 假（0）
    bool flag = true; //代表是真
    cout <<"true的bool值: " <<flag <<"占用大小: "<<sizeof(flag)<<endl;

//数据输入
    //整型
    int a = 0;
    cout << "请给整型变量a赋值：";
    cin >>a;
    cout << "整型变量a等于多少： "<< a<<endl;
    
    //浮点型
    float f;
    cout<<"给浮点型变量赋值：";
    cin>>f;
    cout <<"浮点型变量值为："<<f<<endl;
    //字符型
        //类同
    //字符串型
    string str3 ="haotian";
    cout <<"请输入一个字符串:";
    cin >> str3;
    cout <<"字符串的值："<<str3<<endl;
    //布尔类型
    
    
    
    
    return 0;
}

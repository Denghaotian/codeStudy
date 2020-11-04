
//
//  ThreePig.cpp
//  test
//
//  Created by 邓淏天 on 11/04/20.
//  Copyright © 2020 邓淏天. All rights reserved.
//
//案例：三只小猪比较重量了

#include<iostream>
using namespace std;

int main(){
    int A, B, C;
    cout<<"请输入小猪A的重量"<<endl;
    cin>>A;
    cout<<"请输入小猪B的重量"<<endl;
    cin>>B;
    cout<<"请输入小猪C的重量"<<endl;
    cin>>C;

    if(A>B)
    {
        if (A>C)
        {cout<<"小猪A最重"<<endl;}
        else
        {
           {cout<<"小猪C最重"<<endl;}  
        } 
    }
    else
    {
        if(B>C)
        {
         cout<<"小猪B最重"<<endl;   
        }
        else
        {
            cout <<"小猪C最重"<<endl;
        }
        
    }
    



    return 0;
}
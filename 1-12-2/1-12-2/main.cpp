//
//  main.cpp
//  1-12-2
//
//  Created by 梁颖诗 on 1/12/20.
//  Copyright © 2020 梁颖诗. All rights reserved.
//

#include <iostream>
#include <cstdlib>
//#include <ctime>
using namespace std;
int main(int argc, const char * argv[]) {
    //srand(time(0));
    int rannum1,rannum2;
    rannum1=rand()%100; //求从0-a的一个随机数
    rannum2=rand()%(1000-100+1)+100; //求从a-b的一个随机数
    cout<<rannum1<<endl<<rannum2;
    return 0;
}

//
//  main.cpp
//  1-12-1
//
//  Created by 梁颖诗 on 1/12/20.
//  Copyright © 2020 梁颖诗. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    int m[3];
    char A,B,C;
    cin>>m[0]>>m[1]>>m[2];
    cin>>A>>B>>C;
    sort(m,m+3);
    cout<<m[A-'A']<<" "<<m[B-'A']<<" "<<m[C-'A'];
    return 0;
}

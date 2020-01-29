//
//  main.cpp
//  1-17-2
//
//  Created by 梁颖诗 on 1/17/20.
//  Copyright © 2020 梁颖诗. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    string A;
    string B;
    cin >> A;
    cin >> B;
    //cout<<A<<B;
    int a=A.length();
    int b=B.length();
    int m=max(a,b);
    int sum[m];
    int i;
    for(i=m;i>0;i--)
    {
        sum[i-1]+=((A[i]-'0')+(B[i]-'0'))/10;
        sum[i]=((A[i]-'0')+(B[i]-'0'))%10;
    }
    cout<<sum;
    return 0;
}

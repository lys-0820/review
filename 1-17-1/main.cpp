//
//  main.cpp
//  1-17-1
//
//  Created by 梁颖诗 on 1/17/20.
//  Copyright © 2020 梁颖诗. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int n,m;
    cin>>n>>m;

    int carpet[100][100]={0};
    int i;
    int i1,i2;
    for(i=0;i<m;i++)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;

        for(i1=x1-1;i1<x2;i1++)
        {
            for(i2=y1-1;i2<y2;i2++)
                carpet[i1][i2]++;
        }
        
    }
    for(i1=0;i1<n;i1++)
    {
        for(i2=0;i2<n-1;i2++)
            cout<<carpet[i1][i2]<<" ";
        cout<<carpet[i1][i2]<<endl;
    }
    return 0;
}

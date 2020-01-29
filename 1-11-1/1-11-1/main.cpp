
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int s,v;
    cin>>s>>v;
    int a,hour,min;
    a=ceil(1.0*s/v)+10;
    hour=a/60;
    min=a%60;
    int h,m;
    h=(24+7-hour)%24;
    m=60-min;
    if(m==60)
    {
        h++;
        m=0;
    }
    printf("%02d:%02d",h,m);
    return 0;
}

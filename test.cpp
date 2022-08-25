#include<vector>
#include<iterator>
#include<string>
#include<algorithm>
#include<functional>
#include<utility>
#include<iostream>
#include<sstream>
using namespace std;

template <typename T>
ostream &print(ostream &os,const T& t)
{
    return os<<t;
}

template <typename T,typename... Args>
ostream &print(ostream &os,const T& t,const Args&... rest)
{
    os<<t<<", ";
    return print(os,rest...);
}



int main(int argc,char **argv)
{
    print(cout,1,2,3,7);
    return 0;
}

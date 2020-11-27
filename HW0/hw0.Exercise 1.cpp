//Homework 0: Getting up and running
//Exercise 1 - Square root by Newton's method
#include <bits/stdc++.h>

using namespace std;

//如果提交到OJ，不要定义 __LOCAL
#define __LOCAL

const double EPS = 1e-8;
int cnt=0;

double solve(double x) {
    double ans=rand()%((long long)(ceil(x)))+0.1;
    double t;
    do {
        cnt++;
        t=x/ans;
        ans = (t+ans)/2;
    } while (abs(t-ans)>EPS);
    return ans;
}

int main() {
#ifndef __LOCAL
    //这部分代码需要提交到OJ，本地调试不使用
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
#endif
    //输入一个x
    cout<<fixed<<setprecision(12)<<"Please input a number x, which is positive.the error margin is "<<EPS<<"\n";
    double x;
    cin>>x;

    if (x<=0) {
        cout<<"Input error!\n";
        return 0;
    }

    srand(time(0));
    cout<<"Using iteration the square root of "<<x<<" is ";
    cout<<solve(x)<<"\n";
    cout<<"Using function sqrt the square root of "<<x<<" is ";
    cout<<sqrt(x)<<"\n";
    cout<<"iteration time "<<cnt<<"\n";

#ifdef __LOCAL
    //这部分代码不需要提交到OJ，本地调试使用
    system("pause");
#endif
    return 0;
}
//
//  main.cpp
//  test1-2
//
//  Created by suchao on 4/2/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int recursion(int n);
int nonrecursion(int n);



int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "input n:\n";
    int n;
    cin >> n;
    while(n !=0){
        cout << "recursion way:" << recursion(n)<< endl;
        cout << "nonrecursion way:" << nonrecursion(n)<< endl;
        cin >> n;
    }
    return 0;
}


int recursion(int n){
    if(n == 1 )
        return 1;
    else if(n == 2)
        return 2;
    else
        return recursion(n-1) + recursion(n-2);
}

int nonrecursion(int n){
    int result=0;
    int p=1;
    int q=2;
    if(n==1)
        result = p;
    if(n==2)
        result = q;
    if(n>=3){
        for(int i=3; i<=n; i++){
            result = p + q;
            p = q;
            q = result;
        }
    }
    return result;
}

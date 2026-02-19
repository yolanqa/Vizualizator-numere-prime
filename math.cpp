#include <iostream>
#include <cmath>
#include <vector>


using namespace std;

vector<bool> math(int n){
    int p;

    vector<bool> math(n+1, true);

    math[0]=false;
    math[1]=false;

    for(int i=2; i<=sqrt(n); i++){
        if(math[i]=true){
            for( int multiplu=i*i; multiplu<=n; multiplu+=i){
                math[multiplu]=false;
            }
        }

    }
    return math;
    
}

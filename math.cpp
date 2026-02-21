#include <iostream>
#include <cmath>
#include <vector>
#include <chrono>
#include <thread>


using namespace std;

vector<bool> math(int n){
    int p;

    vector<bool> math(n+1, true);

    math[0]=false;
    math[1]=false;

    for(int i=2; i<=sqrt(n); i++){
        if(math[i]==true){
            for( int multiplu=i*i; multiplu<=n; multiplu+=i){
                math[multiplu]=false;
            }
        }

    }
    return math;
    
}

void clearScreen(){
    cout<<"\033[2J\033[H";
    cout.flush();
}



void sleepMilisec(int ms){
    this_thread::sleep_for(chrono::milliseconds(ms));
}


void drawGrid(vector<bool> math, int n, int eliminat){
    for(int i=2; i<=n;i++){
        if (i==eliminat){
            cout<<"\033[33m"<<i<<"\033[0m";
            //galben e numarul eliminat in momentul animatiei

        }

        else if (math[i]==true){
            cout<<"\033[36m"<<i<<"\033[0m";
            //cyan e nr prim si ramane in vector

        }

        else if (math[i]==false){
            cout<<"\033[31m"<<i<<"\033[0m";
            //rosu e numar compus taiat

        }

        if(i%20==0){
            cout<<"\n";
        }


    }
}


//implementare main
int main(){
    int n;
    cin>>n;

    vector<bool> m=math(n);

    clearScreen();
    drawGrid(m, n, -1);


    for(int i=2;i<=sqrt(n);i++){
        if(m[i]==true){
            for( int multiplu=i*i; multiplu<=n; multiplu+=i){
                m[multiplu]=false;
                clearScreen();
                drawGrid(m,n,multiplu);
                sleepMilisec(80);
        }
    }


    }
    return 0;
}
// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: TO FIND COORDINATES ARE FROM WHICH QUADRANT (EXPERIMENT: 3C)

// CODE:

#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"enter the value of x:";
    cin>>x;
    float y;
    cout<<"enter the value of y:";
    cin>>y;
    if(x>0 && y>0){
        cout<<"the quadrant is 1";
    }
    else if(x<0 && y>0){
        cout<<"the quadrant is 2";
    }
    else if(x<0 && y<0){
        cout<<"the quadrant is 3";
    }
    else if(x>0 && y<0){
        cout<<"the quadrant is 4";
    }
    else if(x==0 && y!=0){
        cout<<"the points lie on y axis";
    }
    else if(x!=0 && y==0){
        cout<<"the points lie on x axis";
    }
    else{
        cout<<"the points are origin";
    }
    
    return 0;
}

// OUTPUT:

// enter the value of x:3
// enter the value of y:-6
// the quadrant is 4








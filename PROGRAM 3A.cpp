// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: FIND POSITIVE & NEGATIVE NUMBER (EXPERIMENT: 3A)

// CODE:

#include<iostream>
using namespace std;

int main() {
            int number;
            cout<<"ENTER A NUMBER:";
            cin>>number;
            if (number > 0) {
            cout << "THE NUMBER IS POSITIVE." <<endl;}

            else if (number < 0) {
                     cout << "THE NUMBER IS NEGATIVE." << endl;}
    
            else {
            cout << "THE NUMBER IS ZERO." << endl; }
                return 0; }

// OUTPUT:

// ENTER A NUMBER:5
// THE NUMBER IS POSITIVE.

// ENTER A NUMBER:-3
// THE NUMBER IS NEGATIVE.

// ENTER A NUMBER:0
// THE NUMBER IS ZERO.

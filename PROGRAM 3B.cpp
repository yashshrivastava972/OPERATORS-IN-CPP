// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: CALCULATE STUDENT'S GRADE (EXPERIMENT: 3B)

// CODE:

#include<iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    float avg;
    
    cout << "ENTER SUBJECT 1 MARKS: ";
    cin >> m1;
    cout << "ENTER SUBJECT 2 MARKS: ";
    cin >> m2;
    cout << "ENTER SUBJECT 3 MARKS: ";
    cin >> m3; 
    cout << "ENTER SUBJECT 4 MARKS: ";
    cin >> m4;
    cout << "ENTER SUBJECT 5 MARKS: ";
    cin >> m5;
    
    avg = (m1 + m2 + m3 + m4 + m5) / 5.0; // use 5.0 to ensure float division
    cout << "PERCENTAGE: " << avg << "%" << endl;

    if(avg >= 90){
        cout << "GRADE: O";
    }
    else if(avg >= 85 && avg < 90){
        cout << "GRADE: A+";
    }
    else if(avg >= 75 && avg < 85){
        cout << "GRADE: A";
    }
    else if(avg >= 65 && avg < 75){
        cout << "GRADE: B+";
    }
    else if(avg >= 55 && avg < 65){
        cout << "GRADE: B";
    }
    else if(avg >= 40 && avg < 55){
        cout << "GRADE: C";
    }
    else {
        cout << "FAIL";
    }

    return 0;
}

// OUTPUT:

// ENTER SUBJECT 1 MARKS: 98
// ENTER SUBJECT 2 MARKS: 96
// ENTER SUBJECT 3 MARKS: 94
// ENTER SUBJECT 4 MARKS: 57
// ENTER SUBJECT 5 MARKS: 63
// PERCENTAGE: 81.6%
// GRADE: A

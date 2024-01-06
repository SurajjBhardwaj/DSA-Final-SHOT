#include<bits/stdc++.h>
using namespace std;

void pattern1 (int n){

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n){
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
}


void pattern2(int n){

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=n){

            cout << n - (j-1);
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern3(int n){

    int count = 1, i = 1;

    while(i<=n){

        int j = 1;
        while(j<=n){
            cout <<count;
            count++;
            j++;
        }
        cout << endl;
        i++;

    }
}



void pattern4(int n){



    
}




int main (){

    int n;
    cout << "Enter a number";
    cin >> n;

    pattern3(n);

    return 0;
}



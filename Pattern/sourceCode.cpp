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

    int i = 1;
    while(i<=n){

        int j = 1;
        while(j<=i){

            cout <<"*";
            j++;
      
        }
        cout << endl;
        i++;
    }

}


void pattern5(int n){

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=row){
            cout << row;
            col++;
        }
        cout << endl;
        row++;
    }
}


void pattern6 (int n){

    int row = 1,count =1;
    while(row<=n){

        int col = 1;
        while(col<=row){

            cout << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern7(int n){

    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout << row + col - 1;
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern8(int n){

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=row){
            cout << row-col+1 ;
            col++;
        }
        cout << endl;
        row++;
    }
}



void pattern9(int n){

    /*
    first method
     int row = 1;
        char ch = 'A';
        while(row<=n){
            int col = 1;

            while(col<=n){

                cout << ch;
                col++;
            }
            ch++;
            row++;
            cout << endl;

        }

    */
    // second  method

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=n){

            char ch = ('A' + row - 1);
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
}


void pattern10(int n){

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=n){
            char ch = 'A' + col - 1;
            cout << ch;
            col++;
        }
        row++;
        cout << endl;
    }
}






int main (){

    int n;
    cout << "Enter a number";
    cin >> n;

    pattern10(n);

    return 0;
}



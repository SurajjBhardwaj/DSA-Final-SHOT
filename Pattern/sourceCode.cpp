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
        cout << endl;
        row++;
       
    }
    return;
}

void pattern11(int n){

    char ch = 'A';
    int row = 1;

    while(row<=n){
        int col = 1;
        while (col <= n)
        {

            cout << ch;
            ch++;
            col++;
        }
        row++;
        cout << endl;
    }
    
}

void pattern12(int n){

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=n){
            char ch = 'A' + row + col - 2;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
}


void pattern13(int n){
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            char ch = 'A' + row - 1;
            cout << ch;
            col++;

        }
        row++;
        cout << endl;
    }
}

void pattern14(int n){

    int row = 1;
    char ch = 'A';
    while(row<=n){
        int col = 1;
        while(col<=row){

            
            cout << ch;
            col++;
            ch++;
        }
        row++;
        cout << endl;
    }
}

// 15th question and 16th question are same
void pattern15(int n){

    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=row){
            char ch = 'A' + row + col - 2;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern17(int n){

    int row = 1;
    while(row<=n){
        int space = n - row;
        while(space){
            cout << " ";
            space--;
        }
        int star = row;
        while(star){
            cout << "*";
            star--;
        }

        cout << endl;
        row++;
    }
}

void pattern18(int n){
    int row = 1;
    while(row<=n){

        int col = 1;
        while(col<=n-row+1){
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}

void pattern19(int n){

    int row = 1;
    while(row<=n){
        int space = row-1;
        while(space){
            cout << " ";
            space--;
        }
        int star = n - row + 1;
        while(star){
            cout << "*";
            star--;
        }
        cout << endl;
        row++;
    }
}

void pattern20(int n)
{

    int row = 1;
    while (row <= n)
    {
        int space = row - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int star = n - row + 1;
        while (star)
        {
            cout << row;
            star--;
        }
        cout << endl;
        row++;
    }
}

void pattern21(int n){

    int row = 1;
    while(row<=n){
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
            }

            int print = row;
            while (print){
                cout << row;
                print--;
            }

            cout << endl;
            row++;
        }
        
}

void pattern22(int n){
    int row = 1;
    while(row<=n){
        int space = row - 1;
        while(space){
            cout << " ";
            space--;
        }

        int start = row;
        while(start<=n){
            cout << start;
            start++;
        }

        cout << endl;
        row++;
                }
}

void pattern23(int n){

    int row = 1;
    int count = 1;
    while(row<=n){
        int space = n - row;
        while(space){
            cout << " ";
            space--;
        }
        int star = row;
        while(star){
            cout << count;
            count++;
            star--;
        }

        cout << endl;
        row++;
    }
}


void pattern24(int n){

    int row = 1;
    while(row<=n){

        int space = n - row;
        while(space){
            cout << " ";
            space--;
        }

        int start = 1;
        while(start<=row){
            cout << start;
            start++;
        }

        start = row - 1;
        while(start){
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
}


void pattern25(int n){

    int row = 1;
    while(row<=n){
        //first numbers printing
        int print = n - (row - 1);
        int count = 1;
        while(count<=print){
            cout << count;
            count++;
        }

        // star printing

        int star = 2*(row - 1);
        while(star){
            cout << "*";
            star--;
        }

        // rest printing;

        count--;
        while(count){
            cout << count;
            count--;
        }

        cout << endl;
        row++;
    }
}




int main (){

    int n;
    cout << "Enter a number";
    cin >> n;

    pattern25(n);

    return 0;
}






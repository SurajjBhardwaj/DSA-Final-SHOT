#include<bits/stdc++.h>
using namespace std;


int main(){

    // int a = 4, b=2;

    // cout <<a<<" || "<< b<<" :" << (a | b) << endl;
    // cout << a << " & " << b << " :" << (a & b) << endl;
    // cout <<"~"<<a <<" :" << ~a << endl;
    // cout << a << " ^ " << b << " :" << (a ^ b) << endl;


// 1st question
    // for (int i = 0; i <= 5;i++){
    //     cout << i << " ";
    //     i++;
    // }

//2nd question
    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";
    //     i++;
    // }


    // // 3rd question
    // for (int i = 0; i <= 15;i+=2){

    //     cout << i << " ";
    //     if(i & 1) continue;
    //     i++;
    // }

    cout << endl
         << "4th question :" << endl;

    // 4th question :
    // for (int i = 0; i < 5;i++){
    //     for (int j = i; j <= 5;j++){
    //         cout << i << " " << j << " "<<endl;
    //     }
    // }

// 5th question

    cout << endl
         << "5th question :" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if(i+j==10) break;
            cout << i << " " << j << " " << endl;
        }
    }

        return 0;
}
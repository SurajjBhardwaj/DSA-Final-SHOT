<h1>In this Source code, let's try to solve all possible pattern question</h1>

1. for n=4

      1234 </br>
      1234 </br>
      1234 </br>
      1234 </br>
<h1>Solution: </h1>

```
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
```


2. for n =4 

      4321 </br>
      4321 </br>
      4321 </br>
      4321 </br>

<h1>Solution: </h1>

```
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
```



3. for n=3

      1 2 3 4 </br>
      5 6 7 8 </br>
      9 10 11 12 </br>
      13 14 15 16 </br>


<h1>Solution: </h1>

```

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

```


4. For n =4
      <P> * <BR>  
      **  <br>
      ***  <br>
      ****
      </p>

<h1>Solution:</h1>

```
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
```


5. for n =4

      <P> 1 <BR>  
      22  <br>
      333  <br>
      4444
      </p>

<h1>Solution:</h1>


```

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

```




6.   for n =4

      <P> 1 <BR>  
      23  <br>
      456  <br>
      78910
      </p>

<h1>Solution:</h1>

```

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

```




7. for n = 4

      <P> 1 <BR>  
      23  <br>
      345  <br>
      4567
      </p>

<h1>Solution:</h1>

```
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

```




8. for n =4

      <P> 1 <BR>  
      21  <br>
      321  <br>
      4321
      </p>

<h1>Solution:</h1>

```
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

```




9. for n =3

      <P> AAA <BR>  
      BBB<br>
      CCC  <br>
      </p>

<h1>Solution:</h1>

```


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

```



10. for n =3

      <P> ABC <BR>  
      ABC<br>
      ABC  <br>
      </p>

<h1>Solution:</h1>

```

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
```




11. for n =3

      <P> ABC <BR>  
      DEF<br>
      GHI  <br>
      </p>

<h1>Solution:</h1>

```
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

```




12. for n =3

      <P> ABC <BR>  
      BCD<br>
      CDE <br>
      </p>


<h1>Solution:</h1>

```

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

```



13. for n =3

      <P> A <BR>  
      BB<br>
      CCC <br>
      </p>


<h1>Solution:</h1>

```
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

```



14. for n =4

      <P> A <BR>  
      BC<br>
      DEF <br>
      GHIJ
      </p>

<h1>Solution:</h1>

```
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

```




15. for n =4

      <P> A <BR>  
      BC<br>
      CDE <br>
      DEFG
      </p>


16. for n =4

      <P> A <BR>  
      BC<br>
      CDE <br>
      DEFG
      </p>


<h1>Solution:</h1>

```

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

```




17. for n =4

       &nbsp; &nbsp; &nbsp; &nbsp; * <BR> 
       &nbsp; &nbsp; &nbsp;  * *<BR>
       &nbsp; &nbsp; * * * <BR>
       &nbsp; * * * * <BR>
<h1>Solution:</h1>

```

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


```


18. for n =4


      <BR> &nbsp;  * * * * <BR>
      &nbsp; * * * <BR>
      &nbsp; * *  <BR>
      &nbsp; *  <BR>


<h1>Solution:</h1>

```
 
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

```

19. for n =4


      <BR> &nbsp;  * * * * <BR>
      &nbsp; &nbsp; * * * <BR>
      &nbsp; &nbsp; &nbsp; * *  <BR>
      &nbsp; &nbsp; &nbsp; &nbsp; *  <BR>

<h1>Solution:</h1>

```

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

```



20. for n = 4



      <BR> 
      &nbsp; 1 1 1 1 <BR>
      &nbsp; &nbsp; 2 2 2 <BR>
      &nbsp; &nbsp; &nbsp; 3 3  <BR>
      &nbsp; &nbsp; &nbsp; &nbsp; 4  <BR>

<Br>


<h1>Solution:</h1>

```

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

```

21. for n =4

       &nbsp; &nbsp; &nbsp; &nbsp; 1 <BR> 
       &nbsp; &nbsp; &nbsp;  2 2<BR>
       &nbsp; &nbsp; 3 3 3 <BR>
       &nbsp; 4 4 4 4 <BR>

<h1>Solution:</h1>

```

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


```

22. for n =4

&nbsp; 1 2 3 4<BR> 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2 3 4   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3 4  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 4 <BR>

<h1>Solution:</h1>

```

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


```

23. for n = 4

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  1<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2 3<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4 5 6<br>
&nbsp;7 8 9 10

<BR>


<h1>Solution:</h1>

```
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



```

24. for n =4
<BR>

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;  1<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1 2 1<BR>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1 2 3 2 1<br>
&nbsp; 1 2 3 4 3 2 1

<BR>
<BR>

<h1>Solution:</h1>

```
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


```

25. for n = 5


1 2 3 4 5 5 4 3 2 1 <BR>
1 2 3 4 * * 4 3 2 1 <BR>
1 2 3 * * * * 3 2 1 <BR>
1 2 * * * * * * 2 1 <BR>
1 * * * * * * * * 1 <BR>


<h1>Solution:</h1>

```
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

```



<h1>Trick to solve all the question</h1>

<p>

Trick to solve any pattern problem
```
1. Find the no of rows ( it will be the length of outer loop )
2. Find the number of column (How many times you need to print)
3. what to print ?
```

let's see with an example:

problem :

for n=4


```
* * * *     | Row 1 | how many times print ? 4 
* * *       | Row 2 |  3
* *         | Row 3 |  2
*           | Row 4 |  1
```


 | Row 1 | how many times print ? 4 
 | Row 2 |  3
 | Row 3 |  2
 | Row 4 |  1


Just go with our trick :

```
1. no of rows ?
ans : 4 ( that means we need to run an outer loop for 4 time,
that is n so run the outer loop for n time )
```

```
2. No of columns to print in each rows ?
ans: Obserb from the answer ! now relate the column with n and rows ?

we need to print 4 time in 1st row
                 3 time in 2nd row
                 2 time in 3rd row
                 1 time in 4th row

                 that is (n-(row-1))time in nth row

 this row will give the answer for inner loop length.
```

```
 3. what to print & how to print ?
 ans: we have only one thing to print here ! that is "*"


 so consolusion:
             Run outer loop for n time !
             inner loop for n-(row-1)time
             we need to print "*"                
```

now check pattern18(), the same logic we implemented and we got the result



</p>
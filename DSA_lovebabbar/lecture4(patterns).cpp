#include <bits/stdc++.h>
using namespace std;

void pattern3 () {
    int i=1, n =3;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout << n - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern4 () {
    int i = 1, n = 3;
    while (i <=n)
    {
        int j = 1,count = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++, j++;
        }
        cout << endl;
        i++;
    }
    
}

void pattern5 () {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;        
    }
    
}

void pattern6 () {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i<< " ";
            j++;
        }
        cout << endl;
        i++;        
    }
    
}

void pattern7() {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1, value = i;
        while (j <=i)
        {
            cout << value;
            value++;
            j++;
        }
        cout << endl;
        i++;
        
    }
    
}

void pattern8() {
    int i = 1, n = 4;
    // while (i <= n)
    // {
    //     int j = 1, value = i;
    //     while (j <=i)
    //     {
    //         cout << value--;
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
    // }

    while (i <= n)
    {
        int j = 1;
        while (j <=i)
        {
            cout << i-j+1;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern9() {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <=n)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        
    }
}

void pattern10() {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <=n)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        
    }
}

void pattern11() {
    int i = 1, n = 4;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <=n)
        {;
            cout << ch++;
            j++;
        }
        cout << endl;
        i++;
        
    }
}

void pattern12() {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <=n)
        {
        char ch = 'A' + i + j - 2;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
        
    }

    //Alternate way homework

    // int i = 1, n = 4;
    // while (i <= n)
    // {
    //     int j = 1;
    //         char ch = 'A' + i - 1;
    //     while (j <=n)
    //     {
    //         cout << ch++ << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
        
    // }
}

void pattern13() {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <=i)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
        
    }
}

void pattern14() {
    int i = 1, n = 4;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <=i)
        {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
        
    }
}

void pattern15() {
    // int i = 1, n = 4;
    // while (i <= n)
    // {
    //     int j = 1;
    //     char ch = 'A' + i - 1;
    //     while (j <=i)
    //     {
    //         cout << ch++ << " ";
    //         j++;
    //     }
    //     cout << endl;
    //     i++;
        
    // }

    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1;
        while (j <=i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern16() {
    int i = 1, n = 4;
    while (i <= n)
    {
        int j = 1; 
        char ch = 'A' + n - i;
        while (j <=i)
        {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
        
    }
}

void pattern17() {
    int i=1, n =3;
    while (i<=n)
    {
        int space = n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern18() {
    int i=1, n =3;
    while (i<=n)
    {        
        int j = 1;
        while (j<=n - i +1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern19() {
    int i=1, n =3;
    while (i<=n)
    {
        int space = i - 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=n - i + 1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern20() {
    int i=1, n =3;
    while (i<=n)
    {
        int space = i - 1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=n - i + 1)
        {
            cout <<i;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern21() {
    int i=1, n =3;
    while (i<=n)
    {
        int space =  n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern22() {
    int i=1, n =3;
    while (i<=n)
    {
        int space =  n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout << i + j - 1;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern23() {
    int i=1, n =3,count = 1;
    while (i<=n)
    {
        int space =  n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout << count++;
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern24() {
    int i=1, n =4;
    while (i<=n)
    {
        int space =  n - i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        int j = 1;
        while (j<=i)
        {
            cout <<j;
            j++;
        }
        int count = i - 1;
        while (count)
        {
            cout << count--;
        }
        
        cout << endl;
        i++;
    }
}

void pattern25() {
    int i=1, n =5;;
    while (i<=n)
    {        
        int j = 1;
        while (j<=n - i +1)
        {
            cout << j;
            j++;
        }
        int star = 2*(i - 1);
        while (star)
        {
            cout << "*";
            star--;
        }
        
        int count = n - i + 1;
        while (count)
        {
            cout << count--;
        }
        
        cout << endl;
        i++;
    }
}

int main() {
    pattern25();
}
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter value of n : ";
    int n;
    cin >> n;

    // // basic square pattern
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // // continuous pattern print
    // int num=1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout <<ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // // Left Triangle
    // for(int i = 0 ;i<n;i++){
    //     for(int j = 0;j<=i;j++){
    //         cout << "*";
    //     }
    //     cout <<endl;
    // }
    // for(int i = 1 ;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout <<i;
    //     }
    //     cout <<endl;
    // }
    // char ch = 'A';
    // for(int i = 1 ;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout <<ch;
    //     }
    //     cout <<endl;
    //     ch++;
    // }
    // for(int i = 1 ;i<=n;i++){
    //     for(int j = 1;j<=i;j++){
    //         cout <<j;
    //     }
    //     cout <<endl;
    // }

    // // Reverse print Left triangle
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // Floyd's Triangle pattern
    // int num=1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << num;
    //         num++;
    //     }
    //     cout << endl;
    // }
    // char ch='A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << ch;
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // Inverted Triangle Pattern
    // for(int i = 1 ; i<=n ;i++){
    //     for(int j=1;j<=n ; j++){
    //         if(j<i){
    //             cout << " ";
    //         }else {
    //             cout << i ;
    //         }
    //     }
    //     cout << endl;
    // }

    // Approact -2
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j < n - i +2; j++)
    //     {
    //         cout << i;
    //     }
    //     cout << endl;
    // }

    // Pyramid Pattern
    // for (int i = 0; i < n; i++)
    // {
    //     int num = 1;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (n - i - 1 <= j)
    //         {
    //             cout << num;
    //             num++;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     int num2 = i;
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (num2 > 0)
    //         {
    //             cout << num2;
    //             num2--;
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    // other approach
    // for(int i = 0 ;i<n ;i++){
    //     for(int s = 0 ; s < n-i-1; s++){
    //         cout << " ";
    //     }
    //     for (int num1 = 1 ; num1 <= i+1; num1++){
    //         cout << num1;
    //     }
    //     for (int num2 =  i; num2 > 0; num2--){
    //         cout << num2;
    //     }
    //     cout<<endl;
    // }

    // Hollow Diamond Pattern

    // for (int i = 0; i < n; i++)
    // {
    //     for (int s = 0; s < n - i - 1; s++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != 0)
    //     {
    //         for (int s = 0; s < 2 * i - 1; s++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int s = 0; s <= i; s++)
    //     {
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != n-2)
    //     {
    //         for (int s = 0; s < 2*(n-i)-5 ; s++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }

    //     cout << endl;
    // }



    // Butterfly pattern
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j< n;j++){
            if(i>=j){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j = 0; j< n;j++){
            if(i+j >= n-1){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j< n;j++){
            if(i+j <= n-1){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        for(int j = 0; j< n;j++){
            if(i<=j){
                cout << "*";
            }
            else{
                cout<<" ";
            }
        }
        
        cout << endl;
    }

    return 0;
}
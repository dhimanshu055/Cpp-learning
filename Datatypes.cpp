// #include <iostream>
// using namespace std;

// int main()
// {
    // datatypees****************

    // int a = 45;
    // cout<<"your number is: "<<a
    // cout<<"your number is: "<<b;
    //    float myLetter = 4.5;
    //     cout<<"your number is: "<<myLetter;
    // int d = 45;
    // cout<<"your number is: "<<d;

    /// operators*******************

    // int x = 10;
    // x /= 5;
    // //  int d = a+b+c;
    // cout << "output is " <<x;

    // int a = 20;
    // a*=25;
    // cout<<"outputis"<<a;
    // int a = 20 , b = 25;

    // cout<<"outputis : " <<(a+b);
    // cout<<"outputis : " <<(a-b);
    // cout<<"outputis : " <<(a/b);
    // cout<<"outputis : " <<(a*b);
    // cout<<"outputis : " <<(a%b);
    // cout<<"outputis : " <<(a++);
    // cout<<"outputis : " <<(a--);
    // cout<<"outputis : " <<(++a);
    // cout<<"outputis : " <<(--a);


    // getline 
    // string a;
    // getline(cin, a);
    // cout<<a;



    //conditions if else
    // int age = 18;

    // if(age>=18){
    //     cout<<"elgibile for vote";
    // }else{
    //     cout<<"not vote";
    // }
//     int a ;
//     cout<<"enter your weeknames";
//     cin>>a;
//     switch (a)
//     {
//     case 1:
//        cout<<"sunday";
//         break;
    
//     default:
//         break;
//     }
//     cout<<a;
// 


// #include <iostream>
// using namespace std;

// int main() {
//   int month = 12;
//   switch (month) {
//   case 1:
//     cout << "january";
//     break;
//   case 2:
//     cout << "febuary";
//     break;
//   case 3:
//     cout << "march";
//     break;
//   case 4:
//     cout << "april";
//     break;
//   case 5:
//     cout << "may";
//     break;
//   case 6:
//     cout << "june";
//     break;
//   case 7:
//     cout << "july";
//     break;
//     case 8:
//     cout<< "august";
//     break;
//     case 9:
//     cout<<"september";
//     break;
//     case 10:
//     cout<<"october";
//     break;
//     case 11:
//     cout<<"november";
//     break;
//     case 12:
//     cout<<"december";
//     break;

//   }
//   return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int i = 0, j = 0, n = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

  


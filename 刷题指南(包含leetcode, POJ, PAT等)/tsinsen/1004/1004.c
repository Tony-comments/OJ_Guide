#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;


for(int j=0;j<n;j++){

    int count =0;
    for(int k=j;k>0&&count<m;k--){

        cout<<char(k+'A');
        count++;
    }

    for(int i=0;i<m-count;i++){

        cout<<char(i+'A');
    }
    cout<<endl;


}

    return 0;
}

// 一个短小精悍的实现
// #include <iostream> 
// using namespace std; 
// int main(){ 
//     for(int a = 0; a < 25; a++){ 
//         int c = a; 
//         for(int b = 0;  b < 18; b++){ 
//             char ch = 'A'  + ( c > 0 ? c : -c); 
//             cout << ch; 
//             c--; 
//         } 
//         cout << endl; 
//     } 
//     return 0; 
// }
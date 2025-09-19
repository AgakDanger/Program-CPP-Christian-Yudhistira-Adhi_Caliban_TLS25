#include <iostream>
using namespace std;

int main(){
    int t;
    cout << "masukkan detik : " << endl;
    cin >> t;
    int x = (t-24) % 103;
    if (1 <= x && x <= 20){
        cout << "Hijau" << endl;
    } else if (21 <= x && x <= 23){
        cout << "Kuning" << endl;
    } else {
        cout << "Merah" << endl;
    }
    return 0;
}
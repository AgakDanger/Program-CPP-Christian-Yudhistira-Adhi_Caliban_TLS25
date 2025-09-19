#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

void KataSandi(string a){
    if (a.empty()){
        cout << "Input Kosong" << endl;
        return;
    }
    string pass;
    int ascii = int(a[0]);
    for(int i = a.length()-1; i >= 0; i--){
        char huruf = tolower(a[i]);
        if(huruf != 'a' && huruf != 'i' && huruf != 'u' && huruf != 'e' && huruf != 'o'){
            pass += a[i];
        }
    }
    pass.insert(pass.length() - pass.length()/2, to_string(ascii));
    cout << "Kata sandi : " << pass << endl;
}

void KataAsli(string a){
    string asli;
    string ascii;
    for(int i = 0; i < a.length(); i++){
        if(isdigit(a[i])){
            ascii += (a[i]);
        } else {
            asli += a[i];
        }
    }
    reverse(asli.begin(), asli.end());
    if(ascii.empty() != true){
        char huruf = char(stoi(ascii));
        if (huruf != asli[0]){
            asli.insert(0, 1, huruf);
        }
    }
    cout << "Kerangka kata asli : " << asli << endl;
}

int main(){
    cout << "Cari Kata Sandi (1) atau Kata Asli (2) ?" << endl;
    int pilihan;
    cin >> pilihan;
    if(pilihan == 1){
        string kata_asli;
        cin >> kata_asli;
        KataSandi(kata_asli);
    } else if(pilihan == 2){
        string kata_sandi;
        cin >> kata_sandi;
        KataAsli(kata_sandi);
    } else {
        cout << "Pilihan tidak tersedia";
    }
}


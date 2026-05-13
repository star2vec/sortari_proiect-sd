#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <algorithm>
#include <string>
#include <climits>

using namespace std;

#define SMALL 20000
#define BIG 10000000

mt19937 rng(67); 

void save(string nume, vector<int>& a) {
    ofstream fout(nume);
    int i, n;
    n = a.size();
    fout << n << "\n";
    for (i=0; i<n-1; i++) {
        fout << a[i] << " "; 
    }
    fout << a.back() << "\n";
    fout.close();
    cout << nume << endl;
}

void generator(int n, string tip) {
    string prefix; 
    vector<int> a(n);
    int i, j, aux, st, dr, pas;
    long long int val;

    prefix = tip + "_Croitoru_Stefanescu_";

    uniform_int_distribution<int> r(INT_MIN, INT_MAX);
    for (i=0; i<n; i++) {
        a[i] = r(rng);
    }
    save(prefix + "1.in", a);

    val = INT_MIN + 1234;
    for (i=0; i<n; i++) {
        a[i] = (int)val;
        val += (rng()%27)+1; 
    }
    save(prefix + "2a.in", a);

    val = INT_MAX - 1234;
    for (i=0; i<n; i++) {
        a[i] = (int)val;
        val -= (rng()%27)+1;
    }
    save(prefix + "2b.in", a);

    for (i=0; i<n; i++) {
        a[i] = 67;
    }
    save(prefix + "3.in", a);

    for (i=0; i<n; i++) {
        a[i] = rng()%3;
    } 
    save(prefix + "4.in", a);

    for (i=0; i<n; i++) {
        a[i] = i;
    } 
    for (i = 0; i<n/123; i++) {
        st = rng()%n; 
        dr = rng()%n;
        aux = a[st]; 
        a[st] = a[dr]; 
        a[dr] = aux;
    }
    save(prefix + "5.in", a);

    for (i=0; i<n; i++) {
        a[i] = i;
    }
    for (i=0; i<n; i+=1024) {
        st = i; 
        dr = min(i+1024, n)-1;
        while (st < dr) {
            aux = a[st]; 
            a[st] = a[dr]; 
            a[dr] = aux;
            st++; 
            dr--;
        }
    }
    save(prefix + "6.in", a);


    for (i=0; i<n; i++) {
        a[i] = i;
    }
    save(prefix + "7.in", a);

    for (i=0; i<n; i++) {
        if (i%2 == 0) {
            a[i] = INT_MAX - i;
        } else {
            a[i] = INT_MIN + i;
        }
    }
    save(prefix + "8.in", a);

    n = a.size();
    for (i=0; i<n; i++) {
        a[i] = i;
    }
    for (i=n-1; i>=0; i--) {
        if (i>=2) {
            aux = a[i]; 
            a[i] = a[i/2]; 
            a[i/2] = aux;
        }
    }
    save(prefix + "9.in", a);

    j = 0;
    for (i = 0; i < n; i++) {
        if (i%4096 == 0) {
            j = r(rng);
        } 
        a[i] = j;
    }
    save(prefix  + "10.in", a);

    aux = r(rng)/256 * 256; 
    for (i=0; i<n; i++) {
        a[i] = aux | (rng()%256);
    } 
    save(prefix + "11.in", a);

    for (i=0; i<n/2; i++) {
        a[i] = i * 10;
    }
    for (i=n/2; i<n; i++) {
        a[i] = (n-i) * 10;
    }
    save(prefix + "12.in", a);
}

int main() {
    generator(SMALL, "small");
    generator(BIG, "big");
    return 0;
}
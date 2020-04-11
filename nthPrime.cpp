#include <iostream>
#include <iomanip>
#include <cstring>
#include <cmath>
#include <ctime>

using std::cout;
using std::cerr;
using std::endl;
using std::fixed;

int main(int argc, char* argv[]) {

    if (argc != 2 || atoi(argv[1]) < 1) {
        cerr << "USAGE: nthPrime n>0" << endl;
        return 1;
    }
    
    bool t;
    char s[3];
    int i,
        n = atoi(argv[1]),
        m = 1,
        p[n - 1],
        x = 3;
     
    clock_t time;
    
    p[0] = 2;

    time = clock();

    while (m < n) {
        t = true;

        for (i = 0; p[i] * p[i] <= x; i ++) {
            if (!(x % p[i])) t = false;
        }
        if (t) {
            p[m ++] = x;
        }
        x += 2;
    }
    
    time = clock() - time;

    (n % 10 == 1 && n % 100 != 11) ? strcpy(s, "st"):
    (n % 10 == 2 && n % 100 != 12) ? strcpy(s, "nd"):
    (n % 10 == 3 && n % 100 != 13) ? strcpy(s, "rd"):
                                     strcpy(s, "th");

    cout << "The " << n << s << " prime is " << p[n - 1] << endl;
    cout << "Found in " << fixed << (double)time / CLOCKS_PER_SEC << " seconds." << endl;

    return 0;
}
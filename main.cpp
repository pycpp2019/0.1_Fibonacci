#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib> 

using namespace std;

template <typename T>
class FibonacciCounter {
private:
    vector<T> cache;
public:
    FibonacciCounter() {}

    static int max_n() {
        return (8*sizeof(T) - 1)*log(2.0)/log((1.0 + sqrt(5))/2.0);
    }

    T get(T n) {
        if (n > 2 && this->cache.size() < n) {
            this->cache.resize(n - 2, 0);
        }
        if (n <= 0) {
            return 0;
        } else if (n <= 2) {
            return 1;
        } else {
            T c = this->cache[n - 3];
            if (c == 0) {
                c = this->get(n - 2) + this->get(n - 1);
                this->cache[n - 3] = c;
            }
            return c;
        }
    }
};


int main(int argc, const char *argv[]) {
    int n;
    if (argc >= 2) {
        n = atoi(argv[1]);
    } else {
        cout << "enter the index of Fibonacci number:" << endl;
        cin >> n;
    }

    FibonacciCounter<long long int> fc;

    if (n <= 0 || n > fc.max_n()) {
        cout << "bad index, only 0 < n <= " << fc.max_n() << " are allowed" << endl;
        return 1;
    }

    cout << "the " << n << "-th Fibonacci number is " << fc.get(n) << endl;

    return 0;
}

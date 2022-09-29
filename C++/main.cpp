#include<iostream>
using namespace std;
class temp {
public:
    int a;
    temp() {
        cin >> a;
    }
    void check() {
        int i,x= 0;
        for (i=2; i<a; i++) {
            if (a%i == 0) {
                x= 1;
                break;
            }
        }
        if (x== 0) {
            cout << "PRIME NUMBER" ;
        } else {
            cout << "NOT A PRIME NUMBER";
        }
    }
};
int main() {
    temp obj;
    obj.check();
    return 0;
}

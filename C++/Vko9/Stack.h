#include <string>

const int SIZE = 10;

template<typename T> //typename tilalla voi olla myös Class
class Stack {

public:
    void push(T aObj) {
        if (top < SIZE) {
            objektit[top] = aObj;
            top++;
        }
    }
    T pop() {
        if (top > 0) {
            top--;
            return objektit[top];
        }
        return objektit[top];
    }

private:
    int top = 0;
    T objektit[SIZE];

};
#include "Stack.h"

using namespace std;

int main()
{
    class Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    int elementPopped = s.pop();
    cout << elementPopped << " Popped from stack" << endl;
    getchar();
    return 0;
}
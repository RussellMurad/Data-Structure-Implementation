#include <bits/stdc++.h>
#define Size 10
using namespace std;

int Arr[Size],Top =-1;
void push()
{
    if(Top >= Size-1)
        cout << endl << "Stack is FULL !!! Cannot push the value !!!";
    else
        cout << endl << "Please Push in the Stack: " << endl;
        cin >> Arr[++Top];
        cout << endl << endl;
}

void peek()
{
    if(Top < 0)
        cout << endl << "Stack is Empty! Cannot PEEK any Value" << endl;
    else
        cout << endl << "Your PEEKed Value is " << Arr[Top] << endl << endl;
}

void Pop()
{
    if(Top < 0)
        cout << endl << "Stack is Empty! Cannot POP any Value" << endl;
    else
        Top--;
        cout << endl;
}

int main()
{
    int Stack,Value=-1;

        while(Value != 4){

        cout << "Please select an Operation of Stack: " << endl << endl;
        cout << "\t1. Push" << endl << "\t2. Peek" << endl << "\t3.Pop" << endl << "\t4.End" << endl << endl;
        cin >> Stack;

        if(Stack == 1)
        {
            push();
        }

        else if(Stack == 2)
        {
            peek();
        }

        else if(Stack == 3)
        {
            Pop();
        }

        else
        {
            Value = 4;
        }
    }

    return 0;
}

#include <bits/stdc++.h>
#define QSize 100
using namespace std;

int rear = -1,myQ[QSize],front=0,counter=0;

int NQ(int value)
{
    if(QSize != rear)
    {
        myQ[++rear] = value;
        counter++;
    }

    else
        cout << "Queue is Full Of Shit !!!" << endl;
}

void DQ()
{
    if(QSize == front)
        cout << "Queue is Empty" << endl;
    else
        counter--;
        cout << "After Dequeue, Front is " << myQ[++front] << endl << endl;
}

int main()
{
    int Q,value,flag=-1;

    while(flag != 0)
    {
        cout << "Select An Operation of Queue: " << endl << endl;
        cout << "\t1.Enqueue" << endl;
        cout << "\t2.Dequeue" << endl;
        cout << "\t3.End" << endl;

        cin >> Q;

        if(Q==1)
        {
            cout << "Type Enqueue Value: ";
            cin >> value;
            NQ(value);
        }

        else if(Q==2)
        {
            DQ();
        }

        else
            flag = 0;
    }


    return 0;
}

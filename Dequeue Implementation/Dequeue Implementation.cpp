#include <bits/stdc++.h>
using namespace std;

int main()
{
    int choice, data;
    deque <int> Dequeue;
    deque <int> ::iterator it;

    while(true)
    {
        cout << endl << "Select Any Dequeue Operation: " << endl;
        cout << "\t1. Push_front(), " << endl << "\t2. Push_back(), " << endl << "\t3. Pop_front(), " << endl << "\t4. Pop_back(), " << endl << "\t5. Front(), " << endl << "\t6. Back(), " << "\t7. Clear(), " << endl << "\t8. Show all elements, " << endl << "\t9.Exit" << endl;

        cin >> choice;

        if(choice == 1)
        {
            cout << "Type a Data for pushing front: ";
            cin >> data;
            Dequeue.push_front(data);
        }

        else if(choice == 2)
        {
            cout << "Type a Data for pushing back: ";
            cin >> data;
            Dequeue.push_back(data);
        }

        else if(choice == 3)
        {
            if(!Dequeue.empty())
                Dequeue.pop_front();
            else
                cout << "The Dequeue is Empty" << endl;
        }

        else if(choice == 4)
        {
            if(!Dequeue.empty())
                Dequeue.pop_back();
            else
                cout << "The Dequeue is Empty" << endl;
        }

        else if(choice == 5)
        {
            cout << "Top front element is : " << Dequeue.front();
        }

        else if(choice == 6)
        {
            cout << "Top front element is : " << Dequeue.back();
        }

        else if(choice == 7)
        {
            Dequeue.clear();
            cout << "Dequeue is clear right now" << endl;
        }

        else if(choice == 8)
        {
            if(!Dequeue.empty())
            {
                cout << "Full dequeue is : ";
                for(it=Dequeue.begin(); it != Dequeue.end(); it++)
                {
                    cout << *it << " ";
                }
            }

            else
            {
                cout << "Dequeue is empty" << endl;
            }

        }

        else
        {
                break;
        }
    }

    return 0;
}

// Reverse the only first K element of the queue

// Reverse K elements in the queue

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl
         << endl;
}

void reverseFirstK(queue<int> &q, int k)
{

    // Edge case
    if (k <= 0 || k > q.size()){
        return;
    }

    // step 1 : pop and reverse k element , and push these reversed elements in the queue

    stack<int> st;
    int count = k;
    while (count--){
        int temp = q.front();
        q.pop();
        st.push(temp);
    }

    while (!st.empty()){
        q.push(st.top());
        st.pop();
    }

    //step2 : pop rest n-k element , push into q as it is 
    count =0;
    while(!q.empty()){
        if(count == q.size() -k){
            break;
        }

        int temp = q.front();
        q.pop();
        q.push(temp);

        count++;
    }

}

int main()
{
    int n, k;
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // cout << "Enter n = ";
    // cin >> n;
    // cout << "Enter the elements : ";
    // for (int i = 0; i < n; i++)
    // {
    //     int temp;
    //     cin >> temp;
    //     q.push(temp);
    // }

    printQueue(q);
    cout << "Enter K : ";
    cin >> k;
    reverseFirstK(q, k);

    printQueue(q);

    return 0;
}
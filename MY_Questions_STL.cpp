#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pairs;
//To print unique pairs of input even numbers
void display(set<pairs> &s)
{
    cout << "the even pairs are : ";
    for (auto itr : s)
    {
        cout << "(" << itr.first << "," << itr.second << ")";
    }
}
void question1()
{
    vector<int> vec;
    pair<int, int> p;
    set<pairs> s;
    for (int i = 0; i < 8; i++)
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }

    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] % 2 == 0 && vec[j] % 2 == 0)
            {
                p = make_pair(vec[i], vec[j]);
                s.insert(p);
            }
        }
    }

    display(s);
}

void question2()
{
    int n;
    cin >> n;
    int maxi = 0;
    int x;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
        if (mp[x] > mp[maxi])
        {
            maxi = x;
        }
    }
    cout << maxi << " "
         << "and it was typed " << mp[maxi] << " times.";
}

void printKMax(int arr[], int n, int k)
{
    //Write your code here.
    deque<int> dq;

    for (int i = 0; i < n; i++)
    {

        // base case for first element
        if (dq.empty())
        {
            dq.push_back(i);
        }

        // remove elements outside the current window
        if (dq.front() <= (i - k))
        {
            dq.pop_front();
        }

        // move max element to the front
        while (!dq.empty() && arr[i] >= arr[dq.back()])
        {
            dq.pop_back();
        }

        dq.push_back(i);

        // print out only when the first window is completed
        if (i >= (k - 1))
        {
            cout << arr[dq.front()] << " ";
        }
    }
    cout << endl;
}
void question3()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
}

int main()
{
    // question1();
    // question2();
    // question3();

    // User function Template for C
    struct pair getMinMax(long long int arr[], long long int n)
    {
        pair result;
        int mini = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[mini] > arr[i])
            {
                mini = i;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[mini] > arr[j])
            {
                mini = j;
            }
        }
        result.min = arr[i];
        result.max = arr[j];
        return result;
    }
    return 0;
}
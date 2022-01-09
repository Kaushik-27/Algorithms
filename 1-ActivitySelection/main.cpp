#include <bits/stdc++.h>
using namespace std;

void printMaxActivities(int s[], int f[], int n)
{
    //the 1st activity is always get selected AS THE FINISH TIME IS ALREADY SHORTED.
    int i = 0, count = 1;
    cout << "Selected: " << i;

    //check the rest of the activities
    for(int j = 1; j < n; j++)
    {
        if(s[j] >= f[i]) //if start time is same or greater than the current activity, select it.
        {
            i = j;
            cout << ", " << i;
            count++;
        }
    }

    cout << "\nTotal count: "<< count << endl;
}

int main()
{
    int s[] =  {1, 3, 0, 5, 8, 5};
    int f[] =  {2, 4, 6, 7, 9, 9};
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}
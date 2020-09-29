#include <iostream>
using namespace std;
 
int main()
{
    int n, k, t;
    cin>>n>>k>>t;
    float percent = (float(t)/100)*n;
    int first = percent;
    float s = (percent - first);
    int sec = s * k;
    int result[n];
    for(int i = 0; i < first; i++)
        result[i] = k;
    for(int j = first; j < first + 1 ; j++)
        result[j] = sec;
    for(int x = first + 1; x < n; x++)
        result[x] = 0;
    for(int a = 0; a < n; a++)
        cout<<result[a]<<" ";
}

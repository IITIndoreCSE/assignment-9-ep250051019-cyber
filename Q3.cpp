#include <iostream>
using namespace std;

struct Point
{
    float x, y;
};

int main() {
    
    Point arr[7];
    for(int i = 0; i < 7; i++)
    {
        float x, y;
        cout << "Enter x coordinate for point" << i+1 << ":";
        cin >> x;
        cout << "Enter y coordinate for point" << i+1 << ":";
        cin >> y;
        arr[i] = {x, y};
        
    }
    
    cout << "Points that lie in first quadrant are-\n";
    
    for ( int i = 0; i < 7; i++)
    {
        if (arr[i].x > 0 && arr[i].y > 0)
        {
            cout << i+1 << endl;
        }
    }
	// your code goes here

}

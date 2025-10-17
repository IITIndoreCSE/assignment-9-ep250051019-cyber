#include <iostream>
using namespace std;

struct Item
{
    int id;
    float cost;
};

int main() {
    
    Item arr[6];
    for(int i = 0; i<6; i++)   //Randomly initializing first four elemts with data
    {
        arr[i].id = i+1;
        arr[i].cost = (i+1)*15; 
    }
    cout << "IDs of items with cost more than 50 are-\n";
    for(int i = 0; i < 6; i++)
    {
        if(arr[i].cost > 50)
        {
            cout << arr[i].id << endl;
        }
    }
	// your code goes here

}

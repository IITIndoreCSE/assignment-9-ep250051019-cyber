#include <iostream>
using namespace std;

struct SalesRecord
{
    string month;
    float amount;
};

int main() {
    
    SalesRecord year[12];
    
    for(int i = 0; i < 12; i++)
    {
        string name;
        float sales;
        cout << "Enter the month name:";
        cin >> name;
        cout << "Enter the amount:";
        cin >> sales;
        
        year[i].month = name;
        year[i].amount = sales;
    }
    int max_index=-1, min_index=-1;
    float max = -1, min = 3000000000000;
    
    for(int i = 0; i < 12; i++)
    {
        if(year[i].amount > max)
        {
            max = year[i].amount;
            max_index = i;
        }
    }
    
    for(int i = 0; i < 12; i++)
    {
        if(year[i].amount < min)
        {
            min = year[i].amount;
            min_index = i;
        }
    }
    
    cout << "Maximum sales were reported in " << year[max_index].month << endl;
    cout << "Minimum sales were reported in " << year[min_index].month << endl;
	// your code goes here

}

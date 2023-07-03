#include <iostream>
#include <string>
using namespace std;
int coupleCount = 0;
int singleCount = 0;
int findMinimumTables(string attendees) {
    int n = attendees.length();
    cout<<n<<endl;
    for (int i = 0; i < n; i++) 
    {
        if (attendees[i] == 'C')
        {
            coupleCount++;
        }
        if (attendees[i] == 'S')
        {
            singleCount=singleCount+1;;
        }
    }
    int tables = coupleCount;
    if (singleCount > 0)
    {
        tables += (singleCount + 1) / 2;
    }
    return tables;
}

int main() {
    int n;
    cout << "Enter the number of attendees: ";
    cin >> n;

    string attendees;
    cout << "Enter the labels (C or S) for each attendee: ";
    cin >> attendees;

    int minimumTables = findMinimumTables(attendees);
    std::cout << "Minimum number of tables required: " << minimumTables <<endl;

    return 0;
}

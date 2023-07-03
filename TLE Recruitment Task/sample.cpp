/*
This implementation uses an unordered map to store the crushes, where the person's ID is the key and their crush's ID is the value. It iterates through the crushes and checks if there is a love triangle by verifying if person C has a crush on person A. If a love triangle is found, it returns true; otherwise, it returns false.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
    
using namespace std;

bool checkLoveTriangle(vector<pair<int, int>>& crushes) {
    unordered_map<int, int> crushMap;

    // Build a map of crushes
    for (const auto& pair : crushes) {
        int person = pair.first;
        int crush = pair.second;
        crushMap[person] = crush;
    }

    // Check for love triangles
    for (const auto& pair : crushes) {
        int personA = pair.first;
        int personB = pair.second;
        int personC = crushMap[personB];

        // Check if personC has a crush on personA
        if (crushMap[personC] == personA) {
            return true;  // Love triangle found
        }
    }
    return false;  // No love triangle found
}
int main()
{
    cout << "Enter id of persons and their crush: ";
    vector<pair<int, int>> crushes;
    for (int i = 0; i < 3; i++) {
        int person, crush;
        cin >> person >> crush;
        crushes.push_back(make_pair(person, crush));
    }

    // vector<pair<int, int>> crushes = {{1, 2}, {3, 1}, {2, 3}};
    string result = checkLoveTriangle(crushes)?"true":"false";
    cout<<result;
    
    // result should be true since person 1 has a crush on person 2, person 2 has a crush on person 3,
    // and person 3 has a crush on person 1, forming a love triangle.
}
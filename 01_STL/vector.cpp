#include <iostream>
#include <vector>
using namespace std;

int main() {
    // initializaiton of vector
    vector<int> vec1;
    vector<int> vec2={1,2,3,4,5,6,7,8,9,10};
    vector<int> vec3(2,3);
    vector<int> vec4(vec3);
    // cout << vec1.size() << endl;
    
    // cout << vec2.size() << endl;
    // cout << vec3.size() << endl;
    // cout << vec4.size() << endl;

    // functions
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);
    cout << "size of vec1" << " "  << vec1.size() << endl;
    cout << "position of index 2 vec1"  << " "  << vec1.at(2) << endl;
    cout << "postion of index 3 vec1" << " "   << vec1[3] << endl;
    cout << "front of vec1"  << " "  << vec1.front() << endl;
    cout << "last of vec1"  << " " << vec1.back() << endl;
    // vec1.erase(vec1.begin()+ 1) ;

    vec1.erase(vec1.begin() + 1, vec1.begin() + 2);
    
    // 

    for( int val : vec1) {
        cout << val << " ";
    }
    return 0;
} 



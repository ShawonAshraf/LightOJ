#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int numberOfSurvivors(vector<int> &v, int &index);

int main() {
    int testCases;
    
    cin >> testCases;
    
    for (int i = 1; i <= testCases; i++) {
        int n, k, index;
        
        cin >> n >> k;
        
        vector<int> v(n, 1);
        
        int x = 0;
        while (numberOfSurvivors(v, index) != 1) {
            x += (k - 1);
            v.at(x) = 0;
        }
        
        cout << "Index of the last man standing : " << index << endl;
        
        v.clear();
    }
    
    return 0;
}

int numberOfSurvivors(vector<int> &v, int &index) {
    int aliveHeadCount = 0;
    int i = 0;
    
    int s = (int) v.size();
    for (i = 0; i <= s; i++) {
        if (v[i]) {
            aliveHeadCount++;
            index = i;
        }
    }
    
    return aliveHeadCount;
}
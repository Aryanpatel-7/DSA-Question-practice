// First Bad Version (leetcode Q278)

#include <iostream>
using namespace std;

bool isBadVersion(int version, int bad) {
    return version >= bad;
}

int firstBadVersion(int n, int bad) {
    int left = 1, right = n;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (isBadVersion(mid, bad)) { 
            right = mid;
        } else {
            left = mid + 1;
        }
    }
    
    return left;
}

int main() {
    int n = 10;
    int bad = 4;
    
    cout << "First bad version: " << firstBadVersion(n, bad) << endl;
    
    return 0;
}
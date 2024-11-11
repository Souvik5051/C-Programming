#include <iostream>
using namespace std;

// Function to check if person 'i' is a celebrity
bool isCelebrity(int arr[][100], int n, int i) {
    for (int j = 0; j < n; j++) {
        if (i != j) {
            // A celebrity should not know anyone and should be known by everyone
            if (arr[i][j] == 1 || arr[j][i] == 0) {
                return false;
            }
        }
    }
    return true;
}

// Function to find the celebrity
int celebrityProblem(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        if (isCelebrity(arr, n, i)) {
            return i; // Return index of the celebrity
        }
    }
    return -1; // If no celebrity is found
}

int main() {
    int n;
    cin >> n;

    int arr[100][100]; // Fixed size for the array; adjust if necessary

    // Input the relationship matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int res = celebrityProblem(arr, n);

    if (res == -1) {
        cout << "No celebrity found" << endl;
    } else {
        cout << "Celebrity found at index: " << res << endl;
    }

    return 0;
}




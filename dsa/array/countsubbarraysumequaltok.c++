#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main() {
    int Q;
    cin >> Q; // Read number of queries
    multiset<int> sp; // Stores stock prices in sorted order (allows duplicates)

    while (Q--) {
        string query;
        cin >> query; // Read command

        if (query == "1") { 
            // Insert price P
            int P;
            cin >> P; // Read integer properly
            sp.insert(P);
        } 
        else if (query == "2") { 
            // Print maximum stock price
            if (sp.empty()) {
                cout << "No stock prices recorded." << endl;
            } else {
                cout << *sp.rbegin() << endl; // Last element is the max
            }
        } 
        else if (query == "3") { 
            // Find K-th highest stock price
            int K;
            cin >> K; // Read integer properly

            if (K > sp.size()) {
                cout << "Invalid input" << endl;
            } else {
                auto it = sp.rbegin(); // Reverse iterator for highest elements
                advance(it, K - 1); // Move K-1 steps
                cout << *it << endl;
            }
        }
    }

    return 0;
}


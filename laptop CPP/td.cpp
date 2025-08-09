#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> list;
    while (true) {
        cout << "Ënter option: (1, 2 ,3 4)" << endl;
        int pick;
        cin >> pick;
        if (pick == 1) {
            cout << "Enter a task: " << endl;
            string task;
            cin >> task;
            list.push_back(task);

        }



        else {
            break;
        }
    }

    for (const auto& a : list) {
        cout << a << " ";
    }




}
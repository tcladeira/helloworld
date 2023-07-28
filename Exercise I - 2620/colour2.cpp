#include <iostream>
#include <string>
#include <vector>
using namespace std;

//functions here:


void sort(vector<string>& vec);
bool linear_search (vector<string> vec, string colour, int& count);
bool binary_search (vector<string> vec, string colour, int& count);
// string *resize(string *A, int n);
// void search_and_report(const string A[], int n, string colour, string label, bool (*search)(const string A[], int n, string colour, int &count));




int main () {
    string colour;
    vector<string> vec(1);
    string colourtoSearch;
    string quit;
    int i = 0;
    int countL = 0;
    int countB = 0;

    
    while (vec.at(i) != "$"){
        cout << "Enter a colour name ($ when done): ";
        getline(cin, colour);
        vec.push_back(colour);
        ++i;
    }
    vec.pop_back();
    sort (vec);
    for (int i = 0; i < vec.size(); ++i){
        cout << vec.at(i) << " " << endl;
    }
    
    while (colourtoSearch != "$"){
        cout << "Enter a colour to search for (type $ to quit): " << endl;
        getline(cin, colourtoSearch);
        linear_search(vec, colourtoSearch, countL);
        cout << "Linear Search: found, comparison " << countL << endl;
        binary_search(vec, colourtoSearch, countB);
        cout << "Binary Search: found, comparison " << countB  << endl;
    }




    return 0;

}

void sort(vector<string>& vec){
    string colourtemp;
    for (int i = 0; i < vec.size() - 1; ++i){
        for (int j = 0; j < vec.size() - i - 1; ++j){
            if (vec.at(j) > vec.at(j + 1)){
                colourtemp = vec.at(j);
                vec.at(j) = vec.at(j +1);
                vec.at(j+1) = colourtemp;
            }
        }
    }
}


bool linear_search (vector<string> vec, string colour, int& count){
    for (int i = 0; i < vec.size() - 1; ++i){
        count = count + 1;
        if (vec.at(i) == colour){
            return true;
        }
     
    }
    return true;
}

bool binary_search (vector<string> vec, string colour, int& count){
    int left = 0;
    int right = vec.size() - 1;
    int counter = 0;
    int i = 0;
    while (left <= right){
        count = count + 1;
        int mid = left + (right - left) / 2;
        if (vec.at(i) == colour){
            return true;
            left = right;
        }
        else if (vec.at(i) < colour){
        left = mid + 1;
        }
        else {
            left = mid - 1;
        }
    }
}

// string *resize(string *A, int n){

// }

// void search_and_report(const string A[], int n, string colour, string label, bool (*search)(const string A[], int n, string colour, int &count)){

// }


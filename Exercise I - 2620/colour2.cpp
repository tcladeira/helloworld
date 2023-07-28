//Student = Thiago Ladeira - CPSC 2620 - Exercise I
// tc.ladeira@uleth.ca

#include <iostream>
#include <string>
#include <vector>
using namespace std;

//This are the functions headlines:

void sort(vector<string>& vec);
bool linear_search (vector<string> vec, string colour, int& count);
bool binary_search (vector<string> vec, string colour, int& count);
void resize (vector<string>& vec, int nSize);

//I could not implement the last function, in both files.
// void search_and_report(const string A[], int n, string colour, string label, bool (*search)(const string A[], int n, string colour, int &count));


int main () {
    string colour;
    vector<string> vec(1);
    string colourtoSearch;
    string quit;
    int i = 0;
    int countL = 0;
    int countB = 0;

    //first block it ask for the colours to fill the vector
    while (vec.at(i) != "$"){
        cout << "Enter a colour name ($ when done): ";
        getline(cin, colour);
        vec.push_back(colour);
        ++i;
    }
    //now, call the function pop_back to delete '$' from the vector
    vec.pop_back();
    //use sort function to organizae the vector alphabetically
    sort (vec);
    for (int i = 0; i < vec.size(); ++i){
        cout << vec.at(i) << " " << endl;
    }
    
    while (colourtoSearch != "$"){
        cout << "Enter a colour to search for (type $ to quit): " << endl;
        getline(cin, colourtoSearch);
        if (colourtoSearch == "$"){         //this line I add a break so the function does not search for $
            break;
        }
        linear_search(vec, colourtoSearch, countL);
        binary_search(vec, colourtoSearch, countB);
        if ((linear_search(vec, colourtoSearch, countL) == true)){
            cout << "Linear Search: found, comparison " << countL << endl;
            cout << "Binary Search: found, comparison " << countB  << endl;
        }
        else {
            cout << "Linear Search: not found, comparison " << countL << endl;
            cout << "Binary Search: not found, comparison " << countB  << endl;
        }
    }

    return 0;

}

//Here are the functions definitions:
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
    count = 0;
    for (int i = 0; i < vec.size() - 1; ++i){
        count = count + 1;
        if (vec.at(i) == colour){
            return true;
            break;
        }
    }
    return false;
}

bool binary_search (vector<string> vec, string colour, int& count){
    int left = 0;
    int right = vec.size() - 1;
    count = 0;
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

    return false;
}

void resize(vector<string>& vec, int nSize){
    for (int i = 0; i < nSize; ++i){
        vec.push_back(" ");
    }
 }


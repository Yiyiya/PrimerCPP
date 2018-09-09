#include <iostream>
using namespace std;

#include <string>
using std::string;

int main()
{
    string pre_word, word, max_repeat_word;
    int repeat_times = 0, max_repaet_times = 0;

    while (cin >> word){
        if (word == pre_word){
            ++repeat_times;
        }
        else {
            repeat_times = 1;
            pre_word = word;
        }
        if (max_repaet_times < repeat_times) {
            max_repaet_times = repeat_times;
            max_repeat_word = pre_word;
        }
    }
    if (max_repaet_times <= 1){
        cout << "No word repeated" << endl;
    }
    else {
        cout << "The word" << max_repeat_word <<" occurred" << max_repaet_times <<" times" << endl;
    }



    return 0;
}

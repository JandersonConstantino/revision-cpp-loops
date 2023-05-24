#include <iostream>

using namespace std;

const int times = 10;

void finish_log_message(char* value) {
    cout << "======== finish ";
    cout << value;
    cout << " ========" << endl;
}

void sum_log_start(int left,  int right) {
    cout << left;
    cout << " + ";
    cout << right;
    cout << " = ";
}

void sum_log_end(int value) {
    cout << value << endl;
}

int main() {
    int sum = 0;
    int i;

    for (i = 1; i <= times; i++) {
        sum_log_start(sum, i);
        sum += i;
        sum_log_end(sum);
    }

    cout << "The final sum is ";
    cout << sum << endl;
    finish_log_message("for");

//    WHILE =======================================
    sum = 0;
    i = 1;

    while (i <= times) {
        sum_log_start(sum, i);
        sum += i;
        sum_log_end(sum);

        i++;
    }
    finish_log_message("while");

//    USER INPUT =======================================
    int user_input_numbers[times];

    for (int j = 0; j < times; j++) {
        cout << "Please insert the ";
        cout << j + 1;
        cout << " number: " << ends;

        cin >> user_input_numbers[j];
    }

    sum = 0;

    for (int j = 0; j < size(user_input_numbers) - 1; j++) {
        int value = user_input_numbers[j];

        sum_log_start(sum, value);
        sum += value;
        sum_log_end(sum);
    }

    finish_log_message("user input");

//    DEFINED VECTOR =======================================
    sum = 0;

    int vector_sum_values[times] = {
            1,
            2,
            3,
            4,
            5,
            6,
            7,
            8,
            9,
            10,
    };

    for (int j = 0; j < size(vector_sum_values); j++) {
        int value = vector_sum_values[j];

        sum_log_start(sum, value);
        sum += value;
        sum_log_end(sum);
    }

    finish_log_message("defined vector");

    return 0;
}

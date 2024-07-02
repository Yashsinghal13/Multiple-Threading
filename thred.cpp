// #include <iostream>
// #include <thread>
// #include <ctime>

// using namespace std;

// void even(long long n) {
//     long long c = 0;
//     for(long long i = 0; i <= n; i++) {
//         if(i % 2 == 0) c++;
//     }
// }

// void odd(long long n) {
//     long long c = 0;
//     for(long long i = 0; i <= n; i++) {
//         if(i % 2 == 1) c++;
//     }
//     cout << "Odd count: " << c << endl;
// }

// int main() {
//     time_t start_time = time(nullptr);

//     thread t1 = thread(even, 10000000000);
//     thread t2 = thread(odd, 10000000000);

//     t1.join();
//     t2.join();

//     time_t end_time = time(nullptr);
//     cout << "Time taken: " << end_time - start_time << " seconds" << endl;
//     return 0;
// }
#include <iostream>
#include <ctime>

using namespace std;

void even(long long n) {
    long long c = 0;
    for(long long i = 0; i <= n; i++) {
        if(i % 2 == 0) c++;
    }
}

void odd(long long n) {
    long long c = 0;
    for(long long i = 0; i <= n; i++) {
        if(i % 2 == 1) c++;
    }
    cout << "Odd count: " << c << endl;
}

int main() {
    time_t start_time = time(nullptr);

    even(10000000000);
    odd(10000000000);

    time_t end_time = time(nullptr);
    cout << "Time taken: " << end_time - start_time << " seconds" << endl;

    return 0;
}


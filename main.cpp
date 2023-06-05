//
// Created by Eddie on 6/4/23.
//

#include <iostream>
#include <vector>

#include "bigint.h"
#include "Person.h"

using namespace std;

template <typename S>
ostream& operator<<(ostream& os,
                    const vector<S>& vector)
{
    // Printing all the elements
    // using <<
    for (auto element : vector) {
        os << element << " ";
    }
    return os;
}

int projectEuler0001() {
    int answer = 0;

    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            answer += i;
        }
        else if (i % 5 == 0) {
            answer += i;
        }
    }

    return answer;
}

vector<bigint> fibSeqToN(int n) {
    if (n <= 0) {
        return vector<bigint> {};
    }
    else if (n == 1) {
        return vector<bigint> {1};
    }
    else if (n == 2) {
        return vector<bigint> {1, 1};
    }

    vector<bigint> seq{1, 1};

    while (seq.size() < n) {
        seq.push_back(seq.end()[-1] + seq.end()[-2]);
    }

    return seq;
}

int main() {
    cout << "Hello, world!" << endl;

    Person person("Eddie");
    cout << person.name << endl;

    cout << projectEuler0001() << endl;

    cout << fibSeqToN(100) << endl;

    return 0;
}

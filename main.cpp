#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    Student(string n = "", int s = 0) : name(n), score(s) {}

    // getter 함수
    string getName() const { return name; }
    int getScore() const { return score; }

    // < 연산자 오버로딩 : score 기준 비교
    bool operator<(const Student& other) const {
        return this->score < other.score;
    }
};

int main() {
    vector<Student> st;
    string name;
    int score;

    // 3명의 학생 입력
    for (int i = 0; i < 3; i++) {
        cout << "이름과 성적을 입력: ";
        cin >> name >> score;
        st.push_back(Student(name, score));
    }

    // max_element를 이용하여 최고 점수 학생 찾기
    auto best = max_element(st.begin(), st.end());

    cout << "최우수학생은\n";
    cout << "이름:" << best->getName() << endl;
    cout << "성적:" << best->getScore() << "점" << endl;

    return 0;
}

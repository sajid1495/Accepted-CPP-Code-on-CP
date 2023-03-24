#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Student {
  int id;
  int x;
  int y;
  int checkpoint;
};

struct Checkpoint {
  int id;
  int x;
  int y;
};

int manhattan_distance(int x1, int y1, int x2, int y2) {
  return abs(x1 - x2) + abs(y1 - y2);
}

bool compare_students(const Student& s1, const Student& s2) {
  return s1.id < s2.id;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<Student> students(n);
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    students[i] = { i, x, y, -1 };
  }

  vector<Checkpoint> checkpoints(m);
  for (int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    checkpoints[i] = { i, x, y };
  }

  for (auto& student : students) {
    int min_distance = manhattan_distance(student.x, student.y, checkpoints[0].x, checkpoints[0].y);
    student.checkpoint = checkpoints[0].id;

    for (int i = 1; i < m; i++) {
      int distance = manhattan_distance(student.x, student.y, checkpoints[i].x, checkpoints[i].y);
      if (distance < min_distance) {
        min_distance = distance;
        student.checkpoint = checkpoints[i].id;
      }
    }
  }

  sort(students.begin(), students.end(), compare_students);

  for (auto& student : students) {
    cout << student.checkpoint + 1 << endl;
  }

  return 0;
}

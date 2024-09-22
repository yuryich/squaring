#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T square(const T& value) {
	return value * value;
}

template <typename T>
vector<T> square(const vector<T>& vec) {
	vector<T> result(vec.size());
	transform(vec.begin(), vec.end(), result.begin(), [](const T& val) {
		return square(val);
	});
	return result;
}

int main() {
	int num = 4;
	cout << "Квадрат числа " << num << ": " << square(num) << endl;

	vector<int> vec = { -1, 4, 8 };
	vector<int> squaredVec = square(vec);

	cout << "Квадраты вектора: ";
	for (const auto& val : squaredVec) {
		cout << val << " ";
	}
	cout << endl;
}
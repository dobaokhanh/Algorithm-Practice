#include <iostream>
#include <vector>

using namespace std;

long long maxPairwiseProduct(const vector<long>& numbers) {
	long n = numbers.size();

	long max_index1 = -1;
	for (long i = 0; i < n; ++i) {
		if (max_index1 == -1 || numbers[i] > numbers[max_index1])
			max_index1 = i;
	}

	long max_index2 = -1;
	for (long j = 0; j < n; j++) {
		if (j != max_index1 && ((max_index2 == -1) || (numbers[j] > numbers[max_index2])))
			max_index2 = j;
	}

	return ((long long) (numbers[max_index1] * numbers[max_index2]));
} 

int main() {
	long n;
	cin >> n;
	vector<long> numbers(n);
	for (long i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	long long result = maxPairwiseProduct(numbers);
	cout << result;
}
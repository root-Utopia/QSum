#include <iostream>
using namespace std;

typedef long long int large;

large* qsum(large* arr, large arr_size)
{
	if (arr_size == 1)
		return arr;

	large tmp_size = ceil((double)arr_size / 2),
		* tmp = new large[tmp_size]{ 0 };

	for (large i = 0, j = 0; (i + 1 < arr_size) && (j < tmp_size); i += 2, ++j)
		tmp[j] = arr[i] + arr[i + 1];

	if (arr_size % 2)
		tmp[tmp_size - 1] = arr[arr_size - 1];

	return qsum(tmp, tmp_size);
}
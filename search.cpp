#include "search.h"
// Recursive linear search that finds LAST occurrence
// index starts at vec.size() - 1 from main
// checks from right → left
int recursiveLastOccurrence(const vector<int>& vec, int target, int index) {
    if (index < 0) return -1;

    if (vec[index] == target)
        return index;

    return recursiveLastOccurrence(vec, target, index - 1);
}

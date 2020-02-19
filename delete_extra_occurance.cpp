// https://www.codewars.com/kata/554ca54ffa7d91b236000023/cpp

using IntIntUMap = std::unordered_map<int, int>;

std::vector<int> deleteNth(std::vector<int> arr, int n) {
  std::vector<int> n_arr;
  // Return empty vector if occurance count is 0
  if (n <= 0) return n_arr;
  IntIntUMap freq;
  IntIntUMap::iterator it;
  for (const auto value : arr) {
    it = freq.find(value);
    if (it == freq.end()) {
      // Add value to map with its occurance count if it doesn't exist
      freq.insert({value, 1});
      n_arr.emplace_back(value);
    } else {
      // Increment value's occurance count
      ++it->second;
      // Insert value to vector if its occurance count is less than n
      if (it->second <= n)
        n_arr.emplace_back(value);
    }
  }
  return n_arr;
}

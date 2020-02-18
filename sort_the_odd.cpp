// https://www.codewars.com/kata/578aa45ee9fd15ff4600090d/cpp
class Kata {
 public:
  std::vector<int> sortArray(std::vector<int> input) {
    // https://stackoverflow.com/a/39554086
    // Store all odd numbers in a separate vector buffer
    // Pre-allocate buffer size instead of
    // using back_inserter in copy_if for better performance
    std::vector<int> buffer(input.size());
    auto buffer_iterator { std::copy_if(input.begin(),
                                        input.end(),
                                        buffer.begin(),
                                        [](const int i) { return (i % 2 == 1); }) };
    // Resize buffer vector according to number of odd element it holds
    buffer.erase(buffer_iterator, buffer.end());
    // Sort all odd numbers in buffer vector
    sort(buffer.begin(), buffer.end());
    buffer_iterator = buffer.begin();
    for (auto& i : input) {
      // Replace all odd numbers in array with sorted odd buffer values
      if (i % 2 == 1) {
        i = *buffer_iterator;
        ++buffer_iterator;
      }
    }
    return input;
  }
};

// https://www.codewars.com/kata/55e2adece53b4cdcb900006c/cpp

class Tortoise {
 public:
  static std::vector<int> race(int v1, int v2, int g);
};

std::vector<int> Tortoise::race(int v1, int v2, int g) {
  std::vector<int> time_to_catch { -1, -1, -1 };
  if (v1 >= v2) return time_to_catch;
  // Formula for getting time to catch in seconds
  const int seconds { (g * 3600) / (v2 - v1) };
  // Divide seconds into hours, minutes and seconds
  time_to_catch.at(0) = seconds / 3600;
  time_to_catch.at(1) = seconds / 60 % 60;
  time_to_catch.at(2) = seconds % 60;
  return time_to_catch;
}

// https://www.codewars.com/kata/5648b12ce68d9daa6b000099/cpp

#include <utility>
#include <vector>

unsigned int number(std::vector<std::pair<int, int>> const& bus_stops) {
  unsigned int bus_people_count { };
  // Add people getting into the bus
  // Remove people getting off the bus
  for (auto const& stop_pair : bus_stops)
    bus_people_count += stop_pair.first - stop_pair.second;
  return bus_people_count;
}

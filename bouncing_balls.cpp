// https://www.codewars.com/kata/5544c7a5cb454edb3c000047/cpp

class Bouncingball {
 public:
  static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window) {
  if (h <= 0 || bounce <= 0 || bounce >= 1 || window >= h) return -1;
  int bounce_count {};
  while (h > window) {
    h *= bounce;
    ++bounce_count;
  }
  return bounce_count * 2 - 1;
}

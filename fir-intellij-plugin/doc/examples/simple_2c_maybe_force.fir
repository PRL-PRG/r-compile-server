fun main() {
  () --> I { reg left:p(I -), reg right:p(I -), reg left0:I, reg right0:I, reg sum:I |
    left = prom<I ->{ return 20; };
    right = prom<I ->{ return 22; };
    left0 = force? left;
    right0 = force? right;
    sum = `+`.1(left0, right0);
    return sum;
  }
}
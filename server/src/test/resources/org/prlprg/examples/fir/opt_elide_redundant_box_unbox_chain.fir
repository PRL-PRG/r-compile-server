fun main() {
  () --> I { reg x:I, reg r1:v1(I), reg r2:I |
    x = 42;
    r1 = box< I --> v1(I) >(x);
    r2 = unbox< v1(I) --> I >(r1);
    return r2;
  }
}

fun main(x) {
  (reg x:v1(L)) --> B { reg r:B |
    r = naToFalse< v1(L) --> B >(x);
    return r;
  }
}

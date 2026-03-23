fun main(x) {
  (reg x:v1(I)) --> V { reg r:V |
    r = f< v1(I) --> V >(x);
    return r;
  }
}
fun f(a) {
  (reg a:v1(I)) --> V { |
    return a;
  }
}

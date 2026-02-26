fun main() {
  () --> I { reg r:I |
    r = f.0(<missing>);
    return r;
  }
}

fun f(`...`) {
  (reg r:M) --> I { |
    return 0;
  }
}

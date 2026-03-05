fun main() {
  () --> I { reg r:I |
    r = f.0(<missing>);
    return r;
  }
}

fun f(`...`) {
  (reg ddd:dots) --> I { |
    return 0;
  }
}

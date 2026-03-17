fun main() {
  () --> I { reg r:I |
    r = f< dots --> I >(<missing>);
    return r;
  }
}

fun f(`...`) {
  (reg ddd:dots) --> I { |
    return 0;
  }
}

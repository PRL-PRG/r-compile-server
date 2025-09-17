fun main() {
  () --> I { reg x:I, var r:I? |
    x = 0;
    mkenv;
    st r = x;
    popenv;
    return x;
  }
}

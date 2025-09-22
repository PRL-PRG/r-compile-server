fun main() {
  () --> V { reg r1:V |
    r1 = g< --> V >();
    return r1;
  }
}

fun g(`...`) {
  () --> I { |
    return 1;
  }
}

fun main() {
  # after: () --> I { reg out:I |
  () --> V { reg out:V |
    out = body< --> V >();
    return out;
  }
}

fun body() {
  # after: () --> I { reg val:V, reg val1:I |
  () --> V { reg val:V |
    val = 1;
    check BBopt() else BBdeopt();
  BBopt():
    # after: val1 = val ?: I;

    # after: return val1;
    return val;
  BBdeopt():
    mkenv;
    deopt 0 [val];
  }
}

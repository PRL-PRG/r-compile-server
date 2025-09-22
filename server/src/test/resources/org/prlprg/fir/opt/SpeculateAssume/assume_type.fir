fun main() {
  () --> I { reg out:I |
    out = body();
    return out;
  }
}

fun body() {
  # after: () --> I { reg val:V, reg r0:I |
  () --> I { reg val:V |
    val = 1;
    check BBopt() else BBdeopt();
  BBopt():
    # after: r0 = val ?: I;

    # after: return r0;
    return val;
  BBdeopt():
    mkenv;
    deopt 0 [val];
  }
}

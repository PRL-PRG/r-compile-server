fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner2501545716;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f(1.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg __:cls, reg ddd:*, reg r:V |
    mkenv;
    st x = x;
    __ = ldf `(`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    ddd = ld `...`;
    r = dyn __[`...`](ddd);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}
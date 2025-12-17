fun main() {
  () -+> V { reg r:cls, reg f:cls, reg r1:V |
    mkenv;
    r = clos inner1246119658;
    st f = r;
    f = ldf f;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn f(42.0);
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg __1:*, reg __2:V |
    mkenv;
    st `...` = ddd;
    __1 = ld `..1`;
    check L0() else D0();
  D0():
    deopt 0 [__1];
  L0():
    __2 = force? __1;
    checkMissing(__2);
    st x = __2;
    setInvisible.0();
    popenv;
    return __2;
  }
}
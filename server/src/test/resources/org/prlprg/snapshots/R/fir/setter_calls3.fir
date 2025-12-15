fun main() {
  () -+> V { reg data_frame:cls, reg r:V, reg l:*, reg colnames__:cls, reg r1:V, reg x:*, reg x1:V |
    mkenv;
    data_frame = ldf `data.frame`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn data_frame[a](1.0);
    check L1() else D1();
  D1():
    deopt 4 [r];
  L1():
    st x = r;
    l = ld x;
    colnames__ = ldf `colnames<-`;
    check L2() else D2();
  D2():
    deopt 9 ["b", l, "b"];
  L2():
    r1 = dyn colnames__(l, NULL, "b");
    check L3() else D3();
  D3():
    deopt 11 ["b", r1];
  L3():
    st x = r1;
    x = ld x;
    check L4() else D4();
  D4():
    deopt 13 [x];
  L4():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}
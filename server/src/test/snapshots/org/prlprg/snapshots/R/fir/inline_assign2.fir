fun main() {
  () -+> V { reg l:*, reg f__:cls, reg r:V, reg l1:*, reg __:cls, reg r1:V, reg r2:cls, reg r3:V |
    mkenv;
    l = ld x;
    f__ = ldf `f<-`;
    check L0() else D0();
  D0():
    deopt 3 [1.0, l, 1.0];
  L0():
    r = dyn f__(l, NULL, 1.0);
    check L1() else D1();
  D1():
    deopt 5 [1.0, r];
  L1():
    st x = r;
    l1 = ld x;
    __ = ldf `::`;
    check L2() else D2();
  D2():
    deopt 10 [1.0, l1, 1.0];
  L2():
    r1 = dyn __("pkg", "f<-");
    check L3() else D3();
  D3():
    deopt 13 [1.0, l1, 1.0, r1];
  L3():
    checkFun.0(r1);
    r2 = r1 as cls;
    r3 = dyn r2(l1, NULL, 1.0);
    check L4() else D4();
  D4():
    deopt 16 [1.0, r3];
  L4():
    st x = r3;
    invisible.0();
    popenv;
    return 1.0;
  }
}
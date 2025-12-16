fun main() {
  () -+> V { reg r:cls, reg matrix:cls, reg r1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg l:*, reg comment__:cls, reg r7:V, reg x:*, reg x1:V, reg comment:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r9:V |
    mkenv;
    r = clos inner354062069;
    st comment = r;
    matrix = ldf matrix;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      r1 = `:`(1.0, 12.0);
      return r1;
    };
    r3 = dyn matrix(p, 3.0, 4.0);
    check L2() else D1();
  D1():
    deopt 8 [r3];
  L2():
    st x = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r5):
    l = ld x;
    comment__ = ldf `comment<-`;
    check L6() else D3();
  L3():
    c = ldf c in base;
    r6 = dyn c("This is my very important data from experiment #0234", "Jun 5, 1998");
    check L5() else D2();
  L4():
    r4 = dyn base("This is my very important data from experiment #0234", "Jun 5, 1998");
    goto L0(r4);
  D2():
    deopt 15 [r6];
  D3():
    deopt 17 [r5, l, r5];
  L5():
    goto L0(r6);
  L6():
    r7 = dyn comment__(l, NULL, r5);
    check L7() else D4();
  D4():
    deopt 19 [r5, r7];
  L7():
    st x = r7;
    x = ld x;
    check L8() else D5();
  D5():
    deopt 21 [x];
  L8():
    x1 = force? x;
    checkMissing(x1);
    comment = ldf comment;
    check L9() else D6();
  D6():
    deopt 24 [];
  L9():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r9 = dyn comment(p1);
    check L10() else D7();
  D7():
    deopt 26 [r9];
  L10():
    popenv;
    return r9;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg comment:cls, reg r2:V |
    mkenv;
    st x = x;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang comment(x)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    comment = ldf comment in base;
    r2 = dyn comment(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}
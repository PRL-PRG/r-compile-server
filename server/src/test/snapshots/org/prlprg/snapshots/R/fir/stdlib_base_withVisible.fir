fun main() {
  () -+> V { reg r:cls, reg withVisible:cls, reg p:p(V +), reg r2:V, reg x:*, reg x1:V, reg withVisible1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r4:V, reg data_frame:cls, reg p2:p(V +), reg p3:p(V +), reg r7:V, reg evalq:cls, reg withVisible2:cls, reg a:*, reg a1:V, reg b:*, reg b1:V, reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg df:*, reg df1:V, reg p6:p(V +), reg r13:V |
    mkenv;
    r = clos inner2501545716;
    st withVisible = r;
    st x = 1.0;
    withVisible = ldf withVisible;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    p = prom<V +>{
      st x = 1.0;
      invisible.0();
      return 1.0;
    };
    r2 = dyn withVisible(p);
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    x = ld x;
    check L2() else D2();
  D2():
    deopt 10 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    withVisible1 = ldf withVisible;
    check L3() else D3();
  D3():
    deopt 13 [];
  L3():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r4 = dyn withVisible1(p1);
    check L4() else D4();
  D4():
    deopt 15 [r4];
  L4():
    data_frame = ldf `data.frame`;
    check L5() else D5();
  D5():
    deopt 17 [];
  L5():
    p2 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    p3 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    r7 = dyn data_frame[a, b](p2, p3);
    check L6() else D6();
  D6():
    deopt 22 [r7];
  L6():
    st df = r7;
    evalq = ldf evalq;
    check L7() else D7();
  D7():
    deopt 25 [];
  L7():
    p5 = prom<V +>{
      withVisible2 = ldf withVisible;
      p4 = prom<V +>{
        a = ld a;
        a1 = force? a;
        checkMissing(a1);
        b = ld b;
        b1 = force? b;
        checkMissing(b1);
        r8 = `+`(a1, b1);
        return r8;
      };
      r10 = dyn withVisible2(p4);
      return r10;
    };
    p6 = prom<V +>{
      df = ld df;
      df1 = force? df;
      checkMissing(df1);
      return df1;
    };
    r13 = dyn evalq[, envir](p5, p6);
    check L8() else D8();
  D8():
    deopt 29 [r13];
  L8():
    popenv;
    return r13;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _Internal:cls, reg r2:V |
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
    _Internal = ldf `.Internal` in base;
    r2 = dyn _Internal(<lang withVisible(x)>);
    goto L0(r2);
  L2():
    r = dyn base(<lang withVisible(x)>);
    goto L0(r);
  }
}
fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg unique:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg unique1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg r7:V, reg stopifnot:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sort:cls, reg ux:*, reg ux1:V, reg p2:p(V +), reg r11:V, reg sort1:cls, reg u2:*, reg u3:V, reg p3:p(V +), reg r13:V, reg identical:cls, reg r14:V, reg p4:p(V +), reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg unique2:cls, reg sample:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg length:cls, reg r22:V, reg unique3:cls, reg iris:*, reg iris1:V, reg p6:p(V +), reg r24:V |
    mkenv;
    r = clos inner3117001256;
    st unique = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st x = r2;
    unique = ldf unique;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r3 = dyn c(<int 3, 4, 5>, <int 11, 10, 9, 8>, <real 8.0, 9.0, 10.0, 11.0, 12.0, 13.0>);
    check L4() else D0();
  L3():
    r1 = dyn base(<lang `:`(3.0, 5.0)>, <lang `:`(11.0, 8.0)>, <lang `+`(8.0, `:`(0.0, 5.0))>);
    goto L0(r1);
  D0():
    deopt 12 [r3];
  D1():
    deopt 15 [];
  L4():
    goto L0(r3);
  L5():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn unique(p);
    check L6() else D2();
  D2():
    deopt 17 [r5];
  L6():
    st ux = r5;
    unique1 = ldf unique;
    check L7() else D3();
  D3():
    deopt 20 [];
  L7():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r7 = dyn unique1[, fromLast](p1, TRUE);
    check L8() else D4();
  D4():
    deopt 24 [r7];
  L8():
    st u2 = r7;
    stopifnot = ldf stopifnot;
    check L9() else D5();
  D5():
    deopt 27 [];
  L9():
    p4 = prom<V +>{
      sym1 = ldf identical;
      base1 = ldf identical in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      sort = ldf sort;
      p2 = prom<V +>{
        ux = ld ux;
        ux1 = force? ux;
        checkMissing(ux1);
        return ux1;
      };
      r11 = dyn sort(p2);
      sort1 = ldf sort;
      p3 = prom<V +>{
        u2 = ld u2;
        u3 = force? u2;
        checkMissing(u3);
        return u3;
      };
      r13 = dyn sort1(p3);
      identical = ldf identical in base;
      r14 = dyn identical(r11, r13, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r14);
    L2():
      r8 = dyn base1(<lang sort(ux)>, <lang sort(u2)>);
      goto L0(r8);
    };
    r16 = dyn stopifnot(p4);
    check L10() else D6();
  D6():
    deopt 29 [r16];
  L10():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L1():
    unique3 = ldf unique;
    check L16() else D10();
  L11():
    unique2 = ldf unique;
    check L13() else D7();
  L12():
    r17 = dyn base2(<lang unique(sample(100.0, 100.0, replace=TRUE))>);
    goto L1();
  D7():
    deopt 33 [];
  D10():
    deopt 39 [];
  L13():
    p5 = prom<V +>{
      sample = ldf sample;
      r19 = dyn sample[, , replace](100.0, 100.0, TRUE);
      return r19;
    };
    r21 = dyn unique2(p5);
    check L14() else D8();
  L16():
    p6 = prom<V +>{
      iris = ld iris;
      iris1 = force? iris;
      checkMissing(iris1);
      return iris1;
    };
    r24 = dyn unique3(p6);
    check L17() else D11();
  D8():
    deopt 35 [r21];
  D11():
    deopt 41 [r24];
  L14():
    length = ldf length in base;
    r22 = dyn length(r21);
    check L15() else D9();
  L17():
    popenv;
    return r24;
  D9():
    deopt 37 [r22];
  L15():
    goto L1();
  }
}
fun inner3117001256(x, incomparables, `...`) {
  (reg x:*, reg incomparables:*, reg ddd:dots) -+> V { var x:*, var incomparables:*, reg incomparables_isMissing:L, reg incomparables_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    incomparables_isMissing = missing.0(incomparables);
    if incomparables_isMissing then L0(FALSE) else L0(incomparables);
  L0(incomparables_orDefault):
    st incomparables = incomparables_orDefault;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("unique");
    goto L1(r2);
  L3():
    r = dyn base("unique");
    goto L1(r);
  }
}
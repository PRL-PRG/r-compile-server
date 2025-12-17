fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg drop:cls, reg array:cls, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg r11:V, reg dim:cls, reg r12:V, reg drop1:cls, reg ___:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg array1:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg c1:cls, reg r18:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg list:cls, reg r22:V, reg p5:p(V +), reg r24:V, reg l:*, reg rownames__:cls, reg r25:V, reg l1:*, reg colnames__:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg drop2:cls, reg x:*, reg x1:V, reg p6:p(V +), reg r30:V, reg names:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg drop3:cls, reg x2:*, reg x3:V, reg p7:p(V +), reg r35:V, reg names1:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r37:V, reg r38:V, reg drop4:cls, reg x4:*, reg x5:V, reg p8:p(V +), reg r40:V, reg names2:cls, reg r41:V |
    mkenv;
    r = clos inner2501545716;
    st drop = r;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    drop1 = ldf drop;
    check L9() else D3();
  L4():
    drop = ldf drop;
    check L6() else D0();
  L5():
    r1 = dyn base(<lang drop(array(`:`(1.0, 12.0), dim=c(1.0, 3.0, 1.0, 1.0, 2.0, 1.0, 2.0)))>);
    goto L0();
  D0():
    deopt 6 [];
  D3():
    deopt 12 [];
  L6():
    p2 = prom<V +>{
      array = ldf array;
      p = prom<V +>{
        r3 = `:`(1.0, 12.0);
        return r3;
      };
      p1 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r6):
        return r6;
      L1():
        c = ldf c in base;
        r7 = dyn c(1.0, 3.0, 1.0, 1.0, 2.0, 1.0, 2.0);
        goto L0(r7);
      L2():
        r5 = dyn base1(1.0, 3.0, 1.0, 1.0, 2.0, 1.0, 2.0);
        goto L0(r5);
      };
      r9 = dyn array[, dim](p, p1);
      return r9;
    };
    r11 = dyn drop(p2);
    check L7() else D1();
  L9():
    p3 = prom<V +>{
      ___ = ldf `%*%` in base;
      r13 = dyn ___(<int 1, 2, 3>, <int 2, 3, 4>);
      return r13;
    };
    r15 = dyn drop1(p3);
    check L10() else D4();
  D1():
    deopt 8 [r11];
  D4():
    deopt 14 [r15];
  L7():
    dim = ldf dim in base;
    r12 = dyn dim(r11);
    check L8() else D2();
  L10():
    array1 = ldf array;
    check L11() else D5();
  D2():
    deopt 10 [r12];
  D5():
    deopt 16 [];
  L8():
    goto L0();
  L11():
    p4 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c1 = ldf c in base;
      r18 = dyn c1(1, 1);
      goto L0(r18);
    L2():
      r16 = dyn base2(1, 1);
      goto L0(r16);
    };
    p5 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      list = ldf list in base;
      r22 = dyn list("a", "b");
      goto L0(r22);
    L2():
      r20 = dyn base3("a", "b");
      goto L0(r20);
    };
    r24 = dyn array1(0.0, p4, p5);
    check L12() else D6();
  D6():
    deopt 20 [r24];
  L12():
    st x2 = r24;
    st x1 = r24;
    st x = r24;
    l = ld x2;
    rownames__ = ldf `rownames<-`;
    check L13() else D7();
  D7():
    deopt 27 [NULL, l, NULL];
  L13():
    r25 = dyn rownames__(l, NULL, NULL);
    check L14() else D8();
  D8():
    deopt 29 [NULL, r25];
  L14():
    st x2 = r25;
    l1 = ld x1;
    colnames__ = ldf `colnames<-`;
    check L15() else D9();
  D9():
    deopt 32 [NULL, l1, NULL];
  L15():
    r26 = dyn colnames__(l1, NULL, NULL);
    check L16() else D10();
  D10():
    deopt 34 [NULL, r26];
  L16():
    st x1 = r26;
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L17() else L18();
  L1():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L22() else L23();
  L17():
    drop2 = ldf drop;
    check L19() else D11();
  L18():
    r27 = dyn base4(<lang drop(x)>);
    goto L1();
  D11():
    deopt 39 [];
  L2():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L27() else L28();
  L19():
    p6 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r30 = dyn drop2(p6);
    check L20() else D12();
  L22():
    drop3 = ldf drop;
    check L24() else D14();
  L23():
    r32 = dyn base5(<lang drop(x1)>);
    goto L2();
  D12():
    deopt 41 [r30];
  D14():
    deopt 47 [];
  L3(r38):
    popenv;
    return r38;
  L20():
    names = ldf names in base;
    r31 = dyn names(r30);
    check L21() else D13();
  L24():
    p7 = prom<V +>{
      x2 = ld x1;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r35 = dyn drop3(p7);
    check L25() else D15();
  L27():
    drop4 = ldf drop;
    check L29() else D17();
  L28():
    r37 = dyn base6(<lang drop(x2)>);
    goto L3(r37);
  D13():
    deopt 43 [r31];
  D15():
    deopt 49 [r35];
  D17():
    deopt 55 [];
  L21():
    goto L1();
  L25():
    names1 = ldf names in base;
    r36 = dyn names1(r35);
    check L26() else D16();
  L29():
    p8 = prom<V +>{
      x4 = ld x2;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    r40 = dyn drop4(p8);
    check L30() else D18();
  D16():
    deopt 51 [r36];
  D18():
    deopt 57 [r40];
  L26():
    goto L2();
  L30():
    names2 = ldf names in base;
    r41 = dyn names2(r40);
    check L31() else D19();
  D19():
    deopt 59 [r41];
  L31():
    goto L3(r41);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg drop:cls, reg r2:V |
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
    r = dyn base(<lang drop(x)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    drop = ldf drop in base;
    r2 = dyn drop(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}
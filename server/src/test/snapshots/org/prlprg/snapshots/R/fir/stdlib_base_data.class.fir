fun main() {
  () -+> V { reg r:cls, reg LETTERS:*, reg LETTERS1:V, reg data_class:cls, reg factor:cls, reg x:*, reg x1:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:V, reg data_class1:cls, reg matrix:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg data_class2:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg x4:*, reg x5:V, reg list:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg data_class3:cls, reg x6:*, reg x7:V, reg p5:p(V +), reg r15:V, reg stopifnot:cls, reg data_class4:cls, reg p6:p(V +), reg r17:V, reg r18:V, reg p7:p(V +), reg r20:V |
    mkenv;
    r = clos inner354062069;
    st `data.class` = r;
    LETTERS = ld LETTERS;
    check L0() else D0();
  D0():
    deopt 3 [LETTERS];
  L0():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    st x = LETTERS1;
    data_class = ldf `data.class`;
    check L1() else D1();
  D1():
    deopt 7 [];
  L1():
    p1 = prom<V +>{
      factor = ldf factor;
      p = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      r2 = dyn factor(p);
      return r2;
    };
    r4 = dyn data_class(p1);
    check L2() else D2();
  D2():
    deopt 9 [r4];
  L2():
    data_class1 = ldf `data.class`;
    check L3() else D3();
  D3():
    deopt 11 [];
  L3():
    p3 = prom<V +>{
      matrix = ldf matrix;
      p2 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      r6 = dyn matrix[, ncol](p2, 13.0);
      return r6;
    };
    r8 = dyn data_class1(p3);
    check L4() else D4();
  D4():
    deopt 13 [r8];
  L4():
    data_class2 = ldf `data.class`;
    check L5() else D5();
  D5():
    deopt 15 [];
  L5():
    p4 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r10):
      return r10;
    L1():
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      list = ldf list in base;
      r11 = dyn list(x5);
      goto L0(r11);
    L2():
      r9 = dyn base(<sym x>);
      goto L0(r9);
    };
    r13 = dyn data_class2(p4);
    check L6() else D6();
  D6():
    deopt 17 [r13];
  L6():
    data_class3 = ldf `data.class`;
    check L7() else D7();
  D7():
    deopt 19 [];
  L7():
    p5 = prom<V +>{
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      return x7;
    };
    r15 = dyn data_class3(p5);
    check L8() else D8();
  D8():
    deopt 21 [r15];
  L8():
    stopifnot = ldf stopifnot;
    check L9() else D9();
  D9():
    deopt 23 [];
  L9():
    p7 = prom<V +>{
      data_class4 = ldf `data.class`;
      p6 = prom<V +>{
        return <int 1, 2>;
      };
      r17 = dyn data_class4(p6);
      r18 = `==`(r17, "numeric");
      return r18;
    };
    r20 = dyn stopifnot(p7);
    check L10() else D10();
  D10():
    deopt 25 [r20];
  L10():
    popenv;
    return r20;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r4:V, reg length:cls, reg r5:V, reg c:L, reg cl:*, reg cl1:V, reg c1:L, reg cl3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x3:*, reg x4:V, reg dim:cls, reg r11:V, reg length1:cls, reg r12:V, reg l:*, reg l1:V, reg r13:V, reg c2:L, reg l2:*, reg l3:V, reg c3:L, reg mode:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r15:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    c = `as.logical`(r1);
    if c then L15() else L2();
  L8():
    sym1 = ldf oldClass;
    base1 = ldf oldClass in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L9():
    r = dyn base(<lang `<-`(cl, oldClass(x))>);
    goto L0(r);
  L1(r3):
    st cl = r3;
    length = ldf length in base;
    r5 = dyn length(r3);
    check L14() else D2();
  L2():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L10():
    x1 = ld x;
    check L12() else D0();
  L11():
    r2 = dyn base1(<sym x>);
    goto L1(r2);
  L15():
    cl = ld cl;
    check L16() else D3();
  D0():
    deopt 4 [x1];
  D2():
    deopt 10 [r5];
  D3():
    deopt 11 [cl];
  L4(r8):
    st l = r8;
    l = ld l;
    check L28() else D7();
  L12():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r4 = dyn oldClass(x2);
    check L13() else D1();
  L14():
    goto L0(r5);
  L16():
    cl1 = force? cl;
    checkMissing(cl1);
    c1 = `is.object`(cl1);
    if c1 then L17() else L18(cl1);
  L21():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L23() else L24();
  L22():
    r7 = dyn base2(<lang dim(x)>);
    goto L4(r7);
  D1():
    deopt 7 [r4];
  D7():
    deopt 27 [l];
  L3(dx1):
    popenv;
    return dx1;
  L5(r10):
    length1 = ldf length in base;
    r12 = dyn length1(r10);
    check L27() else D6();
  L13():
    goto L1(r4);
  L17():
    dr = tryDispatchBuiltin.1("[", cl1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(cl3):
    __ = ldf `[` in base;
    r6 = dyn __(cl3, 1);
    goto L3(r6);
  L23():
    x3 = ld x;
    check L25() else D4();
  L24():
    r9 = dyn base3(<sym x>);
    goto L5(r9);
  L28():
    l1 = force? l;
    checkMissing(l1);
    r13 = `==`(l1, 2);
    c2 = `as.logical`(r13);
    if c2 then L29() else L6();
  D4():
    deopt 20 [x3];
  D6():
    deopt 25 [r12];
  L6():
    l2 = ld l;
    check L31() else D8();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L25():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r11 = dyn dim(x4);
    check L26() else D5();
  L27():
    goto L4(r12);
  L29():
    popenv;
    return "matrix";
  D5():
    deopt 23 [r11];
  D8():
    deopt 33 [l2];
  L26():
    goto L5(r11);
  L31():
    l3 = force? l2;
    checkMissing(l3);
    c3 = `as.logical`(l3);
    if c3 then L32() else L7();
  L7():
    mode = ldf mode;
    check L34() else D9();
  L32():
    popenv;
    return "array";
  D9():
    deopt 38 [];
  L34():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r15 = dyn mode(p);
    check L35() else D10();
  D10():
    deopt 40 [r15];
  L35():
    popenv;
    return r15;
  }
}
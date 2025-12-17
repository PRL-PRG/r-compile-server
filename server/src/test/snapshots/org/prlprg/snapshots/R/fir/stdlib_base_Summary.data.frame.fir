fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner680777940;
    st `Summary.data.frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner680777940(`...`, `na.rm`) {
  (reg ddd:dots, reg na_rm:*) -+> V { var `...`:dots?, var `na.rm`:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg ddd1:dots?, reg r2:V, reg lapply:cls, reg args:*, reg args1:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg do_call:cls, reg _Generic:*, reg _Generic1:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg args2:*, reg args3:V, reg na_rm1:*, reg na_rm2:V, reg c:cls, reg r10:V, reg p3:p(V +), reg r12:V |
    mkenv;
    st `...` = ddd;
    st `na.rm` = na_rm;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    st args = r1;
    lapply = ldf lapply;
    check L5() else D2();
  L1():
    list = ldf list;
    check L3() else D0();
  L2():
    r = dyn base(<sym ...>);
    goto L0(r);
  D0():
    deopt 2 [];
  D2():
    deopt 7 [];
  L3():
    ddd1 = ld `...`;
    r2 = dyn list[`...`](ddd1);
    check L4() else D1();
  L5():
    p = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    p1 = prom<V +>{
      r4 = clos inner2501545716;
      return r4;
    };
    r6 = dyn lapply(p, p1);
    check L6() else D3();
  D1():
    deopt 4 [r2];
  D3():
    deopt 10 [r6];
  L4():
    goto L0(r2);
  L6():
    st args = r6;
    do_call = ldf `do.call`;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      _Generic = ld `.Generic`;
      _Generic1 = force? _Generic;
      checkMissing(_Generic1);
      return _Generic1;
    };
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      na_rm1 = ld `na.rm`;
      na_rm2 = force? na_rm1;
      checkMissing(na_rm2);
      c = ldf c in base;
      r10 = dyn c(args3, na_rm2);
      goto L0(r10);
    L2():
      r8 = dyn base1[, `na.rm`](<sym args>, <sym na.rm>);
      goto L0(r8);
    };
    r12 = dyn do_call(p2, p3);
    check L8() else D5();
  D5():
    deopt 16 [r12];
  L8():
    popenv;
    return r12;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r4:V, reg r5:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg c5:L, reg r7:V, reg x5:*, reg x6:V, reg c6:L, reg r8:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c15:L, reg r10:V, reg x7:*, reg x8:V, reg c16:L, reg r11:V, reg c17:L, reg c18:V, reg c20:L, reg stop:cls, reg r12:V, reg x9:*, reg x10:V |
    mkenv;
    st x = x;
    as_matrix = ldf `as.matrix`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_matrix(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    st x = r1;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L13() else L1(c);
  L9():
    x3 = ld x;
    check L11() else D2();
  L10():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 7 [x3];
  L1(c2):
    c10 = `as.logical`(c2);
    if c10 then L18() else L3(c10);
  L11():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r4 = dyn is_numeric(x4);
    check L12() else D3();
  L13():
    sym1 = ldf `is.logical`;
    base1 = ldf `is.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D3():
    deopt 10 [r4];
  L2(c5, r7):
    r8 = `!`(r7);
    c7 = `as.logical`(r8);
    c8 = `&&`(c5, c7);
    goto L1(c8);
  L3(c12):
    c20 = `as.logical`(c12);
    if c20 then L23() else L5();
  L12():
    goto L0(r4);
  L14():
    x5 = ld x;
    check L16() else D4();
  L15():
    r6 = dyn base1(<sym x>);
    goto L2(c, r6);
  L18():
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  D4():
    deopt 13 [c, x5];
  L4(c15, r10):
    r11 = `!`(r10);
    c17 = `as.logical`(r11);
    c18 = `&&`(c15, c17);
    goto L3(c18);
  L5():
    goto L6();
  L6():
    x9 = ld x;
    check L27() else D8();
  L16():
    x6 = force? x5;
    checkMissing(x6);
    c6 = `is.logical`(x6);
    goto L2(c, c6);
  L19():
    x7 = ld x;
    check L21() else D5();
  L20():
    r9 = dyn base2(<sym x>);
    goto L4(c10, r9);
  L23():
    stop = ldf stop;
    check L24() else D6();
  D5():
    deopt 19 [c10, x7];
  D6():
    deopt 25 [];
  D8():
    deopt 30 [x9];
  L21():
    x8 = force? x7;
    checkMissing(x8);
    c16 = `is.complex`(x8);
    goto L4(c10, c16);
  L24():
    r12 = dyn stop("only defined on a data frame with all numeric-alike variables");
    check L25() else D7();
  L27():
    x10 = force? x9;
    checkMissing(x10);
    popenv;
    return x10;
  D7():
    deopt 27 [r12];
  L25():
    goto L6();
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `Math.data.frame` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg vapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg mode_ok:*, reg mode_ok1:V, reg all:cls, reg r6:V, reg c:L, reg lapply:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg _Generic:*, reg _Generic1:V, reg p3:p(V +), reg ddd1:dots?, reg r9:V, reg l:*, reg c1:L, reg r11:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r14:V, reg x5:*, reg x6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg x7:*, reg x8:V, reg names:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg vnames:*, reg vnames1:V, reg c2:V, reg c3:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg x9:*, reg x10:V, reg r22:I, reg stop:cls, reg paste:cls, reg vnames2:*, reg vnames3:V, reg c4:L, reg vnames5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg mode_ok2:*, reg mode_ok3:V, reg r24:V, reg __:cls, reg r25:V, reg p4:p(V +), reg r27:V, reg p5:p(V +), reg r29:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    vapply = ldf vapply;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      r1 = clos inner2501545716;
      return r1;
    };
    r3 = dyn vapply(p, p1, NA_LGL);
    check L9() else D1();
  D1():
    deopt 5 [r3];
  L9():
    st `mode.ok` = r3;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L0(r5):
    c = `as.logical`(r5);
    if c then L14() else L1();
  L10():
    mode_ok = ld `mode.ok`;
    check L12() else D2();
  L11():
    r4 = dyn base(<sym mode.ok>);
    goto L0(r4);
  D2():
    deopt 9 [mode_ok];
  L1():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L12():
    mode_ok1 = force? mode_ok;
    checkMissing(mode_ok1);
    all = ldf all in base;
    r6 = dyn all(mode_ok1);
    check L13() else D3();
  L14():
    lapply = ldf lapply;
    check L15() else D4();
  D3():
    deopt 12 [r6];
  D4():
    deopt 14 [];
  L3(r16):
    st vnames = r16;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L13():
    goto L0(r6);
  L15():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      _Generic = ld `.Generic`;
      _Generic1 = force? _Generic;
      checkMissing(_Generic1);
      return _Generic1;
    };
    ddd1 = ld `...`;
    r9 = dyn lapply[X, FUN, `...`](p2, p3, ddd1);
    check L16() else D5();
  L22():
    x7 = ld x;
    check L24() else D7();
  L23():
    r15 = dyn base1(<sym x>);
    goto L3(r15);
  D5():
    deopt 20 [r9];
  D7():
    deopt 30 [x7];
  L4(r19):
    c3 = `as.logical`(r19);
    if c3 then L29() else L5();
  L16():
    l = ld x;
    c1 = `is.object`(l);
    if c1 then L17() else L18(r9);
  L24():
    x8 = force? x7;
    checkMissing(x8);
    names = ldf names in base;
    r17 = dyn names(x8);
    check L25() else D8();
  L26():
    vnames = ld vnames;
    check L28() else D9();
  L27():
    r18 = dyn base2(<sym vnames>);
    goto L4(r18);
  D8():
    deopt 33 [r17];
  D9():
    deopt 36 [vnames];
  L2(dx1):
    st x = dx1;
    x5 = ld x;
    check L20() else D6();
  L5():
    goto L7();
  L7():
    stop = ldf stop;
    check L34() else D11();
  L17():
    dr = tryDispatchBuiltin.0("[<-", l, r9);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(r9);
  L18(r11):
    ___ = ldf `[<-` in base;
    r14 = dyn ___(l, <missing>, r9);
    goto L2(r14);
  L25():
    goto L3(r17);
  L28():
    vnames1 = force? vnames;
    checkMissing(vnames1);
    c2 = `==`(vnames1, NULL);
    goto L4(c2);
  L29():
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  D6():
    deopt 26 [x5];
  D11():
    deopt 47 [];
  L6(r21):
    st vnames = r21;
    goto L7();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L20():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  L30():
    x9 = ld x;
    check L32() else D10();
  L31():
    r20 = dyn base3(<sym x>);
    goto L6(r20);
  L34():
    p5 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        vnames2 = ld vnames;
        vnames3 = force? vnames2;
        checkMissing(vnames3);
        c4 = `is.object`(vnames3);
        if c4 then L1() else L2(vnames3);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", vnames3);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(vnames5):
        mode_ok2 = ld `mode.ok`;
        mode_ok3 = force? mode_ok2;
        checkMissing(mode_ok3);
        r24 = `!`(mode_ok3);
        __ = ldf `[` in base;
        r25 = dyn __(vnames5, r24);
        goto L0(r25);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r27 = dyn paste[, collapse](p4, ", ");
      return r27;
    };
    r29 = dyn stop("non-numeric-alike variable(s) in data frame: ", p5);
    check L35() else D12();
  D10():
    deopt 40 [x9];
  D12():
    deopt 50 [r29];
  L32():
    x10 = force? x9;
    checkMissing(x10);
    r22 = seq_along(x10);
    goto L6(r22);
  L35():
    popenv;
    return r29;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_numeric:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg x3:*, reg x4:V, reg c6:L, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c15:L, reg r6:V, reg x5:*, reg x6:V, reg c16:L, reg c17:L, reg c18:V |
    mkenv;
    st x = x;
    sym = ldf `is.numeric`;
    base = ldf `is.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L9();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c1):
    c10 = `as.logical`(c1);
    if c10 then L3(c10) else L14();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    is_numeric = ldf `is.numeric` in base;
    r2 = dyn is_numeric(x2);
    check L8() else D1();
  L9():
    sym1 = ldf `is.logical`;
    base1 = ldf `is.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c7 = `as.logical`(r4);
    c8 = `||`(c5, c7);
    goto L1(c8);
  L3(c11):
    popenv;
    return c11;
  L8():
    goto L0(r2);
  L10():
    x3 = ld x;
    check L12() else D2();
  L11():
    r3 = dyn base1(<sym x>);
    goto L2(c, r3);
  L14():
    sym2 = ldf `is.complex`;
    base2 = ldf `is.complex` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  D2():
    deopt 7 [c, x3];
  L4(c15, r6):
    c17 = `as.logical`(r6);
    c18 = `||`(c15, c17);
    goto L3(c18);
  L12():
    x4 = force? x3;
    checkMissing(x4);
    c6 = `is.logical`(x4);
    goto L2(c, c6);
  L15():
    x5 = ld x;
    check L17() else D3();
  L16():
    r5 = dyn base2(<sym x>);
    goto L4(c10, r5);
  D3():
    deopt 12 [c10, x5];
  L17():
    x6 = force? x5;
    checkMissing(x6);
    c16 = `is.complex`(x6);
    goto L4(c10, c16);
  }
}
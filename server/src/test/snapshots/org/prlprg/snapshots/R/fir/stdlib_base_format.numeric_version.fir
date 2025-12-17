fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.numeric_version` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg length:cls, reg r7:V, reg rep_int:cls, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x5:*, reg x6:V, reg names:cls, reg r11:V, reg l:*, reg names__:cls, reg r12:V, reg lengths:cls, reg x7:*, reg x8:V, reg p:p(V +), reg r14:V, reg r15:V, reg unlist:cls, reg lapply:cls, reg x9:*, reg x10:V, reg c:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r16:V, reg p1:p(V +), reg paste:*, reg paste1:V, reg p2:p(V +), reg r19:V, reg p3:p(V +), reg r21:V, reg l1:*, reg c1:L, reg r23:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r26:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st x = r1;
    sym1 = ldf `rep.int`;
    base1 = ldf `rep.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    st y = r4;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L16() else L17();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L8() else D1();
  L9():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L10():
    r3 = dyn base1(NA_STR, <lang length(x)>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  L2(r6):
    rep_int = ldf `rep.int` in base;
    r8 = dyn rep_int(NA_STR, r6);
    check L15() else D4();
  L3(r10):
    l = ld y;
    names__ = ldf `names<-`;
    check L20() else D7();
  L8():
    goto L0(r2);
  L11():
    x3 = ld x;
    check L13() else D2();
  L12():
    r5 = dyn base2(<sym x>);
    goto L2(r5);
  L16():
    x5 = ld x;
    check L18() else D5();
  L17():
    r9 = dyn base3(<sym x>);
    goto L3(r9);
  D2():
    deopt 12 [x3];
  D4():
    deopt 17 [r8];
  D5():
    deopt 21 [x5];
  D7():
    deopt 26 [r10, l, r10];
  L13():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r7 = dyn length(x4);
    check L14() else D3();
  L15():
    goto L1(r8);
  L18():
    x6 = force? x5;
    checkMissing(x6);
    names = ldf names in base;
    r11 = dyn names(x6);
    check L19() else D6();
  L20():
    r12 = dyn names__(l, NULL, r10);
    check L21() else D8();
  D3():
    deopt 15 [r7];
  D6():
    deopt 24 [r11];
  D8():
    deopt 28 [r10, r12];
  L14():
    goto L2(r7);
  L19():
    goto L3(r11);
  L21():
    st y = r12;
    lengths = ldf lengths;
    check L22() else D9();
  D9():
    deopt 31 [];
  L22():
    p = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    r14 = dyn lengths(p);
    check L23() else D10();
  D10():
    deopt 33 [r14];
  L23():
    r15 = `>`(r14, 0);
    st ind = r15;
    unlist = ldf unlist;
    check L24() else D11();
  D11():
    deopt 38 [];
  L24():
    p3 = prom<V +>{
      lapply = ldf lapply;
      p1 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c = `is.object`(x10);
        if c then L1() else L2(x10);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", x10);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(x12):
        ind = ld ind;
        ind1 = force? ind;
        __ = ldf `[` in base;
        r16 = dyn __(x12, ind1);
        goto L0(r16);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p2 = prom<V +>{
        paste = ld paste;
        paste1 = force? paste;
        checkMissing(paste1);
        return paste1;
      };
      r19 = dyn lapply[, , collapse](p1, p2, ".");
      return r19;
    };
    r21 = dyn unlist(p3);
    check L25() else D12();
  D12():
    deopt 40 [r21];
  L25():
    l1 = ld y;
    c1 = `is.object`(l1);
    if c1 then L26() else L27(r21, l1);
  L4(dx3):
    st y = dx3;
    y = ld y;
    check L30() else D14();
  L26():
    dr2 = tryDispatchBuiltin.0("[<-", l1, r21);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(r21, dr2);
  L27(r23, l3):
    ind2 = ld ind;
    check L29() else D13();
  D13():
    deopt 42 [r23, l3, r21, ind2];
  D14():
    deopt 46 [y];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L29():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r26 = dyn ___(l3, r21, ind3);
    goto L4(r26);
  L30():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
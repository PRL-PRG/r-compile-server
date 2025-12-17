fun main() {
  () -+> V { reg r:cls, reg plot:cls, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg r5:cls, reg r6:V, reg abs:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg axis:cls, reg p2:p(V +), reg letters:*, reg letters1:V, reg c:L, reg letters3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg box:cls, reg r14:V |
    mkenv;
    r = clos inner1714561696;
    st box = r;
    plot = ldf plot;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    p1 = prom<V +>{
      sym = ldf abs;
      base = ldf abs in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      __ = ldf `::`;
      r4 = dyn __("stats", "rnorm");
      checkFun.0(r4);
      r5 = r4 as cls;
      r6 = dyn r5(7.0);
      abs = ldf abs in base;
      r7 = dyn abs(r6);
      goto L0(r7);
    L2():
      r2 = dyn base(<lang `::`(stats, rnorm)(7.0)>);
      goto L0(r2);
    };
    r9 = dyn plot[, , type, axes](p, p1, "h", FALSE);
    check L1() else D1();
  D1():
    deopt 11 [r9];
  L1():
    axis = ldf axis;
    check L2() else D2();
  D2():
    deopt 13 [];
  L2():
    p2 = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6, 7>;
    };
    p3 = prom<V +>{
      letters = ld letters;
      letters1 = force? letters;
      checkMissing(letters1);
      c = `is.object`(letters1);
      if c then L1() else L2(letters1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", letters1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(letters3):
      __1 = ldf `[` in base;
      r11 = dyn __1(letters3, <int 1, 2, 3, 4, 5, 6, 7>);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn axis[, at, labels](1.0, p2, p3);
    check L3() else D3();
  D3():
    deopt 19 [r13];
  L3():
    box = ldf box;
    check L4() else D4();
  D4():
    deopt 21 [];
  L4():
    r14 = dyn box[lty, col]("1373", "red");
    check L5() else D5();
  D5():
    deopt 26 [r14];
  L5():
    popenv;
    return r14;
  }
}
fun inner1714561696(which, lty, `...`) {
  (reg which:*, reg lty:*, reg ddd:dots) -+> V { var which:*, reg which_isMissing:L, reg which_orDefault:*, var lty:*, reg lty_isMissing:L, reg lty_orDefault:*, var `...`:dots?, reg pmatch:cls, reg which1:*, reg which2:V, reg c:L, reg which4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c1:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg _External_graphics:cls, reg C_box:*, reg C_box1:V, reg p2:p(V +), reg which5:*, reg which6:V, reg p3:p(V +), reg lty1:*, reg lty2:V, reg p4:p(V +), reg ddd1:dots?, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg invisible:cls, reg r15:V |
    mkenv;
    which_isMissing = missing.0(which);
    if which_isMissing then L0("plot") else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
    lty_isMissing = missing.0(lty);
    if lty_isMissing then L1("solid") else L1(lty);
  L1(lty_orDefault):
    st lty = lty_orDefault;
    st `...` = ddd;
    pmatch = ldf pmatch;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      c = `is.object`(which2);
      if c then L1() else L2(which2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", which2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(which4):
      __ = ldf `[` in base;
      r = dyn __(which4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c1 = ldf c in base;
      r4 = dyn c1("plot", "figure", "inner", "outer");
      goto L0(r4);
    L2():
      r2 = dyn base("plot", "figure", "inner", "outer");
      goto L0(r2);
    };
    r6 = dyn pmatch(p, p1);
    check L5() else D1();
  D1():
    deopt 4 [r6];
  L5():
    st which = r6;
    sym1 = ldf `.External.graphics`;
    base1 = ldf `.External.graphics` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L10() else L11();
  L6():
    _External_graphics = ldf `.External.graphics`;
    check L8() else D2();
  L7():
    r7 = dyn base1[, which, lty, ](<sym C_box>, <sym which>, <sym lty>, <sym ...>);
    goto L2();
  D2():
    deopt 8 [];
  L3(r14):
    popenv;
    return r14;
  L8():
    p2 = prom<V +>{
      C_box = ld C_box;
      C_box1 = force? C_box;
      checkMissing(C_box1);
      return C_box1;
    };
    p3 = prom<V +>{
      which5 = ld which;
      which6 = force? which5;
      checkMissing(which6);
      return which6;
    };
    p4 = prom<V +>{
      lty1 = ld lty;
      lty2 = force? lty1;
      checkMissing(lty2);
      return lty2;
    };
    ddd1 = ld `...`;
    r12 = dyn _External_graphics[, which, lty, `...`](p2, p3, p4, ddd1);
    check L9() else D3();
  L10():
    invisible = ldf invisible in base;
    r15 = dyn invisible();
    check L12() else D4();
  L11():
    r13 = dyn base2();
    goto L3(r13);
  D3():
    deopt 15 [r12];
  D4():
    deopt 19 [r15];
  L9():
    goto L2();
  L12():
    goto L3(r15);
  }
}
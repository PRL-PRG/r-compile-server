fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.arg_names_from_call` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg names:cls, reg r7:V, reg c:V, reg r8:V, reg c1:L, reg which:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg nx:*, reg nx1:V, reg nzchar:cls, reg r11:V, reg p:p(V +), reg r13:V, reg nx2:*, reg nx3:V, reg c2:L, reg nx5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r14:V, reg l:*, reg c3:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r15:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    st y = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(r4):
    r8 = `!`(r4);
    c1 = `as.logical`(r8);
    if c1 then L17() else L3();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(x2);
    check L10() else D1();
  L11():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L12():
    r3 = dyn base1(<lang `<-`(nx, names(x))>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  L2(r6):
    st nx = r6;
    c = `==`(r6, NULL);
    goto L1(c);
  L3():
    goto L6();
  L6():
    y = ld y;
    check L30() else D9();
  L10():
    goto L0(r2);
  L13():
    x3 = ld x;
    check L15() else D2();
  L14():
    r5 = dyn base2(<sym x>);
    goto L2(r5);
  L17():
    which = ldf which;
    check L18() else D4();
  D2():
    deopt 10 [x3];
  D4():
    deopt 18 [];
  D9():
    deopt 34 [y];
  L15():
    x4 = force? x3;
    checkMissing(x4);
    names = ldf names in base;
    r7 = dyn names(x4);
    check L16() else D3();
  L18():
    p = prom<V +>{
      sym3 = ldf nzchar;
      base3 = ldf nzchar in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      nx = ld nx;
      nx1 = force? nx;
      checkMissing(nx1);
      nzchar = ldf nzchar in base;
      r11 = dyn nzchar(nx1);
      goto L0(r11);
    L2():
      r9 = dyn base3(<sym nx>);
      goto L0(r9);
    };
    r13 = dyn which(p);
    check L19() else D5();
  L30():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D3():
    deopt 13 [r7];
  D5():
    deopt 20 [r13];
  L16():
    goto L2(r7);
  L19():
    st ind = r13;
    nx2 = ld nx;
    check L20() else D6();
  D6():
    deopt 22 [nx2];
  L20():
    nx3 = force? nx2;
    checkMissing(nx3);
    c2 = `is.object`(nx3);
    if c2 then L21() else L22(nx3);
  L4(dx1):
    l = ld y;
    c3 = `is.object`(l);
    if c3 then L25() else L26(dx1, l);
  L21():
    dr = tryDispatchBuiltin.1("[", nx3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(nx5):
    ind = ld ind;
    check L24() else D7();
  D7():
    deopt 24 [nx5, ind];
  L5(dx6, dx7):
    st y = dx7;
    goto L6();
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L24():
    ind1 = force? ind;
    __ = ldf `[` in base;
    r14 = dyn __(nx5, ind1);
    goto L4(r14);
  L25():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L27() else L26(dx1, dr2);
  L26(dx3, l2):
    ind2 = ld ind;
    check L28() else D8();
  D8():
    deopt 28 [dx3, l2, dx1, ind2];
  L27():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx1, dx5);
  L28():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r15 = dyn ___(l2, dx1, ind3);
    goto L5(dx3, r15);
  }
}
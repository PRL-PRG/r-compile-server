fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3381476134;
    st `.R_LIBS` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3381476134(libp) {
  (reg libp:*) -+> V { var libp:*, reg libp_isMissing:L, reg libp_orDefault:*, reg _libPaths:cls, reg r:V, reg p:p(V +), reg libp1:*, reg libp2:V, reg c:L, reg libp4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg libp5:*, reg libp6:V, reg p1:p(V +), reg _Library:*, reg _Library1:V, reg p2:p(V +), reg r4:V, reg r5:V, reg __:cls, reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg libp7:*, reg libp8:V, reg length:cls, reg r9:V, reg c1:L, reg paste:cls, reg libp9:*, reg libp10:V, reg p3:p(V +), reg _Platform:*, reg _Platform1:V, reg c2:L, reg _Platform3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p4:p(V +), reg r13:V |
    mkenv;
    libp_isMissing = missing.0(libp);
    if libp_isMissing then L0() else L1(libp);
  L0():
    p = prom<V +>{
      _libPaths = ldf `.libPaths`;
      r = dyn _libPaths();
      return r;
    };
    goto L1(p);
  L1(libp_orDefault):
    st libp = libp_orDefault;
    libp1 = ld libp;
    check L5() else D0();
  D0():
    deopt 0 [libp1];
  L5():
    libp2 = force? libp1;
    checkMissing(libp2);
    c = `is.object`(libp2);
    if c then L6() else L7(libp2);
  L2(dx1):
    st libp = dx1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L6():
    dr = tryDispatchBuiltin.1("[", libp2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(libp4):
    _in_ = ldf `%in%`;
    check L9() else D1();
  D1():
    deopt 3 [libp4];
  L3(r8):
    c1 = `as.logical`(r8);
    if c1 then L15() else L4();
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L9():
    p1 = prom<V +>{
      libp5 = ld libp;
      libp6 = force? libp5;
      checkMissing(libp6);
      return libp6;
    };
    p2 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    r4 = dyn _in_(p1, p2);
    check L10() else D2();
  L11():
    libp7 = ld libp;
    check L13() else D3();
  L12():
    r7 = dyn base(<sym libp>);
    goto L3(r7);
  D2():
    deopt 6 [libp4, r4];
  D3():
    deopt 12 [libp7];
  L4():
    popenv;
    return "";
  L10():
    r5 = `!`(r4);
    __ = ldf `[` in base;
    r6 = dyn __(libp4, r5);
    goto L2(r6);
  L13():
    libp8 = force? libp7;
    checkMissing(libp8);
    length = ldf length in base;
    r9 = dyn length(libp8);
    check L14() else D4();
  L15():
    paste = ldf paste;
    check L16() else D5();
  D4():
    deopt 15 [r9];
  D5():
    deopt 17 [];
  L14():
    goto L3(r9);
  L16():
    p3 = prom<V +>{
      libp9 = ld libp;
      libp10 = force? libp9;
      checkMissing(libp10);
      return libp10;
    };
    p4 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c2 = `is.object`(_Platform1);
      if c2 then L1() else L2(_Platform1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", _Platform1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(_Platform3):
      r11 = `$`(_Platform3, <sym path.sep>);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn paste[, collapse](p3, p4);
    check L17() else D6();
  D6():
    deopt 21 [r13];
  L17():
    popenv;
    return r13;
  }
}
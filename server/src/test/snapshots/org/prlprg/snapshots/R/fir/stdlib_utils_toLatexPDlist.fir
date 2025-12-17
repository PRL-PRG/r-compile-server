fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1476891869;
    st toLatexPDlist = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1476891869(pdList, sep) {
  (reg pdList:*, reg sep:*) -+> V { var pdList:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg vapply:cls, reg pdList1:*, reg pdList2:V, reg p:p(V +), reg __:*, reg __1:V, reg p1:p(V +), reg r4:V, reg length:cls, reg r5:V, reg c:L, reg ver:*, reg ver1:V, reg c1:L, reg ver3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg ver4:*, reg ver5:V, reg names:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg __2:cls, reg r11:V, reg paste:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r12:V, reg r13:V, reg ver6:*, reg ver7:V, reg names1:cls, reg r14:V, reg p3:p(V +), reg ver8:*, reg ver9:V, reg p4:p(V +), reg sep1:*, reg sep2:V, reg p5:p(V +), reg r18:V, reg ver10:*, reg ver11:V |
    mkenv;
    st pdList = pdList;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0("~") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c = `as.logical`(r1);
    if c then L9() else L2();
  L4():
    vapply = ldf vapply;
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(ver, vapply(pdList, `[[`, "", "Version"))>);
    goto L1(r);
  D0():
    deopt 3 [];
  L2():
    ver10 = ld ver;
    check L19() else D8();
  L6():
    p = prom<V +>{
      pdList1 = ld pdList;
      pdList2 = force? pdList1;
      checkMissing(pdList2);
      return pdList2;
    };
    p1 = prom<V +>{
      __ = ld `[[`;
      __1 = force? __;
      checkMissing(__1);
      return __1;
    };
    r4 = dyn vapply(p, p1, "", "Version");
    check L7() else D1();
  L9():
    ver = ld ver;
    check L10() else D3();
  D1():
    deopt 8 [r4];
  D3():
    deopt 12 [ver];
  D8():
    deopt 29 [ver10];
  L7():
    st ver = r4;
    length = ldf length in base;
    r5 = dyn length(r4);
    check L8() else D2();
  L10():
    ver1 = force? ver;
    checkMissing(ver1);
    c1 = `is.object`(ver1);
    if c1 then L11() else L12(ver1);
  L19():
    ver11 = force? ver10;
    checkMissing(ver11);
    popenv;
    return ver11;
  D2():
    deopt 11 [r5];
  L3(dx1):
    st ver = dx1;
    paste = ldf paste;
    check L16() else D6();
  L8():
    goto L1(r5);
  L11():
    dr = tryDispatchBuiltin.1("[", ver1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(ver3):
    sort = ldf sort;
    check L14() else D4();
  D4():
    deopt 15 [ver3];
  D6():
    deopt 21 [];
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L14():
    p2 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      ver4 = ld ver;
      ver5 = force? ver4;
      checkMissing(ver5);
      names = ldf names in base;
      r8 = dyn names(ver5);
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym ver>);
      goto L0(r6);
    };
    r10 = dyn sort(p2);
    check L15() else D5();
  L16():
    p3 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      ver6 = ld ver;
      ver7 = force? ver6;
      checkMissing(ver7);
      names1 = ldf names in base;
      r14 = dyn names1(ver7);
      goto L0(r14);
    L2():
      r12 = dyn base2(<sym ver>);
      goto L0(r12);
    };
    p4 = prom<V +>{
      ver8 = ld ver;
      ver9 = force? ver8;
      checkMissing(ver9);
      return ver9;
    };
    p5 = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    r18 = dyn paste[, , sep, collapse](p3, p4, p5, ", ");
    check L17() else D7();
  D5():
    deopt 17 [ver3, r10];
  D7():
    deopt 28 [r18];
  L15():
    __2 = ldf `[` in base;
    r11 = dyn __2(ver3, r10);
    goto L3(r11);
  L17():
    popenv;
    return r18;
  }
}
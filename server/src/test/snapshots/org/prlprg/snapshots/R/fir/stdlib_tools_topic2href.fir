fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2590451810;
    st topic2href = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2590451810(x, destpkg, hooks) {
  (reg x:*, reg destpkg:*, reg hooks:*) -+> V { var x:*, var destpkg:*, reg destpkg_isMissing:L, reg destpkg_orDefault:*, var hooks:*, reg hooks_isMissing:L, reg hooks_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg destpkg1:*, reg destpkg2:V, reg c:V, reg c1:L, reg sprintf:cls, reg topic2id:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r7:V, reg p2:p(V +), reg r9:V, reg hooks1:*, reg hooks2:V, reg c2:L, reg hooks4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg FUN:*, reg FUN1:V, reg c3:V, reg c4:L, reg r13:cls, reg sprintf1:cls, reg FUN2:cls, reg destpkg3:*, reg destpkg4:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg topic2id1:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V |
    mkenv;
    st x = x;
    destpkg_isMissing = missing.0(destpkg);
    if destpkg_isMissing then L0(NULL) else L0(destpkg);
  L0(destpkg_orDefault):
    st destpkg = destpkg_orDefault;
    hooks_isMissing = missing.0(hooks);
    if hooks_isMissing then L1() else L2(hooks);
  L1():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L2(p);
  L2(hooks_orDefault):
    st hooks = hooks_orDefault;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L3(r5):
    c1 = `as.logical`(r5);
    if c1 then L11() else L4();
  L8():
    destpkg1 = ld destpkg;
    check L10() else D0();
  L9():
    r4 = dyn base1(<sym destpkg>);
    goto L3(r4);
  D0():
    deopt 1 [destpkg1];
  L4():
    hooks1 = ld hooks;
    check L15() else D3();
  L10():
    destpkg2 = force? destpkg1;
    checkMissing(destpkg2);
    c = `==`(destpkg2, NULL);
    goto L3(c);
  L11():
    sprintf = ldf sprintf;
    check L12() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 9 [hooks1];
  L12():
    p2 = prom<V +>{
      topic2id = ldf topic2id;
      p1 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r7 = dyn topic2id(p1);
      return r7;
    };
    r9 = dyn sprintf("#%s", p2);
    check L13() else D2();
  L15():
    hooks2 = force? hooks1;
    checkMissing(hooks2);
    c2 = `is.object`(hooks2);
    if c2 then L17() else L18(hooks2);
  D2():
    deopt 8 [r9];
  L13():
    popenv;
    return r9;
  L16(dx1):
    st FUN = dx1;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L17():
    dr = tryDispatchBuiltin.1("$", hooks2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(hooks4):
    r10 = `$`(hooks4, <sym pkg_href>);
    goto L16(r10);
  L5(r12):
    c4 = `as.logical`(r12);
    if c4 then L23() else L6();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L16(dx);
  L20():
    FUN = ld FUN;
    check L22() else D4();
  L21():
    r11 = dyn base2(<sym FUN>);
    goto L5(r11);
  D4():
    deopt 14 [FUN];
  L6():
    goto L7();
  L7():
    sprintf1 = ldf sprintf;
    check L25() else D5();
  L22():
    FUN1 = force? FUN;
    checkMissing(FUN1);
    c3 = `==`(FUN1, NULL);
    goto L5(c3);
  L23():
    r13 = clos inner423301576;
    st FUN = r13;
    goto L7();
  D5():
    deopt 23 [];
  L25():
    p4 = prom<V +>{
      FUN2 = ldf FUN;
      p3 = prom<V +>{
        destpkg3 = ld destpkg;
        destpkg4 = force? destpkg3;
        checkMissing(destpkg4);
        return destpkg4;
      };
      r16 = dyn FUN2(p3);
      return r16;
    };
    p6 = prom<V +>{
      topic2id1 = ldf topic2id;
      p5 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r19 = dyn topic2id1(p5);
      return r19;
    };
    r21 = dyn sprintf1("%s#%s", p4, p6);
    check L26() else D6();
  D6():
    deopt 27 [r21];
  L26():
    popenv;
    return r21;
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg sprintf:cls, reg pkg1:*, reg pkg2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st pkg = pkg;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      pkg1 = ld pkg;
      pkg2 = force? pkg1;
      checkMissing(pkg2);
      return pkg2;
    };
    r1 = dyn sprintf("%s.html", p);
    check L1() else D1();
  D1():
    deopt 4 [r1];
  L1():
    popenv;
    return r1;
  }
}
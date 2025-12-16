fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner621331788;
    st getOption = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner621331788(x, default) {
  (reg x:*, reg default:*) -+> V { var x:*, var default:*, reg default_isMissing:L, reg default_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg getOption:cls, reg r5:V, reg ____:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg getOption1:cls, reg r8:V, reg p:p(V +), reg default1:*, reg default2:V, reg p1:p(V +), reg r11:V |
    mkenv;
    st x = x;
    default_isMissing = missing.0(default);
    if default_isMissing then L0(NULL) else L0(default);
  L0(default_orDefault):
    st default = default_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    c = `as.logical`(r1);
    if c then L6() else L2();
  L4():
    missing = ldf missing in base;
    r2 = dyn missing(<sym default>);
    goto L1(r2);
  L5():
    r = dyn base(<sym default>);
    goto L1(r);
  L2():
    ____ = ldf `%||%`;
    check L12() else D2();
  L6():
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  D2():
    deopt 10 [];
  L3(r4):
    popenv;
    return r4;
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r3 = dyn base1(<lang getOption(x)>);
    goto L3(r3);
  L12():
    p = prom<V +>{
      sym2 = ldf `.Internal`;
      base2 = ldf `.Internal` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      getOption1 = ldf getOption in base;
      r8 = dyn getOption1(x4);
      goto L0(r8);
    L2():
      r6 = dyn base2(<lang getOption(x)>);
      goto L0(r6);
    };
    p1 = prom<V +>{
      default1 = ld default;
      default2 = force? default1;
      checkMissing(default2);
      return default2;
    };
    r11 = dyn ____(p, p1);
    check L13() else D3();
  D0():
    deopt 5 [x1];
  D3():
    deopt 13 [r11];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    getOption = ldf getOption in base;
    r5 = dyn getOption(x2);
    check L10() else D1();
  L13():
    popenv;
    return r11;
  D1():
    deopt 8 [r5];
  L10():
    goto L3(r5);
  }
}
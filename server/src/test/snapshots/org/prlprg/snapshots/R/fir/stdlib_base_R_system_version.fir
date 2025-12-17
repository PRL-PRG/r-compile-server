fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1330250198;
    st R_system_version = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1330250198(x, strict) {
  (reg x:*, reg strict:*) -+> V { var x:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, reg _make_numeric_version:cls, reg x1:*, reg x2:V, reg p:p(V +), reg strict1:*, reg strict2:V, reg p1:p(V +), reg _standard_regexps:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p3:p(V +), reg r11:V |
    mkenv;
    st x = x;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    _make_numeric_version = ldf `.make_numeric_version`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      strict1 = ld strict;
      strict2 = force? strict1;
      checkMissing(strict2);
      return strict2;
    };
    p2 = prom<V +>{
      _standard_regexps = ldf `.standard_regexps`;
      r2 = dyn _standard_regexps();
      c = `is.object`(r2);
      if c then L1() else L2(r2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r4):
      r5 = `$`(r4, <sym valid_R_system_version>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("R_system_version", "package_version");
      goto L0(r9);
    L2():
      r7 = dyn base("R_system_version", "package_version");
      goto L0(r7);
    };
    r11 = dyn _make_numeric_version(p, p1, p2, p3);
    check L2() else D1();
  D1():
    deopt 6 [r11];
  L2():
    popenv;
    return r11;
  }
}
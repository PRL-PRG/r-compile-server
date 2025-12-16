fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-817233449`;
    st package_version = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-817233449`(x, strict) {
  (reg x:*, reg strict:*) -+> V { var x:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, reg is_package_version:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg is_list:cls, reg r6:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg c6:L, reg r8:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c7:cls, reg r11:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg x7:*, reg x8:V, reg names:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg all:cls, reg r18:V, reg c8:L, reg c9:V, reg c11:L, reg R_system_version:cls, reg paste:cls, reg x9:*, reg x10:V, reg c12:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg x15:V, reg r20:V, reg c13:cls, reg r21:V, reg __:cls, reg r22:V, reg p3:p(V +), reg r24:V, reg p4:p(V +), reg r26:V, reg _make_numeric_version:cls, reg x16:*, reg x17:V, reg p5:p(V +), reg strict1:*, reg strict2:V, reg p6:p(V +), reg _standard_regexps:cls, reg r31:V, reg c14:L, reg r33:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r34:V, reg p7:p(V +), reg r36:V |
    mkenv;
    st x = x;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    is_package_version = ldf `is.package_version`;
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
    r1 = dyn is_package_version(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    c = `as.logical`(r1);
    if c then L10() else L1();
  L1():
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L10():
    x3 = ld x;
    check L11() else D2();
  D2():
    deopt 4 [x3];
  L3(r5):
    c1 = `as.logical`(r5);
    if c1 then L18() else L4(c1);
  L11():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L14():
    x5 = ld x;
    check L16() else D3();
  L15():
    r4 = dyn base(<sym x>);
    goto L3(r4);
  D3():
    deopt 11 [x5];
  L4(c3):
    c11 = `as.logical`(c3);
    if c11 then L25() else L6();
  L16():
    x6 = force? x5;
    checkMissing(x6);
    is_list = ldf `is.list` in base;
    r6 = dyn is_list(x6);
    check L17() else D4();
  L18():
    sym1 = ldf all;
    base1 = ldf all in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  D4():
    deopt 14 [r6];
  L5(c6, r8):
    c8 = `as.logical`(r8);
    c9 = `&&`(c6, c8);
    goto L4(c9);
  L6():
    _make_numeric_version = ldf `.make_numeric_version`;
    check L30() else D10();
  L17():
    goto L3(r6);
  L19():
    _in_ = ldf `%in%`;
    check L21() else D5();
  L20():
    r7 = dyn base1(<lang `%in%`(c("major", "minor"), names(x))>);
    goto L5(c1, r7);
  L25():
    R_system_version = ldf R_system_version;
    check L26() else D8();
  D5():
    deopt 18 [c1];
  D8():
    deopt 26 [];
  D10():
    deopt 33 [];
  L21():
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r10):
      return r10;
    L1():
      c7 = ldf c in base;
      r11 = dyn c7("major", "minor");
      goto L0(r11);
    L2():
      r9 = dyn base2("major", "minor");
      goto L0(r9);
    };
    p2 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      names = ldf names in base;
      r15 = dyn names(x8);
      goto L0(r15);
    L2():
      r13 = dyn base3(<sym x>);
      goto L0(r13);
    };
    r17 = dyn _in_(p1, p2);
    check L22() else D6();
  L26():
    p4 = prom<V +>{
      paste = ldf paste;
      p3 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c12 = `is.object`(x10);
        if c12 then L2() else L3(x10);
      L0(dx1):
        return dx1;
      L2():
        dr = tryDispatchBuiltin.1("[", x10);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L4() else L3(dr);
      L3(x12):
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L5() else L6();
      L1(x15, r20):
        __ = ldf `[` in base;
        r22 = dyn __(x15, r20);
        goto L0(r22);
      L4():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      L5():
        c13 = ldf c in base;
        r21 = dyn c13("major", "minor");
        goto L1(x12, r21);
      L6():
        r19 = dyn base4("major", "minor");
        goto L1(x12, r19);
      };
      r24 = dyn paste[, collapse](p3, ".");
      return r24;
    };
    r26 = dyn R_system_version(p4);
    check L27() else D9();
  L30():
    p5 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p6 = prom<V +>{
      strict1 = ld strict;
      strict2 = force? strict1;
      checkMissing(strict2);
      return strict2;
    };
    p7 = prom<V +>{
      _standard_regexps = ldf `.standard_regexps`;
      r31 = dyn _standard_regexps();
      c14 = `is.object`(r31);
      if c14 then L1() else L2(r31);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", r31);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(r33):
      r34 = `$`(r33, <sym valid_package_version>);
      goto L0(r34);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r36 = dyn _make_numeric_version(p5, p6, p7, "package_version");
    check L31() else D11();
  D6():
    deopt 21 [c1, r17];
  D9():
    deopt 28 [r26];
  D11():
    deopt 38 [r36];
  L22():
    all = ldf all in base;
    r18 = dyn all(r17);
    check L23() else D7();
  L27():
    popenv;
    return r26;
  L31():
    popenv;
    return r36;
  D7():
    deopt 23 [c1, r18];
  L23():
    goto L5(c1, r18);
  }
}
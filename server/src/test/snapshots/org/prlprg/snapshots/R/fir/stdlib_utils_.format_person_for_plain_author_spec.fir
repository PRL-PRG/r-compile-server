fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.format_person_for_plain_author_spec` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg c1:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c7:L, reg r4:V, reg x5:*, reg x6:V, reg c8:L, reg c10:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c12:L, reg dx3:V, reg r5:V, reg c13:V, reg c14:L, reg c15:V, reg c17:L, reg c18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c22:L, reg r7:V, reg x9:*, reg x10:V, reg c23:L, reg c25:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c27:L, reg dx5:V, reg r8:V, reg c28:V, reg c29:L, reg c30:V, reg c32:L, reg format:cls, reg x13:*, reg x14:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg c33:cls, reg r14:V, reg p1:p(V +), reg r16:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c2 = `as.logical`(r1);
    if c2 then L14() else L1(c2);
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r = dyn base(<lang `$`(x, given)>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c4):
    c17 = `as.logical`(c4);
    if c17 then L3(c17) else L23();
  L9():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L11() else L12(x2);
  L14():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L2(c7, r4):
    c14 = `as.logical`(r4);
    c15 = `&&`(c7, c14);
    goto L1(c15);
  L3(c18):
    c32 = `as.logical`(c18);
    if c32 then L32() else L5();
  L10(dx1):
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L11():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(x4):
    r2 = `$`(x4, <sym given>);
    goto L10(r2);
  L15():
    x5 = ld x;
    check L17() else D1();
  L16():
    r3 = dyn base1(<lang `$`(x, family)>);
    goto L2(c2, r3);
  L23():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  D1():
    deopt 6 [c2, x5];
  L4(c22, r7):
    c29 = `as.logical`(r7);
    c30 = `||`(c22, c29);
    goto L3(c30);
  L5():
    format = ldf format;
    check L35() else D3();
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L17():
    x6 = force? x5;
    checkMissing(x6);
    c8 = `is.object`(x6);
    if c8 then L19() else L20(c2, x6);
  L24():
    x9 = ld x;
    check L26() else D2();
  L25():
    r6 = dyn base2(<lang `$`(x, role)>);
    goto L4(c17, r6);
  L32():
    popenv;
    return "";
  D2():
    deopt 12 [c17, x9];
  D3():
    deopt 23 [];
  L18(c12, dx3):
    c13 = `==`(dx3, NULL);
    goto L2(c12, c13);
  L19():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L21() else L20(c2, dr2);
  L20(c10, x8):
    r5 = `$`(x8, <sym family>);
    goto L18(c10, r5);
  L26():
    x10 = force? x9;
    checkMissing(x10);
    c23 = `is.object`(x10);
    if c23 then L28() else L29(c17, x10);
  L35():
    p = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c33 = ldf c in base;
      r14 = dyn c33("given", "family", "role", "comment");
      goto L0(r14);
    L2():
      r12 = dyn base3("given", "family", "role", "comment");
      goto L0(r12);
    };
    r16 = dyn format[, include](p, p1);
    check L36() else D4();
  D4():
    deopt 27 [r16];
  L21():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L18(c2, dx2);
  L27(c27, dx5):
    c28 = `==`(dx5, NULL);
    goto L4(c27, c28);
  L28():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(c17, dr4);
  L29(c25, x12):
    r8 = `$`(x12, <sym role>);
    goto L27(c25, r8);
  L36():
    popenv;
    return r16;
  L30():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L27(c17, dx4);
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `t.ts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg oldClass:cls, reg r2:V, reg _in_:cls, reg cl:*, reg cl1:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg other:*, reg other1:V, reg any:cls, reg r12:V, reg c1:L, reg cl2:*, reg cl3:V, reg c2:L, reg cl5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg other2:*, reg other3:V, reg __:cls, reg r13:V, reg dx2:V, reg l:*, reg class__:cls, reg r14:V, reg l1:*, reg attr__:cls, reg r15:V, reg t:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r17:V |
    mkenv;
    st x = x;
    sym = ldf oldClass;
    base = ldf oldClass in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st cl = r1;
    _in_ = ldf `%in%`;
    check L9() else D2();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L7():
    x2 = force? x1;
    checkMissing(x2);
    oldClass = ldf oldClass in base;
    r2 = dyn oldClass(x2);
    check L8() else D1();
  L9():
    p = prom<V +>{
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      return cl1;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c = ldf c in base;
      r6 = dyn c("ts", "mts");
      goto L0(r6);
    L2():
      r4 = dyn base1("ts", "mts");
      goto L0(r4);
    };
    r8 = dyn _in_(p, p1);
    check L10() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 11 [r8];
  L8():
    goto L0(r2);
  L10():
    r9 = `!`(r8);
    st other = r9;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L1(r11):
    c1 = `as.logical`(r11);
    if c1 then L15() else L2();
  L11():
    other = ld other;
    check L13() else D4();
  L12():
    r10 = dyn base2(<sym other>);
    goto L1(r10);
  D4():
    deopt 16 [other];
  L2():
    goto L4(NULL);
  L4(dx2):
    l = ld x;
    class__ = ldf `class<-`;
    check L22() else D8();
  L13():
    other1 = force? other;
    checkMissing(other1);
    any = ldf any in base;
    r12 = dyn any(other1);
    check L14() else D5();
  L15():
    cl2 = ld cl;
    check L16() else D6();
  D5():
    deopt 19 [r12];
  D6():
    deopt 20 [cl2];
  D8():
    deopt 28 [dx2, l, dx2];
  L14():
    goto L1(r12);
  L16():
    cl3 = force? cl2;
    checkMissing(cl3);
    c2 = `is.object`(cl3);
    if c2 then L17() else L18(cl3);
  L22():
    r14 = dyn class__(l, NULL, dx2);
    check L23() else D9();
  D9():
    deopt 30 [dx2, r14];
  L3(dx1):
    goto L4(dx1);
  L17():
    dr = tryDispatchBuiltin.1("[", cl3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(cl5):
    other2 = ld other;
    check L20() else D7();
  L23():
    st x = r14;
    l1 = ld x;
    attr__ = ldf `attr<-`;
    check L24() else D10();
  D7():
    deopt 22 [cl5, other2];
  D10():
    deopt 35 [NULL, l1, NULL];
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L20():
    other3 = force? other2;
    __ = ldf `[` in base;
    r13 = dyn __(cl5, other3);
    goto L3(r13);
  L24():
    r15 = dyn attr__(l1, NULL, "tsp", NULL);
    check L25() else D11();
  D11():
    deopt 38 [NULL, r15];
  L25():
    st x = r15;
    t = ldf t;
    check L26() else D12();
  D12():
    deopt 41 [];
  L26():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r17 = dyn t(p2);
    check L27() else D13();
  D13():
    deopt 43 [r17];
  L27():
    popenv;
    return r17;
  }
}
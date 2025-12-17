fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2006432922;
    st `.Rd_apply` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2006432922(x, f) {
  (reg x:*, reg f:*) -+> V { var x:*, var f:*, reg r:cls, reg recurse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V |
    mkenv;
    st x = x;
    st f = f;
    r = clos inner3708401697;
    st recurse = r;
    recurse = ldf recurse;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn recurse(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_list:cls, reg r2:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg e3:*, reg e4:V, reg attributes:cls, reg r5:V, reg lapply:cls, reg e5:*, reg e6:V, reg p:p(V +), reg f:*, reg f1:V, reg p1:p(V +), reg r8:V, reg lapply1:cls, reg e7:*, reg e8:V, reg c1:L, reg e10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg e11:*, reg e12:V, reg p2:p(V +), reg is_null:*, reg is_null1:V, reg p3:p(V +), reg r11:V, reg r12:V, reg __:cls, reg r13:V, reg p4:p(V +), reg recurse:*, reg recurse1:V, reg p5:p(V +), reg r16:V, reg a:*, reg a1:V, reg l:*, reg attributes__:cls, reg r17:V, reg e13:*, reg e14:V |
    mkenv;
    st e = e;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L8() else L1();
  L4():
    e1 = ld e;
    check L6() else D0();
  L5():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1():
    goto L3();
  L3():
    e13 = ld e;
    check L21() else D11();
  L6():
    e2 = force? e1;
    checkMissing(e2);
    is_list = ldf `is.list` in base;
    r2 = dyn is_list(e2);
    check L7() else D1();
  L8():
    sym1 = ldf attributes;
    base1 = ldf attributes in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  D1():
    deopt 5 [r2];
  D11():
    deopt 34 [e13];
  L2(r4):
    st a = r4;
    lapply = ldf lapply;
    check L13() else D4();
  L7():
    goto L0(r2);
  L9():
    e3 = ld e;
    check L11() else D2();
  L10():
    r3 = dyn base1(<sym e>);
    goto L2(r3);
  L21():
    e14 = force? e13;
    checkMissing(e14);
    popenv;
    return e14;
  D2():
    deopt 8 [e3];
  D4():
    deopt 14 [];
  L11():
    e4 = force? e3;
    checkMissing(e4);
    attributes = ldf attributes in base;
    r5 = dyn attributes(e4);
    check L12() else D3();
  L13():
    p = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r8 = dyn lapply(p, p1);
    check L14() else D5();
  D3():
    deopt 11 [r5];
  D5():
    deopt 17 [r8];
  L12():
    goto L2(r5);
  L14():
    st e = r8;
    lapply1 = ldf lapply;
    check L15() else D6();
  D6():
    deopt 20 [];
  L15():
    p4 = prom<V +>{
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      c1 = `is.object`(e8);
      if c1 then L1() else L2(e8);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", e8);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e10):
      vapply = ldf vapply;
      p2 = prom<V +>{
        e11 = ld e;
        e12 = force? e11;
        checkMissing(e12);
        return e12;
      };
      p3 = prom<V +>{
        is_null = ld `is.null`;
        is_null1 = force? is_null;
        checkMissing(is_null1);
        return is_null1;
      };
      r11 = dyn vapply(p2, p3, NA_LGL);
      r12 = `!`(r11);
      __ = ldf `[` in base;
      r13 = dyn __(e10, r12);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p5 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r16 = dyn lapply1(p4, p5);
    check L16() else D7();
  D7():
    deopt 23 [r16];
  L16():
    st e = r16;
    a = ld a;
    check L17() else D8();
  D8():
    deopt 25 [a];
  L17():
    a1 = force? a;
    checkMissing(a1);
    l = ld e;
    attributes__ = ldf `attributes<-`;
    check L18() else D9();
  D9():
    deopt 28 [a1, l, a1];
  L18():
    r17 = dyn attributes__(l, NULL, a1);
    check L19() else D10();
  D10():
    deopt 30 [a1, r17];
  L19():
    st e = r17;
    goto L3();
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.format_person_as_R_code` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg lapply:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg s:*, reg s1:V, reg length:cls, reg r9:V, reg r10:V, reg c:L, reg _format_call_RR:cls, reg s2:*, reg s3:V, reg p2:p(V +), reg r12:V, reg unlist:cls, reg s4:*, reg s5:V, reg p3:p(V +), reg r14:V |
    mkenv;
    st x = x;
    lapply = ldf lapply;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r2 = dyn unclass(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner3708401697;
      return r4;
    };
    r6 = dyn lapply(p, p1);
    check L3() else D1();
  D1():
    deopt 4 [r6];
  L3():
    st s = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L0(r8):
    r10 = `>`(r8, 1);
    c = `as.logical`(r10);
    if c then L8() else L1();
  L4():
    s = ld s;
    check L6() else D2();
  L5():
    r7 = dyn base1(<sym s>);
    goto L0(r7);
  D2():
    deopt 8 [s];
  L1():
    unlist = ldf unlist;
    check L12() else D6();
  L6():
    s1 = force? s;
    checkMissing(s1);
    length = ldf length in base;
    r9 = dyn length(s1);
    check L7() else D3();
  L8():
    _format_call_RR = ldf `.format_call_RR`;
    check L9() else D4();
  D3():
    deopt 11 [r9];
  D4():
    deopt 15 [];
  D6():
    deopt 20 [];
  L7():
    goto L0(r9);
  L9():
    p2 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    r12 = dyn _format_call_RR("c", p2);
    check L10() else D5();
  L12():
    p3 = prom<V +>{
      s4 = ld s;
      s5 = force? s4;
      checkMissing(s5);
      return s5;
    };
    r14 = dyn unlist[, `use.names`](p3, FALSE);
    check L13() else D7();
  D5():
    deopt 18 [r12];
  D7():
    deopt 24 [r14];
  L10():
    popenv;
    return r12;
  L13():
    popenv;
    return r14;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg e5:*, reg e6:V, reg p:p(V +), reg is_null:*, reg is_null1:V, reg p1:p(V +), reg r2:V, reg r3:V, reg __:cls, reg r4:V, reg sprintf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg e7:*, reg e8:V, reg names:cls, reg r7:V, reg p2:p(V +), reg sapply:cls, reg e9:*, reg e10:V, reg p3:p(V +), reg deparse1:*, reg deparse2:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg r13:V, reg _format_call_RR:cls, reg cargs:*, reg cargs1:V, reg p6:p(V +), reg r15:V |
    mkenv;
    st e = e;
    e1 = ld e;
    check L1() else D0();
  D0():
    deopt 0 [e1];
  L1():
    e2 = force? e1;
    checkMissing(e2);
    c = `is.object`(e2);
    if c then L2() else L3(e2);
  L0(dx1):
    st e = dx1;
    sprintf = ldf sprintf;
    check L7() else D3();
  L2():
    dr = tryDispatchBuiltin.1("[", e2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(e4):
    vapply = ldf vapply;
    check L5() else D1();
  D1():
    deopt 3 [e4];
  D3():
    deopt 12 [];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    p1 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r2 = dyn vapply(p, p1, NA_LGL);
    check L6() else D2();
  L7():
    p2 = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      names = ldf names in base;
      r7 = dyn names(e8);
      goto L0(r7);
    L2():
      r5 = dyn base(<sym e>);
      goto L0(r5);
    };
    p5 = prom<V +>{
      sapply = ldf sapply;
      p3 = prom<V +>{
        e9 = ld e;
        e10 = force? e9;
        checkMissing(e10);
        return e10;
      };
      p4 = prom<V +>{
        deparse1 = ld deparse1;
        deparse2 = force? deparse1;
        checkMissing(deparse2);
        return deparse2;
      };
      r11 = dyn sapply(p3, p4);
      return r11;
    };
    r13 = dyn sprintf("%s = %s", p2, p5);
    check L8() else D4();
  D2():
    deopt 7 [e4, r2];
  D4():
    deopt 16 [r13];
  L6():
    r3 = `!`(r2);
    __ = ldf `[` in base;
    r4 = dyn __(e4, r3);
    goto L0(r4);
  L8():
    st cargs = r13;
    _format_call_RR = ldf `.format_call_RR`;
    check L9() else D5();
  D5():
    deopt 19 [];
  L9():
    p6 = prom<V +>{
      cargs = ld cargs;
      cargs1 = force? cargs;
      checkMissing(cargs1);
      return cargs1;
    };
    r15 = dyn _format_call_RR("person", p6);
    check L10() else D6();
  D6():
    deopt 22 [r15];
  L10():
    popenv;
    return r15;
  }
}
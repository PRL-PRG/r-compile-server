fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_item_tags` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg RdTags:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg lapply:cls, reg x7:*, reg x8:V, reg c1:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lengths:cls, reg x11:*, reg x12:V, reg p1:p(V +), reg r5:V, reg r6:V, reg __1:cls, reg r7:V, reg p2:p(V +), reg r9:cls, reg p3:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg unlist:cls, reg out:*, reg out1:V, reg p4:p(V +), reg r15:V, reg as_character:cls, reg r16:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L2() else D0();
  D0():
    deopt 0 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L3() else L4(x2);
  L0(dx1):
    st x = dx1;
    lapply = ldf lapply;
    check L8() else D3();
  L3():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(x4):
    RdTags = ldf RdTags;
    check L6() else D1();
  D1():
    deopt 3 [x4];
  D3():
    deopt 11 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r1 = dyn RdTags(p);
    check L7() else D2();
  L8():
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c1 = `is.object`(x8);
      if c1 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      lengths = ldf lengths;
      p1 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      r5 = dyn lengths(p1);
      r6 = `==`(r5, 2);
      __1 = ldf `[` in base;
      r7 = dyn __1(x10, r6);
      goto L0(r7);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      r9 = clos inner3708401697;
      return r9;
    };
    r11 = dyn lapply(p2, p3);
    check L9() else D4();
  D2():
    deopt 5 [x4, r1];
  D4():
    deopt 14 [r11];
  L7():
    r2 = `==`(r1, "\\item");
    __ = ldf `[` in base;
    r3 = dyn __(x4, r2);
    goto L0(r3);
  L9():
    st out = r11;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r13):
    popenv;
    return r13;
  L10():
    unlist = ldf unlist;
    check L12() else D5();
  L11():
    r12 = dyn base(<lang unlist(out)>);
    goto L1(r12);
  D5():
    deopt 19 [];
  L12():
    p4 = prom<V +>{
      out = ld out;
      out1 = force? out;
      checkMissing(out1);
      return out1;
    };
    r15 = dyn unlist(p4);
    check L13() else D6();
  D6():
    deopt 21 [r15];
  L13():
    as_character = ldf `as.character` in base;
    r16 = dyn as_character(r15);
    check L14() else D7();
  D7():
    deopt 23 [r16];
  L14():
    goto L1(r16);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg _Rd_deparse:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st e = e;
    _Rd_deparse = ldf `.Rd_deparse`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      c = `is.object`(e2);
      if c then L1() else L2(e2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e4):
      __ = ldf `[[` in base;
      r = dyn __(e4, 1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn _Rd_deparse(p);
    check L1() else D1();
  D1():
    deopt 3 [r2];
  L1():
    popenv;
    return r2;
  }
}
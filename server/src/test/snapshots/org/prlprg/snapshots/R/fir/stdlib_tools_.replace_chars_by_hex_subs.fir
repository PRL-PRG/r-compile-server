fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2174252635;
    st `.replace_chars_by_hex_subs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2174252635(x, re) {
  (reg x:*, reg re:*) -+> V { var x:*, var re:*, reg r:cls, reg vapply:cls, reg strsplit:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg r4:cls, reg p2:p(V +), reg r6:V |
    mkenv;
    st x = x;
    st re = re;
    r = clos inner1236783023;
    st char_to_hex_sub = r;
    vapply = ldf vapply;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r2 = dyn strsplit(p, "");
      return r2;
    };
    p2 = prom<V +>{
      r4 = clos inner3708401697;
      return r4;
    };
    r6 = dyn vapply(p1, p2, "");
    check L1() else D1();
  D1():
    deopt 8 [r6];
  L1():
    popenv;
    return r6;
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg paste0:cls, reg charToRaw:cls, reg s1:*, reg s2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st s = s;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      charToRaw = ldf charToRaw;
      p = prom<V +>{
        s1 = ld s;
        s2 = force? s1;
        checkMissing(s2);
        return s2;
      };
      r1 = dyn charToRaw(p);
      return r1;
    };
    r3 = dyn paste0[, , , collapse]("<", p1, ">", "");
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg grep:cls, reg re:*, reg re1:V, reg p:p(V +), reg e1:*, reg e2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg pos:*, reg pos1:V, reg length:cls, reg r5:V, reg c:L, reg vapply:cls, reg e3:*, reg e4:V, reg c1:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos2:*, reg pos3:V, reg __:cls, reg r6:V, reg p2:p(V +), reg char_to_hex_sub:*, reg char_to_hex_sub1:V, reg p3:p(V +), reg r9:V, reg l:*, reg c2:L, reg r11:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r13:V, reg dx3:V, reg pos4:*, reg pos5:V, reg ___:cls, reg r14:V, reg paste:cls, reg e7:*, reg e8:V, reg p4:p(V +), reg r17:V |
    mkenv;
    st e = e;
    grep = ldf grep;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      return re1;
    };
    p1 = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r2 = dyn grep[, , perl](p, p1, TRUE);
    check L5() else D1();
  D1():
    deopt 6 [r2];
  L5():
    st pos = r2;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r4):
    c = `as.logical`(r4);
    if c then L10() else L1();
  L6():
    pos = ld pos;
    check L8() else D2();
  L7():
    r3 = dyn base(<sym pos>);
    goto L0(r3);
  D2():
    deopt 10 [pos];
  L1():
    goto L3();
  L3():
    paste = ldf paste;
    check L18() else D7();
  L8():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r5 = dyn length(pos1);
    check L9() else D3();
  L10():
    vapply = ldf vapply;
    check L11() else D4();
  D3():
    deopt 13 [r5];
  D4():
    deopt 15 [];
  D7():
    deopt 28 [];
  L9():
    goto L0(r5);
  L11():
    p2 = prom<V +>{
      e3 = ld e;
      e4 = force? e3;
      checkMissing(e4);
      c1 = `is.object`(e4);
      if c1 then L1() else L2(e4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", e4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e6):
      pos2 = ld pos;
      pos3 = force? pos2;
      __ = ldf `[` in base;
      r6 = dyn __(e6, pos3);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      char_to_hex_sub = ld char_to_hex_sub;
      char_to_hex_sub1 = force? char_to_hex_sub;
      checkMissing(char_to_hex_sub1);
      return char_to_hex_sub1;
    };
    r9 = dyn vapply(p2, p3, "");
    check L12() else D5();
  L18():
    p4 = prom<V +>{
      e7 = ld e;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    r17 = dyn paste[, collapse](p4, "");
    check L19() else D8();
  D5():
    deopt 19 [r9];
  D8():
    deopt 32 [r17];
  L12():
    l = ld e;
    c2 = `is.object`(l);
    if c2 then L13() else L14(r9, l);
  L19():
    popenv;
    return r17;
  L2(r13, dx3):
    st e = dx3;
    goto L3();
  L13():
    dr2 = tryDispatchBuiltin.0("[<-", l, r9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L15() else L14(r9, dr2);
  L14(r11, l2):
    pos4 = ld pos;
    check L16() else D6();
  D6():
    deopt 21 [r11, l2, r9, pos4];
  L15():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(r9, dx2);
  L16():
    pos5 = force? pos4;
    ___ = ldf `[<-` in base;
    r14 = dyn ___(l2, r9, pos5);
    goto L2(r11, r14);
  }
}
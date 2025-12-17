fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner339089524;
    st `.fillSignatures` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner339089524(sigs, n) {
  (reg sigs:*, reg n:*) -+> V { var sigs:*, var n:*, reg lengths:cls, reg strsplit:cls, reg sigs1:*, reg sigs2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg n1:*, reg n2:V, reg siglens:*, reg siglens1:V, reg r4:V, reg vapply:cls, reg n3:*, reg n4:V, reg siglens2:*, reg siglens3:V, reg c:L, reg n6:V, reg siglens5:V, reg dr:V, reg dc:L, reg dx:V, reg n8:V, reg dx1:V, reg short:*, reg short1:V, reg __:cls, reg r5:V, reg r6:V, reg p2:p(V +), reg r8:cls, reg p3:p(V +), reg character:cls, reg r10:V, reg p4:p(V +), reg r12:V, reg paste:cls, reg sigs3:*, reg sigs4:V, reg c1:L, reg sigs6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg short2:*, reg short3:V, reg __1:cls, reg r13:V, reg p5:p(V +), reg suffix:*, reg suffix1:V, reg p6:p(V +), reg r16:V, reg l:*, reg c2:L, reg r18:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg short4:*, reg short5:V, reg ___:cls, reg r21:V, reg sigs7:*, reg sigs8:V |
    mkenv;
    st sigs = sigs;
    st n = n;
    lengths = ldf lengths;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p1 = prom<V +>{
      strsplit = ldf strsplit;
      p = prom<V +>{
        sigs1 = ld sigs;
        sigs2 = force? sigs1;
        checkMissing(sigs2);
        return sigs2;
      };
      r1 = dyn strsplit[, , fixed](p, "#", TRUE);
      return r1;
    };
    r3 = dyn lengths(p1);
    check L2() else D1();
  D1():
    deopt 3 [r3];
  L2():
    st siglens = r3;
    n1 = ld n;
    check L3() else D2();
  D2():
    deopt 5 [n1];
  L3():
    n2 = force? n1;
    checkMissing(n2);
    siglens = ld siglens;
    check L4() else D3();
  D3():
    deopt 6 [n2, siglens];
  L4():
    siglens1 = force? siglens;
    checkMissing(siglens1);
    r4 = `>`(n2, siglens1);
    st short = r4;
    vapply = ldf vapply;
    check L5() else D4();
  D4():
    deopt 11 [];
  L5():
    p2 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      siglens2 = ld siglens;
      siglens3 = force? siglens2;
      checkMissing(siglens3);
      c = `is.object`(siglens3);
      if c then L1() else L2(n4, siglens3);
    L0(n8, dx1):
      r6 = `-`(n8, dx1);
      return r6;
    L1():
      dr = tryDispatchBuiltin.1("[", siglens3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(n4, dr);
    L2(n6, siglens5):
      short = ld short;
      short1 = force? short;
      __ = ldf `[` in base;
      r5 = dyn __(siglens5, short1);
      goto L0(n6, r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(n4, dx);
    };
    p3 = prom<V +>{
      r8 = clos inner4075724571;
      return r8;
    };
    p4 = prom<V +>{
      character = ldf character;
      r10 = dyn character(1);
      return r10;
    };
    r12 = dyn vapply(p2, p3, p4);
    check L6() else D5();
  D5():
    deopt 15 [r12];
  L6():
    st suffix = r12;
    paste = ldf paste;
    check L7() else D6();
  D6():
    deopt 18 [];
  L7():
    p5 = prom<V +>{
      sigs3 = ld sigs;
      sigs4 = force? sigs3;
      checkMissing(sigs4);
      c1 = `is.object`(sigs4);
      if c1 then L1() else L2(sigs4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", sigs4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(sigs6):
      short2 = ld short;
      short3 = force? short2;
      __1 = ldf `[` in base;
      r13 = dyn __1(sigs6, short3);
      goto L0(r13);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      suffix = ld suffix;
      suffix1 = force? suffix;
      checkMissing(suffix1);
      return suffix1;
    };
    r16 = dyn paste[, , sep](p5, p6, "#");
    check L8() else D7();
  D7():
    deopt 23 [r16];
  L8():
    l = ld sigs;
    c2 = `is.object`(l);
    if c2 then L9() else L10(r16, l);
  L0(dx5):
    st sigs = dx5;
    sigs7 = ld sigs;
    check L13() else D9();
  L9():
    dr4 = tryDispatchBuiltin.0("[<-", l, r16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L11() else L10(r16, dr4);
  L10(r18, l2):
    short4 = ld short;
    check L12() else D8();
  D8():
    deopt 25 [r18, l2, r16, short4];
  D9():
    deopt 29 [sigs7];
  L11():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L0(dx4);
  L12():
    short5 = force? short4;
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l2, r16, short5);
    goto L0(r21);
  L13():
    sigs8 = force? sigs7;
    checkMissing(sigs8);
    popenv;
    return sigs8;
  }
}
fun inner4075724571(ni) {
  (reg ni:*) -+> V { var ni:*, reg paste:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rep:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st ni = ni;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      rep = ldf rep in base;
      r2 = dyn rep("ANY", <sym ni>);
      goto L0(r2);
    L2():
      r = dyn base("ANY", <sym ni>);
      goto L0(r);
    };
    r4 = dyn paste[, collapse](p, "#");
    check L1() else D1();
  D1():
    deopt 5 [r4];
  L1():
    popenv;
    return r4;
  }
}
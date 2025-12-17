fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.enc2latin1` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg which:cls, reg Encoding:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg r4:V, reg p1:p(V +), reg r6:V, reg length:cls, reg r7:V, reg c:L, reg iconv:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos:*, reg pos1:V, reg __:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg l:*, reg c2:L, reg r12:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r14:V, reg dx3:V, reg pos2:*, reg pos3:V, reg ___:cls, reg r15:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    c = `as.logical`(r1);
    if c then L9() else L1();
  L4():
    which = ldf which;
    check L6() else D0();
  L5():
    r = dyn base(<lang `<-`(pos, which(`==`(Encoding(x), "UTF-8")))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    goto L3();
  L3():
    x7 = ld x;
    check L17() else D6();
  L6():
    p1 = prom<V +>{
      Encoding = ldf Encoding;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r3 = dyn Encoding(p);
      r4 = `==`(r3, "UTF-8");
      return r4;
    };
    r6 = dyn which(p1);
    check L7() else D1();
  L9():
    iconv = ldf iconv;
    check L10() else D3();
  D1():
    deopt 5 [r6];
  D3():
    deopt 10 [];
  D6():
    deopt 24 [x7];
  L7():
    st pos = r6;
    length = ldf length in base;
    r7 = dyn length(r6);
    check L8() else D2();
  L10():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = `is.object`(x4);
      if c1 then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      pos = ld pos;
      pos1 = force? pos;
      __ = ldf `[` in base;
      r8 = dyn __(x6, pos1);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r10 = dyn iconv[, , , sub](p2, "UTF-8", "latin1", "byte");
    check L11() else D4();
  L17():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  D2():
    deopt 8 [r7];
  D4():
    deopt 16 [r10];
  L8():
    goto L0(r7);
  L11():
    l = ld x;
    c2 = `is.object`(l);
    if c2 then L12() else L13(r10, l);
  L2(r14, dx3):
    st x = dx3;
    goto L3();
  L12():
    dr2 = tryDispatchBuiltin.0("[<-", l, r10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(r10, dr2);
  L13(r12, l2):
    pos2 = ld pos;
    check L15() else D5();
  D5():
    deopt 18 [r12, l2, r10, pos2];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(r10, dx2);
  L15():
    pos3 = force? pos2;
    ___ = ldf `[<-` in base;
    r15 = dyn ___(l2, r10, pos3);
    goto L2(r12, r15);
  }
}
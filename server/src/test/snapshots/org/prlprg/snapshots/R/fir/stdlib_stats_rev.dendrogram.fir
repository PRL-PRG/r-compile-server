fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `rev.dendrogram` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is_leaf:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg x5:*, reg x6:V, reg length:cls, reg r6:V, reg k:*, reg k1:V, reg r7:V, reg c1:L, reg stop:cls, reg r8:V, reg x7:*, reg x8:V, reg k2:*, reg k3:V, reg r10:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x9:V, reg rev:cls, reg x10:*, reg x11:V, reg c3:L, reg x13:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg k4:*, reg k5:V, reg r11:V, reg j:*, reg j1:V, reg r12:V, reg __:cls, reg r13:V, reg p1:p(V +), reg r15:V, reg l1:*, reg c4:L, reg i6:I, reg r17:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i8:I, reg dx3:V, reg j2:*, reg j3:V, reg ____:cls, reg r20:V, reg midcache_dendrogram:cls, reg r21:*, reg r22:V, reg p2:p(V +), reg r24:V |
    mkenv;
    st x = x;
    is_leaf = ldf `is.leaf`;
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
    r1 = dyn is_leaf(p);
    check L9() else D1();
  D1():
    deopt 3 [r1];
  L9():
    c = `as.logical`(r1);
    if c then L10() else L0();
  L0():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L10():
    x3 = ld x;
    check L11() else D2();
  D2():
    deopt 4 [x3];
  L2(r5):
    st k = r5;
    k = ld k;
    check L18() else D5();
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
    goto L2(r4);
  D3():
    deopt 11 [x5];
  D5():
    deopt 16 [k];
  L16():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r6 = dyn length(x6);
    check L17() else D4();
  L18():
    k1 = force? k;
    checkMissing(k1);
    r7 = `<`(k1, 1.0);
    c1 = `as.logical`(r7);
    if c1 then L19() else L3();
  D4():
    deopt 14 [r6];
  L3():
    goto L4();
  L4():
    x7 = ld x;
    check L23() else D8();
  L17():
    goto L2(r6);
  L19():
    stop = ldf stop;
    check L20() else D6();
  D6():
    deopt 21 [];
  D8():
    deopt 26 [x7];
  L20():
    r8 = dyn stop("dendrogram non-leaf node with non-positive #{branches}");
    check L21() else D7();
  L23():
    x8 = force? x7;
    checkMissing(x8);
    st r = x8;
    k2 = ld k;
    check L24() else D9();
  D7():
    deopt 23 [r8];
  D9():
    deopt 30 [1, k2];
  L21():
    goto L4();
  L24():
    k3 = force? k2;
    checkMissing(k3);
    r10 = `:`(1, k3);
    s = toForSeq(r10);
    l = length(s);
    i = 0;
    goto L5(i);
  L5(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L25() else L7();
  L7():
    x9 = `[[`(s, i2, NULL, TRUE);
    st j = x9;
    rev = ldf rev;
    check L26() else D10();
  L25():
    midcache_dendrogram = ldf `midcache.dendrogram`;
    check L32() else D13();
  D10():
    deopt 34 [i2];
  D13():
    deopt 46 [];
  L26():
    p1 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      c3 = `is.object`(x11);
      if c3 then L1() else L2(x11);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", x11);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x13):
      k4 = ld k;
      k5 = force? k4;
      checkMissing(k5);
      r11 = `+`(k5, 1.0);
      j = ld j;
      j1 = force? j;
      checkMissing(j1);
      r12 = `-`(r11, j1);
      __ = ldf `[[` in base;
      r13 = dyn __(x13, r12);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r15 = dyn rev(p1);
    check L27() else D11();
  L32():
    p2 = prom<V +>{
      r21 = ld r;
      r22 = force? r21;
      checkMissing(r22);
      return r22;
    };
    r24 = dyn midcache_dendrogram(p2);
    check L33() else D14();
  D11():
    deopt 36 [i2, r15];
  D14():
    deopt 48 [r24];
  L27():
    l1 = ld r;
    c4 = `is.object`(l1);
    if c4 then L28() else L29(i2, r15, l1);
  L33():
    popenv;
    return r24;
  L6(i8, dx3):
    st r = dx3;
    goto L5(i8);
  L28():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r15);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(i2, r15, dr2);
  L29(i6, r17, l3):
    j2 = ld j;
    check L31() else D12();
  D12():
    deopt 38 [i6, r17, l3, r15, j2];
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(i2, dx2);
  L31():
    j3 = force? j2;
    ____ = ldf `[[<-` in base;
    r20 = dyn ____(l3, r15, j3);
    goto L6(i6, r20);
  }
}
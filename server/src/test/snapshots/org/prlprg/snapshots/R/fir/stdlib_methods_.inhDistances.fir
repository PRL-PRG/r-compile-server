fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner418102221;
    st `.inhDistances` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner418102221(classDef) {
  (reg classDef:*) -+> V { var classDef:*, reg __:cls, reg r:V, reg unique:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg contains:*, reg contains1:V, reg names:cls, reg r3:V, reg p:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg rep:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg dist:*, reg dist1:V, reg r11:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg contains2:*, reg contains3:V, reg c1:L, reg i6:I, reg contains5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __1:cls, reg r12:V, reg __2:cls, reg r13:V, reg l1:*, reg c2:L, reg i12:I, reg r15:V, reg l3:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i14:I, reg dx3:V, reg i15:*, reg i16:V, reg ____:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg dist2:*, reg dist3:V, reg c3:cls, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg __3:cls, reg r24:V, reg allNames:*, reg allNames1:V, reg c4:cls, reg r25:V, reg l4:*, reg names__:cls, reg r26:V, reg dist4:*, reg dist5:V |
    mkenv;
    st classDef = classDef;
    __ = ldf `@` in base;
    r = dyn __(<sym classDef>, <sym contains>);
    st contains = r;
    unique = ldf unique;
    check L8() else D0();
  D0():
    deopt 4 [];
  L8():
    p = prom<V +>{
      sym = ldf names;
      base = ldf names in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      contains = ld contains;
      contains1 = force? contains;
      checkMissing(contains1);
      names = ldf names in base;
      r3 = dyn names(contains1);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym contains>);
      goto L0(r1);
    };
    r5 = dyn unique(p);
    check L9() else D1();
  D1():
    deopt 6 [r5];
  L9():
    st allNames = r5;
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L0(r7):
    st dist = r7;
    sym2 = ldf seq_along;
    base2 = ldf seq_along in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L10():
    rep = ldf rep in base;
    r8 = dyn rep(2.0, <lang length(allNames)>);
    goto L0(r8);
  L11():
    r6 = dyn base1(2.0, <lang length(allNames)>);
    goto L0(r6);
  L1(r10):
    s = toForSeq(r10);
    l = length(s);
    i = 0;
    goto L2(i);
  L12():
    dist = ld dist;
    check L14() else D2();
  L13():
    r9 = dyn base2(<sym dist>);
    goto L1(r9);
  D2():
    deopt 13 [dist];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L15() else L5();
  L14():
    dist1 = force? dist;
    checkMissing(dist1);
    r11 = seq_along(dist1);
    goto L1(r11);
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    contains2 = ld contains;
    check L16() else D3();
  L15():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L25() else L26();
  D3():
    deopt 16 [i2, contains2];
  L6(r20):
    st dist = r20;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L16():
    contains3 = force? contains2;
    checkMissing(contains3);
    c1 = `is.object`(contains3);
    if c1 then L17() else L18(i2, contains3);
  L25():
    dist2 = ld dist;
    check L27() else D6();
  L26():
    r19 = dyn base3(0.0, <sym dist>, NA_LGL);
    goto L6(r19);
  D6():
    deopt 35 [dist2];
  L3(i8, dx1):
    st ci = dx1;
    __2 = ldf `@` in base;
    r13 = dyn __2(<sym ci>, <sym distance>);
    l1 = ld dist;
    c2 = `is.object`(l1);
    if c2 then L21() else L22(i8, r13, l1);
  L7(r23):
    l4 = ld dist;
    names__ = ldf `names<-`;
    check L33() else D10();
  L17():
    dr = tryDispatchBuiltin.1("[[", contains3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(i2, dr);
  L18(i6, contains5):
    i9 = ld i;
    check L20() else D4();
  L27():
    dist3 = force? dist2;
    checkMissing(dist3);
    c3 = ldf c in base;
    r21 = dyn c3(0.0, dist3, NA_LGL);
    check L28() else D7();
  L29():
    __3 = ldf `@` in base;
    r24 = dyn __3(<sym classDef>, <sym className>);
    allNames = ld allNames;
    check L31() else D8();
  L30():
    r22 = dyn base4(<lang `@`(classDef, className)>, <sym allNames>, "ANY");
    goto L7(r22);
  D4():
    deopt 18 [i6, contains5, i9];
  D7():
    deopt 39 [r21];
  D8():
    deopt 45 [allNames];
  D10():
    deopt 51 [r23, l4, r23];
  L4(i14, dx3):
    st dist = dx3;
    goto L2(i14);
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, dx);
  L20():
    i10 = force? i9;
    __1 = ldf `[[` in base;
    r12 = dyn __1(contains5, i10);
    goto L3(i6, r12);
  L21():
    dr2 = tryDispatchBuiltin.0("[[<-", l1, r13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(i8, r13, dr2);
  L22(i12, r15, l3):
    i15 = ld i;
    check L24() else D5();
  L28():
    goto L6(r21);
  L31():
    allNames1 = force? allNames;
    checkMissing(allNames1);
    c4 = ldf c in base;
    r25 = dyn c4(r24, allNames1, "ANY");
    check L32() else D9();
  L33():
    r26 = dyn names__(l4, NULL, r23);
    check L34() else D11();
  D5():
    deopt 25 [i12, r15, l3, r13, i15];
  D9():
    deopt 49 [r25];
  D11():
    deopt 53 [r23, r26];
  L23():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(i8, dx2);
  L24():
    i16 = force? i15;
    ____ = ldf `[[<-` in base;
    r18 = dyn ____(l3, r13, i16);
    goto L4(i12, r18);
  L32():
    goto L7(r25);
  L34():
    st dist = r26;
    dist4 = ld dist;
    check L35() else D12();
  D12():
    deopt 55 [dist4];
  L35():
    dist5 = force? dist4;
    checkMissing(dist5);
    popenv;
    return dist5;
  }
}
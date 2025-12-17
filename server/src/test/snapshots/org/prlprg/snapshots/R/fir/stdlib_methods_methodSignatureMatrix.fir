fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner903786456;
    st methodSignatureMatrix = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner903786456(object, sigSlots) {
  (reg object:*, reg sigSlots:*) -+> V { var object:*, var sigSlots:*, reg sigSlots_isMissing:L, reg sigSlots_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sigSlots1:*, reg sigSlots2:V, reg length:cls, reg r6:V, reg c1:L, reg lapply:cls, reg sigSlots3:*, reg sigSlots4:V, reg p1:p(V +), reg slot:*, reg slot1:V, reg p2:p(V +), reg object1:*, reg object2:V, reg p3:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg lengths:cls, reg allSlots:*, reg allSlots1:V, reg p4:p(V +), reg r14:V, reg max:cls, reg r15:V, reg unlist:cls, reg lapply1:cls, reg allSlots2:*, reg allSlots3:V, reg p5:p(V +), reg r17:cls, reg p6:p(V +), reg r19:V, reg p7:p(V +), reg r21:V, reg matrix:cls, reg mm:*, reg mm1:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg allSlots4:*, reg allSlots5:V, reg length1:cls, reg r25:V, reg p9:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg sigSlots5:*, reg sigSlots6:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg allSlots6:*, reg allSlots7:V, reg c2:L, reg allSlots9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r32:V, reg names:cls, reg r33:V, reg list:cls, reg r34:V, reg l:*, reg dimnames__:cls, reg r35:V, reg mm2:*, reg mm3:V, reg matrix1:cls, reg character:cls, reg r36:V, reg p10:p(V +), reg r38:V |
    mkenv;
    st object = object;
    sigSlots_isMissing = missing.0(sigSlots);
    if sigSlots_isMissing then L0() else L1(sigSlots);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("target", "defined");
      goto L0(r2);
    L2():
      r = dyn base("target", "defined");
      goto L0(r);
    };
    goto L1(p);
  L1(sigSlots_orDefault):
    st sigSlots = sigSlots_orDefault;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L2(r5):
    c1 = `as.logical`(r5);
    if c1 then L12() else L3();
  L8():
    sigSlots1 = ld sigSlots;
    check L10() else D0();
  L9():
    r4 = dyn base1(<sym sigSlots>);
    goto L2(r4);
  D0():
    deopt 2 [sigSlots1];
  L3():
    matrix1 = ldf matrix;
    check L39() else D18();
  L10():
    sigSlots2 = force? sigSlots1;
    checkMissing(sigSlots2);
    length = ldf length in base;
    r6 = dyn length(sigSlots2);
    check L11() else D1();
  L12():
    lapply = ldf lapply;
    check L13() else D2();
  D1():
    deopt 5 [r6];
  D2():
    deopt 7 [];
  D18():
    deopt 60 [];
  L11():
    goto L2(r6);
  L13():
    p1 = prom<V +>{
      sigSlots3 = ld sigSlots;
      sigSlots4 = force? sigSlots3;
      checkMissing(sigSlots4);
      return sigSlots4;
    };
    p2 = prom<V +>{
      slot = ld slot;
      slot1 = force? slot;
      checkMissing(slot1);
      return slot1;
    };
    p3 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r10 = dyn lapply[, , object](p1, p2, p3);
    check L14() else D3();
  L39():
    p10 = prom<V +>{
      character = ldf character;
      r36 = dyn character();
      return r36;
    };
    r38 = dyn matrix1(p10, 0, 0);
    check L40() else D19();
  D3():
    deopt 12 [r10];
  D19():
    deopt 64 [r38];
  L14():
    st allSlots = r10;
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L40():
    popenv;
    return r38;
  L4(r12):
    st n = r12;
    unlist = ldf unlist;
    check L20() else D7();
  L15():
    lengths = ldf lengths;
    check L17() else D4();
  L16():
    r11 = dyn base2(<lang lengths(allSlots)>);
    goto L4(r11);
  D4():
    deopt 17 [];
  D7():
    deopt 24 [];
  L17():
    p4 = prom<V +>{
      allSlots = ld allSlots;
      allSlots1 = force? allSlots;
      checkMissing(allSlots1);
      return allSlots1;
    };
    r14 = dyn lengths(p4);
    check L18() else D5();
  L20():
    p7 = prom<V +>{
      lapply1 = ldf lapply;
      p5 = prom<V +>{
        allSlots2 = ld allSlots;
        allSlots3 = force? allSlots2;
        checkMissing(allSlots3);
        return allSlots3;
      };
      p6 = prom<V +>{
        r17 = clos inner1236783023;
        return r17;
      };
      r19 = dyn lapply1(p5, p6);
      return r19;
    };
    r21 = dyn unlist(p7);
    check L21() else D8();
  D5():
    deopt 19 [r14];
  D8():
    deopt 26 [r21];
  L18():
    max = ldf max in base;
    r15 = dyn max(r14);
    check L19() else D6();
  L21():
    st mm = r21;
    matrix = ldf matrix;
    check L22() else D9();
  D6():
    deopt 21 [r15];
  D9():
    deopt 29 [];
  L19():
    goto L4(r15);
  L22():
    p8 = prom<V +>{
      mm = ld mm;
      mm1 = force? mm;
      checkMissing(mm1);
      return mm1;
    };
    p9 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r24):
      return r24;
    L1():
      allSlots4 = ld allSlots;
      allSlots5 = force? allSlots4;
      checkMissing(allSlots5);
      length1 = ldf length in base;
      r25 = dyn length1(allSlots5);
      goto L0(r25);
    L2():
      r23 = dyn base3(<sym allSlots>);
      goto L0(r23);
    };
    r27 = dyn matrix[, nrow, byrow](p8, p9, TRUE);
    check L23() else D10();
  D10():
    deopt 35 [r27];
  L23():
    st mm = r27;
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L5(r29):
    l = ld mm;
    dimnames__ = ldf `dimnames<-`;
    check L35() else D15();
  L24():
    sigSlots5 = ld sigSlots;
    check L26() else D11();
  L25():
    r28 = dyn base4(<sym sigSlots>, <lang names(`[[`(allSlots, 1))>);
    goto L5(r28);
  D11():
    deopt 39 [sigSlots5];
  D15():
    deopt 53 [r29, l, r29];
  L26():
    sigSlots6 = force? sigSlots5;
    checkMissing(sigSlots6);
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L27() else L28();
  L35():
    r35 = dyn dimnames__(l, NULL, r29);
    check L36() else D16();
  D16():
    deopt 55 [r29, r35];
  L6(r31):
    list = ldf list in base;
    r34 = dyn list(sigSlots6, r31);
    check L34() else D14();
  L27():
    allSlots6 = ld allSlots;
    check L29() else D12();
  L28():
    r30 = dyn base5(<lang `[[`(allSlots, 1)>);
    goto L6(r30);
  L36():
    st mm = r35;
    mm2 = ld mm;
    check L37() else D17();
  D12():
    deopt 43 [allSlots6];
  D14():
    deopt 51 [r34];
  D17():
    deopt 57 [mm2];
  L29():
    allSlots7 = force? allSlots6;
    checkMissing(allSlots7);
    c2 = `is.object`(allSlots7);
    if c2 then L30() else L31(allSlots7);
  L34():
    goto L5(r34);
  L37():
    mm3 = force? mm2;
    checkMissing(mm3);
    popenv;
    return mm3;
  L7(dx1):
    names = ldf names in base;
    r33 = dyn names(dx1);
    check L33() else D13();
  L30():
    dr = tryDispatchBuiltin.1("[[", allSlots7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L32() else L31(dr);
  L31(allSlots9):
    __ = ldf `[[` in base;
    r32 = dyn __(allSlots9, 1);
    goto L7(r32);
  D13():
    deopt 49 [r33];
  L32():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L33():
    goto L6(r33);
  }
}
fun inner1236783023(s) {
  (reg s:*) -+> V { var s:*, reg n:*, reg n1:V, reg l:*, reg length__:cls, reg r:V, reg l1:*, reg c:L, reg r2:S, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:S, reg l6:*, reg r11:S, reg r12:V, reg s1:*, reg s2:V, reg is_na:cls, reg r13:V, reg ___:cls, reg r14:V, reg s3:*, reg s4:V |
    mkenv;
    st s = s;
    n = ld n;
    check L2() else D0();
  D0():
    deopt 0 [n];
  L2():
    n1 = force? n;
    checkMissing(n1);
    l = ld s;
    length__ = ldf `length<-`;
    check L3() else D1();
  D1():
    deopt 3 [n1, l, n1];
  L3():
    r = dyn length__(l, NULL, n1);
    check L4() else D2();
  D2():
    deopt 5 [n1, r];
  L4():
    st s = r;
    l1 = ld s;
    c = `is.object`(l1);
    if c then L5() else L6("ANY", l1);
  L0(dx1):
    st s = dx1;
    s3 = ld s;
    check L12() else D5();
  L5():
    dr = tryDispatchBuiltin.0("[<-", l1, "ANY");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6("ANY", dr);
  L6(r2, l3):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  D5():
    deopt 18 [s3];
  L1(r10, l6, r11, r12):
    ___ = ldf `[<-` in base;
    r14 = dyn ___(l6, r11, r12);
    goto L0(r14);
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L8():
    s1 = ld s;
    check L10() else D3();
  L9():
    r9 = dyn base(<sym s>);
    goto L1(r2, l3, "ANY", r9);
  L12():
    s4 = force? s3;
    checkMissing(s4);
    popenv;
    return s4;
  D3():
    deopt 12 [r2, l3, "ANY", s1];
  L10():
    s2 = force? s1;
    checkMissing(s2);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(s2);
    check L11() else D4();
  D4():
    deopt 15 [r2, l3, "ANY", r13];
  L11():
    goto L1(r2, l3, "ANY", r13);
  }
}
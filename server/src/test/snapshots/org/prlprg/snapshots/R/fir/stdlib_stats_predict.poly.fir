fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner350793923;
    st `predict.poly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner350793923(object, newdata, `...`) {
  (reg object:*, reg newdata:*, reg ddd:dots) -+> V { var object:*, var newdata:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg object1:*, reg object2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg object3:*, reg object4:V, reg attr:cls, reg r7:V, reg c1:V, reg c2:L, reg poly:cls, reg newdata1:*, reg newdata2:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r11:V, reg r12:V, reg object5:*, reg object6:V, reg attr1:cls, reg r13:V, reg max:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg poly1:cls, reg newdata3:*, reg newdata4:V, reg p2:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r20:V, reg r21:V, reg object7:*, reg object8:V, reg attr2:cls, reg r22:V, reg max1:cls, reg r23:V, reg p3:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg r26:V, reg object9:*, reg object10:V, reg attr3:cls, reg r27:V, reg p4:p(V +), reg r29:V |
    mkenv;
    st object = object;
    st newdata = newdata;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c = `as.logical`(r1);
    if c then L7() else L1();
  L5():
    missing = ldf missing in base;
    r2 = dyn missing(<sym newdata>);
    goto L0(r2);
  L6():
    r = dyn base(<sym newdata>);
    goto L0(r);
  L1():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L7():
    object1 = ld object;
    check L8() else D0();
  D0():
    deopt 3 [object1];
  L2(r4):
    c2 = `as.logical`(r4);
    if c2 then L16() else L4();
  L8():
    object2 = force? object1;
    checkMissing(object2);
    popenv;
    return object2;
  L10():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L11():
    r3 = dyn base1(<lang attr(object, "coefs")>);
    goto L2(r3);
  L3(r6):
    c1 = `==`(r6, NULL);
    goto L2(c1);
  L4():
    poly1 = ldf poly;
    check L20() else D5();
  L12():
    object3 = ld object;
    check L14() else D1();
  L13():
    r5 = dyn base2(<sym object>, "coefs");
    goto L3(r5);
  L16():
    poly = ldf poly;
    check L17() else D3();
  D1():
    deopt 8 [object3];
  D3():
    deopt 15 [];
  D5():
    deopt 25 [];
  L14():
    object4 = force? object3;
    checkMissing(object4);
    attr = ldf attr in base;
    r7 = dyn attr(object4, "coefs");
    check L15() else D2();
  L17():
    p = prom<V +>{
      newdata1 = ld newdata;
      newdata2 = force? newdata1;
      checkMissing(newdata2);
      return newdata2;
    };
    p1 = prom<V +>{
      sym3 = ldf max;
      base3 = ldf max in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r10):
      return r10;
    L2():
      sym4 = ldf attr;
      base4 = ldf attr in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r9 = dyn base3(<lang attr(object, "degree")>);
      goto L0(r9);
    L1(r12):
      max = ldf max in base;
      r14 = dyn max(r12);
      goto L0(r14);
    L4():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      attr1 = ldf attr in base;
      r13 = dyn attr1(object6, "degree");
      goto L1(r13);
    L5():
      r11 = dyn base4(<sym object>, "degree");
      goto L1(r11);
    };
    r16 = dyn poly[, degree, raw, simple](p, p1, TRUE, TRUE);
    check L18() else D4();
  L20():
    p2 = prom<V +>{
      newdata3 = ld newdata;
      newdata4 = force? newdata3;
      checkMissing(newdata4);
      return newdata4;
    };
    p3 = prom<V +>{
      sym5 = ldf max;
      base5 = ldf max in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L2() else L3();
    L0(r19):
      return r19;
    L2():
      sym6 = ldf attr;
      base6 = ldf attr in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L4() else L5();
    L3():
      r18 = dyn base5(<lang attr(object, "degree")>);
      goto L0(r18);
    L1(r21):
      max1 = ldf max in base;
      r23 = dyn max1(r21);
      goto L0(r23);
    L4():
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      attr2 = ldf attr in base;
      r22 = dyn attr2(object8, "degree");
      goto L1(r22);
    L5():
      r20 = dyn base6(<sym object>, "degree");
      goto L1(r20);
    };
    p4 = prom<V +>{
      sym7 = ldf attr;
      base7 = ldf attr in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r26):
      return r26;
    L1():
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      attr3 = ldf attr in base;
      r27 = dyn attr3(object10, "coefs");
      goto L0(r27);
    L2():
      r25 = dyn base7(<sym object>, "coefs");
      goto L0(r25);
    };
    r29 = dyn poly1[, degree, coefs, simple](p2, p3, p4, TRUE);
    check L21() else D6();
  D2():
    deopt 12 [r7];
  D4():
    deopt 23 [r16];
  D6():
    deopt 33 [r29];
  L15():
    goto L3(r7);
  L18():
    popenv;
    return r16;
  L21():
    popenv;
    return r29;
  }
}
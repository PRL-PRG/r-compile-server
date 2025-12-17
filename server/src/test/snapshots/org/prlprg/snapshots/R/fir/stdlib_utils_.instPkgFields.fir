fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner964573849;
    st `.instPkgFields` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner964573849(fields) {
  (reg fields:*) -+> V { var fields:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___:cls, reg r2:V, reg r3:cls, reg r4:V, reg c:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg fields1:*, reg fields2:V, reg c1:V, reg c2:L, reg requiredFields:*, reg requiredFields1:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg fields3:*, reg fields4:V, reg c3:L, reg p:p(V +), reg r11:V, reg unique:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg requiredFields3:*, reg requiredFields4:V, reg fields5:*, reg fields6:V, reg c4:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg fields7:*, reg fields8:V, reg c5:L, reg fields10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg fields11:*, reg fields12:V, reg p2:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg c6:cls, reg r20:V, reg p3:p(V +), reg r22:V, reg r23:V, reg __:cls, reg r24:V |
    mkenv;
    st fields = fields;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st requiredFields = r1;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L5():
    ___ = ldf `:::`;
    check L7() else D0();
  L6():
    r = dyn base(<lang `:::`(tools, .get_standard_repository_db_fields)()>, "Built");
    goto L0(r);
  D0():
    deopt 3 [];
  L1(r7):
    c2 = `as.logical`(r7);
    if c2 then L14() else L2();
  L7():
    r2 = dyn ___("tools", ".get_standard_repository_db_fields");
    check L8() else D1();
  L11():
    fields1 = ld fields;
    check L13() else D4();
  L12():
    r6 = dyn base1(<sym fields>);
    goto L1(r6);
  D1():
    deopt 6 [r2];
  D4():
    deopt 14 [fields1];
  L2():
    stopifnot = ldf stopifnot;
    check L17() else D6();
  L3():
    fields7 = ld fields;
    check L21() else D10();
  L8():
    checkFun.0(r2);
    r3 = r2 as cls;
    r4 = dyn r3();
    check L9() else D2();
  L13():
    fields2 = force? fields1;
    checkMissing(fields2);
    c1 = `==`(fields2, NULL);
    goto L1(c1);
  L14():
    requiredFields = ld requiredFields;
    check L15() else D5();
  D2():
    deopt 8 [r4];
  D5():
    deopt 17 [requiredFields];
  D6():
    deopt 21 [];
  D10():
    deopt 29 [fields7];
  L9():
    c = ldf c in base;
    r5 = dyn c(r4, "Built");
    check L10() else D3();
  L15():
    requiredFields1 = force? requiredFields;
    checkMissing(requiredFields1);
    st fields = requiredFields1;
    goto L3();
  L17():
    p = prom<V +>{
      sym2 = ldf `is.character`;
      base2 = ldf `is.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      fields3 = ld fields;
      fields4 = force? fields3;
      checkMissing(fields4);
      c3 = `is.character`(fields4);
      goto L0(c3);
    L2():
      r8 = dyn base2(<sym fields>);
      goto L0(r8);
    };
    r11 = dyn stopifnot(p);
    check L18() else D7();
  L21():
    fields8 = force? fields7;
    checkMissing(fields8);
    c5 = `is.object`(fields8);
    if c5 then L22() else L23(fields8);
  D3():
    deopt 11 [r5];
  D7():
    deopt 23 [r11];
  L4(dx1):
    popenv;
    return dx1;
  L10():
    goto L0(r5);
  L18():
    unique = ldf unique;
    check L19() else D8();
  L22():
    dr = tryDispatchBuiltin.1("[", fields8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(fields10):
    _in_ = ldf `%in%`;
    check L25() else D11();
  D8():
    deopt 25 [];
  D11():
    deopt 32 [fields10];
  L19():
    p1 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      requiredFields3 = ld requiredFields;
      requiredFields4 = force? requiredFields3;
      checkMissing(requiredFields4);
      fields5 = ld fields;
      fields6 = force? fields5;
      checkMissing(fields6);
      c4 = ldf c in base;
      r14 = dyn c4(requiredFields4, fields6);
      goto L0(r14);
    L2():
      r12 = dyn base3(<sym requiredFields>, <sym fields>);
      goto L0(r12);
    };
    r16 = dyn unique(p1);
    check L20() else D9();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L25():
    p2 = prom<V +>{
      fields11 = ld fields;
      fields12 = force? fields11;
      checkMissing(fields12);
      return fields12;
    };
    p3 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      c6 = ldf c in base;
      r20 = dyn c6("Package", "LibPath");
      goto L0(r20);
    L2():
      r18 = dyn base4("Package", "LibPath");
      goto L0(r18);
    };
    r22 = dyn _in_(p2, p3);
    check L26() else D12();
  D9():
    deopt 27 [r16];
  D12():
    deopt 35 [fields10, r22];
  L20():
    st fields = r16;
    goto L3();
  L26():
    r23 = `!`(r22);
    __ = ldf `[` in base;
    r24 = dyn __(fields10, r23);
    goto L4(r24);
  }
}
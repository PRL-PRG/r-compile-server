fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2306248613;
    st `.addToMetaTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2306248613(fdef, signature, definition, where, nSig) {
  (reg fdef:*, reg signature:*, reg definition:*, reg where:*, reg nSig:*) -+> V { var fdef:*, var signature:*, var definition:*, var where:*, var nSig:*, reg nSig_isMissing:L, reg nSig_orDefault:*, reg _getGenericSigLength:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg _TableMetaName:cls, reg __:cls, reg r3:V, reg p2:p(V +), reg __1:cls, reg r5:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg where3:*, reg where4:V, reg c:L, reg where6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg tname:*, reg tname1:V, reg __2:cls, reg r13:V, reg c1:V, reg r14:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg signature1:*, reg signature2:V, reg length:cls, reg r17:V, reg nSig1:*, reg nSig2:V, reg r18:V, reg c3:L, reg _resetTable:cls, reg table:*, reg table1:V, reg p4:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg signature3:*, reg signature4:V, reg length1:cls, reg r22:V, reg p5:p(V +), reg __3:cls, reg r24:V, reg c4:L, reg r26:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg r31:V, reg signature5:*, reg signature6:V, reg r32:I, reg __4:cls, reg r33:V, reg p6:p(V +), reg r35:V, reg r36:V, reg new_env:cls, reg environment:cls, reg fdef3:*, reg fdef4:V, reg p7:p(V +), reg r39:V, reg p8:p(V +), reg r41:V, reg assign:cls, reg tname2:*, reg tname3:V, reg p9:p(V +), reg table2:*, reg table3:V, reg p10:p(V +), reg where7:*, reg where8:V, reg p11:p(V +), reg r45:V, reg _cacheMethodInTable:cls, reg fdef5:*, reg fdef6:V, reg p12:p(V +), reg signature7:*, reg signature8:V, reg p13:p(V +), reg definition1:*, reg definition2:V, reg p14:p(V +), reg table4:*, reg table5:V, reg p15:p(V +), reg r50:V |
    mkenv;
    st fdef = fdef;
    st signature = signature;
    st definition = definition;
    st where = where;
    nSig_isMissing = missing.0(nSig);
    if nSig_isMissing then L0() else L1(nSig);
  L0():
    p1 = prom<V +>{
      _getGenericSigLength = ldf `.getGenericSigLength`;
      p = prom<V +>{
        fdef1 = ld fdef;
        fdef2 = force? fdef1;
        checkMissing(fdef2);
        return fdef2;
      };
      r1 = dyn _getGenericSigLength(p);
      return r1;
    };
    goto L1(p1);
  L1(nSig_orDefault):
    st nSig = nSig_orDefault;
    _TableMetaName = ldf `.TableMetaName`;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p2 = prom<V +>{
      __ = ldf `@` in base;
      r3 = dyn __(<sym fdef>, <sym generic>);
      return r3;
    };
    p3 = prom<V +>{
      __1 = ldf `@` in base;
      r5 = dyn __1(<sym fdef>, <sym package>);
      return r5;
    };
    r7 = dyn _TableMetaName(p2, p3);
    check L11() else D1();
  D1():
    deopt 4 [r7];
  L11():
    st tname = r7;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r9):
    st where = r9;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L12():
    where1 = ld where;
    check L14() else D2();
  L13():
    r8 = dyn base(<sym where>);
    goto L2(r8);
  D2():
    deopt 8 [where1];
  L3(r12):
    r14 = `!`(r12);
    c2 = `as.logical`(r14);
    if c2 then L23() else L5();
  L14():
    where2 = force? where1;
    checkMissing(where2);
    as_environment = ldf `as.environment` in base;
    r10 = dyn as_environment(where2);
    check L15() else D3();
  L16():
    where3 = ld where;
    check L18() else D4();
  L17():
    r11 = dyn base1(<lang `<-`(table, `[[`(where, tname))>);
    goto L3(r11);
  D3():
    deopt 11 [r10];
  D4():
    deopt 14 [where3];
  L5():
    new_env = ldf `new.env`;
    check L34() else D11();
  L9():
    _cacheMethodInTable = ldf `.cacheMethodInTable`;
    check L38() else D15();
  L15():
    goto L2(r10);
  L18():
    where4 = force? where3;
    checkMissing(where4);
    c = `is.object`(where4);
    if c then L19() else L20(where4);
  L23():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  D11():
    deopt 39 [];
  D15():
    deopt 52 [];
  L4(dx1):
    st table = dx1;
    c1 = `==`(dx1, NULL);
    goto L3(c1);
  L6(r16):
    nSig1 = ld nSig;
    check L28() else D8();
  L19():
    dr = tryDispatchBuiltin.1("[[", where4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(where6):
    tname = ld tname;
    check L22() else D5();
  L24():
    signature1 = ld signature;
    check L26() else D6();
  L25():
    r15 = dyn base2(<sym signature>);
    goto L6(r15);
  L34():
    p8 = prom<V +>{
      environment = ldf environment;
      p7 = prom<V +>{
        fdef3 = ld fdef;
        fdef4 = force? fdef3;
        checkMissing(fdef4);
        return fdef4;
      };
      r39 = dyn environment(p7);
      return r39;
    };
    r41 = dyn new_env(TRUE, p8);
    check L35() else D12();
  L38():
    p12 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    p13 = prom<V +>{
      signature7 = ld signature;
      signature8 = force? signature7;
      checkMissing(signature8);
      return signature8;
    };
    p14 = prom<V +>{
      definition1 = ld definition;
      definition2 = force? definition1;
      checkMissing(definition2);
      return definition2;
    };
    p15 = prom<V +>{
      table4 = ld table;
      table5 = force? table4;
      checkMissing(table5);
      return table5;
    };
    r50 = dyn _cacheMethodInTable(p12, p13, p14, p15);
    check L39() else D16();
  D5():
    deopt 16 [where6, tname];
  D6():
    deopt 24 [signature1];
  D8():
    deopt 27 [r16, nSig1];
  D12():
    deopt 42 [r41];
  D16():
    deopt 57 [r50];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L22():
    tname1 = force? tname;
    __2 = ldf `[[` in base;
    r13 = dyn __2(where6, tname1);
    goto L4(r13);
  L26():
    signature2 = force? signature1;
    checkMissing(signature2);
    length = ldf length in base;
    r17 = dyn length(signature2);
    check L27() else D7();
  L28():
    nSig2 = force? nSig1;
    checkMissing(nSig2);
    r18 = `>`(r16, nSig2);
    c3 = `as.logical`(r18);
    if c3 then L29() else L7();
  L35():
    st table = r41;
    assign = ldf assign;
    check L36() else D13();
  L39():
    popenv;
    return r50;
  D7():
    deopt 27 [r17];
  D13():
    deopt 45 [];
  L7():
    goto L8(NULL);
  L8(r36):
    goto L9();
  L27():
    goto L6(r17);
  L29():
    _resetTable = ldf `.resetTable`;
    check L30() else D9();
  L36():
    p9 = prom<V +>{
      tname2 = ld tname;
      tname3 = force? tname2;
      checkMissing(tname3);
      return tname3;
    };
    p10 = prom<V +>{
      table2 = ld table;
      table3 = force? table2;
      checkMissing(table3);
      return table3;
    };
    p11 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r45 = dyn assign[, , envir](p9, p10, p11);
    check L37() else D14();
  D9():
    deopt 31 [];
  D14():
    deopt 50 [r45];
  L30():
    p4 = prom<V +>{
      table = ld table;
      table1 = force? table;
      checkMissing(table1);
      return table1;
    };
    p5 = prom<V +>{
      sym3 = ldf length;
      base3 = ldf length in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      length1 = ldf length in base;
      r22 = dyn length1(signature4);
      goto L0(r22);
    L2():
      r20 = dyn base3(<sym signature>);
      goto L0(r20);
    };
    p6 = prom<V +>{
      __3 = ldf `@` in base;
      r24 = dyn __3(<sym fdef>, <sym signature>);
      c4 = `is.object`(r24);
      if c4 then L2() else L3(r24);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", r24);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(r26):
      sym4 = ldf seq_along;
      base4 = ldf seq_along in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(r30, r31):
      __4 = ldf `[` in base;
      r33 = dyn __4(r30, r31);
      goto L0(r33);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      signature5 = ld signature;
      signature6 = force? signature5;
      checkMissing(signature6);
      r32 = seq_along(signature6);
      goto L1(r26, r32);
    L6():
      r29 = dyn base4(<sym signature>);
      goto L1(r26, r29);
    };
    r35 = dyn _resetTable(p4, p5, p6);
    check L31() else D10();
  L37():
    goto L9();
  D10():
    deopt 35 [r35];
  L31():
    goto L8(r35);
  }
}
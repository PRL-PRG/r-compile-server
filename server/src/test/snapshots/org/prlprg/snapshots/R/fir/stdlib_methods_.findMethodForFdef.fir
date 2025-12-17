fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2531657259;
    st `.findMethodForFdef` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2531657259(signature, table, fdef) {
  (reg signature:*, reg table:*, reg fdef:*) -+> V { var signature:*, var table:*, var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, reg _findMethodInTable:cls, reg signature1:*, reg signature2:V, reg p:p(V +), reg table1:*, reg table2:V, reg p1:p(V +), reg fdef1:*, reg fdef2:V, reg p2:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg value:*, reg value1:V, reg c:V, reg c1:L, reg c3:V, reg is:cls, reg fdef3:*, reg fdef4:V, reg p3:p(V +), reg r7:V, reg c4:L, reg c5:V, reg c7:L, reg _matchSigLength:cls, reg signature3:*, reg signature4:V, reg p4:p(V +), reg fdef5:*, reg fdef6:V, reg p5:p(V +), reg environment:cls, reg fdef7:*, reg fdef8:V, reg p6:p(V +), reg r11:V, reg p7:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg fullSig:*, reg fullSig1:V, reg signature5:*, reg signature6:V, reg identical:cls, reg r16:V, reg r17:V, reg c8:L, reg _findMethodInTable1:cls, reg signature7:*, reg signature8:V, reg p8:p(V +), reg table3:*, reg table4:V, reg p9:p(V +), reg fdef9:*, reg fdef10:V, reg p10:p(V +), reg r21:V, reg r22:V, reg value2:*, reg value3:V |
    mkenv;
    st signature = signature;
    st table = table;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L0(NULL) else L0(fdef);
  L0(fdef_orDefault):
    st fdef = fdef_orDefault;
    _findMethodInTable = ldf `.findMethodInTable`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p1 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    p2 = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r3 = dyn _findMethodInTable(p, p1, p2);
    check L9() else D1();
  D1():
    deopt 5 [r3];
  L9():
    st value = r3;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r5):
    c1 = `as.logical`(r5);
    if c1 then L13() else L2(c1);
  L10():
    value = ld value;
    check L12() else D2();
  L11():
    r4 = dyn base(<sym value>);
    goto L1(r4);
  D2():
    deopt 8 [value];
  L2(c3):
    c7 = `as.logical`(c3);
    if c7 then L17() else L3();
  L12():
    value1 = force? value;
    checkMissing(value1);
    c = `==`(value1, NULL);
    goto L1(c);
  L13():
    is = ldf is;
    check L14() else D3();
  D3():
    deopt 12 [c1];
  L3():
    goto L7();
  L7():
    value2 = ld value;
    check L30() else D12();
  L14():
    p3 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    r7 = dyn is(p3, "genericFunction");
    check L15() else D4();
  L17():
    _matchSigLength = ldf `.matchSigLength`;
    check L18() else D5();
  D4():
    deopt 15 [c1, r7];
  D5():
    deopt 18 [];
  D12():
    deopt 53 [value2];
  L15():
    c4 = `as.logical`(r7);
    c5 = `&&`(c1, c4);
    goto L2(c5);
  L18():
    p4 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p5 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    p7 = prom<V +>{
      environment = ldf environment;
      p6 = prom<V +>{
        fdef7 = ld fdef;
        fdef8 = force? fdef7;
        checkMissing(fdef8);
        return fdef8;
      };
      r11 = dyn environment(p6);
      return r11;
    };
    r13 = dyn _matchSigLength(p4, p5, p7, FALSE);
    check L19() else D6();
  L30():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D6():
    deopt 23 [r13];
  L19():
    st fullSig = r13;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L4(r15):
    r17 = `!`(r15);
    c8 = `as.logical`(r17);
    if c8 then L25() else L5();
  L20():
    fullSig = ld fullSig;
    check L22() else D7();
  L21():
    r14 = dyn base1(<sym fullSig>, <sym signature>);
    goto L4(r14);
  D7():
    deopt 27 [fullSig];
  L5():
    goto L6(NULL);
  L6(r22):
    goto L7();
  L22():
    fullSig1 = force? fullSig;
    checkMissing(fullSig1);
    signature5 = ld signature;
    check L23() else D8();
  L25():
    _findMethodInTable1 = ldf `.findMethodInTable`;
    check L26() else D10();
  D8():
    deopt 29 [signature5];
  D10():
    deopt 42 [];
  L23():
    signature6 = force? signature5;
    checkMissing(signature6);
    identical = ldf identical in base;
    r16 = dyn identical(fullSig1, signature6, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L24() else D9();
  L26():
    p8 = prom<V +>{
      signature7 = ld signature;
      signature8 = force? signature7;
      checkMissing(signature8);
      return signature8;
    };
    p9 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    p10 = prom<V +>{
      fdef9 = ld fdef;
      fdef10 = force? fdef9;
      checkMissing(fdef10);
      return fdef10;
    };
    r21 = dyn _findMethodInTable1(p8, p9, p10, FALSE);
    check L27() else D11();
  D9():
    deopt 39 [r16];
  D11():
    deopt 47 [r21];
  L24():
    goto L4(r16);
  L27():
    st value = r21;
    goto L6(r21);
  }
}
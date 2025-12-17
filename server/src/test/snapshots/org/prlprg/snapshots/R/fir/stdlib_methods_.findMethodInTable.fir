fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1559285312;
    st `.findMethodInTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1559285312(signature, table, fdef, expdSig) {
  (reg signature:*, reg table:*, reg fdef:*, reg expdSig:*) -+> V { var signature:*, var table:*, var fdef:*, reg fdef_isMissing:L, reg fdef_orDefault:*, var expdSig:*, reg expdSig_isMissing:L, reg expdSig_orDefault:*, reg is:cls, reg fdef1:*, reg fdef2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg expdSig1:*, reg expdSig2:V, reg c3:L, reg c4:V, reg c6:L, reg _matchSigLength:cls, reg signature1:*, reg signature2:V, reg p1:p(V +), reg fdef3:*, reg fdef4:V, reg p2:p(V +), reg environment:cls, reg fdef5:*, reg fdef6:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg r7:V, reg _sigLabel:cls, reg signature3:*, reg signature4:V, reg p5:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg table1:*, reg table2:V, reg c7:L, reg table4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg label:*, reg label1:V, reg __:cls, reg r13:V, reg c8:V, reg r14:V, reg c9:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg value:*, reg value1:V, reg is_environment:cls, reg r17:V, reg c10:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg value2:*, reg value3:V, reg names:cls, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg pkgs:*, reg pkgs1:V, reg length:cls, reg r23:V, reg r24:V, reg c11:L, reg value4:*, reg value5:V, reg c12:L, reg value7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg pkgs2:*, reg pkgs3:V, reg __1:cls, reg r25:V, reg dx4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg pkgs4:*, reg pkgs5:V, reg length1:cls, reg r28:V, reg r29:V, reg c13:L, reg value8:*, reg value9:V |
    mkenv;
    st signature = signature;
    st table = table;
    fdef_isMissing = missing.0(fdef);
    if fdef_isMissing then L0(NULL) else L0(fdef);
  L0(fdef_orDefault):
    st fdef = fdef_orDefault;
    expdSig_isMissing = missing.0(expdSig);
    if expdSig_isMissing then L1(TRUE) else L1(expdSig);
  L1(expdSig_orDefault):
    st expdSig = expdSig_orDefault;
    is = ldf is;
    check L18() else D0();
  D0():
    deopt 1 [];
  L18():
    p = prom<V +>{
      fdef1 = ld fdef;
      fdef2 = force? fdef1;
      checkMissing(fdef2);
      return fdef2;
    };
    r1 = dyn is(p, "genericFunction");
    check L19() else D1();
  D1():
    deopt 4 [r1];
  L19():
    c = `as.logical`(r1);
    if c then L20() else L2(c);
  L2(c2):
    c6 = `as.logical`(c2);
    if c6 then L23() else L3();
  L20():
    expdSig1 = ld expdSig;
    check L21() else D2();
  D2():
    deopt 5 [c, expdSig1];
  L3():
    goto L4();
  L4():
    _sigLabel = ldf `.sigLabel`;
    check L27() else D5();
  L21():
    expdSig2 = force? expdSig1;
    checkMissing(expdSig2);
    c3 = `as.logical`(expdSig2);
    c4 = `&&`(c, c3);
    goto L2(c4);
  L23():
    _matchSigLength = ldf `.matchSigLength`;
    check L24() else D3();
  D3():
    deopt 9 [];
  D5():
    deopt 19 [];
  L24():
    p1 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p2 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    p4 = prom<V +>{
      environment = ldf environment;
      p3 = prom<V +>{
        fdef5 = ld fdef;
        fdef6 = force? fdef5;
        checkMissing(fdef6);
        return fdef6;
      };
      r5 = dyn environment(p3);
      return r5;
    };
    r7 = dyn _matchSigLength(p1, p2, p4, FALSE);
    check L25() else D4();
  L27():
    p5 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    r10 = dyn _sigLabel(p5);
    check L28() else D6();
  D4():
    deopt 14 [r7];
  D6():
    deopt 21 [r10];
  L25():
    st signature = r7;
    goto L4();
  L28():
    st label = r10;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L29() else L30();
  L5(r12):
    r14 = `!`(r12);
    c9 = `as.logical`(r14);
    if c9 then L36() else L7();
  L29():
    table1 = ld table;
    check L31() else D7();
  L30():
    r11 = dyn base(<lang `<-`(value, `[[`(table, label))>);
    goto L5(r11);
  D7():
    deopt 24 [table1];
  L7():
    invisible.0();
    popenv;
    return NULL;
  L31():
    table2 = force? table1;
    checkMissing(table2);
    c7 = `is.object`(table2);
    if c7 then L32() else L33(table2);
  L36():
    sym1 = ldf `is.environment`;
    base1 = ldf `is.environment` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L6(dx1):
    st value = dx1;
    c8 = `==`(dx1, NULL);
    goto L5(c8);
  L8(r16):
    c10 = `as.logical`(r16);
    if c10 then L41() else L9();
  L32():
    dr = tryDispatchBuiltin.1("[[", table2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(table4):
    label = ld label;
    check L35() else D8();
  L37():
    value = ld value;
    check L39() else D9();
  L38():
    r15 = dyn base1(<sym value>);
    goto L8(r15);
  D8():
    deopt 26 [table4, label];
  D9():
    deopt 34 [value];
  L9():
    goto L17();
  L17():
    value8 = ld value;
    check L64() else D19();
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L35():
    label1 = force? label;
    __ = ldf `[[` in base;
    r13 = dyn __(table4, label1);
    goto L6(r13);
  L39():
    value1 = force? value;
    checkMissing(value1);
    is_environment = ldf `is.environment` in base;
    r17 = dyn is_environment(value1);
    check L40() else D10();
  L41():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  D10():
    deopt 37 [r17];
  D19():
    deopt 74 [value8];
  L10(r19):
    st pkgs = r19;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L40():
    goto L8(r17);
  L42():
    value2 = ld value;
    check L44() else D11();
  L43():
    r18 = dyn base2(<sym value>);
    goto L10(r18);
  L64():
    value9 = force? value8;
    checkMissing(value9);
    popenv;
    return value9;
  D11():
    deopt 40 [value2];
  L11(r22):
    r24 = `==`(r22, 1.0);
    c11 = `as.logical`(r24);
    if c11 then L50() else L12();
  L44():
    value3 = force? value2;
    checkMissing(value3);
    names = ldf names in base;
    r20 = dyn names(value3);
    check L45() else D12();
  L46():
    pkgs = ld pkgs;
    check L48() else D13();
  L47():
    r21 = dyn base3(<sym pkgs>);
    goto L11(r21);
  D12():
    deopt 43 [r20];
  D13():
    deopt 47 [pkgs];
  L12():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L14(dx4):
    goto L17();
  L45():
    goto L10(r20);
  L48():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    length = ldf length in base;
    r23 = dyn length(pkgs1);
    check L49() else D14();
  L50():
    value4 = ld value;
    check L51() else D15();
  D14():
    deopt 50 [r23];
  D15():
    deopt 53 [value4];
  L15(r27):
    r29 = `==`(r27, 0.0);
    c13 = `as.logical`(r29);
    if c13 then L61() else L16();
  L49():
    goto L11(r23);
  L51():
    value5 = force? value4;
    checkMissing(value5);
    c12 = `is.object`(value5);
    if c12 then L52() else L53(value5);
  L57():
    pkgs4 = ld pkgs;
    check L59() else D17();
  L58():
    r26 = dyn base4(<sym pkgs>);
    goto L15(r26);
  D17():
    deopt 61 [pkgs4];
  L13(dx3):
    st value = dx3;
    goto L14(dx3);
  L16():
    goto L14(NULL);
  L52():
    dr2 = tryDispatchBuiltin.1("[[", value5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L54() else L53(dr2);
  L53(value7):
    pkgs2 = ld pkgs;
    check L55() else D16();
  L59():
    pkgs5 = force? pkgs4;
    checkMissing(pkgs5);
    length1 = ldf length in base;
    r28 = dyn length1(pkgs5);
    check L60() else D18();
  L61():
    st value = NULL;
    goto L14(NULL);
  D16():
    deopt 55 [value7, pkgs2];
  D18():
    deopt 64 [r28];
  L54():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L55():
    pkgs3 = force? pkgs2;
    __1 = ldf `[[` in base;
    r25 = dyn __1(value7, pkgs3);
    goto L13(r25);
  L60():
    goto L15(r28);
  }
}
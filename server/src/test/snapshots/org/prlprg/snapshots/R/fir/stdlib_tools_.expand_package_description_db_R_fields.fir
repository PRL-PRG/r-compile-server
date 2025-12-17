fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.expand_package_description_db_R_fields` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg character:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r4:V, reg is_na:cls, reg r5:V, reg r6:V, reg c2:L, reg ___:cls, reg r7:V, reg r8:cls, reg aar:*, reg aar1:V, reg p:p(V +), reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg enc:*, reg enc1:V, reg identical:cls, reg r13:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r16:V, reg is_na1:cls, reg r17:V, reg c4:L, reg ___1:cls, reg r18:V, reg r19:cls, reg aar2:*, reg aar3:V, reg p1:p(V +), reg r21:V, reg lat:*, reg lat1:V, reg c5:L, reg _enc2latin1:cls, reg tmp:*, reg tmp1:V, reg p2:p(V +), reg r23:V, reg tmp2:*, reg tmp3:V, reg l:*, reg c6:L, reg tmp5:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg tmp7:V, reg dx7:V, reg ___2:cls, reg r25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg x13:*, reg x14:V, reg c7:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r28:V, reg is_na2:cls, reg r29:V, reg c8:L, reg ___3:cls, reg r30:V, reg r31:cls, reg aar4:*, reg aar5:V, reg p3:p(V +), reg r33:V, reg lat2:*, reg lat3:V, reg c9:L, reg _enc2latin2:cls, reg tmp9:*, reg tmp10:V, reg p4:p(V +), reg r35:V, reg tmp11:*, reg tmp12:V, reg l3:*, reg c10:L, reg tmp14:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx10:V, reg tmp16:V, reg dx11:V, reg ___4:cls, reg r37:V, reg tmp17:V, reg y:*, reg y1:V |
    mkenv;
    st x = x;
    x1 = ld x;
    check L20() else D0();
  D0():
    deopt 0 [x1];
  L20():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L21() else L22(x2);
  L0(dx1):
    st enc = dx1;
    character = ldf character;
    check L24() else D1();
  L21():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(dr);
  L22(x4):
    __ = ldf `[` in base;
    r = dyn __(x4, "Encoding");
    goto L0(r);
  D1():
    deopt 7 [];
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L24():
    r1 = dyn character();
    check L25() else D2();
  D2():
    deopt 8 [r1];
  L25():
    st y = r1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L1(r3):
    r6 = `!`(r3);
    c2 = `as.logical`(r6);
    if c2 then L33() else L3();
  L26():
    x5 = ld x;
    check L28() else D3();
  L27():
    r2 = dyn base(<lang `<-`(aar, `[`(x, "Authors@R"))>);
    goto L1(r2);
  D3():
    deopt 12 [x5];
  L3():
    goto L19();
  L19():
    y = ld y;
    check L84() else D28();
  L28():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L29() else L30(x6);
  L33():
    ___ = ldf `:::`;
    check L34() else D5();
  D5():
    deopt 22 [];
  D28():
    deopt 119 [y];
  L2(dx3):
    st aar = dx3;
    is_na = ldf `is.na` in base;
    r5 = dyn is_na(dx3);
    check L32() else D4();
  L29():
    dr2 = tryDispatchBuiltin.1("[", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(x8):
    __1 = ldf `[` in base;
    r4 = dyn __1(x8, "Authors@R");
    goto L2(r4);
  L34():
    r7 = dyn ___("utils", ".read_authors_at_R_field");
    check L35() else D6();
  L84():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D4():
    deopt 19 [r5];
  D6():
    deopt 25 [r7];
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L32():
    goto L1(r5);
  L35():
    checkFun.0(r7);
    r8 = r7 as cls;
    p = prom<V +>{
      aar = ld aar;
      aar1 = force? aar;
      checkMissing(aar1);
      return aar1;
    };
    r10 = dyn r8(p);
    check L36() else D7();
  D7():
    deopt 28 [r10];
  L36():
    st aar = r10;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L4(r12):
    st lat = r12;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L41() else L42();
  L37():
    enc = ld enc;
    check L39() else D8();
  L38():
    r11 = dyn base1(<sym enc>, "latin1");
    goto L4(r11);
  D8():
    deopt 32 [enc];
  L5(r15):
    c4 = `as.logical`(r15);
    if c4 then L48() else L7();
  L39():
    enc1 = force? enc;
    checkMissing(enc1);
    identical = ldf identical in base;
    r13 = dyn identical(enc1, "latin1", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L40() else D9();
  L41():
    x9 = ld x;
    check L43() else D10();
  L42():
    r14 = dyn base2(<lang `[`(x, "Author")>);
    goto L5(r14);
  D9():
    deopt 43 [r13];
  D10():
    deopt 47 [x9];
  L7():
    goto L11();
  L11():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L40():
    goto L4(r13);
  L43():
    x10 = force? x9;
    checkMissing(x10);
    c3 = `is.object`(x10);
    if c3 then L44() else L45(x10);
  L48():
    ___1 = ldf `:::`;
    check L49() else D12();
  D12():
    deopt 55 [];
  L6(dx5):
    is_na1 = ldf `is.na` in base;
    r17 = dyn is_na1(dx5);
    check L47() else D11();
  L12(r27):
    c8 = `as.logical`(r27);
    if c8 then L69() else L14();
  L44():
    dr4 = tryDispatchBuiltin.1("[", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(dr4);
  L45(x12):
    __2 = ldf `[` in base;
    r16 = dyn __2(x12, "Author");
    goto L6(r16);
  L49():
    r18 = dyn ___1("utils", ".format_authors_at_R_field_for_author");
    check L50() else D13();
  L62():
    x13 = ld x;
    check L64() else D19();
  L63():
    r26 = dyn base3(<lang `[`(x, "Maintainer")>);
    goto L12(r26);
  D11():
    deopt 53 [r17];
  D13():
    deopt 58 [r18];
  D19():
    deopt 83 [x13];
  L14():
    goto L18(NULL);
  L18(tmp17):
    goto L19();
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L47():
    goto L5(r17);
  L50():
    checkFun.0(r18);
    r19 = r18 as cls;
    p1 = prom<V +>{
      aar2 = ld aar;
      aar3 = force? aar2;
      checkMissing(aar3);
      return aar3;
    };
    r21 = dyn r19(p1);
    check L51() else D14();
  L64():
    x14 = force? x13;
    checkMissing(x14);
    c7 = `is.object`(x14);
    if c7 then L65() else L66(x14);
  L69():
    ___3 = ldf `:::`;
    check L70() else D21();
  D14():
    deopt 61 [r21];
  D21():
    deopt 91 [];
  L13(dx9):
    is_na2 = ldf `is.na` in base;
    r29 = dyn is_na2(dx9);
    check L68() else D20();
  L51():
    st tmp = r21;
    lat = ld lat;
    check L52() else D15();
  L65():
    dr8 = tryDispatchBuiltin.1("[", x14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(dr8);
  L66(x16):
    __3 = ldf `[` in base;
    r28 = dyn __3(x16, "Maintainer");
    goto L13(r28);
  L70():
    r30 = dyn ___3("utils", ".format_authors_at_R_field_for_maintainer");
    check L71() else D22();
  D15():
    deopt 63 [lat];
  D20():
    deopt 89 [r29];
  D22():
    deopt 94 [r30];
  L52():
    lat1 = force? lat;
    checkMissing(lat1);
    c5 = `as.logical`(lat1);
    if c5 then L53() else L8();
  L67():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L13(dx8);
  L68():
    goto L12(r29);
  L71():
    checkFun.0(r30);
    r31 = r30 as cls;
    p3 = prom<V +>{
      aar4 = ld aar;
      aar5 = force? aar4;
      checkMissing(aar5);
      return aar5;
    };
    r33 = dyn r31(p3);
    check L72() else D23();
  D23():
    deopt 97 [r33];
  L8():
    goto L9();
  L9():
    tmp2 = ld tmp;
    check L57() else D18();
  L53():
    _enc2latin1 = ldf `.enc2latin1`;
    check L54() else D16();
  L72():
    st tmp = r33;
    lat2 = ld lat;
    check L73() else D24();
  D16():
    deopt 66 [];
  D18():
    deopt 72 [tmp2];
  D24():
    deopt 99 [lat2];
  L54():
    p2 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    r23 = dyn _enc2latin1(p2);
    check L55() else D17();
  L57():
    tmp3 = force? tmp2;
    checkMissing(tmp3);
    l = ld y;
    c6 = `is.object`(l);
    if c6 then L58() else L59(tmp3, l);
  L73():
    lat3 = force? lat2;
    checkMissing(lat3);
    c9 = `as.logical`(lat3);
    if c9 then L74() else L15();
  D17():
    deopt 68 [r23];
  L10(tmp7, dx7):
    st y = dx7;
    goto L11();
  L15():
    goto L16();
  L16():
    tmp11 = ld tmp;
    check L78() else D27();
  L55():
    st tmp = r23;
    goto L9();
  L58():
    dr6 = tryDispatchBuiltin.0("[<-", l, tmp3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L60() else L59(tmp3, dr6);
  L59(tmp5, l2):
    ___2 = ldf `[<-` in base;
    r25 = dyn ___2(l2, tmp3, "Author");
    goto L10(tmp5, r25);
  L74():
    _enc2latin2 = ldf `.enc2latin1`;
    check L75() else D25();
  D25():
    deopt 102 [];
  D27():
    deopt 108 [tmp11];
  L60():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(tmp3, dx6);
  L75():
    p4 = prom<V +>{
      tmp9 = ld tmp;
      tmp10 = force? tmp9;
      checkMissing(tmp10);
      return tmp10;
    };
    r35 = dyn _enc2latin2(p4);
    check L76() else D26();
  L78():
    tmp12 = force? tmp11;
    checkMissing(tmp12);
    l3 = ld y;
    c10 = `is.object`(l3);
    if c10 then L79() else L80(tmp12, l3);
  D26():
    deopt 104 [r35];
  L17(tmp16, dx11):
    st y = dx11;
    goto L18(tmp16);
  L76():
    st tmp = r35;
    goto L16();
  L79():
    dr10 = tryDispatchBuiltin.0("[<-", l3, tmp12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80(tmp12, dr10);
  L80(tmp14, l5):
    ___4 = ldf `[<-` in base;
    r37 = dyn ___4(l5, tmp12, "Maintainer");
    goto L17(tmp14, r37);
  L81():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L17(tmp12, dx10);
  }
}
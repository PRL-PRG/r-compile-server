fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3953463003;
    st RNGversion = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3953463003(vstr) {
  (reg vstr:*) -+> V { var vstr:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg strsplit:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg vstr1:*, reg vstr2:V, reg as_character:cls, reg r4:V, reg p:p(V +), reg r6:V, reg c:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg as_numeric:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg vnum:*, reg vnum1:V, reg length:cls, reg r13:V, reg r14:V, reg c1:L, reg stop:cls, reg r15:V, reg vnum2:*, reg vnum3:V, reg c2:L, reg vnum5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r17:V, reg r18:V, reg c3:L, reg c5:V, reg vnum6:*, reg vnum7:V, reg c6:L, reg c8:L, reg vnum9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c10:L, reg dx5:V, reg __2:cls, reg r19:V, reg r20:V, reg c11:L, reg c12:V, reg c14:L, reg RNGkind:cls, reg r21:V, reg vnum10:*, reg vnum11:V, reg c15:L, reg vnum13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r22:V, reg r23:V, reg c16:L, reg c17:V, reg vnum14:*, reg vnum15:V, reg c19:L, reg c21:L, reg vnum17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c23:L, reg dx9:V, reg __4:cls, reg r24:V, reg r25:V, reg c24:L, reg c27:L, reg c28:V, reg vnum18:*, reg vnum19:V, reg c29:L, reg c32:L, reg c33:L, reg vnum21:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c36:L, reg c37:L, reg dx11:V, reg __5:cls, reg r26:V, reg r27:V, reg c38:L, reg c39:V, reg c42:L, reg c43:V, reg c45:L, reg RNGkind1:cls, reg r28:V, reg vnum22:*, reg vnum23:V, reg c46:L, reg vnum25:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __6:cls, reg r29:V, reg r30:V, reg c47:L, reg c48:V, reg vnum26:*, reg vnum27:V, reg c50:L, reg c52:L, reg vnum29:V, reg dr14:V, reg dc7:L, reg dx14:V, reg c54:L, reg dx15:V, reg __7:cls, reg r31:V, reg r32:V, reg c55:L, reg c58:L, reg c59:V, reg vnum30:*, reg vnum31:V, reg c60:L, reg c63:L, reg c64:L, reg vnum33:V, reg dr16:V, reg dc8:L, reg dx16:V, reg c67:L, reg c68:L, reg dx17:V, reg __8:cls, reg r33:V, reg r34:V, reg c69:L, reg c70:V, reg c73:L, reg c74:V, reg c76:L, reg RNGkind2:cls, reg r35:V, reg RNGkind3:cls, reg r36:V |
    mkenv;
    st vstr = vstr;
    sym = ldf `as.numeric`;
    base = ldf `as.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r1):
    st vnum = r1;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L21():
    strsplit = ldf strsplit;
    check L23() else D0();
  L22():
    r = dyn base(<lang `[[`(strsplit(as.character(vstr), ".", fixed=TRUE), 1)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L2(r12):
    r14 = `<`(r12, 2);
    c1 = `as.logical`(r14);
    if c1 then L33() else L3();
  L23():
    p = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      vstr1 = ld vstr;
      vstr2 = force? vstr1;
      checkMissing(vstr2);
      as_character = ldf `as.character` in base;
      r4 = dyn as_character(vstr2);
      goto L0(r4);
    L2():
      r2 = dyn base1(<sym vstr>);
      goto L0(r2);
    };
    r6 = dyn strsplit[, , fixed](p, ".", TRUE);
    check L24() else D1();
  L29():
    vnum = ld vnum;
    check L31() else D3();
  L30():
    r11 = dyn base2(<sym vnum>);
    goto L2(r11);
  D1():
    deopt 8 [r6];
  D3():
    deopt 17 [vnum];
  L3():
    goto L4();
  L4():
    vnum2 = ld vnum;
    check L37() else D7();
  L24():
    c = `is.object`(r6);
    if c then L25() else L26(r6);
  L31():
    vnum1 = force? vnum;
    checkMissing(vnum1);
    length = ldf length in base;
    r13 = dyn length(vnum1);
    check L32() else D4();
  L33():
    stop = ldf stop;
    check L34() else D5();
  D4():
    deopt 20 [r13];
  D5():
    deopt 24 [];
  D7():
    deopt 29 [vnum2];
  L1(dx1):
    as_numeric = ldf `as.numeric` in base;
    r10 = dyn as_numeric(dx1);
    check L28() else D2();
  L25():
    dr = tryDispatchBuiltin.1("[[", r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(r8):
    __ = ldf `[[` in base;
    r9 = dyn __(r8, 1);
    goto L1(r9);
  L32():
    goto L2(r13);
  L34():
    r15 = dyn stop("malformed version string");
    check L35() else D6();
  L37():
    vnum3 = force? vnum2;
    checkMissing(vnum3);
    c2 = `is.object`(vnum3);
    if c2 then L38() else L39(vnum3);
  D2():
    deopt 13 [r10];
  D6():
    deopt 26 [r15];
  L5(dx3):
    r18 = `==`(dx3, 0.0);
    c3 = `as.logical`(r18);
    if c3 then L41() else L6(c3);
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L28():
    goto L0(r10);
  L35():
    goto L4();
  L38():
    dr2 = tryDispatchBuiltin.1("[", vnum3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(vnum5):
    __1 = ldf `[` in base;
    r17 = dyn __1(vnum5, 1);
    goto L5(r17);
  L6(c5):
    c14 = `as.logical`(c5);
    if c14 then L47() else L8();
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L41():
    vnum6 = ld vnum;
    check L42() else D8();
  D8():
    deopt 36 [c3, vnum6];
  L8():
    vnum10 = ld vnum;
    check L51() else D11();
  L42():
    vnum7 = force? vnum6;
    checkMissing(vnum7);
    c6 = `is.object`(vnum7);
    if c6 then L43() else L44(c3, vnum7);
  L47():
    RNGkind = ldf RNGkind;
    check L48() else D9();
  D9():
    deopt 45 [];
  D11():
    deopt 50 [vnum10];
  L7(c10, dx5):
    r20 = `<`(dx5, 99.0);
    c11 = `as.logical`(r20);
    c12 = `&&`(c10, c11);
    goto L6(c12);
  L43():
    dr4 = tryDispatchBuiltin.1("[", vnum7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(c3, dr4);
  L44(c8, vnum9):
    __2 = ldf `[` in base;
    r19 = dyn __2(vnum9, 2);
    goto L7(c8, r19);
  L48():
    r21 = dyn RNGkind("Wichmann-Hill", "Buggy Kinderman-Ramage", "Rounding");
    check L49() else D10();
  L51():
    vnum11 = force? vnum10;
    checkMissing(vnum11);
    c15 = `is.object`(vnum11);
    if c15 then L52() else L53(vnum11);
  D10():
    deopt 49 [r21];
  L9(dx7):
    r23 = `==`(dx7, 0.0);
    c16 = `as.logical`(r23);
    if c16 then L10(c16) else L55();
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(c3, dx4);
  L49():
    popenv;
    return r21;
  L52():
    dr6 = tryDispatchBuiltin.1("[", vnum11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L54() else L53(dr6);
  L53(vnum13):
    __3 = ldf `[` in base;
    r22 = dyn __3(vnum13, 1);
    goto L9(r22);
  L10(c17):
    c45 = `as.logical`(c17);
    if c45 then L67() else L14();
  L54():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L55():
    vnum14 = ld vnum;
    check L56() else D12();
  D12():
    deopt 57 [c16, vnum14];
  L14():
    vnum22 = ld vnum;
    check L71() else D16();
  L56():
    vnum15 = force? vnum14;
    checkMissing(vnum15);
    c19 = `is.object`(vnum15);
    if c19 then L57() else L58(c16, vnum15);
  L67():
    RNGkind1 = ldf RNGkind;
    check L68() else D14();
  D14():
    deopt 74 [];
  D16():
    deopt 79 [vnum22];
  L11(c23, dx9):
    r25 = `==`(dx9, 1.0);
    c24 = `as.logical`(r25);
    if c24 then L60() else L12(c23, c24);
  L57():
    dr8 = tryDispatchBuiltin.1("[", vnum15);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L59() else L58(c16, dr8);
  L58(c21, vnum17):
    __4 = ldf `[` in base;
    r24 = dyn __4(vnum17, 1);
    goto L11(c21, r24);
  L68():
    r28 = dyn RNGkind1("Marsaglia-Multicarry", "Buggy Kinderman-Ramage", "Rounding");
    check L69() else D15();
  L71():
    vnum23 = force? vnum22;
    checkMissing(vnum23);
    c46 = `is.object`(vnum23);
    if c46 then L72() else L73(vnum23);
  D15():
    deopt 78 [r28];
  L12(c27, c28):
    c42 = `as.logical`(c28);
    c43 = `||`(c27, c42);
    goto L10(c43);
  L15(dx13):
    r30 = `<=`(dx13, 2.0);
    c47 = `as.logical`(r30);
    if c47 then L16(c47) else L75();
  L59():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L11(c16, dx8);
  L60():
    vnum18 = ld vnum;
    check L61() else D13();
  L69():
    popenv;
    return r28;
  L72():
    dr12 = tryDispatchBuiltin.1("[", vnum23);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L74() else L73(dr12);
  L73(vnum25):
    __6 = ldf `[` in base;
    r29 = dyn __6(vnum25, 1);
    goto L15(r29);
  D13():
    deopt 64 [c23, c24, vnum18];
  L16(c48):
    c76 = `as.logical`(c48);
    if c76 then L87() else L20();
  L61():
    vnum19 = force? vnum18;
    checkMissing(vnum19);
    c29 = `is.object`(vnum19);
    if c29 then L62() else L63(c23, c24, vnum19);
  L74():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L15(dx12);
  L75():
    vnum26 = ld vnum;
    check L76() else D17();
  D17():
    deopt 86 [c47, vnum26];
  L13(c36, c37, dx11):
    r27 = `<=`(dx11, 6.0);
    c38 = `as.logical`(r27);
    c39 = `&&`(c37, c38);
    goto L12(c36, c39);
  L20():
    RNGkind3 = ldf RNGkind;
    check L91() else D21();
  L62():
    dr10 = tryDispatchBuiltin.1("[", vnum19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L64() else L63(c23, c24, dr10);
  L63(c32, c33, vnum21):
    __5 = ldf `[` in base;
    r26 = dyn __5(vnum21, 2);
    goto L13(c32, c33, r26);
  L76():
    vnum27 = force? vnum26;
    checkMissing(vnum27);
    c50 = `is.object`(vnum27);
    if c50 then L77() else L78(c47, vnum27);
  L87():
    RNGkind2 = ldf RNGkind;
    check L88() else D19();
  D19():
    deopt 103 [];
  D21():
    deopt 109 [];
  L17(c54, dx15):
    r32 = `==`(dx15, 3.0);
    c55 = `as.logical`(r32);
    if c55 then L80() else L18(c54, c55);
  L64():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L13(c23, c24, dx10);
  L77():
    dr14 = tryDispatchBuiltin.1("[", vnum27);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L79() else L78(c47, dr14);
  L78(c52, vnum29):
    __7 = ldf `[` in base;
    r31 = dyn __7(vnum29, 1);
    goto L17(c52, r31);
  L88():
    r35 = dyn RNGkind2("Mersenne-Twister", "Inversion", "Rounding");
    check L89() else D20();
  L91():
    r36 = dyn RNGkind3("Mersenne-Twister", "Inversion", "Rejection");
    check L92() else D22();
  D20():
    deopt 107 [r35];
  D22():
    deopt 113 [r36];
  L18(c58, c59):
    c73 = `as.logical`(c59);
    c74 = `||`(c58, c73);
    goto L16(c74);
  L79():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L17(c47, dx14);
  L80():
    vnum30 = ld vnum;
    check L81() else D18();
  L89():
    popenv;
    return r35;
  L92():
    popenv;
    return r36;
  D18():
    deopt 93 [c54, c55, vnum30];
  L81():
    vnum31 = force? vnum30;
    checkMissing(vnum31);
    c60 = `is.object`(vnum31);
    if c60 then L82() else L83(c54, c55, vnum31);
  L19(c67, c68, dx17):
    r34 = `<=`(dx17, 5.0);
    c69 = `as.logical`(r34);
    c70 = `&&`(c68, c69);
    goto L18(c67, c70);
  L82():
    dr16 = tryDispatchBuiltin.1("[", vnum31);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L84() else L83(c54, c55, dr16);
  L83(c63, c64, vnum33):
    __8 = ldf `[` in base;
    r33 = dyn __8(vnum33, 2);
    goto L19(c63, c64, r33);
  L84():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L19(c54, c55, dx16);
  }
}
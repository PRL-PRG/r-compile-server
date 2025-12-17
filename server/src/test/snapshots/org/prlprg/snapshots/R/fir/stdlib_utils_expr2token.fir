fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner843081142;
    st expr2token = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner843081142(x, ok, extended) {
  (reg x:*, reg ok:*, reg extended:*) -+> V { var x:*, var ok:*, reg ok_isMissing:L, reg ok_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var extended:*, reg extended_isMissing:L, reg extended_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg length:cls, reg r6:V, reg r7:V, reg c1:L, reg c3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg c6:L, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg c9:L, reg r11:V, reg x3:*, reg x4:V, reg c10:L, reg c12:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg c14:L, reg dx1:V, reg __:cls, reg r12:V, reg as_character:cls, reg r13:V, reg length1:cls, reg r14:V, reg r15:V, reg c15:L, reg c16:V, reg c18:L, reg c20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg c23:L, reg r17:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg c26:L, reg r19:V, reg x7:*, reg x8:V, reg c27:L, reg c29:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c31:L, reg dx3:V, reg __1:cls, reg r20:V, reg as_character1:cls, reg r21:V, reg length2:cls, reg r22:V, reg r23:V, reg c32:L, reg c33:V, reg c35:L, reg c37:V, reg _in_:cls, reg id:*, reg id1:V, reg p1:p(V +), reg ok1:*, reg ok2:V, reg p2:p(V +), reg r26:V, reg c38:L, reg c39:V, reg c41:L, reg token:*, reg token1:V, reg token2:V, reg character:cls, reg r27:V, reg extended1:*, reg extended2:V, reg c42:L, reg c44:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg c47:L, reg r29:V, reg id2:*, reg id3:V, reg identical:cls, reg r30:V, reg c48:L, reg c49:V, reg c51:L, reg tryCatch:cls, reg eval:cls, reg x11:*, reg x12:V, reg c52:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r31:V, reg p3:p(V +), reg r33:V, reg p4:p(V +), reg identity:*, reg identity1:V, reg p5:p(V +), reg r36:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg sig:*, reg sig1:V, reg inherits:cls, reg r39:V, reg r40:V, reg c53:L, reg c55:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r41:V, reg c58:L, reg r42:V, reg sig2:*, reg sig3:V, reg c59:L, reg c60:L, reg c61:V, reg c63:L, reg paste:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg value:*, reg value1:V, reg sig4:*, reg sig5:V, reg c64:cls, reg r45:V, reg p6:p(V +), reg r47:V, reg r48:V, reg value2:*, reg value3:V |
    mkenv;
    st x = x;
    ok_isMissing = missing.0(ok);
    if ok_isMissing then L0() else L1(ok);
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
      r2 = dyn c("<-", "=", "<<-", "assign", "setGeneric", "setGroupGeneric", "setMethod", "setClass", "setClassUnion");
      goto L0(r2);
    L2():
      r = dyn base("<-", "=", "<<-", "assign", "setGeneric", "setGroupGeneric", "setMethod", "setClass", "setClassUnion");
      goto L0(r);
    };
    goto L1(p);
  L1(ok_orDefault):
    st ok = ok_orDefault;
    extended_isMissing = missing.0(extended);
    if extended_isMissing then L2(TRUE) else L2(extended);
  L2(extended_orDefault):
    st extended = extended_orDefault;
    st id = "";
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L3(r5):
    r7 = `>`(r5, 1);
    c1 = `as.logical`(r7);
    if c1 then L28() else L4(c1);
  L24():
    x1 = ld x;
    check L26() else D0();
  L25():
    r4 = dyn base1(<sym x>);
    goto L3(r4);
  D0():
    deopt 5 [x1];
  L4(c3):
    c18 = `as.logical`(c3);
    if c18 then L40() else L8(c18);
  L26():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r6 = dyn length(x2);
    check L27() else D1();
  L28():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  D1():
    deopt 8 [r6];
  L5(c6, r9):
    r15 = `==`(r9, 1);
    c15 = `as.logical`(r15);
    c16 = `&&`(c6, c15);
    goto L4(c16);
  L8(c20):
    c35 = `as.logical`(c20);
    if c35 then L52() else L12(c35);
  L27():
    goto L3(r6);
  L29():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L31() else L32();
  L30():
    r8 = dyn base2(<lang `<-`(token, as.character(`[[`(x, 2)))>);
    goto L5(c1, r8);
  L40():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  L6(c9, r11):
    st token = r11;
    length1 = ldf length in base;
    r14 = dyn length1(r11);
    check L38() else D4();
  L9(c23, r17):
    r23 = `==`(r17, 1);
    c32 = `as.logical`(r23);
    c33 = `&&`(c23, c32);
    goto L8(c33);
  L12(c37):
    c41 = `as.logical`(c37);
    if c41 then L56() else L13();
  L31():
    x3 = ld x;
    check L33() else D2();
  L32():
    r10 = dyn base3(<lang `[[`(x, 2)>);
    goto L6(c1, r10);
  L41():
    sym5 = ldf `as.character`;
    base5 = ldf `as.character` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L42():
    r16 = dyn base4(<lang `<-`(id, as.character(`[[`(x, 1)))>);
    goto L9(c18, r16);
  L52():
    _in_ = ldf `%in%`;
    check L53() else D8();
  D2():
    deopt 15 [c1, x3];
  D4():
    deopt 24 [c9, r14];
  D8():
    deopt 46 [c35];
  L10(c26, r19):
    st id = r19;
    length2 = ldf length in base;
    r22 = dyn length2(r19);
    check L50() else D7();
  L13():
    character = ldf character;
    check L59() else D11();
  L14(token2):
    st value = token2;
    extended1 = ld extended;
    check L61() else D13();
  L33():
    x4 = force? x3;
    checkMissing(x4);
    c10 = `is.object`(x4);
    if c10 then L34() else L35(c1, x4);
  L38():
    goto L5(c9, r14);
  L43():
    x7 = ld x;
    check L45() else D5();
  L44():
    r18 = dyn base5(<lang `[[`(x, 1)>);
    goto L10(c18, r18);
  L53():
    p1 = prom<V +>{
      id = ld id;
      id1 = force? id;
      checkMissing(id1);
      return id1;
    };
    p2 = prom<V +>{
      ok1 = ld ok;
      ok2 = force? ok1;
      checkMissing(ok2);
      return ok2;
    };
    r26 = dyn _in_(p1, p2);
    check L54() else D9();
  L56():
    token = ld token;
    check L57() else D10();
  D5():
    deopt 32 [c18, x7];
  D7():
    deopt 41 [c26, r22];
  D9():
    deopt 49 [c35, r26];
  D10():
    deopt 51 [token];
  D11():
    deopt 54 [];
  D13():
    deopt 58 [extended1];
  L7(c14, dx1):
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(dx1);
    check L37() else D3();
  L34():
    dr = tryDispatchBuiltin.1("[[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(c1, dr);
  L35(c12, x6):
    __ = ldf `[[` in base;
    r12 = dyn __(x6, 2);
    goto L7(c12, r12);
  L45():
    x8 = force? x7;
    checkMissing(x8);
    c27 = `is.object`(x8);
    if c27 then L46() else L47(c18, x8);
  L50():
    goto L9(c26, r22);
  L54():
    c38 = `as.logical`(r26);
    c39 = `&&`(c35, c38);
    goto L12(c39);
  L57():
    token1 = force? token;
    checkMissing(token1);
    goto L14(token1);
  L59():
    r27 = dyn character(0);
    check L60() else D12();
  L61():
    extended2 = force? extended1;
    checkMissing(extended2);
    c42 = `as.logical`(extended2);
    if c42 then L62() else L15(c42);
  D3():
    deopt 21 [c14, r13];
  D12():
    deopt 56 [r27];
  L11(c31, dx3):
    as_character1 = ldf `as.character` in base;
    r21 = dyn as_character1(dx3);
    check L49() else D6();
  L15(c44):
    c51 = `as.logical`(c44);
    if c51 then L68() else L17();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(c1, dx);
  L37():
    goto L6(c14, r13);
  L46():
    dr2 = tryDispatchBuiltin.1("[[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(c18, dr2);
  L47(c29, x10):
    __1 = ldf `[[` in base;
    r20 = dyn __1(x10, 1);
    goto L11(c29, r20);
  L60():
    goto L14(r27);
  L62():
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L63() else L64();
  D6():
    deopt 38 [c31, r21];
  L16(c47, r29):
    c48 = `as.logical`(r29);
    c49 = `&&`(c47, c48);
    goto L15(c49);
  L17():
    goto L23();
  L23():
    value2 = ld value;
    check L85() else D23();
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L11(c18, dx2);
  L49():
    goto L10(c31, r21);
  L63():
    id2 = ld id;
    check L65() else D14();
  L64():
    r28 = dyn base6(<sym id>, "setMethod");
    goto L16(c42, r28);
  L68():
    tryCatch = ldf tryCatch;
    check L69() else D16();
  D14():
    deopt 62 [c42, id2];
  D16():
    deopt 76 [];
  D23():
    deopt 107 [value2];
  L65():
    id3 = force? id2;
    checkMissing(id3);
    identical = ldf identical in base;
    r30 = dyn identical(id3, "setMethod", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L66() else D15();
  L69():
    p4 = prom<V +>{
      eval = ldf eval;
      p3 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        c52 = `is.object`(x12);
        if c52 then L1() else L2(x12);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", x12);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x14):
        __2 = ldf `[[` in base;
        r31 = dyn __2(x14, 3);
        goto L0(r31);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r33 = dyn eval(p3);
      return r33;
    };
    p5 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r36 = dyn tryCatch[, error](p4, p5);
    check L70() else D17();
  L85():
    value3 = force? value2;
    checkMissing(value3);
    popenv;
    return value3;
  D15():
    deopt 73 [c42, r30];
  D17():
    deopt 80 [r36];
  L66():
    goto L16(c42, r30);
  L70():
    st sig = r36;
    sym7 = ldf inherits;
    base7 = ldf inherits in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  L18(r38):
    r40 = `!`(r38);
    c53 = `as.logical`(r40);
    if c53 then L75() else L19(c53);
  L71():
    sig = ld sig;
    check L73() else D18();
  L72():
    r37 = dyn base7(<sym sig>, "error");
    goto L18(r37);
  D18():
    deopt 84 [sig];
  L19(c55):
    c63 = `as.logical`(c55);
    if c63 then L80() else L21();
  L73():
    sig1 = force? sig;
    checkMissing(sig1);
    inherits = ldf inherits in base;
    r39 = dyn inherits(sig1, "error", FALSE);
    check L74() else D19();
  L75():
    sym8 = ldf `is.character`;
    base8 = ldf `is.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L76() else L77();
  D19():
    deopt 89 [r39];
  L20(c58, r42):
    c60 = `as.logical`(r42);
    c61 = `&&`(c58, c60);
    goto L19(c61);
  L21():
    goto L22(NULL);
  L22(r48):
    goto L23();
  L74():
    goto L18(r39);
  L76():
    sig2 = ld sig;
    check L78() else D20();
  L77():
    r41 = dyn base8(<sym sig>);
    goto L20(c53, r41);
  L80():
    paste = ldf paste;
    check L81() else D21();
  D20():
    deopt 92 [c53, sig2];
  D21():
    deopt 97 [];
  L78():
    sig3 = force? sig2;
    checkMissing(sig3);
    c59 = `is.character`(sig3);
    goto L20(c53, c59);
  L81():
    p6 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      value = ld value;
      value1 = force? value;
      checkMissing(value1);
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      c64 = ldf c in base;
      r45 = dyn c64(value1, sig5);
      goto L0(r45);
    L2():
      r43 = dyn base9(<sym value>, <sym sig>);
      goto L0(r43);
    };
    r47 = dyn paste[, collapse](p6, ",");
    check L82() else D22();
  D22():
    deopt 101 [r47];
  L82():
    st value = r47;
    goto L22(r47);
  }
}
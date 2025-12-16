fun main() {
  () -+> V { reg r:cls, reg package_version:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg x:*, reg x1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg x2:*, reg x3:V, reg min:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x4:*, reg x5:V, reg max:cls, reg r14:V, reg c1:cls, reg r15:V, reg x6:*, reg x7:V, reg c2:L, reg x9:V, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r16:V, reg x10:*, reg x11:V, reg c3:L, reg x13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:V, reg x14:*, reg x15:V, reg c4:L, reg x17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r18:V, reg getRversion:cls, reg r19:V, reg r20:V, reg c5:L, reg cat:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg getRversion1:cls, reg r23:V, reg as_character:cls, reg r24:V, reg p1:p(V +), reg r26:V, reg x18:*, reg x19:V, reg c6:L, reg x21:V, reg dr6:V, reg dc3:L, reg dx6:V, reg __1:cls, reg r28:V, reg x22:*, reg x23:V, reg c7:L, reg x25:V, reg dr8:V, reg dc4:L, reg dx8:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg x28:V, reg r30:V, reg c8:cls, reg r31:V, reg __2:cls, reg r32:V, reg x29:*, reg x30:V, reg c9:L, reg x32:V, reg dr10:V, reg dc5:L, reg dx10:V, reg __3:cls, reg r33:V, reg x33:*, reg x34:V, reg c10:L, reg x36:V, reg dr12:V, reg dc6:L, reg dx12:V, reg __4:cls, reg r34:V, reg l:*, reg c11:L, reg r36:R, reg l2:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ____:cls, reg r39:V, reg l3:*, reg c12:L, reg r41:R, reg l5:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:R, reg l8:*, reg r50:R, reg r51:V, reg c13:cls, reg r52:V, reg ____1:cls, reg r53:V, reg x37:*, reg x38:V, reg l9:*, reg c14:L, reg r55:S, reg l11:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg ____2:cls, reg r58:V, reg x39:*, reg x40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg r60:V, reg x41:*, reg x42:V, reg package_version1:cls, reg r61:V, reg c15:cls, reg r62:V, reg l12:*, reg is_na:cls, reg r63:V, reg c16:L, reg r66:L, reg l14:*, reg r67:V, reg dr20:V, reg dc10:L, reg dx20:V, reg r69:L, reg l16:*, reg dx21:V, reg ___:cls, reg r70:V, reg is_na__:cls, reg r71:V, reg stopifnot:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r72:V, reg r73:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r74:V, reg r75:V, reg x43:*, reg x44:V, reg is_na1:cls, reg r76:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r77:V, reg r78:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r79:V, reg r80:V, reg rep:cls, reg r81:V, reg c17:cls, reg r82:V, reg identical:cls, reg r83:V, reg p2:p(V +), reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg r86:V, reg x45:*, reg x46:V, reg anyNA:cls, reg r87:V, reg p3:p(V +), reg r89:V |
    mkenv;
    r = clos `inner-817233449`;
    st numeric_version = r;
    package_version = ldf package_version;
    check L17() else D0();
  D0():
    deopt 4 [];
  L17():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("1.2-4", "1.2-3", "2.1");
      goto L0(r3);
    L2():
      r1 = dyn base("1.2-4", "1.2-3", "2.1");
      goto L0(r1);
    };
    r5 = dyn package_version(p);
    check L18() else D1();
  D1():
    deopt 6 [r5];
  L18():
    st x = r5;
    x = ld x;
    check L19() else D2();
  D2():
    deopt 8 [x];
  L19():
    x1 = force? x;
    checkMissing(x1);
    `<`(x1, "1.4-2.3");
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L0():
    x6 = ld x;
    check L31() else D8();
  L20():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L21():
    r7 = dyn base1(<lang min(x)>, <lang max(x)>);
    goto L0();
  D8():
    deopt 28 [x6];
  L1(r10):
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L26() else L27();
  L22():
    x2 = ld x;
    check L24() else D3();
  L23():
    r9 = dyn base2(<sym x>);
    goto L1(r9);
  L31():
    x7 = force? x6;
    checkMissing(x7);
    c2 = `is.object`(x7);
    if c2 then L32() else L33(x7);
  D3():
    deopt 16 [x2];
  L2(r13):
    c1 = ldf c in base;
    r15 = dyn c1(r10, r13);
    check L30() else D7();
  L3():
    x10 = ld x;
    check L35() else D9();
  L24():
    x3 = force? x2;
    checkMissing(x3);
    min = ldf min in base;
    r11 = dyn min(x3);
    check L25() else D4();
  L26():
    x4 = ld x;
    check L28() else D5();
  L27():
    r12 = dyn base3(<sym x>);
    goto L2(r12);
  L32():
    dr = tryDispatchBuiltin.1("[", x7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L34() else L33(dr);
  L33(x9):
    __ = ldf `[` in base;
    r16 = dyn __(x9, 2.0, 2.0);
    goto L3();
  D4():
    deopt 19 [r11];
  D5():
    deopt 22 [x4];
  D7():
    deopt 27 [r15];
  D9():
    deopt 34 [x10];
  L25():
    goto L1(r11);
  L28():
    x5 = force? x4;
    checkMissing(x5);
    max = ldf max in base;
    r14 = dyn max(x5);
    check L29() else D6();
  L30():
    goto L0();
  L34():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3();
  L35():
    x11 = force? x10;
    checkMissing(x11);
    c3 = `is.object`(x11);
    if c3 then L37() else L38(x11);
  D6():
    deopt 25 [r14];
  L29():
    goto L2(r14);
  L36():
    x14 = ld x;
    check L40() else D10();
  L37():
    dr2 = tryDispatchBuiltin.1("$", x11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(dr2);
  L38(x13):
    r17 = `$`(x13, <sym major>);
    goto L36();
  D10():
    deopt 37 [x14];
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L36();
  L40():
    x15 = force? x14;
    checkMissing(x15);
    c4 = `is.object`(x15);
    if c4 then L42() else L43(x15);
  L41():
    getRversion = ldf getRversion;
    check L45() else D11();
  L42():
    dr4 = tryDispatchBuiltin.1("$", x15);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(x17):
    r18 = `$`(x17, <sym minor>);
    goto L41();
  D11():
    deopt 41 [];
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L41();
  L45():
    r19 = dyn getRversion();
    check L46() else D12();
  D12():
    deopt 42 [r19];
  L46():
    r20 = `<=`(r19, "2.5.0");
    c5 = `as.logical`(r20);
    if c5 then L47() else L4();
  L4():
    goto L5();
  L5():
    x18 = ld x;
    check L51() else D15();
  L47():
    cat = ldf cat;
    check L48() else D13();
  D13():
    deopt 46 [];
  D15():
    deopt 56 [x18];
  L48():
    p1 = prom<V +>{
      sym4 = ldf `as.character`;
      base4 = ldf `as.character` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      getRversion1 = ldf getRversion;
      r23 = dyn getRversion1();
      as_character = ldf `as.character` in base;
      r24 = dyn as_character(r23);
      goto L0(r24);
    L2():
      r21 = dyn base4(<lang getRversion()>);
      goto L0(r21);
    };
    r26 = dyn cat[, , , , sep]("Your version of R, ", p1, ", is outdated.\n", "Now trying to work around that ...\n", "");
    check L49() else D14();
  L51():
    x19 = force? x18;
    checkMissing(x19);
    c6 = `is.object`(x19);
    if c6 then L52() else L53(x19);
  D14():
    deopt 53 [r26];
  L6():
    x22 = ld x;
    check L55() else D16();
  L49():
    goto L5();
  L52():
    dr6 = tryDispatchBuiltin.1("[[", x19);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L54() else L53(dr6);
  L53(x21):
    __1 = ldf `[[` in base;
    r28 = dyn __1(x21, 1.0);
    goto L6();
  D16():
    deopt 61 [x22];
  L54():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6();
  L55():
    x23 = force? x22;
    checkMissing(x23);
    c7 = `is.object`(x23);
    if c7 then L56() else L57(x23);
  L7():
    x29 = ld x;
    check L62() else D18();
  L56():
    dr8 = tryDispatchBuiltin.1("[[", x23);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L58() else L57(dr8);
  L57(x25):
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  D18():
    deopt 70 [x29];
  L8(x28, r30):
    __2 = ldf `[[` in base;
    r32 = dyn __2(x28, r30);
    goto L7();
  L58():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L7();
  L59():
    c8 = ldf c in base;
    r31 = dyn c8(1.0, 3.0);
    check L61() else D17();
  L60():
    r29 = dyn base5(1.0, 3.0);
    goto L8(x25, r29);
  L62():
    x30 = force? x29;
    checkMissing(x30);
    c9 = `is.object`(x30);
    if c9 then L63() else L64(x30);
  D17():
    deopt 68 [x25, r31];
  L9():
    x33 = ld x;
    check L66() else D19();
  L61():
    goto L8(x25, r31);
  L63():
    dr10 = tryDispatchBuiltin.1("[", x30);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L65() else L64(dr10);
  L64(x32):
    __3 = ldf `[` in base;
    r33 = dyn __3(x32, 1.0, 3.0);
    goto L9();
  D19():
    deopt 76 [x33];
  L65():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9();
  L66():
    x34 = force? x33;
    checkMissing(x34);
    c10 = `is.object`(x34);
    if c10 then L67() else L68(x34);
  L10():
    l = ld x;
    c11 = `is.object`(l);
    if c11 then L70() else L71(0.0, l);
  L67():
    dr12 = tryDispatchBuiltin.1("[[", x34);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L69() else L68(dr12);
  L68(x36):
    __4 = ldf `[[` in base;
    r34 = dyn __4(x36, 1.0, 3.0);
    goto L10();
  L11(dx15):
    st x = dx15;
    l3 = ld x;
    c12 = `is.object`(l3);
    if c12 then L73() else L74(0.0, l3);
  L69():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L10();
  L70():
    dr14 = tryDispatchBuiltin.0("[[<-", l, 0.0);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L72() else L71(0.0, dr14);
  L71(r36, l2):
    ____ = ldf `[[<-` in base;
    r39 = dyn ____(l2, 0.0, 2.0, 3.0);
    goto L11(r39);
  L12(dx17):
    st x = dx17;
    x37 = ld x;
    check L79() else D21();
  L72():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L11(dx14);
  L73():
    dr16 = tryDispatchBuiltin.0("[[<-", l3, 0.0);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L75() else L74(0.0, dr16);
  L74(r41, l5):
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  D21():
    deopt 101 [x37];
  L13(r49, l8, r50, r51):
    ____1 = ldf `[[<-` in base;
    r53 = dyn ____1(l8, r50, r51);
    goto L12(r53);
  L75():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L12(dx16);
  L76():
    c13 = ldf c in base;
    r52 = dyn c13(2.0, 3.0);
    check L78() else D20();
  L77():
    r48 = dyn base6(2.0, 3.0);
    goto L13(r41, l5, 0.0, r48);
  L79():
    x38 = force? x37;
    checkMissing(x38);
    l9 = ld x;
    c14 = `is.object`(l9);
    if c14 then L80() else L81("2.2.3", l9);
  D20():
    deopt 98 [r41, l5, 0.0, r52];
  L14(dx19):
    st x = dx19;
    x39 = ld x;
    check L83() else D22();
  L78():
    goto L13(r41, l5, 0.0, r52);
  L80():
    dr18 = tryDispatchBuiltin.0("[[<-", l9, "2.2.3");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L82() else L81("2.2.3", dr18);
  L81(r55, l11):
    ____2 = ldf `[[<-` in base;
    r58 = dyn ____2(l11, "2.2.3", 3.0);
    goto L14(r58);
  D22():
    deopt 110 [x39];
  L82():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L14(dx18);
  L83():
    x40 = force? x39;
    checkMissing(x40);
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  L15(r60):
    st x = r60;
    l12 = ld x;
    is_na = ldf `is.na`;
    check L90() else D27();
  L84():
    x41 = ld x;
    check L86() else D23();
  L85():
    r59 = dyn base7(<sym x>, <lang package_version("0.0")>);
    goto L15(r59);
  D23():
    deopt 114 [x41];
  D27():
    deopt 126 [TRUE, l12, TRUE];
  L86():
    x42 = force? x41;
    checkMissing(x42);
    package_version1 = ldf package_version;
    check L87() else D24();
  L90():
    r63 = dyn is_na(TRUE, NULL);
    check L91() else D28();
  D24():
    deopt 117 [];
  D28():
    deopt 128 [TRUE, l12, TRUE, r63];
  L87():
    r61 = dyn package_version1("0.0");
    check L88() else D25();
  L91():
    c16 = `is.object`(r63);
    if c16 then L92() else L93(TRUE, l12, r63);
  D25():
    deopt 119 [r61];
  L16(r69, l16, dx21):
    is_na__ = ldf `is.na<-`;
    check L95() else D29();
  L88():
    c15 = ldf c in base;
    r62 = dyn c15(x42, r61);
    check L89() else D26();
  L92():
    dr20 = tryDispatchBuiltin.0("[<-", r63, TRUE);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L94() else L93(TRUE, l12, dr20);
  L93(r66, l14, r67):
    ___ = ldf `[<-` in base;
    r70 = dyn ___(r67, TRUE, 4.0);
    goto L16(r66, l14, r70);
  D26():
    deopt 121 [r62];
  D29():
    deopt 133 [r69, l16, dx21];
  L89():
    goto L15(r62);
  L94():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L16(TRUE, l12, dx20);
  L95():
    r71 = dyn is_na__(l16, NULL, dx21);
    check L96() else D30();
  D30():
    deopt 135 [r69, r71];
  L96():
    st x = r71;
    stopifnot = ldf stopifnot;
    check L97() else D31();
  D31():
    deopt 138 [];
  L97():
    p2 = prom<V +>{
      sym8 = ldf identical;
      base8 = ldf identical in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L0(r73):
      return r73;
    L4():
      sym9 = ldf `is.na`;
      base9 = ldf `is.na` in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L6() else L7();
    L5():
      r72 = dyn base8(<lang is.na(x)>, <lang c(rep(FALSE, 3.0), TRUE)>);
      goto L0(r72);
    L1(r75):
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L8() else L9();
    L6():
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      is_na1 = ldf `is.na` in base;
      r76 = dyn is_na1(x44);
      goto L1(r76);
    L7():
      r74 = dyn base9(<sym x>);
      goto L1(r74);
    L2(r78):
      identical = ldf identical in base;
      r83 = dyn identical(r75, r78, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r83);
    L8():
      sym11 = ldf rep;
      base11 = ldf rep in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L10() else L11();
    L9():
      r77 = dyn base10(<lang rep(FALSE, 3.0)>, TRUE);
      goto L2(r77);
    L3(r80):
      c17 = ldf c in base;
      r82 = dyn c17(r80, TRUE);
      goto L2(r82);
    L10():
      rep = ldf rep in base;
      r81 = dyn rep(FALSE, 3.0);
      goto L3(r81);
    L11():
      r79 = dyn base11(FALSE, 3.0);
      goto L3(r79);
    };
    p3 = prom<V +>{
      sym12 = ldf anyNA;
      base12 = ldf anyNA in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r86):
      return r86;
    L1():
      x45 = ld x;
      x46 = force? x45;
      checkMissing(x46);
      anyNA = ldf anyNA in base;
      r87 = dyn anyNA(x46);
      goto L0(r87);
    L2():
      r85 = dyn base12(<sym x>);
      goto L0(r85);
    };
    r89 = dyn stopifnot(p2, p3);
    check L98() else D32();
  D32():
    deopt 141 [r89];
  L98():
    popenv;
    return r89;
  }
}
fun `inner-817233449`(x, strict) {
  (reg x:*, reg strict:*) -+> V { var x:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, reg is_numeric_version:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg _make_numeric_version:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg strict1:*, reg strict2:V, reg p2:p(V +), reg _standard_regexps:cls, reg r6:V, reg c1:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg p3:p(V +), reg r11:V |
    mkenv;
    st x = x;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    is_numeric_version = ldf `is.numeric_version`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_numeric_version(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    c = `as.logical`(r1);
    if c then L5() else L1();
  L1():
    _make_numeric_version = ldf `.make_numeric_version`;
    check L9() else D3();
  L5():
    x3 = ld x;
    check L6() else D2();
  D2():
    deopt 4 [x3];
  D3():
    deopt 10 [];
  L6():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L9():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      strict1 = ld strict;
      strict2 = force? strict1;
      checkMissing(strict2);
      return strict2;
    };
    p3 = prom<V +>{
      _standard_regexps = ldf `.standard_regexps`;
      r6 = dyn _standard_regexps();
      c1 = `is.object`(r6);
      if c1 then L1() else L2(r6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r8):
      r9 = `$`(r8, <sym valid_numeric_version>);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn _make_numeric_version(p1, p2, p3);
    check L10() else D4();
  D4():
    deopt 14 [r11];
  L10():
    popenv;
    return r11;
  }
}
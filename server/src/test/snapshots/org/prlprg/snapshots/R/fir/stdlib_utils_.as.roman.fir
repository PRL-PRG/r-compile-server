fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4158372284;
    st `.as.roman` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4158372284(x, `check.range`) {
  (reg x:*, reg check_range:*) -+> V { var x:*, var `check.range`:*, reg check_range_isMissing:L, reg check_range_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg c2:L, reg c3:L, reg c4:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c8:L, reg r6:V, reg x5:*, reg x6:V, reg c9:L, reg c10:L, reg c11:V, reg c13:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r7:V, reg r8:V, reg x7:*, reg x8:V, reg as_integer:cls, reg r9:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r10:V, reg r11:V, reg x9:*, reg x10:V, reg c14:L, reg c15:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r12:V, reg r13:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r14:V, reg r15:V, reg x11:*, reg x12:V, reg nzchar:cls, reg r16:V, reg r17:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r20:V, reg r21:V, reg r22:V, reg x13:*, reg x14:V, reg is_na:cls, reg r23:V, reg r24:V, reg grepl:cls, reg x15:*, reg x16:V, reg p:p(V +), reg r26:V, reg r27:V, reg all:cls, reg r28:V, reg c16:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r29:V, reg r30:V, reg x17:*, reg x18:V, reg as_integer1:cls, reg r31:V, reg r32:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r33:V, reg r34:V, reg dig_x:*, reg dig_x1:V, reg any:cls, reg r35:V, reg c17:L, reg suppressWarnings:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r36:V, reg r37:V, reg x19:*, reg x20:V, reg as_integer2:cls, reg r38:V, reg p1:p(V +), reg r40:V, reg _roman2numeric:cls, reg x21:*, reg x22:V, reg c18:L, reg x24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg dig_x2:*, reg dig_x3:V, reg r41:V, reg __:cls, reg r42:V, reg p2:p(V +), reg r44:V, reg l:*, reg c19:L, reg r46:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg dig_x4:*, reg dig_x5:V, reg r49:V, reg ___:cls, reg r50:V, reg r51:*, reg r52:V, reg _roman2numeric1:cls, reg x25:*, reg x26:V, reg p3:p(V +), reg r54:V, reg stop:cls, reg r55:V, reg check_range1:*, reg check_range2:V, reg c20:L, reg l3:*, reg c21:L, reg r57:L, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r59:L, reg dx5:V, reg x27:*, reg x28:V, reg r60:V, reg x29:*, reg x30:V, reg r61:V, reg r62:V, reg ___1:cls, reg r63:V, reg l6:*, reg class__:cls, reg r65:V, reg x31:*, reg x32:V |
    mkenv;
    st x = x;
    check_range_isMissing = missing.0(check_range);
    if check_range_isMissing then L0(TRUE) else L0(check_range);
  L0(check_range_orDefault):
    st `check.range` = check_range_orDefault;
    sym = ldf `is.integer`;
    base = ldf `is.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L26() else L2();
  L23():
    x1 = ld x;
    check L25() else D0();
  L24():
    r = dyn base(<sym x>);
    goto L1(r);
  D0():
    deopt 1 [x1];
  L2():
    sym1 = ldf `is.double`;
    base1 = ldf `is.double` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L3():
    check_range1 = ld `check.range`;
    check L85() else D27();
  L25():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.integer`(x2);
    goto L1(c);
  L26():
    goto L3();
  D27():
    deopt 87 [check_range1];
  L4(r4):
    c3 = `as.logical`(r4);
    if c3 then L5(c3) else L31();
  L28():
    x3 = ld x;
    check L30() else D1();
  L29():
    r3 = dyn base1(<sym x>);
    goto L4(r3);
  L85():
    check_range2 = force? check_range1;
    checkMissing(check_range2);
    c20 = `as.logical`(check_range2);
    if c20 then L86() else L20();
  D1():
    deopt 7 [x3];
  L5(c4):
    c13 = `as.logical`(c4);
    if c13 then L36() else L7();
  L20():
    goto L22();
  L22():
    l6 = ld x;
    class__ = ldf `class<-`;
    check L93() else D30();
  L30():
    x4 = force? x3;
    checkMissing(x4);
    c2 = `is.double`(x4);
    goto L4(c2);
  L31():
    sym2 = ldf `is.logical`;
    base2 = ldf `is.logical` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L86():
    l3 = ld x;
    c21 = `is.object`(l3);
    if c21 then L87() else L88(NA_LGL, l3);
  D30():
    deopt 107 ["roman", l6, "roman"];
  L6(c8, r6):
    c10 = `as.logical`(r6);
    c11 = `||`(c8, c10);
    goto L5(c11);
  L7():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L21(r59, dx5):
    st x = dx5;
    goto L22();
  L32():
    x5 = ld x;
    check L34() else D2();
  L33():
    r5 = dyn base2(<sym x>);
    goto L6(c3, r5);
  L36():
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L87():
    dr4 = tryDispatchBuiltin.0("[<-", l3, NA_LGL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L89() else L88(NA_LGL, dr4);
  L88(r57, l5):
    x27 = ld x;
    check L90() else D28();
  L93():
    r65 = dyn class__(l6, NULL, "roman");
    check L94() else D31();
  D2():
    deopt 11 [c3, x5];
  D28():
    deopt 92 [r57, l5, NA_LGL, x27];
  D31():
    deopt 109 ["roman", r65];
  L8(r8):
    st x = r8;
    goto L3();
  L9(r11):
    c15 = `as.logical`(r11);
    if c15 then L45() else L10();
  L34():
    x6 = force? x5;
    checkMissing(x6);
    c9 = `is.logical`(x6);
    goto L6(c3, c9);
  L37():
    x7 = ld x;
    check L39() else D3();
  L38():
    r7 = dyn base3(<sym x>);
    goto L8(r7);
  L42():
    x9 = ld x;
    check L44() else D5();
  L43():
    r10 = dyn base4(<sym x>);
    goto L9(r10);
  L89():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(NA_LGL, dx4);
  L90():
    x28 = force? x27;
    checkMissing(x28);
    r60 = `<=`(x28, 0);
    x29 = ld x;
    check L91() else D29();
  L94():
    st x = r65;
    x31 = ld x;
    check L95() else D32();
  D3():
    deopt 17 [x7];
  D5():
    deopt 23 [x9];
  D29():
    deopt 95 [r57, l5, NA_LGL, r60, x29];
  D32():
    deopt 111 [x31];
  L10():
    stop = ldf stop;
    check L83() else D25();
  L39():
    x8 = force? x7;
    checkMissing(x8);
    as_integer = ldf `as.integer` in base;
    r9 = dyn as_integer(x8);
    check L40() else D4();
  L44():
    x10 = force? x9;
    checkMissing(x10);
    c14 = `is.character`(x10);
    goto L9(c14);
  L45():
    sym5 = ldf all;
    base5 = ldf all in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L91():
    x30 = force? x29;
    checkMissing(x30);
    r61 = `>=`(x30, 4000);
    r62 = `||`(r60, r61);
    ___1 = ldf `[<-` in base;
    r63 = dyn ___1(l5, NA_LGL, r62);
    goto L21(r57, r63);
  L95():
    x32 = force? x31;
    checkMissing(x32);
    popenv;
    return x32;
  D4():
    deopt 20 [r9];
  D25():
    deopt 84 [];
  L11(r13):
    c16 = `as.logical`(r13);
    if c16 then L59() else L14();
  L40():
    goto L8(r9);
  L46():
    sym6 = ldf nzchar;
    base6 = ldf nzchar in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L47():
    r12 = dyn base5(<lang `<-`(dig.x, `|`(`|`(`!`(nzchar(x)), is.na(x)), grepl("^[[:digit:]]+$", x)))>);
    goto L11(r12);
  L83():
    r55 = dyn stop("cannot coerce 'x' to roman");
    check L84() else D26();
  D26():
    deopt 86 [r55];
  L12(r15):
    r17 = `!`(r15);
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L52() else L53();
  L14():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L65() else L66();
  L16(r32):
    st x = r32;
    goto L3();
  L48():
    x11 = ld x;
    check L50() else D6();
  L49():
    r14 = dyn base6(<sym x>);
    goto L12(r14);
  L59():
    sym8 = ldf `as.integer`;
    base8 = ldf `as.integer` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L84():
    goto L3();
  D6():
    deopt 30 [x11];
  L13(r21, r22):
    r24 = `||`(r21, r22);
    grepl = ldf grepl;
    check L56() else D10();
  L15(r30):
    goto L16(r30);
  L17(r34):
    c17 = `as.logical`(r34);
    if c17 then L69() else L18();
  L50():
    x12 = force? x11;
    checkMissing(x12);
    nzchar = ldf nzchar in base;
    r16 = dyn nzchar(x12);
    check L51() else D7();
  L52():
    x13 = ld x;
    check L54() else D8();
  L53():
    r20 = dyn base7(<sym x>);
    goto L13(r17, r20);
  L60():
    x17 = ld x;
    check L62() else D13();
  L61():
    r29 = dyn base8(<sym x>);
    goto L15(r29);
  L65():
    dig_x = ld `dig.x`;
    check L67() else D15();
  L66():
    r33 = dyn base9(<sym dig.x>);
    goto L17(r33);
  D7():
    deopt 33 [r16];
  D8():
    deopt 36 [r17, x13];
  D10():
    deopt 41 [r24];
  D13():
    deopt 51 [x17];
  D15():
    deopt 57 [dig_x];
  L18():
    _roman2numeric1 = ldf `.roman2numeric`;
    check L80() else D23();
  L51():
    goto L12(r16);
  L54():
    x14 = force? x13;
    checkMissing(x14);
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(x14);
    check L55() else D9();
  L56():
    p = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r26 = dyn grepl("^[[:digit:]]+$", p);
    check L57() else D11();
  L62():
    x18 = force? x17;
    checkMissing(x18);
    as_integer1 = ldf `as.integer` in base;
    r31 = dyn as_integer1(x18);
    check L63() else D14();
  L67():
    dig_x1 = force? dig_x;
    checkMissing(dig_x1);
    any = ldf any in base;
    r35 = dyn any(dig_x1);
    check L68() else D16();
  L69():
    suppressWarnings = ldf suppressWarnings;
    check L70() else D17();
  D9():
    deopt 39 [r17, r23];
  D11():
    deopt 44 [r24, r26];
  D14():
    deopt 54 [r31];
  D16():
    deopt 60 [r35];
  D17():
    deopt 62 [];
  D23():
    deopt 79 [];
  L55():
    goto L13(r17, r23);
  L57():
    r27 = `||`(r24, r26);
    st `dig.x` = r27;
    all = ldf all in base;
    r28 = dyn all(r27);
    check L58() else D12();
  L63():
    goto L15(r31);
  L68():
    goto L17(r35);
  L70():
    p1 = prom<V +>{
      sym10 = ldf `as.integer`;
      base10 = ldf `as.integer` in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      as_integer2 = ldf `as.integer` in base;
      r38 = dyn as_integer2(x20);
      goto L0(r38);
    L2():
      r36 = dyn base10(<sym x>);
      goto L0(r36);
    };
    r40 = dyn suppressWarnings(p1);
    check L71() else D18();
  L80():
    p3 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      return x26;
    };
    r54 = dyn _roman2numeric1(p3);
    check L81() else D24();
  D12():
    deopt 48 [r28];
  D18():
    deopt 64 [r40];
  D24():
    deopt 81 [r54];
  L58():
    goto L11(r28);
  L71():
    st r = r40;
    _roman2numeric = ldf `.roman2numeric`;
    check L72() else D19();
  L81():
    goto L16(r54);
  D19():
    deopt 67 [];
  L72():
    p2 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c18 = `is.object`(x22);
      if c18 then L1() else L2(x22);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", x22);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x24):
      dig_x2 = ld `dig.x`;
      dig_x3 = force? dig_x2;
      checkMissing(dig_x3);
      r41 = `!`(dig_x3);
      __ = ldf `[` in base;
      r42 = dyn __(x24, r41);
      goto L0(r42);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r44 = dyn _roman2numeric(p2);
    check L73() else D20();
  D20():
    deopt 69 [r44];
  L73():
    l = ld r;
    c19 = `is.object`(l);
    if c19 then L74() else L75(r44, l);
  L19(dx3):
    st r = dx3;
    r51 = ld r;
    check L78() else D22();
  L74():
    dr2 = tryDispatchBuiltin.0("[<-", l, r44);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L76() else L75(r44, dr2);
  L75(r46, l2):
    dig_x4 = ld `dig.x`;
    check L77() else D21();
  D21():
    deopt 71 [r46, l2, r44, dig_x4];
  D22():
    deopt 76 [r51];
  L76():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L19(dx2);
  L77():
    dig_x5 = force? dig_x4;
    checkMissing(dig_x5);
    r49 = `!`(dig_x5);
    ___ = ldf `[<-` in base;
    r50 = dyn ___(l2, r44, r49);
    goto L19(r50);
  L78():
    r52 = force? r51;
    checkMissing(r52);
    goto L16(r52);
  }
}
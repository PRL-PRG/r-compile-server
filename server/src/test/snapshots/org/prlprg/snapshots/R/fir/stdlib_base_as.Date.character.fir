fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-942953952`;
    st `as.Date.character` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-942953952`(x, format, tryFormats, optional, `...`) {
  (reg x:*, reg format:*, reg tryFormats:*, reg optional:*, reg ddd:dots) -+> V { var x:*, var format:*, var tryFormats:*, reg tryFormats_isMissing:L, reg tryFormats_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var optional:*, reg optional_isMissing:L, reg optional_orDefault:*, var `...`:dots?, reg r4:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg missing:cls, reg r7:V, reg c1:L, reg charToDate:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r9:V, reg r10:V, reg strptime:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg format1:*, reg format2:V, reg p3:p(V +), reg r13:V, reg as_Date:cls, reg res:*, reg res1:V, reg p4:p(V +), reg r15:V |
    mkenv;
    st x = x;
    st format = format;
    tryFormats_isMissing = missing.0(tryFormats);
    if tryFormats_isMissing then L0() else L1(tryFormats);
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
      r2 = dyn c("%Y-%m-%d", "%Y/%m/%d");
      goto L0(r2);
    L2():
      r = dyn base("%Y-%m-%d", "%Y/%m/%d");
      goto L0(r);
    };
    goto L1(p);
  L1(tryFormats_orDefault):
    st tryFormats = tryFormats_orDefault;
    optional_isMissing = missing.0(optional);
    if optional_isMissing then L2(FALSE) else L2(optional);
  L2(optional_orDefault):
    st optional = optional_orDefault;
    st `...` = ddd;
    r4 = clos inner354062069;
    st charToDate = r4;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L3(r6):
    c1 = `as.logical`(r6);
    if c1 then L8() else L4();
  L6():
    missing = ldf missing in base;
    r7 = dyn missing(<sym format>);
    goto L3(r7);
  L7():
    r5 = dyn base1(<sym format>);
    goto L3(r5);
  L4():
    strptime = ldf strptime;
    check L12() else D2();
  L5(r10):
    st res = r10;
    as_Date = ldf `as.Date`;
    check L14() else D4();
  L8():
    charToDate = ldf charToDate;
    check L9() else D0();
  D0():
    deopt 7 [];
  D2():
    deopt 11 [];
  D4():
    deopt 19 [];
  L9():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r9 = dyn charToDate(p1);
    check L10() else D1();
  L12():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p3 = prom<V +>{
      format1 = ld format;
      format2 = force? format1;
      checkMissing(format2);
      return format2;
    };
    r13 = dyn strptime[, , tz](p2, p3, "GMT");
    check L13() else D3();
  L14():
    p4 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    r15 = dyn as_Date(p4);
    check L15() else D5();
  D1():
    deopt 9 [r9];
  D3():
    deopt 16 [r13];
  D5():
    deopt 21 [r15];
  L10():
    goto L5(r9);
  L13():
    goto L5(r13);
  L15():
    popenv;
    return r15;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg nzchar:cls, reg r2:V, reg r3:V, reg l:*, reg is_na__:cls, reg r4:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg xx:*, reg xx1:V, reg is_na:cls, reg r8:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg xx2:*, reg xx3:V, reg is_na1:cls, reg r11:V, reg c2:L, reg c4:V, reg j:*, reg j1:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg c7:L, reg r16:V, reg r17:V, reg x7:*, reg x8:V, reg length:cls, reg r18:V, reg r19:V, reg c8:L, reg c9:V, reg c11:L, reg x9:*, reg x10:V, reg c12:L, reg x12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg j2:*, reg j3:V, reg __1:cls, reg r20:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg xx4:*, reg xx5:V, reg is_na2:cls, reg r23:V, reg c13:L, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg xx6:*, reg xx7:V, reg is_na3:cls, reg r28:V, reg c14:L, reg strptime:cls, reg x13:*, reg x14:V, reg p:p(V +), reg f:*, reg f1:V, reg p1:p(V +), reg r31:V, reg tryFormats:*, reg tryFormats1:V, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x15:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg i7:I, reg r33:V, reg strptime1:cls, reg xx8:*, reg xx9:V, reg p2:p(V +), reg ff:*, reg ff1:V, reg p3:p(V +), reg r36:V, reg is_na4:cls, reg r37:V, reg r38:V, reg c16:L, reg strptime2:cls, reg x16:*, reg x17:V, reg p4:p(V +), reg ff2:*, reg ff3:V, reg p5:p(V +), reg r41:V, reg optional:*, reg optional1:V, reg c17:L, reg as_Date_character:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg x18:*, reg x19:V, reg length1:cls, reg r48:V, reg rep_int:cls, reg r49:V, reg p6:p(V +), reg r51:V, reg stop:cls, reg r52:V |
    mkenv;
    st x = x;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L0(r1):
    r3 = `!`(r1);
    l = ld x;
    is_na__ = ldf `is.na<-`;
    check L26() else D2();
  L22():
    x1 = ld x;
    check L24() else D0();
  L23():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [r3, l, r3];
  L24():
    x2 = force? x1;
    checkMissing(x2);
    nzchar = ldf nzchar in base;
    r2 = dyn nzchar(x2);
    check L25() else D1();
  L26():
    r4 = dyn is_na__(l, NULL, r3);
    check L27() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r3, r4];
  L25():
    goto L0(r2);
  L27():
    st x = r4;
    x3 = ld x;
    check L28() else D4();
  D4():
    deopt 12 [x3];
  L28():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L29() else L30(x4);
  L1(dx1):
    st xx = dx1;
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L29():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L31() else L30(dr);
  L30(x6):
    __ = ldf `[` in base;
    r5 = dyn __(x6, 1);
    goto L1(r5);
  L2(r7):
    c1 = `as.logical`(r7);
    if c1 then L36() else L3();
  L31():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L32():
    xx = ld xx;
    check L34() else D5();
  L33():
    r6 = dyn base1(<sym xx>);
    goto L2(r6);
  D5():
    deopt 20 [xx];
  L3():
    goto L13();
  L13():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L34():
    xx1 = force? xx;
    checkMissing(xx1);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(xx1);
    check L35() else D6();
  L36():
    st j = 1;
    goto L9();
  D6():
    deopt 23 [r8];
  L9():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L14(r27):
    c14 = `as.logical`(r27);
    if c14 then L66() else L15();
  L35():
    goto L2(r8);
  L62():
    xx6 = ld xx;
    check L64() else D16();
  L63():
    r26 = dyn base5(<sym xx>);
    goto L14(r26);
  D16():
    deopt 69 [xx6];
  L4(r10):
    c2 = `as.logical`(r10);
    if c2 then L41() else L5(c2);
  L15():
    tryFormats = ld tryFormats;
    check L70() else D20();
  L37():
    xx2 = ld xx;
    check L39() else D7();
  L38():
    r9 = dyn base2(<sym xx>);
    goto L4(r9);
  L64():
    xx7 = force? xx6;
    checkMissing(xx7);
    is_na3 = ldf `is.na` in base;
    r28 = dyn is_na3(xx7);
    check L65() else D17();
  L66():
    strptime = ldf strptime;
    check L67() else D18();
  D7():
    deopt 29 [xx2];
  D17():
    deopt 72 [r28];
  D18():
    deopt 74 [];
  D20():
    deopt 78 [tryFormats];
  L5(c4):
    c11 = `as.logical`(c4);
    if c11 then L48() else L7();
  L39():
    xx3 = force? xx2;
    checkMissing(xx3);
    is_na1 = ldf `is.na` in base;
    r11 = dyn is_na1(xx3);
    check L40() else D8();
  L41():
    j = ld j;
    check L42() else D9();
  L65():
    goto L14(r28);
  L67():
    p = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    p1 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r31 = dyn strptime(p, p1);
    check L68() else D19();
  L70():
    tryFormats1 = force? tryFormats;
    checkMissing(tryFormats1);
    s = toForSeq(tryFormats1);
    l1 = length(s);
    i = 0;
    goto L16(i);
  D8():
    deopt 32 [r11];
  D9():
    deopt 33 [c2, j];
  D19():
    deopt 77 [r31];
  L7():
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L16(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l1, i2);
    if c15 then L71() else L20();
  L40():
    goto L4(r11);
  L42():
    j1 = force? j;
    checkMissing(j1);
    r12 = `+`(j1, 1);
    st j = r12;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L48():
    x9 = ld x;
    check L49() else D12();
  L68():
    popenv;
    return r31;
  D12():
    deopt 45 [x9];
  L6(c7, r16, r17):
    r19 = `<=`(r16, r17);
    c8 = `as.logical`(r19);
    c9 = `&&`(c7, c8);
    goto L5(c9);
  L10(r22):
    c13 = `as.logical`(r22);
    if c13 then L59() else L11();
  L20():
    x15 = `[[`(s, i2, NULL, TRUE);
    st ff = x15;
    sym6 = ldf `is.na`;
    base6 = ldf `is.na` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  L43():
    x7 = ld x;
    check L45() else D10();
  L44():
    r15 = dyn base3(<sym x>);
    goto L6(c2, r12, r15);
  L49():
    x10 = force? x9;
    checkMissing(x10);
    c12 = `is.object`(x10);
    if c12 then L50() else L51(x10);
  L55():
    xx4 = ld xx;
    check L57() else D14();
  L56():
    r21 = dyn base4(<sym xx>);
    goto L10(r21);
  L71():
    optional = ld optional;
    check L82() else D26();
  D10():
    deopt 39 [c2, r12, x7];
  D14():
    deopt 56 [xx4];
  D26():
    deopt 103 [optional];
  L8(dx3):
    st xx = dx3;
    goto L9();
  L11():
    goto L12(NULL);
  L12(r24):
    goto L13();
  L17(i7, r33):
    r38 = `!`(r33);
    c16 = `as.logical`(r38);
    if c16 then L77() else L18();
  L45():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r18 = dyn length(x8);
    check L46() else D11();
  L50():
    dr2 = tryDispatchBuiltin.1("[", x10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(x12):
    j2 = ld j;
    check L53() else D13();
  L57():
    xx5 = force? xx4;
    checkMissing(xx5);
    is_na2 = ldf `is.na` in base;
    r23 = dyn is_na2(xx5);
    check L58() else D15();
  L59():
    st f = "%Y-%m-%d";
    goto L12("%Y-%m-%d");
  L72():
    strptime1 = ldf strptime;
    check L74() else D21();
  L73():
    r32 = dyn base6(<lang strptime(xx, ff, tz="GMT")>);
    goto L17(i2, r32);
  L82():
    optional1 = force? optional;
    checkMissing(optional1);
    c17 = `as.logical`(optional1);
    if c17 then L83() else L21();
  D11():
    deopt 42 [c2, r12, r18];
  D13():
    deopt 47 [x12, j2];
  D15():
    deopt 59 [r23];
  D21():
    deopt 83 [i2];
  L18():
    goto L16(i7);
  L21():
    stop = ldf stop;
    check L87() else D29();
  L46():
    goto L6(c2, r12, r18);
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L53():
    j3 = force? j2;
    __1 = ldf `[` in base;
    r20 = dyn __1(x12, j3);
    goto L8(r20);
  L58():
    goto L10(r23);
  L74():
    p2 = prom<V +>{
      xx8 = ld xx;
      xx9 = force? xx8;
      checkMissing(xx9);
      return xx9;
    };
    p3 = prom<V +>{
      ff = ld ff;
      ff1 = force? ff;
      checkMissing(ff1);
      return ff1;
    };
    r36 = dyn strptime1[, , tz](p2, p3, "GMT");
    check L75() else D22();
  L77():
    strptime2 = ldf strptime;
    check L78() else D24();
  L83():
    as_Date_character = ldf `as.Date.character`;
    check L84() else D27();
  D22():
    deopt 88 [i2, r36];
  D24():
    deopt 93 [i7];
  D27():
    deopt 106 [];
  D29():
    deopt 111 [];
  L75():
    is_na4 = ldf `is.na` in base;
    r37 = dyn is_na4(r36);
    check L76() else D23();
  L78():
    p4 = prom<V +>{
      x16 = ld x;
      x17 = force? x16;
      checkMissing(x17);
      return x17;
    };
    p5 = prom<V +>{
      ff2 = ld ff;
      ff3 = force? ff2;
      checkMissing(ff3);
      return ff3;
    };
    r41 = dyn strptime2(p4, p5);
    check L79() else D25();
  L84():
    p6 = prom<V +>{
      sym7 = ldf `rep.int`;
      base7 = ldf `rep.int` in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r45):
      return r45;
    L2():
      sym8 = ldf length;
      base8 = ldf length in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r44 = dyn base7(NA_STR, <lang length(x)>);
      goto L0(r44);
    L1(r47):
      rep_int = ldf `rep.int` in base;
      r49 = dyn rep_int(NA_STR, r47);
      goto L0(r49);
    L4():
      x18 = ld x;
      x19 = force? x18;
      checkMissing(x19);
      length1 = ldf length in base;
      r48 = dyn length1(x19);
      goto L1(r48);
    L5():
      r46 = dyn base8(<sym x>);
      goto L1(r46);
    };
    r51 = dyn as_Date_character(p6, "%Y-%m-%d");
    check L85() else D28();
  L87():
    r52 = dyn stop("character string is not in a standard unambiguous format");
    check L88() else D30();
  D23():
    deopt 90 [i2, r37];
  D25():
    deopt 96 [i7, r41];
  D28():
    deopt 109 [r51];
  D30():
    deopt 113 [r52];
  L76():
    goto L17(i2, r37);
  L79():
    popenv;
    return r41;
  L85():
    popenv;
    return r51;
  L88():
    popenv;
    return r52;
  }
}
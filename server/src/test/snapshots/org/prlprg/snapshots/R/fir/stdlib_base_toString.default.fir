fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner116829489;
    st `toString.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner116829489(x, width, `...`) {
  (reg x:*, reg width:*, reg ddd:dots) -+> V { var x:*, var width:*, reg width_isMissing:L, reg width_orDefault:*, var `...`:dots?, reg paste:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c5:L, reg r6:V, reg width1:*, reg width2:V, reg c6:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg width3:*, reg width4:V, reg r7:V, reg c13:L, reg c14:V, reg c16:L, reg string:*, reg string1:V, reg width5:*, reg width6:V, reg r10:V, reg c17:L, reg stop:cls, reg r11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg string2:*, reg string3:V, reg nchar:cls, reg r15:V, reg width7:*, reg width8:V, reg r16:V, reg c18:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg width9:*, reg width10:V, reg max:cls, reg r19:V, reg paste1:cls, reg strtrim:cls, reg string4:*, reg string5:V, reg p1:p(V +), reg width11:*, reg width12:V, reg r21:V, reg p2:p(V +), reg r23:V, reg p3:p(V +), reg r25:V, reg string6:*, reg string7:V |
    mkenv;
    st x = x;
    width_isMissing = missing.0(width);
    if width_isMissing then L0(NULL) else L0(width);
  L0(width_orDefault):
    st width = width_orDefault;
    st `...` = ddd;
    paste = ldf paste;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn paste[, collapse](p, ", ");
    check L14() else D1();
  D1():
    deopt 5 [r1];
  L14():
    st string = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L1(r3):
    c = `as.logical`(r3);
    if c then L2(c) else L17();
  L15():
    missing = ldf missing in base;
    r4 = dyn missing(<sym width>);
    goto L1(r4);
  L16():
    r2 = dyn base(<sym width>);
    goto L1(r2);
  L2(c1):
    c10 = `as.logical`(c1);
    if c10 then L4(c10) else L22();
  L17():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L3(c5, r6):
    c7 = `as.logical`(r6);
    c8 = `||`(c5, c7);
    goto L2(c8);
  L4(c11):
    c16 = `as.logical`(c11);
    if c16 then L25() else L5();
  L18():
    width1 = ld width;
    check L20() else D2();
  L19():
    r5 = dyn base1(<sym width>);
    goto L3(c, r5);
  L22():
    width3 = ld width;
    check L23() else D3();
  D2():
    deopt 11 [c, width1];
  D3():
    deopt 15 [c10, width3];
  L5():
    width5 = ld width;
    check L29() else D5();
  L20():
    width2 = force? width1;
    checkMissing(width2);
    c6 = `==`(width2, NULL);
    goto L3(c, c6);
  L23():
    width4 = force? width3;
    checkMissing(width4);
    r7 = `==`(width4, 0.0);
    c13 = `as.logical`(r7);
    c14 = `||`(c10, c13);
    goto L4(c14);
  L25():
    string = ld string;
    check L26() else D4();
  D4():
    deopt 20 [string];
  D5():
    deopt 25 [width5];
  L26():
    string1 = force? string;
    checkMissing(string1);
    popenv;
    return string1;
  L29():
    width6 = force? width5;
    checkMissing(width6);
    r10 = `<`(width6, 0.0);
    c17 = `as.logical`(r10);
    if c17 then L30() else L7();
  L7():
    goto L8();
  L8():
    sym2 = ldf nchar;
    base2 = ldf nchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L30():
    stop = ldf stop;
    check L31() else D6();
  D6():
    deopt 30 [];
  L9(r14):
    width7 = ld width;
    check L38() else D10();
  L31():
    r11 = dyn stop("'width' must be positive");
    check L32() else D7();
  L34():
    string2 = ld string;
    check L36() else D8();
  L35():
    r13 = dyn base2[, type](<sym string>, "w");
    goto L9(r13);
  D7():
    deopt 32 [r11];
  D8():
    deopt 37 [string2];
  D10():
    deopt 43 [r14, width7];
  L32():
    goto L8();
  L36():
    string3 = force? string2;
    checkMissing(string3);
    nchar = ldf nchar in base;
    r15 = dyn nchar(string3, "w", FALSE, NA_LGL);
    check L37() else D9();
  L38():
    width8 = force? width7;
    checkMissing(width8);
    r16 = `>`(r14, width8);
    c18 = `as.logical`(r16);
    if c18 then L39() else L10();
  D9():
    deopt 43 [r15];
  L10():
    goto L12();
  L12():
    string6 = ld string;
    check L47() else D15();
  L37():
    goto L9(r15);
  L39():
    sym3 = ldf max;
    base3 = ldf max in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  D15():
    deopt 62 [string6];
  L11(r18):
    st width = r18;
    paste1 = ldf paste0;
    check L44() else D13();
  L40():
    width9 = ld width;
    check L42() else D11();
  L41():
    r17 = dyn base3(6.0, <sym width>);
    goto L11(r17);
  L47():
    string7 = force? string6;
    checkMissing(string7);
    popenv;
    return string7;
  D11():
    deopt 49 [width9];
  D13():
    deopt 55 [];
  L42():
    width10 = force? width9;
    checkMissing(width10);
    max = ldf max in base;
    r19 = dyn max(6.0, width10);
    check L43() else D12();
  L44():
    p3 = prom<V +>{
      strtrim = ldf strtrim;
      p1 = prom<V +>{
        string4 = ld string;
        string5 = force? string4;
        checkMissing(string5);
        return string5;
      };
      p2 = prom<V +>{
        width11 = ld width;
        width12 = force? width11;
        checkMissing(width12);
        r21 = `-`(width12, 4.0);
        return r21;
      };
      r23 = dyn strtrim(p1, p2);
      return r23;
    };
    r25 = dyn paste1(p3, "....");
    check L45() else D14();
  D12():
    deopt 52 [r19];
  D14():
    deopt 58 [r25];
  L43():
    goto L11(r19);
  L45():
    st string = r25;
    goto L12();
  }
}
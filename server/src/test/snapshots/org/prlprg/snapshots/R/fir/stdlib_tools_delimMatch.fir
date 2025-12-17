fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg delimMatch:cls, reg x:*, reg x1:V, reg p:p(V +), reg r5:V, reg delimMatch1:cls, reg x2:*, reg x3:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p2:p(V +), reg r11:V |
    mkenv;
    r = clos inner3982268368;
    st delimMatch = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r2):
    st x = r2;
    delimMatch = ldf delimMatch;
    check L4() else D1();
  L1():
    c = ldf c in base;
    r3 = dyn c("\\value{foo}", "function(bar)");
    check L3() else D0();
  L2():
    r1 = dyn base("\\value{foo}", "function(bar)");
    goto L0(r1);
  D0():
    deopt 8 [r3];
  D1():
    deopt 11 [];
  L3():
    goto L0(r3);
  L4():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r5 = dyn delimMatch(p);
    check L5() else D2();
  D2():
    deopt 13 [r5];
  L5():
    delimMatch1 = ldf delimMatch;
    check L6() else D3();
  D3():
    deopt 15 [];
  L6():
    p1 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p2 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("(", ")");
      goto L0(r9);
    L2():
      r7 = dyn base1("(", ")");
      goto L0(r7);
    };
    r11 = dyn delimMatch1(p1, p2);
    check L7() else D4();
  D4():
    deopt 18 [r11];
  L7():
    popenv;
    return r11;
  }
}
fun inner3982268368(x, delim, syntax) {
  (reg x:*, reg delim:*, reg syntax:*) -+> V { var x:*, var delim:*, reg delim_isMissing:L, reg delim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var syntax:*, reg syntax_isMissing:L, reg syntax_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg x1:*, reg x2:V, reg c1:L, reg r6:V, reg c2:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg delim1:*, reg delim2:V, reg length:cls, reg r11:V, reg r12:V, reg c3:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c8:L, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg c11:L, reg r16:V, reg delim3:*, reg delim4:V, reg nchar:cls, reg r17:V, reg r18:V, reg any:cls, reg r19:V, reg c12:L, reg c13:V, reg c15:L, reg stop1:cls, reg r20:V, reg syntax1:*, reg syntax2:V, reg r22:V, reg c16:L, reg stop2:cls, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg C_delim_match:*, reg C_delim_match1:V, reg x3:*, reg x4:V, reg delim5:*, reg delim6:V, reg vargs:dots, reg r27:V |
    mkenv;
    st x = x;
    delim_isMissing = missing.0(delim);
    if delim_isMissing then L0() else L1(delim);
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
      r2 = dyn c("{", "}");
      goto L0(r2);
    L2():
      r = dyn base("{", "}");
      goto L0(r);
    };
    goto L1(p);
  L1(delim_orDefault):
    st delim = delim_orDefault;
    syntax_isMissing = missing.0(syntax);
    if syntax_isMissing then L2("Rd") else L2(syntax);
  L2(syntax_orDefault):
    st syntax = syntax_orDefault;
    sym1 = ldf `is.character`;
    base1 = ldf `is.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r5):
    r6 = `!`(r5);
    c2 = `as.logical`(r6);
    if c2 then L18() else L4();
  L15():
    x1 = ld x;
    check L17() else D0();
  L16():
    r4 = dyn base1(<sym x>);
    goto L3(r4);
  D0():
    deopt 1 [x1];
  L4():
    goto L5();
  L5():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L17():
    x2 = force? x1;
    checkMissing(x2);
    c1 = `is.character`(x2);
    goto L3(c1);
  L18():
    stop = ldf stop;
    check L19() else D1();
  D1():
    deopt 6 [];
  L6(r10):
    r12 = `!=`(r10, 2);
    c3 = `as.logical`(r12);
    if c3 then L7(c3) else L26();
  L19():
    r7 = dyn stop("argument 'x' must be a character vector");
    check L20() else D2();
  L22():
    delim1 = ld delim;
    check L24() else D3();
  L23():
    r9 = dyn base2(<sym delim>);
    goto L6(r9);
  D2():
    deopt 8 [r7];
  D3():
    deopt 13 [delim1];
  L7(c4):
    c15 = `as.logical`(c4);
    if c15 then L35() else L10();
  L20():
    goto L5();
  L24():
    delim2 = force? delim1;
    checkMissing(delim2);
    length = ldf length in base;
    r11 = dyn length(delim2);
    check L25() else D4();
  L26():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  D4():
    deopt 16 [r11];
  L8(c8, r14):
    c12 = `as.logical`(r14);
    c13 = `||`(c8, c12);
    goto L7(c13);
  L10():
    goto L11();
  L11():
    syntax1 = ld syntax;
    check L39() else D10();
  L25():
    goto L6(r11);
  L27():
    sym4 = ldf nchar;
    base4 = ldf nchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L29() else L30();
  L28():
    r13 = dyn base3(<lang `!=`(nchar(delim), 1)>);
    goto L8(c3, r13);
  L35():
    stop1 = ldf stop;
    check L36() else D8();
  D8():
    deopt 36 [];
  D10():
    deopt 41 [syntax1];
  L9(c11, r16):
    r18 = `!=`(r16, 1);
    any = ldf any in base;
    r19 = dyn any(r18);
    check L33() else D7();
  L29():
    delim3 = ld delim;
    check L31() else D5();
  L30():
    r15 = dyn base4(<sym delim>);
    goto L9(c3, r15);
  L36():
    r20 = dyn stop1("argument 'delim' must specify two characters");
    check L37() else D9();
  L39():
    syntax2 = force? syntax1;
    checkMissing(syntax2);
    r22 = `!=`(syntax2, "Rd");
    c16 = `as.logical`(r22);
    if c16 then L40() else L12();
  D5():
    deopt 23 [c3, delim3];
  D7():
    deopt 33 [c11, r19];
  D9():
    deopt 38 [r20];
  L12():
    goto L13();
  L13():
    sym5 = ldf `.Call`;
    base5 = ldf `.Call` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L31():
    delim4 = force? delim3;
    checkMissing(delim4);
    nchar = ldf nchar in base;
    r17 = dyn nchar(delim4, "chars", FALSE, NA_LGL);
    check L32() else D6();
  L33():
    goto L8(c11, r19);
  L37():
    goto L11();
  L40():
    stop2 = ldf stop;
    check L41() else D11();
  D6():
    deopt 29 [c3, r17];
  D11():
    deopt 46 [];
  L14(r26):
    popenv;
    return r26;
  L32():
    goto L9(c3, r17);
  L41():
    r23 = dyn stop2("only Rd syntax is currently supported");
    check L42() else D12();
  L44():
    C_delim_match = ld C_delim_match;
    check L46() else D13();
  L45():
    r25 = dyn base5(<sym C_delim_match>, <sym x>, <sym delim>);
    goto L14(r25);
  D12():
    deopt 48 [r23];
  D13():
    deopt 52 [C_delim_match];
  L42():
    goto L13();
  L46():
    C_delim_match1 = force? C_delim_match;
    checkMissing(C_delim_match1);
    x3 = ld x;
    check L47() else D14();
  D14():
    deopt 53 [C_delim_match1, x3];
  L47():
    x4 = force? x3;
    checkMissing(x4);
    delim5 = ld delim;
    check L48() else D15();
  D15():
    deopt 54 [C_delim_match1, x4, delim5];
  L48():
    delim6 = force? delim5;
    checkMissing(delim6);
    vargs = dots[x4, delim6];
    r27 = `.Call`(C_delim_match1, vargs, <missing>);
    goto L14(r27);
  }
}
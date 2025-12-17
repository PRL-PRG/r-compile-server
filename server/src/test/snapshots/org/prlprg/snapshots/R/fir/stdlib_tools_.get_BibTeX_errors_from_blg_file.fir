fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1019204350;
    st `.get_BibTeX_errors_from_blg_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1019204350(con) {
  (reg con:*) -+> V { var con:*, reg readLines:cls, reg con1:*, reg con2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg lines:*, reg lines1:V, reg nchar:cls, reg r8:V, reg is_na:cls, reg r9:V, reg any:cls, reg r10:V, reg c:L, reg iconv:cls, reg lines2:*, reg lines3:V, reg c1:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg l:*, reg c2:L, reg r15:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r17:V, reg dx3:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg r21:V, reg startsWith:cls, reg lines6:*, reg lines7:V, reg p2:p(V +), reg r23:V, reg any1:cls, reg r24:V, reg c3:L, reg c4:V, reg regexpr:cls, reg lines8:*, reg lines9:V, reg c6:L, reg lines11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg lines14:V, reg r26:V, reg lines15:*, reg lines16:V, reg length:cls, reg r27:V, reg __1:cls, reg r28:V, reg p3:p(V +), reg r30:V, reg r31:V, reg c7:L, reg c8:V, reg grep:cls, reg lines17:*, reg lines18:V, reg p4:p(V +), reg r33:V, reg really_has_errors:*, reg really_has_errors1:V, reg r34:V, reg c10:L, reg c11:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg c15:L, reg r36:V, reg pos:*, reg pos1:V, reg length1:cls, reg r37:V, reg r38:V, reg c16:L, reg c17:V, reg c19:L, reg character:cls, reg r39:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg pos2:*, reg pos3:V, reg c20:L, reg pos5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r44:V, reg r45:V, reg seq_int:cls, reg r46:V, reg lines19:*, reg lines20:V, reg c21:L, reg lines22:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind4:*, reg ind5:V, reg __3:cls, reg r47:V |
    mkenv;
    st con = con;
    readLines = ldf readLines;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      con1 = ld con;
      con2 = force? con1;
      checkMissing(con2);
      return con2;
    };
    r1 = dyn readLines[, warn](p, FALSE);
    check L16() else D1();
  D1():
    deopt 5 [r1];
  L16():
    st lines = r1;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r3):
    c = `as.logical`(r3);
    if c then L27() else L3();
  L17():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L18():
    r2 = dyn base(<lang `<-`(ind, is.na(nchar(lines, allowNA=TRUE)))>);
    goto L0(r2);
  L1(r5):
    st ind = r5;
    any = ldf any in base;
    r10 = dyn any(r5);
    check L26() else D5();
  L3():
    goto L5();
  L5():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L19():
    sym2 = ldf nchar;
    base2 = ldf nchar in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L21() else L22();
  L20():
    r4 = dyn base1(<lang nchar(lines, allowNA=TRUE)>);
    goto L1(r4);
  L27():
    iconv = ldf iconv;
    check L28() else D6();
  D5():
    deopt 24 [r10];
  D6():
    deopt 26 [];
  L2(r7):
    is_na = ldf `is.na` in base;
    r9 = dyn is_na(r7);
    check L25() else D4();
  L6(r21):
    c3 = `as.logical`(r21);
    if c3 then L7(c3) else L40();
  L21():
    lines = ld lines;
    check L23() else D2();
  L22():
    r6 = dyn base2[, allowNA](<sym lines>, TRUE);
    goto L2(r6);
  L26():
    goto L0(r10);
  L28():
    p1 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c1 = `is.object`(lines3);
      if c1 then L1() else L2(lines3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", lines3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(lines5):
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r11 = dyn __(lines5, ind1);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn iconv[, , , sub](p1, "", "", "byte");
    check L29() else D7();
  L35():
    startsWith = ldf startsWith;
    check L37() else D9();
  L36():
    r20 = dyn base3(<lang startsWith(lines, "---")>);
    goto L6(r20);
  D2():
    deopt 13 [lines];
  D4():
    deopt 21 [r9];
  D7():
    deopt 32 [r13];
  D9():
    deopt 43 [];
  L7(c4):
    st really_has_errors = c4;
    grep = ldf grep;
    check L44() else D14();
  L23():
    lines1 = force? lines;
    checkMissing(lines1);
    nchar = ldf nchar in base;
    r8 = dyn nchar(lines1, "chars", TRUE, NA_LGL);
    check L24() else D3();
  L25():
    goto L1(r9);
  L29():
    l = ld lines;
    c2 = `is.object`(l);
    if c2 then L30() else L31(r13, l);
  L37():
    p2 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r23 = dyn startsWith(p2, "---");
    check L38() else D10();
  L40():
    regexpr = ldf regexpr;
    check L41() else D12();
  D3():
    deopt 19 [r8];
  D10():
    deopt 46 [r23];
  D12():
    deopt 50 [c3];
  D14():
    deopt 59 [];
  L4(r17, dx3):
    st lines = dx3;
    goto L5();
  L24():
    goto L2(r8);
  L30():
    dr2 = tryDispatchBuiltin.0("[<-", l, r13);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(r13, dr2);
  L31(r15, l2):
    ind2 = ld ind;
    check L33() else D8();
  L38():
    any1 = ldf any in base;
    r24 = dyn any1(r23);
    check L39() else D11();
  L41():
    p3 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      c6 = `is.object`(lines9);
      if c6 then L2() else L3(lines9);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[", lines9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(lines11):
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(lines14, r26):
      __1 = ldf `[` in base;
      r28 = dyn __1(lines14, r26);
      goto L0(r28);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      lines15 = ld lines;
      lines16 = force? lines15;
      checkMissing(lines16);
      length = ldf length in base;
      r27 = dyn length(lines16);
      goto L1(lines11, r27);
    L6():
      r25 = dyn base4(<sym lines>);
      goto L1(lines11, r25);
    };
    r30 = dyn regexpr("There (was|were) ([0123456789]+) error messages?", p3);
    check L42() else D13();
  L44():
    p4 = prom<V +>{
      lines17 = ld lines;
      lines18 = force? lines17;
      checkMissing(lines18);
      return lines18;
    };
    r33 = dyn grep("^(Warning|You|\\(There)", p4);
    check L45() else D15();
  D8():
    deopt 34 [r15, l2, r13, ind2];
  D11():
    deopt 48 [r24];
  D13():
    deopt 53 [c3, r30];
  D15():
    deopt 62 [r33];
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(r13, dx2);
  L33():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r18 = dyn ___(l2, r13, ind3);
    goto L4(r15, r18);
  L39():
    goto L6(r24);
  L42():
    r31 = `>`(r30, -1);
    c7 = `as.logical`(r31);
    c8 = `||`(c3, c7);
    goto L7(c8);
  L45():
    st pos = r33;
    really_has_errors = ld really_has_errors;
    check L46() else D16();
  D16():
    deopt 64 [really_has_errors];
  L46():
    really_has_errors1 = force? really_has_errors;
    checkMissing(really_has_errors1);
    r34 = `!`(really_has_errors1);
    c10 = `as.logical`(r34);
    if c10 then L8(c10) else L47();
  L8(c11):
    c19 = `as.logical`(c11);
    if c19 then L53() else L10();
  L47():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L9(c15, r36):
    r38 = `!`(r36);
    c16 = `as.logical`(r38);
    c17 = `||`(c15, c16);
    goto L8(c17);
  L10():
    sym6 = ldf `seq.int`;
    base6 = ldf `seq.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L48():
    pos = ld pos;
    check L50() else D17();
  L49():
    r35 = dyn base5(<sym pos>);
    goto L9(c10, r35);
  L53():
    character = ldf character;
    check L54() else D19();
  D17():
    deopt 69 [c10, pos];
  D19():
    deopt 76 [];
  L12(r43):
    st ind = r43;
    lines19 = ld lines;
    check L65() else D23();
  L50():
    pos1 = force? pos;
    checkMissing(pos1);
    length1 = ldf length in base;
    r37 = dyn length1(pos1);
    check L51() else D18();
  L54():
    r39 = dyn character();
    check L55() else D20();
  L58():
    pos2 = ld pos;
    check L60() else D21();
  L59():
    r42 = dyn base6[from, `length.out`](3, <lang `-`(`[`(pos, 1), 3)>);
    goto L12(r42);
  D18():
    deopt 72 [c10, r37];
  D20():
    deopt 77 [r39];
  D21():
    deopt 85 [pos2];
  D23():
    deopt 96 [lines19];
  L51():
    goto L9(c10, r37);
  L55():
    popenv;
    return r39;
  L60():
    pos3 = force? pos2;
    checkMissing(pos3);
    c20 = `is.object`(pos3);
    if c20 then L61() else L62(pos3);
  L65():
    lines20 = force? lines19;
    checkMissing(lines20);
    c21 = `is.object`(lines20);
    if c21 then L66() else L67(lines20);
  L13(dx7):
    r45 = `-`(dx7, 3);
    seq_int = ldf `seq.int` in base;
    r46 = dyn seq_int(3, r45);
    check L64() else D22();
  L14(dx9):
    popenv;
    return dx9;
  L61():
    dr6 = tryDispatchBuiltin.1("[", pos3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62(dr6);
  L62(pos5):
    __2 = ldf `[` in base;
    r44 = dyn __2(pos5, 1);
    goto L13(r44);
  L66():
    dr8 = tryDispatchBuiltin.1("[", lines20);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L68() else L67(dr8);
  L67(lines22):
    ind4 = ld ind;
    check L69() else D24();
  D22():
    deopt 94 [r46];
  D24():
    deopt 98 [lines22, ind4];
  L63():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L13(dx6);
  L64():
    goto L12(r46);
  L68():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(dx8);
  L69():
    ind5 = force? ind4;
    __3 = ldf `[` in base;
    r47 = dyn __3(lines22, ind5);
    goto L14(r47);
  }
}
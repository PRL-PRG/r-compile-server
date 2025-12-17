fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg ftest:cls, reg r2:V, reg ftest1:cls, reg r3:V, reg ftest2:cls, reg r4:V, reg ftest3:cls, reg r5:V, reg ftest4:cls, reg r6:V |
    mkenv;
    r = clos inner3672943467;
    st hasArg = r;
    r1 = clos inner2911343005;
    st ftest = r1;
    ftest = ldf ftest;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r2 = dyn ftest(1.0);
    check L1() else D1();
  D1():
    deopt 9 [r2];
  L1():
    ftest1 = ldf ftest;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    r3 = dyn ftest1(1.0, 2.0);
    check L3() else D3();
  D3():
    deopt 14 [r3];
  L3():
    ftest2 = ldf ftest;
    check L4() else D4();
  D4():
    deopt 16 [];
  L4():
    r4 = dyn ftest2[y2](2.0);
    check L5() else D5();
  D5():
    deopt 19 [r4];
  L5():
    ftest3 = ldf ftest;
    check L6() else D6();
  D6():
    deopt 21 [];
  L6():
    r5 = dyn ftest3[y](2.0);
    check L7() else D7();
  D7():
    deopt 24 [r5];
  L7():
    ftest4 = ldf ftest;
    check L8() else D8();
  D8():
    deopt 26 [];
  L8():
    r6 = dyn ftest4[y2, x](2.0, 1.0);
    check L9() else D9();
  D9():
    deopt 31 [r6];
  L9():
    popenv;
    return r6;
  }
}
fun inner3672943467(name) {
  (reg name:*) -+> V { var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg substitute:cls, reg r4:V, reg as_character:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg formals:cls, reg sys_function:cls, reg sys_parent:cls, reg r8:V, reg p:p(V +), reg r10:V, reg p1:p(V +), reg r12:V, reg names:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg aname:*, reg aname1:V, reg fnames:*, reg fnames1:V, reg match:cls, reg r18:V, reg is_na:cls, reg r19:V, reg c:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg fnames2:*, reg fnames3:V, reg match1:cls, reg r24:V, reg is_na1:cls, reg r25:V, reg c1:L, reg eval:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r26:V, reg r27:V, reg quote:cls, reg r28:V, reg p2:p(V +), reg sys_parent1:cls, reg r30:V, reg p3:p(V +), reg r32:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg r34:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r35:V, reg r36:V, reg aname2:*, reg aname3:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r37:V, reg r38:V, reg dotsCall:*, reg dotsCall1:V, reg names1:cls, reg r39:V, reg match2:cls, reg r40:V, reg is_na2:cls, reg r41:V, reg r42:V, reg eval1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r43:V, reg r44:V, reg substitute1:cls, reg r45:V, reg p4:p(V +), reg sys_frame:cls, reg sys_parent2:cls, reg r47:V, reg p5:p(V +), reg r49:V, reg p6:p(V +), reg r51:V |
    mkenv;
    st name = name;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r1):
    st aname = r1;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L12():
    sym1 = ldf substitute;
    base1 = ldf substitute in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r = dyn base(<lang substitute(name)>);
    goto L0(r);
  L1(r3):
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(r3);
    check L16() else D0();
  L2(r7):
    st fnames = r7;
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L14():
    substitute = ldf substitute in base;
    r4 = dyn substitute(<sym name>);
    goto L1(r4);
  L15():
    r2 = dyn base1(<sym name>);
    goto L1(r2);
  L17():
    formals = ldf formals;
    check L19() else D1();
  L18():
    r6 = dyn base2(<lang formals(sys.function(sys.parent()))>);
    goto L2(r6);
  D0():
    deopt 6 [r5];
  D1():
    deopt 11 [];
  L3(r15):
    c = `as.logical`(r15);
    if c then L30() else L5();
  L16():
    goto L0(r5);
  L19():
    p1 = prom<V +>{
      sys_function = ldf `sys.function`;
      p = prom<V +>{
        sys_parent = ldf `sys.parent`;
        r8 = dyn sys_parent();
        return r8;
      };
      r10 = dyn sys_function(p);
      return r10;
    };
    r12 = dyn formals(p1);
    check L20() else D2();
  L22():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L24() else L25();
  L23():
    r14 = dyn base3(<lang match(aname, fnames)>);
    goto L3(r14);
  D2():
    deopt 13 [r12];
  L4(r17):
    is_na = ldf `is.na` in base;
    r19 = dyn is_na(r17);
    check L29() else D7();
  L5():
    eval1 = ldf eval;
    check L54() else D18();
  L20():
    names = ldf names in base;
    r13 = dyn names(r12);
    check L21() else D3();
  L24():
    aname = ld aname;
    check L26() else D4();
  L25():
    r16 = dyn base4(<sym aname>, <sym fnames>);
    goto L4(r16);
  L30():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L31() else L32();
  D3():
    deopt 15 [r13];
  D4():
    deopt 21 [aname];
  D7():
    deopt 30 [r19];
  D18():
    deopt 72 [];
  L6(r21):
    c1 = `as.logical`(r21);
    if c1 then L38() else L8();
  L21():
    goto L2(r13);
  L26():
    aname1 = force? aname;
    checkMissing(aname1);
    fnames = ld fnames;
    check L27() else D5();
  L29():
    goto L3(r19);
  L31():
    sym6 = ldf match;
    base6 = ldf match in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L33() else L34();
  L32():
    r20 = dyn base5(<lang match("...", fnames)>);
    goto L6(r20);
  L54():
    p4 = prom<V +>{
      sym11 = ldf substitute;
      base11 = ldf substitute in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      substitute1 = ldf substitute in base;
      r45 = dyn substitute1(<lang `!`(missing(name))>);
      goto L0(r45);
    L2():
      r43 = dyn base11(<lang `!`(missing(name))>);
      goto L0(r43);
    };
    p6 = prom<V +>{
      sys_frame = ldf `sys.frame`;
      p5 = prom<V +>{
        sys_parent2 = ldf `sys.parent`;
        r47 = dyn sys_parent2();
        return r47;
      };
      r49 = dyn sys_frame(p5);
      return r49;
    };
    r51 = dyn eval1(p4, p6);
    check L55() else D19();
  D5():
    deopt 23 [fnames];
  D19():
    deopt 75 [r51];
  L7(r23):
    is_na1 = ldf `is.na` in base;
    r25 = dyn is_na1(r23);
    check L37() else D10();
  L8():
    eval = ldf eval;
    check L40() else D11();
  L27():
    fnames1 = force? fnames;
    checkMissing(fnames1);
    match = ldf match in base;
    r18 = dyn match(aname1, fnames1, NA_INT, NULL);
    check L28() else D6();
  L33():
    fnames2 = ld fnames;
    check L35() else D8();
  L34():
    r22 = dyn base6("...", <sym fnames>);
    goto L7(r22);
  L38():
    popenv;
    return FALSE;
  L55():
    popenv;
    return r51;
  D6():
    deopt 28 [r18];
  D8():
    deopt 36 [fnames2];
  D10():
    deopt 43 [r25];
  D11():
    deopt 47 [];
  L28():
    goto L4(r18);
  L35():
    fnames3 = force? fnames2;
    checkMissing(fnames3);
    match1 = ldf match in base;
    r24 = dyn match1("...", fnames3, NA_INT, NULL);
    check L36() else D9();
  L37():
    goto L6(r25);
  L40():
    p2 = prom<V +>{
      sym7 = ldf quote;
      base7 = ldf quote in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      quote = ldf quote in base;
      r28 = dyn quote(<lang substitute(list(...))>);
      goto L0(r28);
    L2():
      r26 = dyn base7(<lang substitute(list(...))>);
      goto L0(r26);
    };
    p3 = prom<V +>{
      sys_parent1 = ldf `sys.parent`;
      r30 = dyn sys_parent1();
      return r30;
    };
    r32 = dyn eval(p2, p3);
    check L41() else D12();
  D9():
    deopt 41 [r24];
  D12():
    deopt 50 [r32];
  L36():
    goto L7(r24);
  L41():
    st dotsCall = r32;
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L42() else L43();
  L9(r34):
    r42 = `!`(r34);
    popenv;
    return r42;
  L42():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L44() else L45();
  L43():
    r33 = dyn base8(<lang match(aname, names(dotsCall))>);
    goto L9(r33);
  L10(r36):
    is_na2 = ldf `is.na` in base;
    r41 = dyn is_na2(r36);
    check L52() else D17();
  L44():
    aname2 = ld aname;
    check L46() else D13();
  L45():
    r35 = dyn base9(<sym aname>, <lang names(dotsCall)>);
    goto L10(r35);
  D13():
    deopt 56 [aname2];
  D17():
    deopt 69 [r41];
  L46():
    aname3 = force? aname2;
    checkMissing(aname3);
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L47() else L48();
  L52():
    goto L9(r41);
  L11(r38):
    match2 = ldf match in base;
    r40 = dyn match2(aname3, r38, NA_INT, NULL);
    check L51() else D16();
  L47():
    dotsCall = ld dotsCall;
    check L49() else D14();
  L48():
    r37 = dyn base10(<sym dotsCall>);
    goto L11(r37);
  D14():
    deopt 60 [dotsCall];
  D16():
    deopt 67 [r40];
  L49():
    dotsCall1 = force? dotsCall;
    checkMissing(dotsCall1);
    names1 = ldf names in base;
    r39 = dyn names1(dotsCall1);
    check L50() else D15();
  L51():
    goto L10(r40);
  D15():
    deopt 63 [r39];
  L50():
    goto L11(r39);
  }
}
fun inner2911343005(x1, `...`) {
  (reg x1:*, reg ddd:dots) -+> V { var x1:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg hasArg:cls, reg x2:*, reg x3:V, reg p:p(V +), reg r3:V, reg hasArg1:cls, reg r4:V, reg c:cls, reg r5:V |
    mkenv;
    st x1 = x1;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    hasArg = ldf hasArg;
    check L3() else D0();
  L2():
    r = dyn base(<lang hasArg(x1)>, <lang hasArg("y2")>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      x2 = ld x1;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    r3 = dyn hasArg(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    hasArg1 = ldf hasArg;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    r4 = dyn hasArg1("y2");
    check L6() else D3();
  D3():
    deopt 9 [r4];
  L6():
    c = ldf c in base;
    r5 = dyn c(r3, r4);
    check L7() else D4();
  D4():
    deopt 11 [r5];
  L7():
    goto L0(r5);
  }
}
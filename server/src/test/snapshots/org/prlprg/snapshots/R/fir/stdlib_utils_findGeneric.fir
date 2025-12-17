fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner394739023;
    st findGeneric = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner394739023(fname, envir, warnS4only) {
  (reg fname:*, reg envir:*, reg warnS4only:*) -+> V { var fname:*, var envir:*, var warnS4only:*, reg warnS4only_isMissing:L, reg warnS4only_orDefault:*, reg exists:cls, reg fname1:*, reg fname2:V, reg p:p(V +), reg envir1:*, reg envir2:V, reg p1:p(V +), reg r2:V, reg r3:V, reg c:L, reg get:cls, reg fname3:*, reg fname4:V, reg p2:p(V +), reg envir3:*, reg envir4:V, reg p3:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg _isMethodsDispatchOn:cls, reg r11:V, reg c1:L, reg c3:V, reg __:cls, reg r12:V, reg r13:cls, reg f:*, reg f1:V, reg p4:p(V +), reg r15:V, reg c4:L, reg c5:V, reg c7:L, reg __1:cls, reg r16:V, reg r17:cls, reg f2:*, reg f3:V, reg p5:p(V +), reg r19:V, reg as_list:cls, reg fMethsEnv:*, reg fMethsEnv1:V, reg p6:p(V +), reg r21:V, reg meths:*, reg meths1:V, reg c8:L, reg meths3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg grep:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg r23:V, reg meths4:*, reg meths5:V, reg names:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg __2:cls, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg vapply:cls, reg r30:*, reg r31:V, reg p8:p(V +), reg __3:cls, reg r33:V, reg p9:p(V +), reg logical:cls, reg r35:V, reg p10:p(V +), reg r37:V, reg any:cls, reg r38:V, reg c9:L, reg __4:cls, reg r39:V, reg r40:V, reg warnS4only1:*, reg warnS4only2:V, reg c10:L, reg warning:cls, reg gettextf:cls, reg fname5:*, reg fname6:V, reg p11:p(V +), reg r42:V, reg p12:p(V +), reg r44:V, reg r46:cls, reg r47:cls, reg r48:cls, reg isUME:cls, reg body:cls, reg f4:*, reg f5:V, reg p13:p(V +), reg r50:V, reg p14:p(V +), reg r52:V |
    mkenv;
    st fname = fname;
    st envir = envir;
    warnS4only_isMissing = missing.0(warnS4only);
    if warnS4only_isMissing then L0(TRUE) else L0(warnS4only);
  L0(warnS4only_orDefault):
    st warnS4only = warnS4only_orDefault;
    exists = ldf exists;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      fname1 = ld fname;
      fname2 = force? fname1;
      checkMissing(fname2);
      return fname2;
    };
    p1 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    r2 = dyn exists[, mode, envir](p, "function", p1);
    check L13() else D1();
  D1():
    deopt 7 [r2];
  L13():
    r3 = `!`(r2);
    c = `as.logical`(r3);
    if c then L14() else L1();
  L1():
    get = ldf get;
    check L17() else D2();
  L14():
    popenv;
    return "";
  D2():
    deopt 15 [];
  L17():
    p2 = prom<V +>{
      fname3 = ld fname;
      fname4 = force? fname3;
      checkMissing(fname4);
      return fname4;
    };
    p3 = prom<V +>{
      envir3 = ld envir;
      envir4 = force? envir3;
      checkMissing(envir4);
      return envir4;
    };
    r8 = dyn get[, mode, envir](p2, "function", p3);
    check L18() else D3();
  D3():
    deopt 21 [r8];
  L18():
    st f = r8;
    sym = ldf `.isMethodsDispatchOn`;
    base = ldf `.isMethodsDispatchOn` in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L3(r10):
    c1 = `as.logical`(r10);
    if c1 then L22() else L4(c1);
  L19():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r11 = dyn _isMethodsDispatchOn();
    check L21() else D4();
  L20():
    r9 = dyn base();
    goto L3(r9);
  D4():
    deopt 26 [r11];
  L4(c3):
    c7 = `as.logical`(c3);
    if c7 then L27() else L5();
  L21():
    goto L3(r11);
  L22():
    __ = ldf `::`;
    check L23() else D5();
  D5():
    deopt 28 [c1];
  L5():
    goto L11();
  L11():
    r46 = clos inner3708401697;
    st isUMEbrace = r46;
    r47 = clos inner3708401697;
    st isUMEif = r47;
    r48 = clos inner3708401697;
    st isUME = r48;
    isUME = ldf isUME;
    check L52() else D22();
  L23():
    r12 = dyn __("methods", "is");
    check L24() else D6();
  L27():
    __1 = ldf `::`;
    check L28() else D8();
  D6():
    deopt 31 [c1, r12];
  D8():
    deopt 38 [];
  D22():
    deopt 99 [];
  L24():
    checkFun.0(r12);
    r13 = r12 as cls;
    p4 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r15 = dyn r13(p4, "genericFunction");
    check L25() else D7();
  L28():
    r16 = dyn __1("methods", "getMethodsForDispatch");
    check L29() else D9();
  L52():
    p14 = prom<V +>{
      body = ldf body;
      p13 = prom<V +>{
        f4 = ld f;
        f5 = force? f4;
        checkMissing(f5);
        return f5;
      };
      r50 = dyn body(p13);
      return r50;
    };
    r52 = dyn isUME(p14);
    check L53() else D23();
  D7():
    deopt 35 [c1, r15];
  D9():
    deopt 41 [r16];
  D23():
    deopt 101 [r52];
  L25():
    c4 = `as.logical`(r15);
    c5 = `&&`(c1, c4);
    goto L4(c5);
  L29():
    checkFun.0(r16);
    r17 = r16 as cls;
    p5 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r19 = dyn r17(p5);
    check L30() else D10();
  L53():
    popenv;
    return r52;
  D10():
    deopt 44 [r19];
  L30():
    st fMethsEnv = r19;
    as_list = ldf `as.list`;
    check L31() else D11();
  D11():
    deopt 47 [];
  L31():
    p6 = prom<V +>{
      fMethsEnv = ld fMethsEnv;
      fMethsEnv1 = force? fMethsEnv;
      checkMissing(fMethsEnv1);
      return fMethsEnv1;
    };
    r21 = dyn as_list[, `all.names`](p6, TRUE);
    check L32() else D12();
  D12():
    deopt 51 [r21];
  L32():
    st meths = r21;
    meths = ld meths;
    check L33() else D13();
  D13():
    deopt 53 [meths];
  L33():
    meths1 = force? meths;
    checkMissing(meths1);
    c8 = `is.object`(meths1);
    if c8 then L34() else L35(meths1);
  L6(dx1):
    st r = dx1;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L34():
    dr = tryDispatchBuiltin.1("[", meths1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(meths3):
    grep = ldf grep;
    check L37() else D14();
  D14():
    deopt 56 [meths3];
  L7(r29):
    c9 = `as.logical`(r29);
    if c9 then L44() else L8();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L37():
    p7 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      meths4 = ld meths;
      meths5 = force? meths4;
      checkMissing(meths5);
      names = ldf names in base;
      r24 = dyn names(meths5);
      goto L0(r24);
    L2():
      r22 = dyn base1(<sym meths>);
      goto L0(r22);
    };
    r26 = dyn grep("^ANY\\b", p7);
    check L38() else D15();
  L39():
    vapply = ldf vapply;
    check L41() else D16();
  L40():
    r28 = dyn base2(<lang `<-`(ddm, vapply(r, `::`(methods, is), logical(1), "derivedDefaultMethod"))>);
    goto L7(r28);
  D15():
    deopt 59 [meths3, r26];
  D16():
    deopt 65 [];
  L8():
    warnS4only1 = ld warnS4only;
    check L46() else D19();
  L9(r40):
    goto L11();
  L38():
    __2 = ldf `[` in base;
    r27 = dyn __2(meths3, r26);
    goto L6(r27);
  L41():
    p8 = prom<V +>{
      r30 = ld r;
      r31 = force? r30;
      checkMissing(r31);
      return r31;
    };
    p9 = prom<V +>{
      __3 = ldf `::`;
      r33 = dyn __3("methods", "is");
      return r33;
    };
    p10 = prom<V +>{
      logical = ldf logical;
      r35 = dyn logical(1);
      return r35;
    };
    r37 = dyn vapply(p8, p9, p10, "derivedDefaultMethod");
    check L42() else D17();
  L44():
    __4 = ldf `@` in base;
    r39 = dyn __4(<lang `[[`(`[`(r, ddm), 1.0)>, <sym .Data>);
    st f = r39;
    goto L9(r39);
  D17():
    deopt 70 [r37];
  D19():
    deopt 77 [warnS4only1];
  L42():
    st ddm = r37;
    any = ldf any in base;
    r38 = dyn any(r37);
    check L43() else D18();
  L46():
    warnS4only2 = force? warnS4only1;
    checkMissing(warnS4only2);
    c10 = `as.logical`(warnS4only2);
    if c10 then L47() else L10();
  D18():
    deopt 73 [r38];
  L10():
    goto L9(NULL);
  L43():
    goto L7(r38);
  L47():
    warning = ldf warning;
    check L48() else D20();
  D20():
    deopt 80 [];
  L48():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        fname5 = ld fname;
        fname6 = force? fname5;
        checkMissing(fname6);
        return fname6;
      };
      r42 = dyn gettextf("'%s' is a formal generic function; S3 methods will not likely be found", p11);
      return r42;
    };
    r44 = dyn warning[, domain](p12, NA_LGL);
    check L49() else D21();
  D21():
    deopt 84 [r44];
  L49():
    goto L9(r44);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg as_list:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg i7:I, reg r4:V, reg isUME:cls, reg ee:*, reg ee1:V, reg p1:p(V +), reg r6:V, reg nzchar:cls, reg r7:V, reg c2:L, reg res:*, reg res1:V |
    mkenv;
    st e = e;
    as_list = ldf `as.list`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      c = `is.object`(e2);
      if c then L1() else L2(e2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", e2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e4):
      __ = ldf `[` in base;
      r = dyn __(e4, -1);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn as_list(p);
    check L6() else D1();
  D1():
    deopt 3 [r2];
  L6():
    s = toForSeq(r2);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L7() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st ee = x;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L7():
    popenv;
    return "";
  L1(i7, r4):
    c2 = `as.logical`(r4);
    if c2 then L13() else L2();
  L8():
    isUME = ldf isUME;
    check L10() else D2();
  L9():
    r3 = dyn base(<lang `<-`(res, isUME(ee))>);
    goto L1(i2, r3);
  D2():
    deopt 7 [i2];
  L2():
    goto L0(i7);
  L10():
    p1 = prom<V +>{
      ee = ld ee;
      ee1 = force? ee;
      checkMissing(ee1);
      return ee1;
    };
    r6 = dyn isUME(p1);
    check L11() else D3();
  L13():
    res = ld res;
    check L14() else D5();
  D3():
    deopt 9 [i2, r6];
  D5():
    deopt 13 [i7, res];
  L11():
    st res = r6;
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(r6);
    check L12() else D4();
  L14():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D4():
    deopt 12 [i2, r7];
  L12():
    goto L1(i2, r7);
  }
}
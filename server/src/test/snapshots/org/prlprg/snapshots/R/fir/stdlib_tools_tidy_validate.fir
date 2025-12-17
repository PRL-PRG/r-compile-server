fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner311297263;
    st tidy_validate = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner311297263(f, tidy) {
  (reg f:*, reg tidy:*) -+> V { var f:*, var tidy:*, reg tidy_isMissing:L, reg tidy_orDefault:*, reg suppressWarnings:cls, reg system2:cls, reg tidy1:*, reg tidy2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg Sys_getenv:cls, reg r3:V, reg f1:*, reg f2:V, reg c:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg z:*, reg z1:V, reg length:cls, reg r11:V, reg r12:V, reg c1:L, reg trimws:cls, reg z2:*, reg z3:V, reg p3:p(V +), reg r16:V, reg readLines:cls, reg f3:*, reg f4:V, reg p4:p(V +), reg r18:V, reg regmatches:cls, reg z4:*, reg z5:V, reg p5:p(V +), reg regexec:cls, reg z6:*, reg z7:V, reg p6:p(V +), reg r21:V, reg p7:p(V +), reg r23:V, reg unique:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p8:p(V +), reg m:*, reg m1:V, reg c2:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg lengths:cls, reg m4:*, reg m5:V, reg p9:p(V +), reg r26:V, reg r27:V, reg __:cls, reg r28:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg r32:V, reg m6:*, reg m7:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r33:V, reg as_Rconcordance:cls, reg grep:cls, reg s:*, reg s1:V, reg p12:p(V +), reg r35:V, reg p13:p(V +), reg r37:V, reg cbind:cls, reg p14:*, reg p15:V, reg p16:p(V +), reg m10:*, reg m11:V, reg c4:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r39:V, reg p17:p(V +), reg m14:*, reg m15:V, reg c5:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r41:V, reg p18:p(V +), reg s2:*, reg s3:V, reg c6:L, reg s5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r43:V, reg s8:V, reg r44:V, reg p19:*, reg p20:V, reg as_numeric:cls, reg r45:V, reg __4:cls, reg r46:V, reg p21:p(V +), reg r48:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r49:V, reg r50:V, reg concordance:*, reg concordance1:V, reg c7:V, reg r51:V, reg c8:L, reg cbind1:cls, reg result:*, reg result1:V, reg p22:p(V +), reg matchConcordance:cls, reg p23:*, reg p24:V, reg p25:p(V +), reg concordance2:*, reg concordance3:V, reg p26:p(V +), reg r55:V, reg p27:p(V +), reg r57:V, reg result2:*, reg result3:V |
    mkenv;
    st f = f;
    tidy_isMissing = missing.0(tidy);
    if tidy_isMissing then L0("tidy") else L0(tidy);
  L0(tidy_orDefault):
    st tidy = tidy_orDefault;
    suppressWarnings = ldf suppressWarnings;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    p2 = prom<V +>{
      system2 = ldf system2;
      p = prom<V +>{
        tidy1 = ld tidy;
        tidy2 = force? tidy1;
        checkMissing(tidy2);
        return tidy2;
      };
      p1 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r2):
        return r2;
      L1():
        Sys_getenv = ldf `Sys.getenv`;
        r3 = dyn Sys_getenv("_R_CHECK_RD_VALIDATE_RD2HTML_OPTS_", "");
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        c = ldf c in base;
        r4 = dyn c("-language en", "-qe", r3, f2);
        goto L0(r4);
      L2():
        r1 = dyn base("-language en", "-qe", <lang Sys.getenv("_R_CHECK_RD_VALIDATE_RD2HTML_OPTS_", "")>, <sym f>);
        goto L0(r1);
      };
      r6 = dyn system2[, , stdout, stderr](p, p1, TRUE, TRUE);
      return r6;
    };
    r8 = dyn suppressWarnings(p2);
    check L9() else D1();
  D1():
    deopt 3 [r8];
  L9():
    st z = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L1(r10):
    r12 = `!`(r10);
    c1 = `as.logical`(r12);
    if c1 then L14() else L2();
  L10():
    z = ld z;
    check L12() else D2();
  L11():
    r9 = dyn base1(<sym z>);
    goto L1(r9);
  D2():
    deopt 7 [z];
  L2():
    trimws = ldf trimws;
    check L17() else D4();
  L12():
    z1 = force? z;
    checkMissing(z1);
    length = ldf length in base;
    r11 = dyn length(z1);
    check L13() else D3();
  L14():
    popenv;
    return NULL;
  D3():
    deopt 10 [r11];
  D4():
    deopt 18 [];
  L13():
    goto L1(r11);
  L17():
    p3 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      return z3;
    };
    r16 = dyn trimws[, which](p3, "right");
    check L18() else D5();
  D5():
    deopt 22 [r16];
  L18():
    st z = r16;
    readLines = ldf readLines;
    check L19() else D6();
  D6():
    deopt 25 [];
  L19():
    p4 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r18 = dyn readLines[, warn](p4, FALSE);
    check L20() else D7();
  D7():
    deopt 29 [r18];
  L20():
    st s = r18;
    regmatches = ldf regmatches;
    check L21() else D8();
  D8():
    deopt 32 [];
  L21():
    p5 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    p7 = prom<V +>{
      regexec = ldf regexec;
      p6 = prom<V +>{
        z6 = ld z;
        z7 = force? z6;
        checkMissing(z7);
        return z7;
      };
      r21 = dyn regexec("^line ([0-9]+) column ([0-9]+) - (.+)$", p6);
      return r21;
    };
    r23 = dyn regmatches(p5, p7);
    check L22() else D9();
  D9():
    deopt 35 [r23];
  L22():
    st m = r23;
    unique = ldf unique;
    check L23() else D10();
  D10():
    deopt 38 [];
  L23():
    p11 = prom<V +>{
      do_call = ldf `do.call`;
      p8 = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p10 = prom<V +>{
        m = ld m;
        m1 = force? m;
        checkMissing(m1);
        c2 = `is.object`(m1);
        if c2 then L1() else L2(m1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", m1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(m3):
        lengths = ldf lengths;
        p9 = prom<V +>{
          m4 = ld m;
          m5 = force? m4;
          checkMissing(m5);
          return m5;
        };
        r26 = dyn lengths(p9);
        r27 = `==`(r26, 4);
        __ = ldf `[` in base;
        r28 = dyn __(m3, r27);
        goto L0(r28);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r30 = dyn do_call(p8, p10);
      return r30;
    };
    r32 = dyn unique(p11);
    check L24() else D11();
  D11():
    deopt 40 [r32];
  L24():
    st m = r32;
    m6 = ld m;
    check L25() else D12();
  D12():
    deopt 42 [m6];
  L25():
    m7 = force? m6;
    checkMissing(m7);
    c3 = `is.object`(m7);
    if c3 then L26() else L27();
  L4(dx3):
    st p = dx3;
    as_Rconcordance = ldf `as.Rconcordance`;
    check L29() else D13();
  L26():
    dr2 = tryDispatchBuiltin.1("[", m7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27();
  L27():
    __1 = ldf `[` in base;
    r33 = dyn __1(m7, <missing>, 2);
    goto L4(r33);
  D13():
    deopt 50 [];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L29():
    p13 = prom<V +>{
      grep = ldf grep;
      p12 = prom<V +>{
        s = ld s;
        s1 = force? s;
        checkMissing(s1);
        return s1;
      };
      r35 = dyn grep[, , value]("^<!-- concordance:", p12, TRUE);
      return r35;
    };
    r37 = dyn as_Rconcordance(p13);
    check L30() else D14();
  D14():
    deopt 52 [r37];
  L30():
    st concordance = r37;
    cbind = ldf cbind;
    check L31() else D15();
  D15():
    deopt 55 [];
  L31():
    p16 = prom<V +>{
      p14 = ld p;
      p15 = force? p14;
      checkMissing(p15);
      return p15;
    };
    p17 = prom<V +>{
      m10 = ld m;
      m11 = force? m10;
      checkMissing(m11);
      c4 = `is.object`(m11);
      if c4 then L1() else L2();
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", m11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r39 = dyn __2(m11, <missing>, 3);
      goto L0(r39);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p18 = prom<V +>{
      m14 = ld m;
      m15 = force? m14;
      checkMissing(m15);
      c5 = `is.object`(m15);
      if c5 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", m15);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r41 = dyn __3(m15, <missing>, 4);
      goto L0(r41);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p21 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      c6 = `is.object`(s3);
      if c6 then L2() else L3(s3);
    L0(dx9):
      return dx9;
    L2():
      dr8 = tryDispatchBuiltin.1("[", s3);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L4() else L3(dr8);
    L3(s5):
      sym2 = ldf `as.numeric`;
      base2 = ldf `as.numeric` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L1(s8, r44):
      __4 = ldf `[` in base;
      r46 = dyn __4(s8, r44);
      goto L0(r46);
    L4():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    L5():
      p19 = ld p;
      p20 = force? p19;
      checkMissing(p20);
      as_numeric = ldf `as.numeric` in base;
      r45 = dyn as_numeric(p20);
      goto L1(s5, r45);
    L6():
      r43 = dyn base2(<sym p>);
      goto L1(s5, r43);
    };
    r48 = dyn cbind[line, col, msg, txt](p16, p17, p18, p21);
    check L32() else D16();
  D16():
    deopt 64 [r48];
  L32():
    st result = r48;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L5(r50):
    r51 = `!`(r50);
    c8 = `as.logical`(r51);
    if c8 then L36() else L6();
  L33():
    concordance = ld concordance;
    check L35() else D17();
  L34():
    r49 = dyn base3(<sym concordance>);
    goto L5(r49);
  D17():
    deopt 67 [concordance];
  L6():
    goto L7();
  L7():
    result2 = ld result;
    check L40() else D20();
  L35():
    concordance1 = force? concordance;
    checkMissing(concordance1);
    c7 = `==`(concordance1, NULL);
    goto L5(c7);
  L36():
    cbind1 = ldf cbind;
    check L37() else D18();
  D18():
    deopt 72 [];
  D20():
    deopt 79 [result2];
  L37():
    p22 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    p27 = prom<V +>{
      matchConcordance = ldf matchConcordance;
      p25 = prom<V +>{
        p23 = ld p;
        p24 = force? p23;
        checkMissing(p24);
        return p24;
      };
      p26 = prom<V +>{
        concordance2 = ld concordance;
        concordance3 = force? concordance2;
        checkMissing(concordance3);
        return concordance3;
      };
      r55 = dyn matchConcordance[, concordance](p25, p26);
      return r55;
    };
    r57 = dyn cbind1(p22, p27);
    check L38() else D19();
  L40():
    result3 = force? result2;
    checkMissing(result3);
    popenv;
    return result3;
  D19():
    deopt 75 [r57];
  L38():
    st result = r57;
    goto L7();
  }
}
fun main() {
  () -+> V { reg r:cls, reg exists:cls, reg r1:V, reg r2:V, reg c:L, reg r3:cls, reg search:cls, reg r5:V, reg exists1:cls, reg r6:V, reg exists2:cls, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg ls:*, reg ls1:V, reg get0:cls, reg r10:V, reg identical:cls, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg get1:cls, reg r14:V, reg identical1:cls, reg r15:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg ls2:*, reg ls3:V, reg get2:cls, reg r18:V, reg identical2:cls, reg r19:V, reg p:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg get3:cls, reg r23:V, reg c1:V, reg p1:p(V +), reg r25:V |
    mkenv;
    r = clos `inner-1689496487`;
    st exists = r;
    exists = ldf exists;
    check L4() else D0();
  D0():
    deopt 4 [];
  L4():
    r1 = dyn exists[, mode]("some.fun", "function");
    check L5() else D1();
  D1():
    deopt 8 [r1];
  L5():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L6() else L0();
  L0():
    goto L1();
  L1():
    search = ldf search;
    check L8() else D2();
  L6():
    r3 = clos inner354062069;
    st `some.fun` = r3;
    goto L1();
  D2():
    deopt 16 [];
  L8():
    r5 = dyn search();
    check L9() else D3();
  D3():
    deopt 17 [r5];
  L9():
    exists1 = ldf exists;
    check L10() else D4();
  D4():
    deopt 19 [];
  L10():
    r6 = dyn exists1("ls", 2.0);
    check L11() else D5();
  D5():
    deopt 22 [r6];
  L11():
    exists2 = ldf exists;
    check L12() else D6();
  D6():
    deopt 24 [];
  L12():
    r7 = dyn exists2[, , inherits]("ls", 2.0, FALSE);
    check L13() else D7();
  D7():
    deopt 29 [r7];
  L13():
    sym = ldf identical;
    base = ldf identical in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L2():
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    ls = ld ls;
    check L16() else D8();
  L15():
    r8 = dyn base(<sym ls>, <lang get0("ls")>);
    goto L2();
  D8():
    deopt 32 [ls];
  L3():
    stopifnot = ldf stopifnot;
    check L25() else D15();
  L16():
    ls1 = force? ls;
    checkMissing(ls1);
    get0 = ldf get0;
    check L17() else D9();
  L20():
    get1 = ldf get0;
    check L22() else D12();
  L21():
    r12 = dyn base1(NULL, <lang get0(".foo.bar.")>);
    goto L3();
  D9():
    deopt 35 [];
  D12():
    deopt 51 [];
  D15():
    deopt 64 [];
  L17():
    r10 = dyn get0("ls");
    check L18() else D10();
  L22():
    r14 = dyn get1(".foo.bar.");
    check L23() else D13();
  L25():
    p = prom<V +>{
      sym2 = ldf identical;
      base2 = ldf identical in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      ls2 = ld ls;
      ls3 = force? ls2;
      checkMissing(ls3);
      get2 = ldf get0;
      r18 = dyn get2("ls");
      identical2 = ldf identical in base;
      r19 = dyn identical2(ls3, r18, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r19);
    L2():
      r16 = dyn base2(<sym ls>, <lang get0("ls")>);
      goto L0(r16);
    };
    p1 = prom<V +>{
      sym3 = ldf `is.null`;
      base3 = ldf `is.null` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r22):
      return r22;
    L1():
      get3 = ldf get0;
      r23 = dyn get3(".foo.bar.");
      c1 = `==`(r23, NULL);
      goto L0(c1);
    L2():
      r21 = dyn base3(<lang get0(".foo.bar.")>);
      goto L0(r21);
    };
    r25 = dyn stopifnot(p, p1);
    check L26() else D16();
  D10():
    deopt 37 [r10];
  D13():
    deopt 53 [r14];
  D16():
    deopt 67 [r25];
  L18():
    identical = ldf identical in base;
    r11 = dyn identical(ls1, r10, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L19() else D11();
  L23():
    identical1 = ldf identical in base;
    r15 = dyn identical1(NULL, r14, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L24() else D14();
  L26():
    popenv;
    return r25;
  D11():
    deopt 46 [r11];
  D14():
    deopt 62 [r15];
  L19():
    goto L2();
  L24():
    goto L3();
  }
}
fun `inner-1689496487`(x, where, envir, frame, mode, inherits) {
  (reg x:*, reg where:*, reg envir:*, reg frame:*, reg mode:*, reg inherits:*) -+> V { var x:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg p:p(V +), var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r6:V, reg sys_frame:cls, reg frame1:*, reg frame2:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), var frame:*, var mode:*, reg mode_isMissing:L, reg mode_orDefault:*, var inherits:*, reg inherits_isMissing:L, reg inherits_orDefault:*, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg envir1:*, reg envir2:V, reg mode1:*, reg mode2:V, reg inherits1:*, reg inherits2:V, reg exists:cls, reg r12:V |
    mkenv;
    st x = x;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p = prom<V +>{
      return -1.0;
    };
    goto L1(p);
  L1(where_orDefault):
    st where = where_orDefault;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L2() else L3(envir);
  L2():
    p2 = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L3() else L4();
    L0(r2):
      c = `as.logical`(r2);
      if c then L5() else L1();
    L3():
      missing = ldf missing in base;
      r3 = dyn missing(<sym frame>);
      goto L0(r3);
    L4():
      r1 = dyn base(<sym frame>);
      goto L0(r1);
    L1():
      sys_frame = ldf `sys.frame`;
      p1 = prom<V +>{
        frame1 = ld frame;
        frame2 = force? frame1;
        checkMissing(frame2);
        return frame2;
      };
      r8 = dyn sys_frame(p1);
      return r8;
    L5():
      sym1 = ldf `as.environment`;
      base1 = ldf `as.environment` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L6() else L7();
    L2(r5):
      return r5;
    L6():
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      as_environment = ldf `as.environment` in base;
      r6 = dyn as_environment(where2);
      goto L2(r6);
    L7():
      r4 = dyn base1(<sym where>);
      goto L2(r4);
    };
    goto L3(p2);
  L3(envir_orDefault):
    st envir = envir_orDefault;
    st frame = frame;
    mode_isMissing = missing.0(mode);
    if mode_isMissing then L4("any") else L4(mode);
  L4(mode_orDefault):
    st mode = mode_orDefault;
    inherits_isMissing = missing.0(inherits);
    if inherits_isMissing then L5(TRUE) else L5(inherits);
  L5(inherits_orDefault):
    st inherits = inherits_orDefault;
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L7() else L8();
  L6(r11):
    popenv;
    return r11;
  L7():
    x1 = ld x;
    check L9() else D0();
  L8():
    r10 = dyn base2(<lang exists(x, envir, mode, inherits)>);
    goto L6(r10);
  D0():
    deopt 2 [x1];
  L9():
    x2 = force? x1;
    checkMissing(x2);
    envir1 = ld envir;
    check L10() else D1();
  D1():
    deopt 4 [envir1];
  L10():
    envir2 = force? envir1;
    checkMissing(envir2);
    mode1 = ld mode;
    check L11() else D2();
  D2():
    deopt 6 [mode1];
  L11():
    mode2 = force? mode1;
    checkMissing(mode2);
    inherits1 = ld inherits;
    check L12() else D3();
  D3():
    deopt 8 [inherits1];
  L12():
    inherits2 = force? inherits1;
    checkMissing(inherits2);
    exists = ldf exists in base;
    r12 = dyn exists(x2, envir2, mode2, inherits2);
    check L13() else D4();
  D4():
    deopt 11 [r12];
  L13():
    goto L6(r12);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg cat:cls, reg r:V, reg x1:*, reg x2:V |
    mkenv;
    st x = x;
    cat = ldf cat;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn cat("some.fun(x)\n");
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    x1 = ld x;
    check L2() else D2();
  D2():
    deopt 4 [x1];
  L2():
    x2 = force? x1;
    checkMissing(x2);
    popenv;
    return x2;
  }
}
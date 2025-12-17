fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner227859444;
    st `.is_S3_generic` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner227859444(fname, envir, mustMatch) {
  (reg fname:*, reg envir:*, reg mustMatch:*) -+> V { var fname:*, var envir:*, var mustMatch:*, reg mustMatch_isMissing:L, reg mustMatch_orDefault:*, reg suppressMessages:cls, reg get:cls, reg fname1:*, reg fname2:V, reg p:p(V +), reg envir1:*, reg envir2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg f:*, reg f1:V, reg is_function:cls, reg r7:V, reg r8:V, reg c:L, reg r11:cls, reg r12:cls, reg r13:cls, reg isUME:cls, reg body:cls, reg f2:*, reg f3:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V, reg mustMatch1:*, reg mustMatch2:V, reg c1:L, reg res:*, reg res1:V, reg fname3:*, reg fname4:V, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg res2:*, reg res3:V, reg nzchar:cls, reg r21:V |
    mkenv;
    st fname = fname;
    st envir = envir;
    mustMatch_isMissing = missing.0(mustMatch);
    if mustMatch_isMissing then L0(TRUE) else L0(mustMatch);
  L0(mustMatch_orDefault):
    st mustMatch = mustMatch_orDefault;
    suppressMessages = ldf suppressMessages;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p2 = prom<V +>{
      get = ldf get;
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
      r2 = dyn get[, envir, inherits](p, p1, FALSE);
      return r2;
    };
    r4 = dyn suppressMessages(p2);
    check L7() else D1();
  D1():
    deopt 3 [r4];
  L7():
    st f = r4;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L1(r6):
    r8 = `!`(r6);
    c = `as.logical`(r8);
    if c then L12() else L2();
  L8():
    f = ld f;
    check L10() else D2();
  L9():
    r5 = dyn base(<sym f>);
    goto L1(r5);
  D2():
    deopt 7 [f];
  L2():
    r11 = clos inner3708401697;
    st isUMEbrace = r11;
    r12 = clos inner3708401697;
    st isUMEif = r12;
    r13 = clos inner3708401697;
    st isUME = r13;
    isUME = ldf isUME;
    check L15() else D4();
  L10():
    f1 = force? f;
    checkMissing(f1);
    is_function = ldf `is.function` in base;
    r7 = dyn is_function(f1);
    check L11() else D3();
  L12():
    popenv;
    return FALSE;
  D3():
    deopt 10 [r7];
  D4():
    deopt 27 [];
  L11():
    goto L1(r7);
  L15():
    p4 = prom<V +>{
      body = ldf body;
      p3 = prom<V +>{
        f2 = ld f;
        f3 = force? f2;
        checkMissing(f3);
        return f3;
      };
      r15 = dyn body(p3);
      return r15;
    };
    r17 = dyn isUME(p4);
    check L16() else D5();
  D5():
    deopt 29 [r17];
  L16():
    st res = r17;
    mustMatch1 = ld mustMatch;
    check L17() else D6();
  D6():
    deopt 31 [mustMatch1];
  L17():
    mustMatch2 = force? mustMatch1;
    checkMissing(mustMatch2);
    c1 = `as.logical`(mustMatch2);
    if c1 then L18() else L4();
  L4():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L22() else L23();
  L18():
    res = ld res;
    check L19() else D7();
  D7():
    deopt 33 [res];
  L5(r20):
    popenv;
    return r20;
  L19():
    res1 = force? res;
    checkMissing(res1);
    fname3 = ld fname;
    check L20() else D8();
  L22():
    res2 = ld res;
    check L24() else D9();
  L23():
    r19 = dyn base1(<sym res>);
    goto L5(r19);
  D8():
    deopt 34 [res1, fname3];
  D9():
    deopt 39 [res2];
  L20():
    fname4 = force? fname3;
    checkMissing(fname4);
    r18 = `==`(res1, fname4);
    popenv;
    return r18;
  L24():
    res3 = force? res2;
    checkMissing(res3);
    nzchar = ldf nzchar in base;
    r21 = dyn nzchar(res3);
    check L25() else D10();
  D10():
    deopt 42 [r21];
  L25():
    goto L5(r21);
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
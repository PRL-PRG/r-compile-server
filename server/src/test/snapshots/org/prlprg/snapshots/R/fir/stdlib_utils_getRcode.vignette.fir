fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3475669376;
    st `getRcode.vignette` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3475669376(x, strict, `...`) {
  (reg x:*, reg strict:*, reg ddd:dots) -+> V { var x:*, var strict:*, reg strict_isMissing:L, reg strict_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg nzchar:cls, reg r3:V, reg c1:L, reg file_path:cls, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p:p(V +), reg p1:*, reg p2:V, reg p3:p(V +), reg r7:V, reg strict1:*, reg strict2:V, reg c3:L, reg stop:*, reg stop1:V, reg stop2:V, reg warning:*, reg warning1:V, reg stop3:cls, reg gettextf:cls, reg sQuote:cls, reg x9:*, reg x10:V, reg c4:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r8:V, reg p4:p(V +), reg r10:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg r14:V |
    mkenv;
    st x = x;
    strict_isMissing = missing.0(strict);
    if strict_isMissing then L0(TRUE) else L0(strict);
  L0(strict_orDefault):
    st strict = strict_orDefault;
    st `...` = ddd;
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L13() else L2();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(p, `$`(x, R))>);
    goto L1(r);
  D0():
    deopt 2 [x1];
  L2():
    strict1 = ld strict;
    check L17() else D4();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L9() else L10(x2);
  L13():
    file_path = ldf `file.path`;
    check L14() else D2();
  D2():
    deopt 9 [];
  D4():
    deopt 14 [strict1];
  L8(dx1):
    st p = dx1;
    nzchar = ldf nzchar in base;
    r3 = dyn nzchar(dx1);
    check L12() else D1();
  L9():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x4):
    r2 = `$`(x4, <sym R>);
    goto L8(r2);
  L14():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r4 = `$`(x8, <sym Dir>);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    r7 = dyn file_path(p, "doc", p3);
    check L15() else D3();
  L17():
    strict2 = force? strict1;
    checkMissing(strict2);
    c3 = `as.logical`(strict2);
    if c3 then L18() else L3();
  D1():
    deopt 7 [r3];
  D3():
    deopt 13 [r7];
  L3():
    warning = ld warning;
    check L21() else D6();
  L4(stop2):
    checkFun.0(stop2);
    stop3 = stop2 as cls;
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          x9 = ld x;
          x10 = force? x9;
          checkMissing(x10);
          c4 = `is.object`(x10);
          if c4 then L1() else L2(x10);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("$", x10);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(x12):
          r8 = `$`(x12, <sym Topic>);
          goto L0(r8);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r10 = dyn sQuote(p4);
        return r10;
      };
      r12 = dyn gettextf("vignette %s has no R code", p5);
      return r12;
    };
    r14 = dyn stop3[, `call.`, domain](p6, FALSE, NA_LGL);
    check L22() else D7();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    goto L1(r3);
  L15():
    popenv;
    return r7;
  L18():
    stop = ld stop;
    check L19() else D5();
  D5():
    deopt 16 [stop];
  D6():
    deopt 18 [warning];
  D7():
    deopt 26 [r14];
  L19():
    stop1 = force? stop;
    checkMissing(stop1);
    goto L4(stop1);
  L21():
    warning1 = force? warning;
    checkMissing(warning1);
    goto L4(warning1);
  L22():
    popenv;
    return r14;
  }
}
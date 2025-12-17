fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner192692185;
    st debugcall = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner192692185(call, once) {
  (reg call:*, reg once:*) -+> V { var call:*, var once:*, reg once_isMissing:L, reg once_orDefault:*, reg stopifnot:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg once1:*, reg once2:V, reg length:cls, reg r2:V, reg r3:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg once3:*, reg once4:V, reg c:L, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg once5:*, reg once6:V, reg is_na:cls, reg r10:V, reg r11:V, reg p2:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg substitute:cls, reg r16:V, reg _debugcall:cls, reg call1:*, reg call2:V, reg p3:p(V +), reg once7:*, reg once8:V, reg c1:L, reg debugonce:*, reg debugonce1:V, reg debug:*, reg debug1:V, reg p4:p(V +), reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg call3:*, reg call4:V, reg invisible:cls, reg r22:V |
    mkenv;
    st call = call;
    once_isMissing = missing.0(once);
    if once_isMissing then L0(FALSE) else L0(once);
  L0(once_orDefault):
    st once = once_orDefault;
    stopifnot = ldf stopifnot;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r3 = `==`(r1, 1);
      return r3;
    L1():
      once1 = ld once;
      once2 = force? once1;
      checkMissing(once2);
      length = ldf length in base;
      r2 = dyn length(once2);
      goto L0(r2);
    L2():
      r = dyn base(<sym once>);
      goto L0(r);
    };
    p1 = prom<V +>{
      sym1 = ldf `is.logical`;
      base1 = ldf `is.logical` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      once3 = ld once;
      once4 = force? once3;
      checkMissing(once4);
      c = `is.logical`(once4);
      goto L0(c);
    L2():
      r5 = dyn base1(<sym once>);
      goto L0(r5);
    };
    p2 = prom<V +>{
      sym2 = ldf `is.na`;
      base2 = ldf `is.na` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r9):
      r11 = `!`(r9);
      return r11;
    L1():
      once5 = ld once;
      once6 = force? once5;
      checkMissing(once6);
      is_na = ldf `is.na` in base;
      r10 = dyn is_na(once6);
      goto L0(r10);
    L2():
      r8 = dyn base2(<sym once>);
      goto L0(r8);
    };
    r13 = dyn stopifnot(p, p1, p2);
    check L4() else D1();
  D1():
    deopt 5 [r13];
  L4():
    sym3 = ldf substitute;
    base3 = ldf substitute in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L5() else L6();
  L1(r15):
    st call = r15;
    _debugcall = ldf `.debugcall`;
    check L7() else D2();
  L5():
    substitute = ldf substitute in base;
    r16 = dyn substitute(<sym call>);
    goto L1(r16);
  L6():
    r14 = dyn base3(<sym call>);
    goto L1(r14);
  D2():
    deopt 11 [];
  L7():
    p3 = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      return call2;
    };
    p4 = prom<V +>{
      once7 = ld once;
      once8 = force? once7;
      checkMissing(once8);
      c1 = `as.logical`(once8);
      if c1 then L1() else L0();
    L0():
      debug = ld debug;
      debug1 = force? debug;
      checkMissing(debug1);
      return debug1;
    L1():
      debugonce = ld debugonce;
      debugonce1 = force? debugonce;
      checkMissing(debugonce1);
      return debugonce1;
    };
    r19 = dyn _debugcall(p3, p4);
    check L8() else D3();
  D3():
    deopt 14 [r19];
  L8():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L9() else L10();
  L2(r21):
    popenv;
    return r21;
  L9():
    call3 = ld call;
    check L11() else D4();
  L10():
    r20 = dyn base4(<sym call>);
    goto L2(r20);
  D4():
    deopt 17 [call3];
  L11():
    call4 = force? call3;
    checkMissing(call4);
    invisible = ldf invisible in base;
    r22 = dyn invisible(call4);
    check L12() else D5();
  D5():
    deopt 20 [r22];
  L12():
    goto L2(r22);
  }
}
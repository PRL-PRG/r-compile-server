fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_bogus_return` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg length:cls, reg r6:V, reg c1:L, reg ngettext:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r9:V, reg length1:cls, reg r10:V, reg p:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg strwrap:cls, reg msg:*, reg msg1:V, reg p1:p(V +), reg r16:V, reg _pretty_format:cls, reg x9:*, reg x10:V, reg c3:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg p2:p(V +), reg r19:V, reg c4:cls, reg r20:V, reg r21:V, reg c5:cls, reg r22:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    popenv;
    return r1;
  L5():
    character = ldf character;
    check L7() else D0();
  L6():
    r = dyn base(<lang character()>, <lang if(length(`$`(x, bad_closures)), {
        `<-`(msg, ngettext(length(`$`(x, bad_closures)), "Possibly missing '()' after 'return' in the following function:", "Possibly missing '()' after 'return' in the following functions:"));
        c(strwrap(msg), .pretty_format(`$`(x, bad_closures)))
      })>);
    goto L0(r);
  D0():
    deopt 3 [];
  L7():
    r2 = dyn character();
    check L8() else D1();
  D1():
    deopt 4 [r2];
  L8():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L17() else L2();
  L9():
    x1 = ld x;
    check L11() else D2();
  L10():
    r3 = dyn base1(<lang `$`(x, bad_closures)>);
    goto L1(r3);
  D2():
    deopt 7 [x1];
  L2():
    goto L4(NULL);
  L4(r21):
    c5 = ldf c in base;
    r22 = dyn c5(r2, r21);
    check L28() else D11();
  L11():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L13() else L14(x2);
  L17():
    ngettext = ldf ngettext;
    check L18() else D4();
  D4():
    deopt 13 [];
  D11():
    deopt 34 [r22];
  L12(dx1):
    length = ldf length in base;
    r6 = dyn length(dx1);
    check L16() else D3();
  L13():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x4):
    r5 = `$`(x4, <sym bad_closures>);
    goto L12(r5);
  L18():
    p = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c2 = `is.object`(x6);
      if c2 then L4() else L5(x6);
    L2():
      r7 = dyn base2(<lang `$`(x, bad_closures)>);
      goto L0(r7);
    L3(dx3):
      length1 = ldf length in base;
      r10 = dyn length1(dx3);
      goto L0(r10);
    L4():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(x8):
      r9 = `$`(x8, <sym bad_closures>);
      goto L3(r9);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L3(dx2);
    };
    r12 = dyn ngettext(p, "Possibly missing '()' after 'return' in the following function:", "Possibly missing '()' after 'return' in the following functions:");
    check L19() else D5();
  L28():
    goto L0(r22);
  D3():
    deopt 11 [r6];
  D5():
    deopt 17 [r12];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(dx);
  L16():
    goto L1(r6);
  L19():
    st msg = r12;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L3(r14):
    goto L4(r14);
  L20():
    strwrap = ldf strwrap;
    check L22() else D6();
  L21():
    r13 = dyn base3(<lang strwrap(msg)>, <lang .pretty_format(`$`(x, bad_closures))>);
    goto L3(r13);
  D6():
    deopt 22 [];
  L22():
    p1 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r16 = dyn strwrap(p1);
    check L23() else D7();
  D7():
    deopt 24 [r16];
  L23():
    _pretty_format = ldf `.pretty_format`;
    check L24() else D8();
  D8():
    deopt 26 [];
  L24():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      c3 = `is.object`(x10);
      if c3 then L1() else L2(x10);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", x10);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x12):
      r17 = `$`(x12, <sym bad_closures>);
      goto L0(r17);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r19 = dyn _pretty_format(p2);
    check L25() else D9();
  D9():
    deopt 28 [r19];
  L25():
    c4 = ldf c in base;
    r20 = dyn c4(r16, r19);
    check L26() else D10();
  D10():
    deopt 30 [r20];
  L26():
    goto L3(r20);
  }
}
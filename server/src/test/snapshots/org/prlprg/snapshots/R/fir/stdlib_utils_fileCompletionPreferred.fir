fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st fileCompletionPreferred = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg r1:V, reg c1:L, reg c3:V, reg _CompletionEnv4:*, reg _CompletionEnv5:V, reg c4:L, reg c6:L, reg _CompletionEnv7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c8:L, reg dx3:V, reg __1:cls, reg r2:V, reg head_default:cls, reg unlist:cls, reg strsplit:cls, reg linebuffer:*, reg linebuffer1:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg _CompletionEnv8:*, reg _CompletionEnv9:V, reg c9:L, reg _CompletionEnv11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg c12:L, reg r12:V, reg lbss:*, reg lbss1:V, reg r13:V, reg sum:cls, reg r14:V, reg __3:cls, reg r15:V, reg r16:V, reg c13:L, reg c14:L, reg c15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg c22:L, reg c23:L, reg r18:V, reg lbss2:*, reg lbss3:V, reg r19:V, reg sum1:cls, reg r20:V, reg __4:cls, reg r21:V, reg r22:V, reg c24:L, reg c25:V, reg c28:L, reg c29:V |
    mkenv;
    _CompletionEnv = ld `.CompletionEnv`;
    check L6() else D0();
  D0():
    deopt 0 [_CompletionEnv];
  L6():
    _CompletionEnv1 = force? _CompletionEnv;
    checkMissing(_CompletionEnv1);
    c = `is.object`(_CompletionEnv1);
    if c then L7() else L8(_CompletionEnv1);
  L0(dx1):
    r1 = `>`(dx1, 0.0);
    c1 = `as.logical`(r1);
    if c1 then L10() else L1(c1);
  L7():
    dr = tryDispatchBuiltin.1("[[", _CompletionEnv1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(_CompletionEnv3):
    __ = ldf `[[` in base;
    r = dyn __(_CompletionEnv3, "start");
    goto L0(r);
  L1(c3):
    visible.0();
    popenv;
    return c3;
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    _CompletionEnv4 = ld `.CompletionEnv`;
    check L11() else D1();
  D1():
    deopt 7 [c1, _CompletionEnv4];
  L11():
    _CompletionEnv5 = force? _CompletionEnv4;
    checkMissing(_CompletionEnv5);
    c4 = `is.object`(_CompletionEnv5);
    if c4 then L12() else L13(c1, _CompletionEnv5);
  L2(c8, dx3):
    st linebuffer = dx3;
    head_default = ldf `head.default`;
    check L15() else D2();
  L12():
    dr2 = tryDispatchBuiltin.1("[[", _CompletionEnv5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(c1, dr2);
  L13(c6, _CompletionEnv7):
    __1 = ldf `[[` in base;
    r2 = dyn __1(_CompletionEnv7, "linebuffer");
    goto L2(c6, r2);
  D2():
    deopt 14 [c8];
  L14():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(c1, dx2);
  L15():
    p2 = prom<V +>{
      unlist = ldf unlist;
      p1 = prom<V +>{
        strsplit = ldf strsplit;
        p = prom<V +>{
          linebuffer = ld linebuffer;
          linebuffer1 = force? linebuffer;
          checkMissing(linebuffer1);
          return linebuffer1;
        };
        r4 = dyn strsplit(p, "");
        return r4;
      };
      r6 = dyn unlist(p1);
      return r6;
    };
    p3 = prom<V +>{
      _CompletionEnv8 = ld `.CompletionEnv`;
      _CompletionEnv9 = force? _CompletionEnv8;
      checkMissing(_CompletionEnv9);
      c9 = `is.object`(_CompletionEnv9);
      if c9 then L1() else L2(_CompletionEnv9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", _CompletionEnv9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(_CompletionEnv11):
      __2 = ldf `[[` in base;
      r8 = dyn __2(_CompletionEnv11, "end");
      goto L0(r8);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r10 = dyn head_default(p2, p3);
    check L16() else D3();
  D3():
    deopt 17 [c8, r10];
  L16():
    st lbss = r10;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L3(c12, r12):
    __3 = ldf `%%` in base;
    r15 = dyn __3(r12, 2.0);
    check L21() else D6();
  L17():
    lbss = ld lbss;
    check L19() else D4();
  L18():
    r11 = dyn base(<lang `==`(lbss, "'")>);
    goto L3(c8, r11);
  D4():
    deopt 22 [c8, lbss];
  D6():
    deopt 30 [c12, r15];
  L19():
    lbss1 = force? lbss;
    checkMissing(lbss1);
    r13 = `==`(lbss1, "'");
    sum = ldf sum in base;
    r14 = dyn sum(r13);
    check L20() else D5();
  L21():
    r16 = `==`(r15, 1.0);
    c13 = `as.logical`(r16);
    if c13 then L4(c12, c13) else L22();
  D5():
    deopt 27 [c8, r14];
  L4(c14, c15):
    c28 = `as.logical`(c15);
    c29 = `&&`(c14, c28);
    goto L1(c29);
  L20():
    goto L3(c8, r14);
  L22():
    sym1 = ldf sum;
    base1 = ldf sum in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  L5(c22, c23, r18):
    __4 = ldf `%%` in base;
    r21 = dyn __4(r18, 2.0);
    check L27() else D9();
  L23():
    lbss2 = ld lbss;
    check L25() else D7();
  L24():
    r17 = dyn base1(<lang `==`(lbss, "\"")>);
    goto L5(c12, c13, r17);
  D7():
    deopt 36 [c12, c13, lbss2];
  D9():
    deopt 44 [c22, c23, r21];
  L25():
    lbss3 = force? lbss2;
    checkMissing(lbss3);
    r19 = `==`(lbss3, "\"");
    sum1 = ldf sum in base;
    r20 = dyn sum1(r19);
    check L26() else D8();
  L27():
    r22 = `==`(r21, 1.0);
    c24 = `as.logical`(r22);
    c25 = `||`(c23, c24);
    goto L4(c22, c25);
  D8():
    deopt 41 [c12, c13, r20];
  L26():
    goto L5(c12, c13, r20);
  }
}
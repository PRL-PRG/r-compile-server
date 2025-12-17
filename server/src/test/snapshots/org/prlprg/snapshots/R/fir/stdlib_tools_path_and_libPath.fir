fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1246119658;
    st path_and_libPath = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots?, reg _libPaths:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg strsplit:cls, reg env_path:cls, reg ddd1:dots?, reg r3:V, reg p:p(V +), reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p1:p(V +), reg r7:V, reg c1:L, reg r9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r10:V, reg lP:*, reg lP1:V, reg c2:L, reg lP3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg lP6:V, reg r12:V, reg lP7:*, reg lP8:V, reg length:cls, reg r13:V, reg r14:V, reg __1:cls, reg r15:V, reg c3:cls, reg r16:V, reg ep0:*, reg ep1:V, reg c4:L, reg ep3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg dir_exists:cls, reg ep4:*, reg ep5:V, reg p2:p(V +), reg r18:V, reg __2:cls, reg r19:V, reg paste:cls, reg unique:cls, reg normalizePath:cls, reg ep6:*, reg ep7:V, reg p3:p(V +), reg r21:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg _Platform4:*, reg _Platform5:V, reg c5:L, reg _Platform7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r25:V, reg p6:p(V +), reg r27:V |
    mkenv;
    st `...` = ddd;
    _libPaths = ldf `.libPaths`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r = dyn _libPaths();
    check L6() else D1();
  D1():
    deopt 2 [r];
  L6():
    st lP = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r2):
    st ep0 = r2;
    ep0 = ld ep0;
    check L23() else D8();
  L7():
    strsplit = ldf strsplit;
    check L9() else D2();
  L8():
    r1 = dyn base(<lang `[[`(strsplit(env_path(...), `$`(.Platform, path.sep), fixed=TRUE), 1)>, <lang `[`(lP, `-`(length(lP)))>);
    goto L0(r1);
  D2():
    deopt 7 [];
  D8():
    deopt 29 [ep0];
  L9():
    p = prom<V +>{
      env_path = ldf env_path;
      ddd1 = ld `...`;
      r3 = dyn env_path[`...`](ddd1);
      return r3;
    };
    p1 = prom<V +>{
      _Platform = ld `.Platform`;
      _Platform1 = force? _Platform;
      checkMissing(_Platform1);
      c = `is.object`(_Platform1);
      if c then L1() else L2(_Platform1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", _Platform1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(_Platform3):
      r5 = `$`(_Platform3, <sym path.sep>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn strsplit[, , fixed](p, p1, TRUE);
    check L10() else D3();
  L23():
    ep1 = force? ep0;
    checkMissing(ep1);
    c4 = `is.object`(ep1);
    if c4 then L24() else L25(ep1);
  D3():
    deopt 12 [r7];
  L4(dx7):
    st ep0 = dx7;
    paste = ldf paste;
    check L29() else D11();
  L10():
    c1 = `is.object`(r7);
    if c1 then L11() else L12(r7);
  L24():
    dr6 = tryDispatchBuiltin.1("[", ep1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L26() else L25(dr6);
  L25(ep3):
    dir_exists = ldf `dir.exists`;
    check L27() else D9();
  D9():
    deopt 32 [ep3];
  D11():
    deopt 38 [];
  L1(dx3):
    lP = ld lP;
    check L14() else D4();
  L11():
    dr2 = tryDispatchBuiltin.1("[[", r7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(r9):
    __ = ldf `[[` in base;
    r10 = dyn __(r9, 1);
    goto L1(r10);
  L26():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx6);
  L27():
    p2 = prom<V +>{
      ep4 = ld ep0;
      ep5 = force? ep4;
      checkMissing(ep5);
      return ep5;
    };
    r18 = dyn dir_exists(p2);
    check L28() else D10();
  L29():
    p5 = prom<V +>{
      unique = ldf unique;
      p4 = prom<V +>{
        normalizePath = ldf normalizePath;
        p3 = prom<V +>{
          ep6 = ld ep0;
          ep7 = force? ep6;
          checkMissing(ep7);
          return ep7;
        };
        r21 = dyn normalizePath(p3);
        return r21;
      };
      r23 = dyn unique(p4);
      return r23;
    };
    p6 = prom<V +>{
      _Platform4 = ld `.Platform`;
      _Platform5 = force? _Platform4;
      checkMissing(_Platform5);
      c5 = `is.object`(_Platform5);
      if c5 then L1() else L2(_Platform5);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", _Platform5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(_Platform7):
      r25 = `$`(_Platform7, <sym path.sep>);
      goto L0(r25);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r27 = dyn paste[, collapse](p5, p6);
    check L30() else D12();
  D4():
    deopt 16 [lP];
  D10():
    deopt 34 [ep3, r18];
  D12():
    deopt 42 [r27];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L14():
    lP1 = force? lP;
    checkMissing(lP1);
    c2 = `is.object`(lP1);
    if c2 then L15() else L16(lP1);
  L28():
    __2 = ldf `[` in base;
    r19 = dyn __2(ep3, r18);
    goto L4(r19);
  L30():
    popenv;
    return r27;
  L2(dx5):
    c3 = ldf c in base;
    r16 = dyn c3(dx3, dx5);
    check L22() else D7();
  L15():
    dr4 = tryDispatchBuiltin.1("[", lP1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L17() else L16(dr4);
  L16(lP3):
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D7():
    deopt 27 [r16];
  L3(lP6, r12):
    r14 = `-`(<missing>, r12);
    __1 = ldf `[` in base;
    r15 = dyn __1(lP6, r14);
    goto L2(r15);
  L17():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  L18():
    lP7 = ld lP;
    check L20() else D5();
  L19():
    r11 = dyn base1(<sym lP>);
    goto L3(lP3, r11);
  L22():
    goto L0(r16);
  D5():
    deopt 20 [lP3, lP7];
  L20():
    lP8 = force? lP7;
    checkMissing(lP8);
    length = ldf length in base;
    r13 = dyn length(lP8);
    check L21() else D6();
  D6():
    deopt 23 [lP3, r13];
  L21():
    goto L3(lP3, r13);
  }
}
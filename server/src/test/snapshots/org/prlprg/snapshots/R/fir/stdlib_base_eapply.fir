fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg new_env:cls, reg r5:V, reg l:*, reg c:L, reg r7:v(I), reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg r13:V, reg l3:*, reg c1:L, reg r15:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg c2:cls, reg r21:V, reg l6:*, reg c3:L, reg r23:V, reg l8:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r26:V, reg __:cls, reg r27:V, reg r28:cls, reg env:*, reg env1:V, reg p1:p(V +), reg r30:V, reg eapply:cls, reg env2:*, reg env3:V, reg p2:p(V +), reg mean:*, reg mean1:V, reg p3:p(V +), reg r33:V, reg unlist:cls, reg eapply1:cls, reg env4:*, reg env5:V, reg p4:p(V +), reg mean2:*, reg mean3:V, reg p5:p(V +), reg r36:V, reg p6:p(V +), reg r38:V, reg eapply2:cls, reg env6:*, reg env7:V, reg p7:p(V +), reg quantile:*, reg quantile1:V, reg p8:p(V +), reg p9:p(V +), reg r42:V, reg eapply3:cls, reg env8:*, reg env9:V, reg p10:p(V +), reg quantile2:*, reg quantile3:V, reg p11:p(V +), reg r45:V |
    mkenv;
    r = clos `inner-1651746256`;
    st eapply = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0():
    new_env = ldf `new.env`;
    check L7() else D2();
  L3():
    require = ldf require;
    check L5() else D0();
  L4():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L5():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L6() else D1();
  L7():
    r5 = dyn new_env[hash](FALSE);
    check L8() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r5];
  L6():
    goto L0();
  L8():
    st env = r5;
    l = ld env;
    c = `is.object`(l);
    if c then L10() else L11(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, l);
  L9(dx1):
    st env = dx1;
    sym1 = ldf exp;
    base1 = ldf exp in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L10():
    dr = tryDispatchBuiltin.0("$<-", l, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, dr);
  L11(r7, l2):
    r10 = `$<-`(l2, <sym a>, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    goto L9(r10);
  L1(r12):
    l3 = ld env;
    c1 = `is.object`(l3);
    if c1 then L16() else L17(r12, l3);
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    r13 = exp(<int -3, -2, -1, 0, 1, 2, 3>);
    goto L1(r13);
  L14():
    r11 = dyn base1(<lang `:`(`-`(3.0), 3.0)>);
    goto L1(r11);
  L15(dx3):
    st env = dx3;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L16():
    dr2 = tryDispatchBuiltin.0("$<-", l3, r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(r12, dr2);
  L17(r15, l5):
    r18 = `$<-`(l5, <sym beta>, r12);
    goto L15(r18);
  L2(r20):
    l6 = ld env;
    c3 = `is.object`(l6);
    if c3 then L23() else L24(r20, l6);
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L15(dx2);
  L19():
    c2 = ldf c in base;
    r21 = dyn c2(TRUE, FALSE, FALSE, TRUE);
    check L21() else D4();
  L20():
    r19 = dyn base2(TRUE, FALSE, FALSE, TRUE);
    goto L2(r19);
  D4():
    deopt 33 [r21];
  L21():
    goto L2(r21);
  L22(dx5):
    st env = dx5;
    __ = ldf `::`;
    check L26() else D5();
  L23():
    dr4 = tryDispatchBuiltin.0("$<-", l6, r20);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L25() else L24(r20, dr4);
  L24(r23, l8):
    r26 = `$<-`(l8, <sym logic>, r20);
    goto L22(r26);
  D5():
    deopt 38 [];
  L25():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L22(dx4);
  L26():
    r27 = dyn __("utils", "ls.str");
    check L27() else D6();
  D6():
    deopt 41 [r27];
  L27():
    checkFun.0(r27);
    r28 = r27 as cls;
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r30 = dyn r28(p1);
    check L28() else D7();
  D7():
    deopt 44 [r30];
  L28():
    eapply = ldf eapply;
    check L29() else D8();
  D8():
    deopt 46 [];
  L29():
    p2 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    p3 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r33 = dyn eapply(p2, p3);
    check L30() else D9();
  D9():
    deopt 49 [r33];
  L30():
    unlist = ldf unlist;
    check L31() else D10();
  D10():
    deopt 51 [];
  L31():
    p6 = prom<V +>{
      eapply1 = ldf eapply;
      p4 = prom<V +>{
        env4 = ld env;
        env5 = force? env4;
        checkMissing(env5);
        return env5;
      };
      p5 = prom<V +>{
        mean2 = ld mean;
        mean3 = force? mean2;
        checkMissing(mean3);
        return mean3;
      };
      r36 = dyn eapply1[, , `USE.NAMES`](p4, p5, FALSE);
      return r36;
    };
    r38 = dyn unlist(p6);
    check L32() else D11();
  D11():
    deopt 53 [r38];
  L32():
    eapply2 = ldf eapply;
    check L33() else D12();
  D12():
    deopt 55 [];
  L33():
    p7 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    p8 = prom<V +>{
      quantile = ld quantile;
      quantile1 = force? quantile;
      checkMissing(quantile1);
      return quantile1;
    };
    p9 = prom<V +>{
      return <real 0.25, 0.5, 0.75>;
    };
    r42 = dyn eapply2[, , probs](p7, p8, p9);
    check L34() else D13();
  D13():
    deopt 60 [r42];
  L34():
    eapply3 = ldf eapply;
    check L35() else D14();
  D14():
    deopt 62 [];
  L35():
    p10 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    p11 = prom<V +>{
      quantile2 = ld quantile;
      quantile3 = force? quantile2;
      checkMissing(quantile3);
      return quantile3;
    };
    r45 = dyn eapply3(p10, p11);
    check L36() else D15();
  D15():
    deopt 65 [r45];
  L36():
    popenv;
    return r45;
  }
}
fun `inner-1651746256`(env, FUN, `...`, `all.names`, `USE.NAMES`) {
  (reg env:*, reg FUN:*, reg ddd:dots, reg all_names:*, reg USE_NAMES:*) -+> V { var env:*, var FUN:*, var `...`:dots?, var `all.names`:*, reg all_names_isMissing:L, reg all_names_orDefault:*, var `USE.NAMES`:*, reg USE_NAMES_isMissing:L, reg USE_NAMES_orDefault:*, reg match_fun:cls, reg FUN1:*, reg FUN2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg _Internal:cls, reg r4:V |
    mkenv;
    st env = env;
    st FUN = FUN;
    st `...` = ddd;
    all_names_isMissing = missing.0(all_names);
    if all_names_isMissing then L0(FALSE) else L0(all_names);
  L0(all_names_orDefault):
    st `all.names` = all_names_orDefault;
    USE_NAMES_isMissing = missing.0(USE_NAMES);
    if USE_NAMES_isMissing then L1(TRUE) else L1(USE_NAMES);
  L1(USE_NAMES_orDefault):
    st `USE.NAMES` = USE_NAMES_orDefault;
    match_fun = ldf `match.fun`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      FUN1 = ld FUN;
      FUN2 = force? FUN1;
      checkMissing(FUN2);
      return FUN2;
    };
    r1 = dyn match_fun(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st FUN = r1;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L2(r3):
    popenv;
    return r3;
  L5():
    _Internal = ldf `.Internal` in base;
    r4 = dyn _Internal(<lang eapply(env, FUN, all.names, USE.NAMES)>);
    goto L2(r4);
  L6():
    r2 = dyn base(<lang eapply(env, FUN, all.names, USE.NAMES)>);
    goto L2(r2);
  }
}
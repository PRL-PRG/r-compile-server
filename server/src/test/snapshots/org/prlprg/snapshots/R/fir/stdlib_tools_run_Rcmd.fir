fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner134067418;
    st run_Rcmd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner134067418(args, out, env, timeout) {
  (reg args:*, reg out:*, reg env:*, reg timeout:*) -+> V { var args:*, var out:*, reg out_isMissing:L, reg out_orDefault:*, var env:*, reg env_isMissing:L, reg env_orDefault:*, var timeout:*, reg timeout_isMissing:L, reg timeout_orDefault:*, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg c1:L, reg system2:cls, reg file_path:cls, reg R_home:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg args1:*, reg args2:V, reg p2:p(V +), reg out1:*, reg out2:V, reg p3:p(V +), reg out3:*, reg out4:V, reg p4:p(V +), reg get_timeout:cls, reg timeout1:*, reg timeout2:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:V, reg r13:V, reg system3:cls, reg file_path1:cls, reg R_home1:cls, reg r14:V, reg p7:p(V +), reg r16:V, reg p8:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r18:V, reg r19:V, reg args3:*, reg args4:V, reg c2:cls, reg r20:V, reg p9:p(V +), reg out5:*, reg out6:V, reg p10:p(V +), reg out7:*, reg out8:V, reg p11:p(V +), reg env1:*, reg env2:V, reg p12:p(V +), reg get_timeout1:cls, reg timeout3:*, reg timeout4:V, reg p13:p(V +), reg r26:V, reg p14:p(V +), reg r28:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r29:V, reg r30:V, reg status:*, reg status1:V, reg identical:cls, reg r31:V, reg c3:L, reg report_timeout:cls, reg timeout5:*, reg timeout6:V, reg p15:p(V +), reg r33:V, reg status2:*, reg status3:V |
    mkenv;
    st args = args;
    out_isMissing = missing.0(out);
    if out_isMissing then L0("") else L0(out);
  L0(out_orDefault):
    st out = out_orDefault;
    env_isMissing = missing.0(env);
    if env_isMissing then L1("") else L1(env);
  L1(env_orDefault):
    st env = env_orDefault;
    timeout_isMissing = missing.0(timeout);
    if timeout_isMissing then L2(0.0) else L2(timeout);
  L2(timeout_orDefault):
    st timeout = timeout_orDefault;
    _Platform = ld `.Platform`;
    check L8() else D0();
  D0():
    deopt 0 [_Platform];
  L8():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L10() else L11(_Platform1);
  L9(dx1):
    r1 = `==`(dx1, "windows");
    c1 = `as.logical`(r1);
    if c1 then L13() else L3();
  L10():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(_Platform3):
    r = `$`(_Platform3, <sym OS.type>);
    goto L9(r);
  L3():
    system3 = ldf system2;
    check L17() else D3();
  L4(r13):
    st status = r13;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    system2 = ldf system2;
    check L14() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 15 [];
  L5(r30):
    c3 = `as.logical`(r30);
    if c3 then L23() else L6();
  L14():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        R_home = ldf `R.home`;
        r2 = dyn R_home("bin");
        return r2;
      };
      r4 = dyn file_path(p, "Rcmd.exe");
      return r4;
    };
    p2 = prom<V +>{
      args1 = ld args;
      args2 = force? args1;
      checkMissing(args2);
      return args2;
    };
    p3 = prom<V +>{
      out1 = ld out;
      out2 = force? out1;
      checkMissing(out2);
      return out2;
    };
    p4 = prom<V +>{
      out3 = ld out;
      out4 = force? out3;
      checkMissing(out4);
      return out4;
    };
    p6 = prom<V +>{
      get_timeout = ldf get_timeout;
      p5 = prom<V +>{
        timeout1 = ld timeout;
        timeout2 = force? timeout1;
        checkMissing(timeout2);
        return timeout2;
      };
      r10 = dyn get_timeout(p5);
      return r10;
    };
    r12 = dyn system2[, , , , timeout](p1, p2, p3, p4, p6);
    check L15() else D2();
  L17():
    p8 = prom<V +>{
      file_path1 = ldf `file.path`;
      p7 = prom<V +>{
        R_home1 = ldf `R.home`;
        r14 = dyn R_home1("bin");
        return r14;
      };
      r16 = dyn file_path1(p7, "R");
      return r16;
    };
    p9 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r19):
      return r19;
    L1():
      args3 = ld args;
      args4 = force? args3;
      checkMissing(args4);
      c2 = ldf c in base;
      r20 = dyn c2("CMD", args4);
      goto L0(r20);
    L2():
      r18 = dyn base("CMD", <sym args>);
      goto L0(r18);
    };
    p10 = prom<V +>{
      out5 = ld out;
      out6 = force? out5;
      checkMissing(out6);
      return out6;
    };
    p11 = prom<V +>{
      out7 = ld out;
      out8 = force? out7;
      checkMissing(out8);
      return out8;
    };
    p12 = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    p14 = prom<V +>{
      get_timeout1 = ldf get_timeout;
      p13 = prom<V +>{
        timeout3 = ld timeout;
        timeout4 = force? timeout3;
        checkMissing(timeout4);
        return timeout4;
      };
      r26 = dyn get_timeout1(p13);
      return r26;
    };
    r28 = dyn system3[, , , , env, timeout](p8, p9, p10, p11, p12, p14);
    check L18() else D4();
  L19():
    status = ld status;
    check L21() else D5();
  L20():
    r29 = dyn base1(<sym status>, 124);
    goto L5(r29);
  D2():
    deopt 13 [r12];
  D4():
    deopt 24 [r28];
  D5():
    deopt 28 [status];
  L6():
    goto L7();
  L7():
    status2 = ld status;
    check L27() else D9();
  L15():
    goto L4(r12);
  L18():
    goto L4(r28);
  L21():
    status1 = force? status;
    checkMissing(status1);
    identical = ldf identical in base;
    r31 = dyn identical(status1, 124, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L22() else D6();
  L23():
    report_timeout = ldf report_timeout;
    check L24() else D7();
  D6():
    deopt 39 [r31];
  D7():
    deopt 41 [];
  D9():
    deopt 46 [status2];
  L22():
    goto L5(r31);
  L24():
    p15 = prom<V +>{
      timeout5 = ld timeout;
      timeout6 = force? timeout5;
      checkMissing(timeout6);
      return timeout6;
    };
    r33 = dyn report_timeout(p15);
    check L25() else D8();
  L27():
    status3 = force? status2;
    checkMissing(status3);
    popenv;
    return status3;
  D8():
    deopt 43 [r33];
  L25():
    goto L7();
  }
}
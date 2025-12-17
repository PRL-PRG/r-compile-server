fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1863248249;
    st Rcmd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1863248249(args, `...`) {
  (reg args:*, reg ddd:dots) -+> V { var args:*, var `...`:dots?, reg _Platform:*, reg _Platform1:V, reg c:L, reg _Platform3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg r1:V, reg c1:L, reg system2:cls, reg file_path:cls, reg R_home:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg args1:*, reg args2:V, reg p2:p(V +), reg ddd1:dots?, reg r7:V, reg system3:cls, reg file_path1:cls, reg R_home1:cls, reg r8:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg args3:*, reg args4:V, reg c2:cls, reg r14:V, reg p5:p(V +), reg ddd2:dots?, reg r16:V |
    mkenv;
    st args = args;
    st `...` = ddd;
    _Platform = ld `.Platform`;
    check L1() else D0();
  D0():
    deopt 0 [_Platform];
  L1():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c = `is.object`(_Platform1);
    if c then L3() else L4(_Platform1);
  L2(dx1):
    r1 = `==`(dx1, "windows");
    c1 = `as.logical`(r1);
    if c1 then L6() else L0();
  L3():
    dr = tryDispatchBuiltin.1("$", _Platform1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(_Platform3):
    r = `$`(_Platform3, <sym OS.type>);
    goto L2(r);
  L0():
    system3 = ldf system2;
    check L10() else D3();
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    system2 = ldf system2;
    check L7() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 12 [];
  L7():
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
    ddd1 = ld `...`;
    r7 = dyn system2[, , `...`](p1, p2, ddd1);
    check L8() else D2();
  L10():
    p4 = prom<V +>{
      file_path1 = ldf `file.path`;
      p3 = prom<V +>{
        R_home1 = ldf `R.home`;
        r8 = dyn R_home1("bin");
        return r8;
      };
      r10 = dyn file_path1(p3, "R");
      return r10;
    };
    p5 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r13):
      return r13;
    L1():
      args3 = ld args;
      args4 = force? args3;
      checkMissing(args4);
      c2 = ldf c in base;
      r14 = dyn c2("CMD", args4);
      goto L0(r14);
    L2():
      r12 = dyn base("CMD", <sym args>);
      goto L0(r12);
    };
    ddd2 = ld `...`;
    r16 = dyn system3[, , `...`](p4, p5, ddd2);
    check L11() else D4();
  D2():
    deopt 10 [r7];
  D4():
    deopt 16 [r16];
  L8():
    popenv;
    return r7;
  L11():
    popenv;
    return r16;
  }
}
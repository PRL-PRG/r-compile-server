fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner490531345;
    st argNames = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner490531345(fname, `use.arg.db`) {
  (reg fname:*, reg use_arg_db:*) -+> V { var fname:*, var `use.arg.db`:*, reg use_arg_db_isMissing:L, reg use_arg_db_orDefault:*, reg _CompletionEnv:*, reg _CompletionEnv1:V, reg c:L, reg _CompletionEnv3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg c1:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r1:V, reg p:p(V +), reg use_arg_db1:*, reg use_arg_db2:V, reg c2:L, reg _FunArgEnv:*, reg _FunArgEnv1:V, reg c3:L, reg _FunArgEnv3:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg fname1:*, reg fname2:V, reg __1:cls, reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg args:*, reg args1:V, reg c4:V, reg r6:V, reg c5:L, reg args2:*, reg args3:V, reg do_call:cls, reg argsAnywhere:*, reg argsAnywhere1:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg fname3:*, reg fname4:V, reg list:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg args4:*, reg args5:V, reg c6:V, reg c7:L, reg character:cls, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg args6:*, reg args7:V, reg is_list:cls, reg r20:V, reg c8:L, reg unlist:cls, reg lapply:cls, reg args8:*, reg args9:V, reg p3:p(V +), reg r22:cls, reg p4:p(V +), reg r24:V, reg p5:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg formals:cls, reg args10:*, reg args11:V, reg p6:p(V +), reg r30:V, reg names:cls, reg r31:V |
    mkenv;
    st fname = fname;
    use_arg_db_isMissing = missing.0(use_arg_db);
    if use_arg_db_isMissing then L0() else L1(use_arg_db);
  L0():
    p = prom<V +>{
      _CompletionEnv = ld `.CompletionEnv`;
      _CompletionEnv1 = force? _CompletionEnv;
      checkMissing(_CompletionEnv1);
      c = `is.object`(_CompletionEnv1);
      if c then L2() else L3(_CompletionEnv1);
    L1(dx1):
      c1 = `is.object`(dx1);
      if c1 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", _CompletionEnv1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(_CompletionEnv3):
      r = `$`(_CompletionEnv3, <sym settings>);
      goto L1(r);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      __ = ldf `[[` in base;
      r1 = dyn __(dx3, "argdb");
      goto L0(r1);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    goto L1(p);
  L1(use_arg_db_orDefault):
    st `use.arg.db` = use_arg_db_orDefault;
    use_arg_db1 = ld `use.arg.db`;
    check L13() else D0();
  D0():
    deopt 0 [use_arg_db1];
  L13():
    use_arg_db2 = force? use_arg_db1;
    checkMissing(use_arg_db2);
    c2 = `as.logical`(use_arg_db2);
    if c2 then L14() else L2();
  L2():
    goto L4();
  L4():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L14():
    _FunArgEnv = ld `.FunArgEnv`;
    check L15() else D1();
  D1():
    deopt 2 [_FunArgEnv];
  L5(r5):
    r6 = `!`(r5);
    c5 = `as.logical`(r6);
    if c5 then L24() else L6();
  L15():
    _FunArgEnv1 = force? _FunArgEnv;
    checkMissing(_FunArgEnv1);
    c3 = `is.object`(_FunArgEnv1);
    if c3 then L16() else L17(_FunArgEnv1);
  L21():
    args = ld args;
    check L23() else D3();
  L22():
    r4 = dyn base(<sym args>);
    goto L5(r4);
  D3():
    deopt 11 [args];
  L3(dx7):
    st args = dx7;
    goto L4();
  L6():
    do_call = ldf `do.call`;
    check L28() else D5();
  L16():
    dr4 = tryDispatchBuiltin.1("[[", _FunArgEnv1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L18() else L17(dr4);
  L17(_FunArgEnv3):
    fname1 = ld fname;
    check L19() else D2();
  L23():
    args1 = force? args;
    checkMissing(args1);
    c4 = `==`(args1, NULL);
    goto L5(c4);
  L24():
    args2 = ld args;
    check L25() else D4();
  D2():
    deopt 4 [_FunArgEnv3, fname1];
  D4():
    deopt 15 [args2];
  D5():
    deopt 21 [];
  L18():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L3(dx6);
  L19():
    fname2 = force? fname1;
    __1 = ldf `[[` in base;
    r3 = dyn __1(_FunArgEnv3, fname2);
    goto L3(r3);
  L25():
    args3 = force? args2;
    checkMissing(args3);
    popenv;
    return args3;
  L28():
    p1 = prom<V +>{
      argsAnywhere = ld argsAnywhere;
      argsAnywhere1 = force? argsAnywhere;
      checkMissing(argsAnywhere1);
      return argsAnywhere1;
    };
    p2 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      fname3 = ld fname;
      fname4 = force? fname3;
      checkMissing(fname4);
      list = ldf list in base;
      r12 = dyn list(fname4);
      goto L0(r12);
    L2():
      r10 = dyn base1(<sym fname>);
      goto L0(r10);
    };
    r14 = dyn do_call(p1, p2);
    check L29() else D6();
  D6():
    deopt 24 [r14];
  L29():
    st args = r14;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L8(r16):
    c7 = `as.logical`(r16);
    if c7 then L33() else L9();
  L30():
    args4 = ld args;
    check L32() else D7();
  L31():
    r15 = dyn base2(<sym args>);
    goto L8(r15);
  D7():
    deopt 27 [args4];
  L9():
    sym3 = ldf `is.list`;
    base3 = ldf `is.list` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L32():
    args5 = force? args4;
    checkMissing(args5);
    c6 = `==`(args5, NULL);
    goto L8(c6);
  L33():
    character = ldf character;
    check L34() else D8();
  D8():
    deopt 31 [];
  L10(r19):
    c8 = `as.logical`(r19);
    if c8 then L41() else L11();
  L34():
    r17 = dyn character();
    check L35() else D9();
  L37():
    args6 = ld args;
    check L39() else D10();
  L38():
    r18 = dyn base3(<sym args>);
    goto L10(r18);
  D9():
    deopt 32 [r17];
  D10():
    deopt 35 [args6];
  L11():
    sym4 = ldf names;
    base4 = ldf names in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L45() else L46();
  L35():
    popenv;
    return r17;
  L39():
    args7 = force? args6;
    checkMissing(args7);
    is_list = ldf `is.list` in base;
    r20 = dyn is_list(args7);
    check L40() else D11();
  L41():
    unlist = ldf unlist;
    check L42() else D12();
  D11():
    deopt 38 [r20];
  D12():
    deopt 40 [];
  L12(r28):
    popenv;
    return r28;
  L40():
    goto L10(r20);
  L42():
    p5 = prom<V +>{
      lapply = ldf lapply;
      p3 = prom<V +>{
        args8 = ld args;
        args9 = force? args8;
        checkMissing(args9);
        return args9;
      };
      p4 = prom<V +>{
        r22 = clos inner1384373858;
        return r22;
      };
      r24 = dyn lapply(p3, p4);
      return r24;
    };
    r26 = dyn unlist(p5);
    check L43() else D13();
  L45():
    formals = ldf formals;
    check L47() else D14();
  L46():
    r27 = dyn base4(<lang formals(args)>);
    goto L12(r27);
  D13():
    deopt 42 [r26];
  D14():
    deopt 46 [];
  L43():
    popenv;
    return r26;
  L47():
    p6 = prom<V +>{
      args10 = ld args;
      args11 = force? args10;
      checkMissing(args11);
      return args11;
    };
    r30 = dyn formals(p6);
    check L48() else D15();
  D15():
    deopt 48 [r30];
  L48():
    names = ldf names in base;
    r31 = dyn names(r30);
    check L49() else D16();
  D16():
    deopt 50 [r31];
  L49():
    goto L12(r31);
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg formals:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r3:V, reg names:cls, reg r4:V |
    mkenv;
    st f = f;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    formals = ldf formals;
    check L3() else D0();
  L2():
    r = dyn base(<lang formals(f)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r3 = dyn formals(p);
    check L4() else D1();
  D1():
    deopt 5 [r3];
  L4():
    names = ldf names in base;
    r4 = dyn names(r3);
    check L5() else D2();
  D2():
    deopt 7 [r4];
  L5():
    goto L0(r4);
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2050808161;
    st withRestarts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2050808161(expr, `...`) {
  (reg expr:*, reg ddd:dots) -+> V { var expr:*, var `...`:dots?, reg r:cls, reg r1:cls, reg r2:cls, reg r3:cls, reg r4:cls, reg makeRestartList:cls, reg ddd1:dots?, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg restarts:*, reg restarts1:V, reg length:cls, reg r8:V, reg r9:V, reg c:L, reg expr1:*, reg expr2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg restarts2:*, reg restarts3:V, reg length1:cls, reg r12:V, reg r13:V, reg c1:L, reg withOneRestart:cls, reg expr3:*, reg expr4:V, reg p:p(V +), reg restarts4:*, reg restarts5:V, reg c2:L, reg restarts7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r15:V, reg p1:p(V +), reg r17:V, reg withRestartList:cls, reg expr5:*, reg expr6:V, reg p2:p(V +), reg restarts8:*, reg restarts9:V, reg p3:p(V +), reg r20:V |
    mkenv;
    st expr = expr;
    st `...` = ddd;
    r = clos inner1270097164;
    st docall = r;
    r1 = clos inner1995816611;
    st makeRestart = r1;
    r2 = clos inner1246119658;
    st makeRestartList = r2;
    r3 = clos inner1811163330;
    st withOneRestart = r3;
    r4 = clos inner3489140813;
    st withRestartList = r4;
    makeRestartList = ldf makeRestartList;
    check L4() else D0();
  D0():
    deopt 16 [];
  L4():
    ddd1 = ld `...`;
    r5 = dyn makeRestartList[`...`](ddd1);
    check L5() else D1();
  D1():
    deopt 18 [r5];
  L5():
    st restarts = r5;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r7):
    r9 = `==`(r7, 0);
    c = `as.logical`(r9);
    if c then L10() else L1();
  L6():
    restarts = ld restarts;
    check L8() else D2();
  L7():
    r6 = dyn base(<sym restarts>);
    goto L0(r6);
  D2():
    deopt 22 [restarts];
  L1():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L8():
    restarts1 = force? restarts;
    checkMissing(restarts1);
    length = ldf length in base;
    r8 = dyn length(restarts1);
    check L9() else D3();
  L10():
    expr1 = ld expr;
    check L11() else D4();
  D3():
    deopt 25 [r8];
  D4():
    deopt 28 [expr1];
  L2(r11):
    r13 = `==`(r11, 1);
    c1 = `as.logical`(r13);
    if c1 then L17() else L3();
  L9():
    goto L0(r8);
  L11():
    expr2 = force? expr1;
    checkMissing(expr2);
    popenv;
    return expr2;
  L13():
    restarts2 = ld restarts;
    check L15() else D5();
  L14():
    r10 = dyn base1(<sym restarts>);
    goto L2(r10);
  D5():
    deopt 32 [restarts2];
  L3():
    withRestartList = ldf withRestartList;
    check L21() else D9();
  L15():
    restarts3 = force? restarts2;
    checkMissing(restarts3);
    length1 = ldf length in base;
    r12 = dyn length1(restarts3);
    check L16() else D6();
  L17():
    withOneRestart = ldf withOneRestart;
    check L18() else D7();
  D6():
    deopt 35 [r12];
  D7():
    deopt 39 [];
  D9():
    deopt 44 [];
  L16():
    goto L2(r12);
  L18():
    p = prom<V +>{
      expr3 = ld expr;
      expr4 = force? expr3;
      checkMissing(expr4);
      return expr4;
    };
    p1 = prom<V +>{
      restarts4 = ld restarts;
      restarts5 = force? restarts4;
      checkMissing(restarts5);
      c2 = `is.object`(restarts5);
      if c2 then L1() else L2(restarts5);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", restarts5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(restarts7):
      __ = ldf `[[` in base;
      r15 = dyn __(restarts7, 1);
      goto L0(r15);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r17 = dyn withOneRestart(p, p1);
    check L19() else D8();
  L21():
    p2 = prom<V +>{
      expr5 = ld expr;
      expr6 = force? expr5;
      checkMissing(expr6);
      return expr6;
    };
    p3 = prom<V +>{
      restarts8 = ld restarts;
      restarts9 = force? restarts8;
      checkMissing(restarts9);
      return restarts9;
    };
    r20 = dyn withRestartList(p2, p3);
    check L22() else D10();
  D8():
    deopt 42 [r17];
  D10():
    deopt 47 [r20];
  L19():
    popenv;
    return r17;
  L22():
    popenv;
    return r20;
  }
}
fun inner1270097164(fun, args) {
  (reg fun:*, reg args:*) -+> V { var fun:*, var args:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fun1:*, reg fun2:V, reg c:L, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg fun3:*, reg fun4:V, reg length:cls, reg r4:V, reg r5:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c15:L, reg r7:V, reg fun5:*, reg fun6:V, reg c16:L, reg c17:L, reg c18:V, reg c20:L, reg get:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg fun7:*, reg fun8:V, reg as_character:cls, reg r10:V, reg p:p(V +), reg parent_frame:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg do_call:cls, reg lapply:cls, reg args1:*, reg args2:V, reg p2:p(V +), reg enquote:*, reg enquote1:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V |
    mkenv;
    st fun = fun;
    st args = args;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L10() else L1(c1);
  L7():
    fun1 = ld fun;
    check L9() else D0();
  L8():
    r = dyn base(<sym fun>);
    goto L0(r);
  D0():
    deopt 1 [fun1];
  L1(c3):
    c10 = `as.logical`(c3);
    if c10 then L3(c10) else L16();
  L9():
    fun2 = force? fun1;
    checkMissing(fun2);
    c = `is.character`(fun2);
    goto L0(c);
  L10():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(c6, r3):
    r5 = `==`(r3, 1);
    c7 = `as.logical`(r5);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L3(c11):
    c20 = `as.logical`(c11);
    if c20 then L21() else L5();
  L11():
    fun3 = ld fun;
    check L13() else D1();
  L12():
    r2 = dyn base1(<sym fun>);
    goto L2(c1, r2);
  L16():
    sym2 = ldf `is.name`;
    base2 = ldf `is.name` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  D1():
    deopt 6 [c1, fun3];
  L4(c15, r7):
    c17 = `as.logical`(r7);
    c18 = `||`(c15, c17);
    goto L3(c18);
  L5():
    goto L6();
  L6():
    do_call = ldf `do.call`;
    check L25() else D6();
  L13():
    fun4 = force? fun3;
    checkMissing(fun4);
    length = ldf length in base;
    r4 = dyn length(fun4);
    check L14() else D2();
  L17():
    fun5 = ld fun;
    check L19() else D3();
  L18():
    r6 = dyn base2(<sym fun>);
    goto L4(c10, r6);
  L21():
    get = ldf get;
    check L22() else D4();
  D2():
    deopt 9 [c1, r4];
  D3():
    deopt 14 [c10, fun5];
  D4():
    deopt 19 [];
  D6():
    deopt 30 [];
  L14():
    goto L2(c1, r4);
  L19():
    fun6 = force? fun5;
    checkMissing(fun6);
    c16 = `is.symbol`(fun6);
    goto L4(c10, c16);
  L22():
    p = prom<V +>{
      sym3 = ldf `as.character`;
      base3 = ldf `as.character` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r9):
      return r9;
    L1():
      fun7 = ld fun;
      fun8 = force? fun7;
      checkMissing(fun8);
      as_character = ldf `as.character` in base;
      r10 = dyn as_character(fun8);
      goto L0(r10);
    L2():
      r8 = dyn base3(<sym fun>);
      goto L0(r8);
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r12 = dyn parent_frame();
      return r12;
    };
    r14 = dyn get[, envir, mode](p, p1, "function");
    check L23() else D5();
  L25():
    p4 = prom<V +>{
      lapply = ldf lapply;
      p2 = prom<V +>{
        args1 = ld args;
        args2 = force? args1;
        checkMissing(args2);
        return args2;
      };
      p3 = prom<V +>{
        enquote = ld enquote;
        enquote1 = force? enquote;
        checkMissing(enquote1);
        return enquote1;
      };
      r18 = dyn lapply(p2, p3);
      return r18;
    };
    r20 = dyn do_call("fun", p4);
    check L26() else D7();
  D5():
    deopt 25 [r14];
  D7():
    deopt 33 [r20];
  L23():
    st fun = r14;
    goto L6();
  L26():
    popenv;
    return r20;
  }
}
fun inner1995816611(name, handler, description, test, interactive) {
  (reg name:*, reg handler:*, reg description:*, reg test:*, reg interactive:*) -+> V { var name:*, reg name_isMissing:L, reg name_orDefault:*, var handler:*, reg handler_isMissing:L, reg handler_orDefault:*, reg r:cls, reg p:p(V +), var description:*, reg description_isMissing:L, reg description_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg r2:cls, reg p1:p(V +), var interactive:*, reg interactive_isMissing:L, reg interactive_orDefault:*, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg name1:*, reg name2:V, reg handler1:*, reg handler2:V, reg description1:*, reg description2:V, reg test1:*, reg test2:V, reg interactive1:*, reg interactive2:V, reg list:cls, reg r6:V, reg p2:p(V +), reg r8:V |
    mkenv;
    name_isMissing = missing.0(name);
    if name_isMissing then L0("") else L0(name);
  L0(name_orDefault):
    st name = name_orDefault;
    handler_isMissing = missing.0(handler);
    if handler_isMissing then L1() else L2(handler);
  L1():
    p = prom<V +>{
      r = clos inner1246119658;
      return r;
    };
    goto L2(p);
  L2(handler_orDefault):
    st handler = handler_orDefault;
    description_isMissing = missing.0(description);
    if description_isMissing then L3("") else L3(description);
  L3(description_orDefault):
    st description = description_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L4() else L5(test);
  L4():
    p1 = prom<V +>{
      r2 = clos inner4061490079;
      return r2;
    };
    goto L5(p1);
  L5(test_orDefault):
    st test = test_orDefault;
    interactive_isMissing = missing.0(interactive);
    if interactive_isMissing then L6(NULL) else L6(interactive);
  L6(interactive_orDefault):
    st interactive = interactive_orDefault;
    structure = ldf structure;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      handler1 = ld handler;
      handler2 = force? handler1;
      checkMissing(handler2);
      description1 = ld description;
      description2 = force? description1;
      checkMissing(description2);
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      interactive1 = ld interactive;
      interactive2 = force? interactive1;
      checkMissing(interactive2);
      list = ldf list in base;
      r6 = dyn list(name2, NULL, handler2, description2, test2, interactive2);
      goto L0(r6);
    L2():
      r4 = dyn base[name, exit, handler, description, test, interactive](<sym name>, NULL, <sym handler>, <sym description>, <sym test>, <sym interactive>);
      goto L0(r4);
    };
    r8 = dyn structure[, class](p2, "restart");
    check L8() else D1();
  D1():
    deopt 5 [r8];
  L8():
    popenv;
    return r8;
  }
}
fun inner1246119658(`...`) {
  (reg ddd:dots) -+> V { var `...`:dots? |
    mkenv;
    st `...` = ddd;
    popenv;
    return NULL;
  }
}
fun inner4061490079(c) {
  (reg c:*) -+> V { var c:* |
    mkenv;
    st c = c;
    popenv;
    return TRUE;
  }
}
fun inner1811163330(expr, restart) {
  (reg expr:*, reg restart:*) -+> V { var expr:*, var restart:*, reg r:cls, reg doWithOneRestart:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg restart1:*, reg restart2:V, reg p1:p(V +), reg r2:V, reg docall:cls, reg restart3:*, reg restart4:V, reg c:L, reg restart6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p2:p(V +), reg restartArgs:*, reg restartArgs1:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st expr = expr;
    st restart = restart;
    r = clos inner1811163330;
    st doWithOneRestart = r;
    doWithOneRestart = ldf doWithOneRestart;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p1 = prom<V +>{
      restart1 = ld restart;
      restart2 = force? restart1;
      checkMissing(restart2);
      return restart2;
    };
    r2 = dyn doWithOneRestart(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r2];
  L1():
    st restartArgs = r2;
    docall = ldf docall;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      restart3 = ld restart;
      restart4 = force? restart3;
      checkMissing(restart4);
      c = `is.object`(restart4);
      if c then L1() else L2(restart4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", restart4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(restart6):
      r3 = `$`(restart6, <sym handler>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      restartArgs = ld restartArgs;
      restartArgs1 = force? restartArgs;
      checkMissing(restartArgs1);
      return restartArgs1;
    };
    r6 = dyn docall(p2, p3);
    check L3() else D3();
  D3():
    deopt 13 [r6];
  L3():
    popenv;
    return r6;
  }
}
fun inner3489140813(expr, restarts) {
  (reg expr:*, reg restarts:*) -+> V { var expr:*, var restarts:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg restarts1:*, reg restarts2:V, reg length:cls, reg r2:V, reg nr:*, reg nr1:V, reg r3:V, reg c:L, reg withOneRestart:cls, reg withRestartList:cls, reg expr1:*, reg expr2:V, reg p:p(V +), reg restarts3:*, reg restarts4:V, reg c1:L, reg restarts6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg nr2:*, reg nr3:V, reg r5:V, reg __:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg restarts7:*, reg restarts8:V, reg c2:L, reg restarts10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nr4:*, reg nr5:V, reg __1:cls, reg r10:V, reg p3:p(V +), reg r12:V, reg nr6:*, reg nr7:V, reg r13:V, reg c3:L, reg withOneRestart1:cls, reg expr3:*, reg expr4:V, reg p4:p(V +), reg restarts11:*, reg restarts12:V, reg c4:L, reg restarts14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r15:V, reg p5:p(V +), reg r17:V, reg expr5:*, reg expr6:V |
    mkenv;
    st expr = expr;
    st restarts = restarts;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    st nr = r1;
    nr = ld nr;
    check L7() else D2();
  L3():
    restarts1 = ld restarts;
    check L5() else D0();
  L4():
    r = dyn base(<sym restarts>);
    goto L0(r);
  D0():
    deopt 2 [restarts1];
  D2():
    deopt 7 [nr];
  L5():
    restarts2 = force? restarts1;
    checkMissing(restarts2);
    length = ldf length in base;
    r2 = dyn length(restarts2);
    check L6() else D1();
  L7():
    nr1 = force? nr;
    checkMissing(nr1);
    r3 = `>`(nr1, 1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  D1():
    deopt 5 [r2];
  L1():
    nr6 = ld nr;
    check L12() else D5();
  L6():
    goto L0(r2);
  L8():
    withOneRestart = ldf withOneRestart;
    check L9() else D3();
  D3():
    deopt 12 [];
  D5():
    deopt 16 [nr6];
  L9():
    p2 = prom<V +>{
      withRestartList = ldf withRestartList;
      p = prom<V +>{
        expr1 = ld expr;
        expr2 = force? expr1;
        checkMissing(expr2);
        return expr2;
      };
      p1 = prom<V +>{
        restarts3 = ld restarts;
        restarts4 = force? restarts3;
        checkMissing(restarts4);
        c1 = `is.object`(restarts4);
        if c1 then L1() else L2(restarts4);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", restarts4);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(restarts6):
        nr2 = ld nr;
        nr3 = force? nr2;
        checkMissing(nr3);
        r5 = `-`(<missing>, nr3);
        __ = ldf `[` in base;
        r6 = dyn __(restarts6, r5);
        goto L0(r6);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r8 = dyn withRestartList(p, p1);
      return r8;
    };
    p3 = prom<V +>{
      restarts7 = ld restarts;
      restarts8 = force? restarts7;
      checkMissing(restarts8);
      c2 = `is.object`(restarts8);
      if c2 then L1() else L2(restarts8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", restarts8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(restarts10):
      nr4 = ld nr;
      nr5 = force? nr4;
      __1 = ldf `[[` in base;
      r10 = dyn __1(restarts10, nr5);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r12 = dyn withOneRestart(p2, p3);
    check L10() else D4();
  L12():
    nr7 = force? nr6;
    checkMissing(nr7);
    r13 = `==`(nr7, 1);
    c3 = `as.logical`(r13);
    if c3 then L13() else L2();
  D4():
    deopt 15 [r12];
  L2():
    expr5 = ld expr;
    check L17() else D8();
  L10():
    popenv;
    return r12;
  L13():
    withOneRestart1 = ldf withOneRestart;
    check L14() else D6();
  D6():
    deopt 21 [];
  D8():
    deopt 25 [expr5];
  L14():
    p4 = prom<V +>{
      expr3 = ld expr;
      expr4 = force? expr3;
      checkMissing(expr4);
      return expr4;
    };
    p5 = prom<V +>{
      restarts11 = ld restarts;
      restarts12 = force? restarts11;
      checkMissing(restarts12);
      c4 = `is.object`(restarts12);
      if c4 then L1() else L2(restarts12);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", restarts12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(restarts14):
      __2 = ldf `[[` in base;
      r15 = dyn __2(restarts14, 1);
      goto L0(r15);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r17 = dyn withOneRestart1(p4, p5);
    check L15() else D7();
  L17():
    expr6 = force? expr5;
    checkMissing(expr6);
    popenv;
    return expr6;
  D7():
    deopt 24 [r17];
  L15():
    popenv;
    return r17;
  }
}
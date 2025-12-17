fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799799234;
    st `.load_namespace_rather_quietly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner799799234(package) {
  (reg package:*) -+> V { var package:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg substitute:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg withCallingHandlers:cls, reg suppressMessages:cls, reg eval:cls, reg expr:*, reg expr1:V, reg p:p(V +), reg r7:V, reg p1:p(V +), reg r9:V, reg p2:p(V +), reg _whandler:*, reg _whandler1:V, reg p3:p(V +), reg r12:V, reg invisible:cls, reg r13:V |
    mkenv;
    st package = package;
    r = clos inner3708401697;
    st `.whandler` = r;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st expr = r2;
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L4() else L5();
  L2():
    substitute = ldf substitute in base;
    r3 = dyn substitute(<lang loadNamespace(package)>, <lang list(package=package)>);
    goto L0(r3);
  L3():
    r1 = dyn base(<lang loadNamespace(package)>, <lang list(package=package)>);
    goto L0(r1);
  L1(r5):
    popenv;
    return r5;
  L4():
    withCallingHandlers = ldf withCallingHandlers;
    check L6() else D0();
  L5():
    r4 = dyn base1(<lang withCallingHandlers(suppressMessages(eval(expr)), warning=.whandler)>);
    goto L1(r4);
  D0():
    deopt 10 [];
  L6():
    p2 = prom<V +>{
      suppressMessages = ldf suppressMessages;
      p1 = prom<V +>{
        eval = ldf eval;
        p = prom<V +>{
          expr = ld expr;
          expr1 = force? expr;
          checkMissing(expr1);
          return expr1;
        };
        r7 = dyn eval(p);
        return r7;
      };
      r9 = dyn suppressMessages(p1);
      return r9;
    };
    p3 = prom<V +>{
      _whandler = ld `.whandler`;
      _whandler1 = force? _whandler;
      checkMissing(_whandler1);
      return _whandler1;
    };
    r12 = dyn withCallingHandlers[, warning](p2, p3);
    check L7() else D1();
  D1():
    deopt 14 [r12];
  L7():
    invisible = ldf invisible in base;
    r13 = dyn invisible(r12);
    check L8() else D2();
  D2():
    deopt 16 [r13];
  L8():
    goto L1(r13);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sys_calls:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg _call_names:cls, reg calls:*, reg calls1:V, reg p:p(V +), reg r4:V, reg r5:V, reg sum:cls, reg r6:V, reg r7:V, reg c:L, reg signalCondition:cls, reg e1:*, reg e2:V, reg p1:p(V +), reg r9:V, reg tryInvokeRestart:cls, reg r10:V |
    mkenv;
    st e = e;
    sys_calls = ldf `sys.calls`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn sys_calls();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st calls = r;
    sym = ldf sum;
    base = ldf sum in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r2):
    r7 = `==`(r2, 1);
    c = `as.logical`(r7);
    if c then L9() else L1();
  L4():
    _call_names = ldf `.call_names`;
    check L6() else D2();
  L5():
    r1 = dyn base(<lang `==`(.call_names(calls), "loadNamespace")>);
    goto L0(r1);
  D2():
    deopt 7 [];
  L1():
    tryInvokeRestart = ldf tryInvokeRestart;
    check L13() else D7();
  L6():
    p = prom<V +>{
      calls = ld calls;
      calls1 = force? calls;
      checkMissing(calls1);
      return calls1;
    };
    r4 = dyn _call_names(p);
    check L7() else D3();
  L9():
    signalCondition = ldf signalCondition;
    check L10() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 17 [];
  D7():
    deopt 21 [];
  L7():
    r5 = `==`(r4, "loadNamespace");
    sum = ldf sum in base;
    r6 = dyn sum(r5);
    check L8() else D4();
  L10():
    p1 = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r9 = dyn signalCondition(p1);
    check L11() else D6();
  L13():
    r10 = dyn tryInvokeRestart("muffleWarning");
    check L14() else D8();
  D4():
    deopt 13 [r6];
  D6():
    deopt 19 [r9];
  D8():
    deopt 23 [r10];
  L8():
    goto L0(r6);
  L11():
    popenv;
    return r9;
  L14():
    popenv;
    return r10;
  }
}
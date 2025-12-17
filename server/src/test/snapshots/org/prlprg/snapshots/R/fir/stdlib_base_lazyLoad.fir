fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner477394654;
    st lazyLoad = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner477394654(filebase, envir, filter) {
  (reg filebase:*, reg envir:*, reg filter:*) -+> V { var filebase:*, var envir:*, reg envir_isMissing:L, reg envir_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var filter:*, reg r2:cls, reg lazyLoadDBexec:cls, reg filebase1:*, reg filebase2:V, reg p1:p(V +), reg fun:*, reg fun1:V, reg p2:p(V +), reg filter1:*, reg filter2:V, reg p3:p(V +), reg r6:V |
    mkenv;
    st filebase = filebase;
    envir_isMissing = missing.0(envir);
    if envir_isMissing then L0() else L1(envir);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(envir_orDefault):
    st envir = envir_orDefault;
    st filter = filter;
    r2 = clos inner2058174622;
    st fun = r2;
    lazyLoadDBexec = ldf lazyLoadDBexec;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p1 = prom<V +>{
      filebase1 = ld filebase;
      filebase2 = force? filebase1;
      checkMissing(filebase2);
      return filebase2;
    };
    p2 = prom<V +>{
      fun = ld fun;
      fun1 = force? fun;
      checkMissing(fun1);
      return fun1;
    };
    p3 = prom<V +>{
      filter1 = ld filter;
      filter2 = force? filter1;
      checkMissing(filter2);
      return filter2;
    };
    r6 = dyn lazyLoadDBexec(p1, p2, p3);
    check L3() else D1();
  D1():
    deopt 8 [r6];
  L3():
    popenv;
    return r6;
  }
}
fun inner2058174622(db) {
  (reg db:*) -+> V { var db:*, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg db5:*, reg db6:V, reg c1:L, reg db8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg quote:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg vars:*, reg vars1:V, reg vals:*, reg vals1:V, reg expr:*, reg expr1:V, reg db9:*, reg db10:V, reg envir:*, reg envir1:V, reg makeLazy:cls, reg r7:V |
    mkenv;
    st db = db;
    db1 = ld db;
    check L2() else D0();
  D0():
    deopt 0 [db1];
  L2():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L4() else L5(db2);
  L3(dx1):
    st vals = dx1;
    db5 = ld db;
    check L7() else D1();
  L4():
    dr = tryDispatchBuiltin.1("$", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(db4):
    r = `$`(db4, <sym vals>);
    goto L3(r);
  D1():
    deopt 4 [db5];
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L7():
    db6 = force? db5;
    checkMissing(db6);
    c1 = `is.object`(db6);
    if c1 then L9() else L10(db6);
  L8(dx3):
    st vars = dx3;
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L9():
    dr2 = tryDispatchBuiltin.1("$", db6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L11() else L10(dr2);
  L10(db8):
    r1 = `$`(db8, <sym vars>);
    goto L8(r1);
  L0(r3):
    st expr = r3;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L11():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L12():
    quote = ldf quote in base;
    r4 = dyn quote(<lang lazyLoadDBfetch(key, datafile, compressed, envhook)>);
    goto L0(r4);
  L13():
    r2 = dyn base(<lang lazyLoadDBfetch(key, datafile, compressed, envhook)>);
    goto L0(r2);
  L1(r6):
    popenv;
    return r6;
  L14():
    vars = ld vars;
    check L16() else D2();
  L15():
    r5 = dyn base1(<lang makeLazy(vars, vals, expr, db, envir)>);
    goto L1(r5);
  D2():
    deopt 14 [vars];
  L16():
    vars1 = force? vars;
    checkMissing(vars1);
    vals = ld vals;
    check L17() else D3();
  D3():
    deopt 16 [vals];
  L17():
    vals1 = force? vals;
    checkMissing(vals1);
    expr = ld expr;
    check L18() else D4();
  D4():
    deopt 18 [expr];
  L18():
    expr1 = force? expr;
    checkMissing(expr1);
    db9 = ld db;
    check L19() else D5();
  D5():
    deopt 20 [db9];
  L19():
    db10 = force? db9;
    checkMissing(db10);
    envir = ld envir;
    check L20() else D6();
  D6():
    deopt 22 [envir];
  L20():
    envir1 = force? envir;
    checkMissing(envir1);
    makeLazy = ldf makeLazy in base;
    r7 = dyn makeLazy(vars1, vals1, expr1, db10, envir1);
    check L21() else D7();
  D7():
    deopt 25 [r7];
  L21():
    goto L1(r7);
  }
}
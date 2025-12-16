fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-1250751483`;
    st `..getNamespace` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-1250751483`(name, where) {
  (reg name:*, reg where:*) -+> V { var name:*, var where:*, reg ____:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg name1:*, reg name2:V, reg getRegisteredNamespace:cls, reg r2:V, reg p:p(V +), reg tryCatch:cls, reg loadNamespace:cls, reg name3:*, reg name4:V, reg p1:p(V +), reg r5:V, reg p2:p(V +), reg r7:cls, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st name = name;
    st where = where;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf `.Internal`;
      base = ldf `.Internal` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      getRegisteredNamespace = ldf getRegisteredNamespace in base;
      r2 = dyn getRegisteredNamespace(name2);
      goto L0(r2);
    L2():
      r = dyn base(<lang getRegisteredNamespace(name)>);
      goto L0(r);
    };
    p4 = prom<V +>{
      tryCatch = ldf tryCatch;
      p2 = prom<V +>{
        loadNamespace = ldf loadNamespace;
        p1 = prom<V +>{
          name3 = ld name;
          name4 = force? name3;
          checkMissing(name4);
          return name4;
        };
        r5 = dyn loadNamespace(p1);
        return r5;
      };
      p3 = prom<V +>{
        r7 = clos inner1560918050;
        return r7;
      };
      r9 = dyn tryCatch[, error](p2, p3);
      return r9;
    };
    r11 = dyn ____(p, p4);
    check L1() else D1();
  D1():
    deopt 4 [r11];
  L1():
    popenv;
    return r11;
  }
}
fun inner1560918050(e) {
  (reg e:*) -+> V { var e:*, reg Sys_getenv:cls, reg r:V, reg tr:*, reg tr1:V, reg r1:V, reg c:L, reg c1:V, reg where:*, reg where1:V, reg r2:V, reg c3:L, reg c6:L, reg c7:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg c12:L, reg c13:L, reg r4:V, reg tr2:*, reg tr3:V, reg nzchar:cls, reg r5:V, reg r6:V, reg c14:L, reg c15:V, reg c18:L, reg c19:V, reg c21:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg name:*, reg name1:V, reg p:p(V +), reg r8:V, reg c22:L, reg r10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg p1:p(V +), reg sQuote1:cls, reg where2:*, reg where3:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg Sys_getenv1:cls, reg r21:V, reg nzchar1:cls, reg r22:V, reg c23:L, reg print:cls, reg sys_calls:cls, reg r23:V, reg p5:p(V +), reg r25:V, reg r26:V, reg _GlobalEnv:*, reg _GlobalEnv1:V |
    mkenv;
    st e = e;
    Sys_getenv = ldf `Sys.getenv`;
    check L8() else D0();
  D0():
    deopt 1 [];
  L8():
    r = dyn Sys_getenv("_R_NO_REPORT_MISSING_NAMESPACES_");
    check L9() else D1();
  D1():
    deopt 3 [r];
  L9():
    st tr = r;
    tr = ld tr;
    check L10() else D2();
  D2():
    deopt 5 [tr];
  L10():
    tr1 = force? tr;
    checkMissing(tr1);
    r1 = `==`(tr1, "false");
    c = `as.logical`(r1);
    if c then L0(c) else L11();
  L0(c1):
    c21 = `as.logical`(c1);
    if c21 then L20() else L3();
  L11():
    where = ld where;
    check L12() else D3();
  D3():
    deopt 9 [c, where];
  L3():
    goto L7();
  L7():
    _GlobalEnv = ld `.GlobalEnv`;
    check L33() else D13();
  L12():
    where1 = force? where;
    checkMissing(where1);
    r2 = `!=`(where1, "<unknown>");
    c3 = `as.logical`(r2);
    if c3 then L13() else L1(c, c3);
  L20():
    warning = ldf warning;
    check L21() else D6();
  D6():
    deopt 23 [];
  D13():
    deopt 48 [_GlobalEnv];
  L1(c6, c7):
    c18 = `as.logical`(c7);
    c19 = `||`(c6, c18);
    goto L0(c19);
  L13():
    sym = ldf nzchar;
    base = ldf nzchar in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L21():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          name = ld name;
          name1 = force? name;
          checkMissing(name1);
          return name1;
        };
        r8 = dyn sQuote(p);
        c22 = `is.object`(r8);
        if c22 then L1() else L2(r8);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", r8);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r10):
        __ = ldf `[` in base;
        r11 = dyn __(r10, 1);
        goto L0(r11);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      p3 = prom<V +>{
        sQuote1 = ldf sQuote;
        p2 = prom<V +>{
          where2 = ld where;
          where3 = force? where2;
          checkMissing(where3);
          return where3;
        };
        r14 = dyn sQuote1(p2);
        return r14;
      };
      r16 = dyn gettextf("namespace %s is not available and has been replaced\nby .GlobalEnv when processing object %s", p1, p3);
      return r16;
    };
    r18 = dyn warning[, domain, `call.`, `immediate.`](p4, NA_LGL, FALSE, TRUE);
    check L22() else D7();
  L33():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    popenv;
    return _GlobalEnv1;
  D7():
    deopt 31 [r18];
  L2(c12, c13, r4):
    r6 = `!`(r4);
    c14 = `as.logical`(r6);
    c15 = `&&`(c13, c14);
    goto L1(c12, c15);
  L14():
    tr2 = ld tr;
    check L16() else D4();
  L15():
    r3 = dyn base(<sym tr>);
    goto L2(c, c3, r3);
  L22():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D4():
    deopt 15 [c, c3, tr2];
  L4(r20):
    c23 = `as.logical`(r20);
    if c23 then L28() else L5();
  L16():
    tr3 = force? tr2;
    checkMissing(tr3);
    nzchar = ldf nzchar in base;
    r5 = dyn nzchar(tr3);
    check L17() else D5();
  L23():
    Sys_getenv1 = ldf `Sys.getenv`;
    check L25() else D8();
  L24():
    r19 = dyn base1(<lang Sys.getenv("_R_CALLS_MISSING_NAMESPACES_")>);
    goto L4(r19);
  D5():
    deopt 18 [c, c3, r5];
  D8():
    deopt 35 [];
  L5():
    goto L6(NULL);
  L6(r26):
    goto L7();
  L17():
    goto L2(c, c3, r5);
  L25():
    r21 = dyn Sys_getenv1("_R_CALLS_MISSING_NAMESPACES_");
    check L26() else D9();
  L28():
    print = ldf print;
    check L29() else D11();
  D9():
    deopt 37 [r21];
  D11():
    deopt 41 [];
  L26():
    nzchar1 = ldf nzchar in base;
    r22 = dyn nzchar1(r21);
    check L27() else D10();
  L29():
    p5 = prom<V +>{
      sys_calls = ldf `sys.calls`;
      r23 = dyn sys_calls();
      return r23;
    };
    r25 = dyn print(p5);
    check L30() else D12();
  D10():
    deopt 39 [r22];
  D12():
    deopt 43 [r25];
  L27():
    goto L4(r22);
  L30():
    goto L6(r25);
  }
}
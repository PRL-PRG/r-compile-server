fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3652349459;
    st autoloader = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3652349459(name, package, `...`) {
  (reg name:*, reg package:*, reg ddd:dots) -+> V { var name:*, var package:*, var `...`:dots?, reg paste0:cls, reg name1:*, reg name2:V, reg p:p(V +), reg r1:V, reg rm:cls, reg name3:*, reg name4:V, reg p1:p(V +), reg _AutoloadEnv:*, reg _AutoloadEnv1:V, reg p2:p(V +), reg r4:V, reg match_call:cls, reg r5:V, reg l:*, reg c:L, reg r7:dots, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r10:V, reg as_name:cls, reg r11:V, reg l3:*, reg c1:L, reg r13:V, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r16:V, reg eval:cls, reg m:*, reg m1:V, reg p3:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p4:p(V +), reg r19:V, reg autoload:cls, reg name5:*, reg name6:V, reg p5:p(V +), reg package1:*, reg package2:V, reg p6:p(V +), reg ddd1:dots?, reg r22:V, reg sym:cls, reg base:cls, reg guard:L, reg r23:V, reg r24:V, reg paste1:cls, reg package3:*, reg package4:V, reg p7:p(V +), reg r26:V, reg search:cls, reg r27:V, reg match:cls, reg r28:V, reg exists:cls, reg name7:*, reg name8:V, reg p8:p(V +), reg where:*, reg where1:V, reg p9:p(V +), reg r31:V, reg c2:L, reg eval1:cls, reg as_name1:cls, reg name9:*, reg name10:V, reg p10:p(V +), reg r33:V, reg p11:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r35:V, reg r36:V, reg where2:*, reg where3:V, reg as_environment:cls, reg r37:V, reg p12:p(V +), reg r39:V, reg stop:cls, reg gettextf:cls, reg name11:*, reg name12:V, reg p13:p(V +), reg package5:*, reg package6:V, reg p14:p(V +), reg r42:V, reg p15:p(V +), reg r44:V |
    mkenv;
    st name = name;
    st package = package;
    st `...` = ddd;
    paste0 = ldf paste0;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    r1 = dyn paste0(p, "");
    check L4() else D1();
  D1():
    deopt 4 [r1];
  L4():
    st name = r1;
    rm = ldf rm;
    check L5() else D2();
  D2():
    deopt 7 [];
  L5():
    p1 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p2 = prom<V +>{
      _AutoloadEnv = ld `.AutoloadEnv`;
      _AutoloadEnv1 = force? _AutoloadEnv;
      checkMissing(_AutoloadEnv1);
      return _AutoloadEnv1;
    };
    r4 = dyn rm[list, envir, inherits](p1, p2, FALSE);
    check L6() else D3();
  D3():
    deopt 14 [r4];
  L6():
    match_call = ldf `match.call`;
    check L7() else D4();
  D4():
    deopt 16 [];
  L7():
    r5 = dyn match_call();
    check L8() else D5();
  D5():
    deopt 17 [r5];
  L8():
    st m = r5;
    l = ld m;
    c = `is.object`(l);
    if c then L10() else L11(NULL, l);
  L9(dx1):
    st m = dx1;
    as_name = ldf `as.name`;
    check L13() else D6();
  L10():
    dr = tryDispatchBuiltin.0("$<-", l, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(NULL, dr);
  L11(r7, l2):
    r10 = `$<-`(l2, <sym name>, NULL);
    goto L9(r10);
  D6():
    deopt 25 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    r11 = dyn as_name("library");
    check L14() else D7();
  D7():
    deopt 27 [r11];
  L14():
    l3 = ld m;
    c1 = `is.object`(l3);
    if c1 then L15() else L16(r11, l3);
  L0(dx3):
    st m = dx3;
    eval = ldf eval;
    check L18() else D8();
  L15():
    dr2 = tryDispatchBuiltin.0("[[<-", l3, r11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16(r11, dr2);
  L16(r13, l5):
    ____ = ldf `[[<-` in base;
    r16 = dyn ____(l5, r11, 1);
    goto L0(r16);
  D8():
    deopt 34 [];
  L17():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L18():
    p3 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p4 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r19 = dyn eval(p3, p4);
    check L19() else D9();
  D9():
    deopt 37 [r19];
  L19():
    autoload = ldf autoload;
    check L20() else D10();
  D10():
    deopt 39 [];
  L20():
    p5 = prom<V +>{
      name5 = ld name;
      name6 = force? name5;
      checkMissing(name6);
      return name6;
    };
    p6 = prom<V +>{
      package1 = ld package;
      package2 = force? package1;
      checkMissing(package2);
      return package2;
    };
    ddd1 = ld `...`;
    r22 = dyn autoload[, , reset, `...`](p5, p6, TRUE, ddd1);
    check L21() else D11();
  D11():
    deopt 45 [r22];
  L21():
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L1(r24):
    st where = r24;
    exists = ldf exists;
    check L29() else D17();
  L22():
    paste1 = ldf paste0;
    check L24() else D12();
  L23():
    r23 = dyn base(<lang paste0("package:", package)>, <lang search()>);
    goto L1(r23);
  D12():
    deopt 49 [];
  D17():
    deopt 62 [];
  L24():
    p7 = prom<V +>{
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      return package4;
    };
    r26 = dyn paste1("package:", p7);
    check L25() else D13();
  L29():
    p8 = prom<V +>{
      name7 = ld name;
      name8 = force? name7;
      checkMissing(name8);
      return name8;
    };
    p9 = prom<V +>{
      where = ld where;
      where1 = force? where;
      checkMissing(where1);
      return where1;
    };
    r31 = dyn exists[, where, inherits](p8, p9, FALSE);
    check L30() else D18();
  D13():
    deopt 52 [r26];
  D18():
    deopt 68 [r31];
  L25():
    search = ldf search;
    check L26() else D14();
  L30():
    c2 = `as.logical`(r31);
    if c2 then L31() else L2();
  D14():
    deopt 54 [];
  L2():
    stop = ldf stop;
    check L35() else D21();
  L26():
    r27 = dyn search();
    check L27() else D15();
  L31():
    eval1 = ldf eval;
    check L32() else D19();
  D15():
    deopt 55 [r27];
  D19():
    deopt 70 [];
  D21():
    deopt 75 [];
  L27():
    match = ldf match in base;
    r28 = dyn match(r26, r27, NA_INT, NULL);
    check L28() else D16();
  L32():
    p11 = prom<V +>{
      as_name1 = ldf `as.name`;
      p10 = prom<V +>{
        name9 = ld name;
        name10 = force? name9;
        checkMissing(name10);
        return name10;
      };
      r33 = dyn as_name1(p10);
      return r33;
    };
    p12 = prom<V +>{
      sym1 = ldf `as.environment`;
      base1 = ldf `as.environment` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      where2 = ld where;
      where3 = force? where2;
      checkMissing(where3);
      as_environment = ldf `as.environment` in base;
      r37 = dyn as_environment(where3);
      goto L0(r37);
    L2():
      r35 = dyn base1(<sym where>);
      goto L0(r35);
    };
    r39 = dyn eval1(p11, p12);
    check L33() else D20();
  L35():
    p15 = prom<V +>{
      gettextf = ldf gettextf;
      p13 = prom<V +>{
        name11 = ld name;
        name12 = force? name11;
        checkMissing(name12);
        return name12;
      };
      p14 = prom<V +>{
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        return package6;
      };
      r42 = dyn gettextf("autoloader did not find '%s' in '%s'", p13, p14);
      return r42;
    };
    r44 = dyn stop[, domain](p15, NA_LGL);
    check L36() else D22();
  D16():
    deopt 59 [r28];
  D20():
    deopt 73 [r39];
  D22():
    deopt 79 [r44];
  L28():
    goto L1(r28);
  L33():
    popenv;
    return r39;
  L36():
    popenv;
    return r44;
  }
}
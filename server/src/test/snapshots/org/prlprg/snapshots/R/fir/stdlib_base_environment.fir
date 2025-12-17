fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg environment:cls, reg r2:V, reg environment1:cls, reg f:*, reg f1:V, reg p:p(V +), reg r4:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg ls:cls, reg environment2:cls, reg __:cls, reg r5:V, reg r6:cls, reg p1:p(V +), reg p2:p(V +), reg r9:V, reg p3:p(V +), reg r11:V, reg p4:p(V +), reg r13:V, reg sym:cls, reg base:cls, reg guard:L, reg r14:V, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg is_environment:cls, reg r16:V, reg new_env:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg baseenv:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg new_env1:cls, reg e1:*, reg e2:V, reg p6:p(V +), reg r23:V, reg assign:cls, reg e3:*, reg e4:V, reg p7:p(V +), reg r25:V, reg ls1:cls, reg e5:*, reg e6:V, reg p8:p(V +), reg r27:V, reg ls2:cls, reg e7:*, reg e8:V, reg p9:p(V +), reg r29:V, reg exists:cls, reg e9:*, reg e10:V, reg p10:p(V +), reg r31:V, reg exists1:cls, reg e11:*, reg e12:V, reg p11:p(V +), reg r33:V, reg exists2:cls, reg e13:*, reg e14:V, reg p12:p(V +), reg r35:V, reg new_env2:cls, reg r36:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r37:V, reg r38:V, reg with:cls, reg env_profile:cls, reg eh:*, reg eh1:V, reg p13:p(V +), reg r40:V, reg p14:p(V +), reg stopifnot:cls, reg size:*, reg size1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg size4:V, reg r43:V, reg counts:*, reg counts1:V, reg length:cls, reg r44:V, reg r45:V, reg p15:p(V +), reg r47:V, reg p16:p(V +), reg r49:V |
    mkenv;
    r = clos inner3932326789;
    st environment = r;
    r1 = clos inner2708337952;
    st f = r1;
    environment = ldf environment;
    check L2() else D0();
  D0():
    deopt 7 [];
  L2():
    r2 = dyn environment();
    check L3() else D1();
  D1():
    deopt 8 [r2];
  L3():
    environment1 = ldf environment;
    check L4() else D2();
  D2():
    deopt 10 [];
  L4():
    p = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r4 = dyn environment1(p);
    check L5() else D3();
  D3():
    deopt 12 [r4];
  L5():
    _GlobalEnv = ld `.GlobalEnv`;
    check L6() else D4();
  D4():
    deopt 13 [_GlobalEnv];
  L6():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    ls = ldf ls;
    check L7() else D5();
  D5():
    deopt 16 [];
  L7():
    p4 = prom<V +>{
      environment2 = ldf environment;
      p3 = prom<V +>{
        __ = ldf `::`;
        r5 = dyn __("stats", "approxfun");
        checkFun.0(r5);
        r6 = r5 as cls;
        p1 = prom<V +>{
          return <int 1, 2>;
        };
        p2 = prom<V +>{
          return <int 1, 2>;
        };
        r9 = dyn r6[, , method](p1, p2, "const");
        return r9;
      };
      r11 = dyn environment2(p3);
      return r11;
    };
    r13 = dyn ls[envir](p4);
    check L8() else D6();
  D6():
    deopt 19 [r13];
  L8():
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0():
    new_env = ldf `new.env`;
    check L13() else D9();
  L9():
    _GlobalEnv2 = ld `.GlobalEnv`;
    check L11() else D7();
  L10():
    r14 = dyn base(<sym .GlobalEnv>);
    goto L0();
  D7():
    deopt 22 [_GlobalEnv2];
  D9():
    deopt 27 [];
  L11():
    _GlobalEnv3 = force? _GlobalEnv2;
    checkMissing(_GlobalEnv3);
    is_environment = ldf `is.environment` in base;
    r16 = dyn is_environment(_GlobalEnv3);
    check L12() else D8();
  L13():
    p5 = prom<V +>{
      sym1 = ldf baseenv;
      base1 = ldf baseenv in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      baseenv = ldf baseenv in base;
      r19 = dyn baseenv();
      goto L0(r19);
    L2():
      r17 = dyn base1();
      goto L0(r17);
    };
    r21 = dyn new_env[parent](p5);
    check L14() else D10();
  D8():
    deopt 25 [r16];
  D10():
    deopt 30 [r21];
  L12():
    goto L0();
  L14():
    st e1 = r21;
    new_env1 = ldf `new.env`;
    check L15() else D11();
  D11():
    deopt 33 [];
  L15():
    p6 = prom<V +>{
      e1 = ld e1;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    r23 = dyn new_env1[parent](p6);
    check L16() else D12();
  D12():
    deopt 36 [r23];
  L16():
    st e2 = r23;
    assign = ldf assign;
    check L17() else D13();
  D13():
    deopt 39 [];
  L17():
    p7 = prom<V +>{
      e3 = ld e1;
      e4 = force? e3;
      checkMissing(e4);
      return e4;
    };
    r25 = dyn assign[, , envir]("a", 3.0, p7);
    check L18() else D14();
  D14():
    deopt 44 [r25];
  L18():
    ls1 = ldf ls;
    check L19() else D15();
  D15():
    deopt 46 [];
  L19():
    p8 = prom<V +>{
      e5 = ld e1;
      e6 = force? e5;
      checkMissing(e6);
      return e6;
    };
    r27 = dyn ls1(p8);
    check L20() else D16();
  D16():
    deopt 48 [r27];
  L20():
    ls2 = ldf ls;
    check L21() else D17();
  D17():
    deopt 50 [];
  L21():
    p9 = prom<V +>{
      e7 = ld e2;
      e8 = force? e7;
      checkMissing(e8);
      return e8;
    };
    r29 = dyn ls2(p9);
    check L22() else D18();
  D18():
    deopt 52 [r29];
  L22():
    exists = ldf exists;
    check L23() else D19();
  D19():
    deopt 54 [];
  L23():
    p10 = prom<V +>{
      e9 = ld e2;
      e10 = force? e9;
      checkMissing(e10);
      return e10;
    };
    r31 = dyn exists[, envir]("a", p10);
    check L24() else D20();
  D20():
    deopt 58 [r31];
  L24():
    exists1 = ldf exists;
    check L25() else D21();
  D21():
    deopt 60 [];
  L25():
    p11 = prom<V +>{
      e11 = ld e2;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    r33 = dyn exists1[, envir, inherits]("a", p11, FALSE);
    check L26() else D22();
  D22():
    deopt 66 [r33];
  L26():
    exists2 = ldf exists;
    check L27() else D23();
  D23():
    deopt 68 [];
  L27():
    p12 = prom<V +>{
      e13 = ld e2;
      e14 = force? e13;
      checkMissing(e14);
      return e14;
    };
    r35 = dyn exists2[, envir]("+", p12);
    check L28() else D24();
  D24():
    deopt 72 [r35];
  L28():
    new_env2 = ldf `new.env`;
    check L29() else D25();
  D25():
    deopt 74 [];
  L29():
    r36 = dyn new_env2[hash, size](TRUE, NA_LGL);
    check L30() else D26();
  D26():
    deopt 79 [r36];
  L30():
    st eh = r36;
    sym2 = ldf with;
    base2 = ldf with in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L1(r38):
    popenv;
    return r38;
  L31():
    with = ldf with;
    check L33() else D27();
  L32():
    r37 = dyn base2(<lang env.profile(eh)>, <lang stopifnot(`==`(size, length(counts)))>);
    goto L1(r37);
  D27():
    deopt 83 [];
  L33():
    p14 = prom<V +>{
      env_profile = ldf `env.profile`;
      p13 = prom<V +>{
        eh = ld eh;
        eh1 = force? eh;
        checkMissing(eh1);
        return eh1;
      };
      r40 = dyn env_profile(p13);
      return r40;
    };
    p16 = prom<V +>{
      stopifnot = ldf stopifnot;
      p15 = prom<V +>{
        size = ld size;
        size1 = force? size;
        checkMissing(size1);
        sym3 = ldf length;
        base3 = ldf length in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(size4, r43):
        r45 = `==`(size4, r43);
        return r45;
      L1():
        counts = ld counts;
        counts1 = force? counts;
        checkMissing(counts1);
        length = ldf length in base;
        r44 = dyn length(counts1);
        goto L0(size1, r44);
      L2():
        r42 = dyn base3(<sym counts>);
        goto L0(size1, r42);
      };
      r47 = dyn stopifnot(p15);
      return r47;
    };
    r49 = dyn with(p14, p16);
    check L34() else D28();
  D28():
    deopt 86 [r49];
  L34():
    goto L1(r49);
  }
}
fun inner3932326789(fun) {
  (reg fun:*) -+> V { var fun:*, reg fun_isMissing:L, reg fun_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg fun1:*, reg fun2:V, reg environment:cls, reg r2:V |
    mkenv;
    fun_isMissing = missing.0(fun);
    if fun_isMissing then L0(NULL) else L0(fun);
  L0(fun_orDefault):
    st fun = fun_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L1(r1):
    popenv;
    return r1;
  L2():
    fun1 = ld fun;
    check L4() else D0();
  L3():
    r = dyn base(<lang environment(fun)>);
    goto L1(r);
  D0():
    deopt 2 [fun1];
  L4():
    fun2 = force? fun1;
    checkMissing(fun2);
    environment = ldf environment in base;
    r2 = dyn environment(fun2);
    check L5() else D1();
  D1():
    deopt 5 [r2];
  L5():
    goto L1(r2);
  }
}
fun inner2708337952() {
  () -+> V { |
    mkenv;
    popenv;
    return "top level function";
  }
}
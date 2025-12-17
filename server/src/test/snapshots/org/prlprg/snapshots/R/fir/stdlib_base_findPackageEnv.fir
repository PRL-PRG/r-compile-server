fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner517230670;
    st findPackageEnv = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner517230670(info) {
  (reg info:*) -+> V { var info:*, reg _in_:cls, reg info1:*, reg info2:V, reg p:p(V +), reg search:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg info3:*, reg info4:V, reg as_environment:cls, reg r6:V, reg message:cls, reg gettextf:cls, reg sQuote:cls, reg info5:*, reg info6:V, reg p2:p(V +), reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg require:cls, reg substr:cls, reg info7:*, reg info8:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg info9:*, reg info10:V, reg as_environment1:cls, reg r23:V, reg message1:cls, reg r26:V, reg _GlobalEnv:*, reg _GlobalEnv1:V |
    mkenv;
    st info = info;
    _in_ = ldf `%in%`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      info1 = ld info;
      info2 = force? info1;
      checkMissing(info2);
      return info2;
    };
    p1 = prom<V +>{
      search = ldf search;
      r1 = dyn search();
      return r1;
    };
    r3 = dyn _in_(p, p1);
    check L8() else D1();
  D1():
    deopt 4 [r3];
  L8():
    c = `as.logical`(r3);
    if c then L9() else L0();
  L0():
    message = ldf message;
    check L16() else D4();
  L9():
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  D4():
    deopt 15 [];
  L1(r5):
    popenv;
    return r5;
  L10():
    info3 = ld info;
    check L12() else D2();
  L11():
    r4 = dyn base(<sym info>);
    goto L1(r4);
  L16():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        sQuote = ldf sQuote;
        p2 = prom<V +>{
          info5 = ld info;
          info6 = force? info5;
          checkMissing(info6);
          return info6;
        };
        r10 = dyn sQuote(p2);
        return r10;
      };
      r12 = dyn gettextf("Attempting to load the environment %s", p3);
      return r12;
    };
    r14 = dyn message[, domain](p4, NA_LGL);
    check L17() else D5();
  D2():
    deopt 7 [info3];
  D5():
    deopt 19 [r14];
  L12():
    info4 = force? info3;
    checkMissing(info4);
    as_environment = ldf `as.environment` in base;
    r6 = dyn as_environment(info4);
    check L13() else D3();
  L17():
    sym1 = ldf require;
    base1 = ldf require in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  D3():
    deopt 10 [r6];
  L3(r16):
    c1 = `as.logical`(r16);
    if c1 then L22() else L4();
  L13():
    goto L1(r6);
  L18():
    require = ldf require;
    check L20() else D6();
  L19():
    r15 = dyn base1[, `character.only`, quietly](<lang substr(info, 9, 1000)>, TRUE, TRUE);
    goto L3(r15);
  D6():
    deopt 22 [];
  L4():
    message1 = ldf message;
    check L29() else D10();
  L20():
    p6 = prom<V +>{
      substr = ldf substr;
      p5 = prom<V +>{
        info7 = ld info;
        info8 = force? info7;
        checkMissing(info8);
        return info8;
      };
      r18 = dyn substr(p5, 9, 1000);
      return r18;
    };
    r20 = dyn require[, `character.only`, quietly](p6, TRUE, TRUE);
    check L21() else D7();
  L22():
    sym2 = ldf `as.environment`;
    base2 = ldf `as.environment` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D7():
    deopt 28 [r20];
  D10():
    deopt 39 [];
  L5(r22):
    popenv;
    return r22;
  L21():
    goto L3(r20);
  L23():
    info9 = ld info;
    check L25() else D8();
  L24():
    r21 = dyn base2(<sym info>);
    goto L5(r21);
  L29():
    r26 = dyn message1("Specified environment not found: using '.GlobalEnv' instead");
    check L30() else D11();
  D8():
    deopt 31 [info9];
  D11():
    deopt 41 [r26];
  L25():
    info10 = force? info9;
    checkMissing(info10);
    as_environment1 = ldf `as.environment` in base;
    r23 = dyn as_environment1(info10);
    check L26() else D9();
  L30():
    _GlobalEnv = ld `.GlobalEnv`;
    check L31() else D12();
  D9():
    deopt 34 [r23];
  D12():
    deopt 42 [_GlobalEnv];
  L26():
    goto L5(r23);
  L31():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    popenv;
    return _GlobalEnv1;
  }
}
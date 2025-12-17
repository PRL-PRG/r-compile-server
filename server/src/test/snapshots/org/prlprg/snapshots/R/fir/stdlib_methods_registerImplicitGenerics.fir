fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2615328555;
    st registerImplicitGenerics = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2615328555(what, where) {
  (reg what:*, reg where:*) -+> V { var what:*, reg what_isMissing:L, reg what_orDefault:*, reg _ImplicitGenericsTable:cls, reg where1:*, reg where2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg what1:*, reg what2:V, reg is_environment:cls, reg r9:V, reg r10:V, reg c:L, reg stop:cls, reg gettextf:cls, reg dQuote:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg what3:*, reg what4:V, reg class:cls, reg r13:V, reg p4:p(V +), reg r15:V, reg p5:p(V +), reg r17:V, reg p6:p(V +), reg r19:V, reg as_list:cls, reg what5:*, reg what6:V, reg p7:p(V +), reg r22:V, reg mapply:cls, reg _cacheImplicitGeneric:*, reg _cacheImplicitGeneric1:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg objs:*, reg objs1:V, reg names:cls, reg r26:V, reg p9:p(V +), reg objs2:*, reg objs3:V, reg p10:p(V +), reg r29:V |
    mkenv;
    what_isMissing = missing.0(what);
    if what_isMissing then L0() else L1(what);
  L0():
    p1 = prom<V +>{
      _ImplicitGenericsTable = ldf `.ImplicitGenericsTable`;
      p = prom<V +>{
        where1 = ld where;
        where2 = force? where1;
        checkMissing(where2);
        return where2;
      };
      r1 = dyn _ImplicitGenericsTable(p);
      return r1;
    };
    goto L1(p1);
  L1(what_orDefault):
    st what = what_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p3 = prom<V +>{
      topenv = ldf topenv;
      p2 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r3 = dyn parent_frame();
        return r3;
      };
      r5 = dyn topenv(p2);
      return r5;
    };
    goto L3(p3);
  L3(where_orDefault):
    st where = where_orDefault;
    sym = ldf `is.environment`;
    base = ldf `is.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L4(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L11() else L5();
  L7():
    what1 = ld what;
    check L9() else D0();
  L8():
    r7 = dyn base(<sym what>);
    goto L4(r7);
  D0():
    deopt 2 [what1];
  L5():
    goto L6();
  L6():
    as_list = ldf `as.list`;
    check L15() else D4();
  L9():
    what2 = force? what1;
    checkMissing(what2);
    is_environment = ldf `is.environment` in base;
    r9 = dyn is_environment(what2);
    check L10() else D1();
  L11():
    stop = ldf stop;
    check L12() else D2();
  D1():
    deopt 5 [r9];
  D2():
    deopt 8 [];
  D4():
    deopt 16 [];
  L10():
    goto L4(r9);
  L12():
    p6 = prom<V +>{
      gettextf = ldf gettextf;
      p5 = prom<V +>{
        dQuote = ldf dQuote;
        p4 = prom<V +>{
          sym1 = ldf class;
          base1 = ldf class in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r12):
          return r12;
        L1():
          what3 = ld what;
          what4 = force? what3;
          checkMissing(what4);
          class = ldf class in base;
          r13 = dyn class(what4);
          goto L0(r13);
        L2():
          r11 = dyn base1(<sym what>);
          goto L0(r11);
        };
        r15 = dyn dQuote(p4);
        return r15;
      };
      r17 = dyn gettextf("must provide an environment table; got class %s", p5);
      return r17;
    };
    r19 = dyn stop[, domain](p6, NA_LGL);
    check L13() else D3();
  L15():
    p7 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    r22 = dyn as_list[, `all.names`](p7, TRUE);
    check L16() else D5();
  D3():
    deopt 12 [r19];
  D5():
    deopt 20 [r22];
  L13():
    goto L6();
  L16():
    st objs = r22;
    mapply = ldf mapply;
    check L17() else D6();
  D6():
    deopt 23 [];
  L17():
    p8 = prom<V +>{
      _cacheImplicitGeneric = ld `.cacheImplicitGeneric`;
      _cacheImplicitGeneric1 = force? _cacheImplicitGeneric;
      checkMissing(_cacheImplicitGeneric1);
      return _cacheImplicitGeneric1;
    };
    p9 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r25):
      return r25;
    L1():
      objs = ld objs;
      objs1 = force? objs;
      checkMissing(objs1);
      names = ldf names in base;
      r26 = dyn names(objs1);
      goto L0(r26);
    L2():
      r24 = dyn base2(<sym objs>);
      goto L0(r24);
    };
    p10 = prom<V +>{
      objs2 = ld objs;
      objs3 = force? objs2;
      checkMissing(objs3);
      return objs3;
    };
    r29 = dyn mapply(p8, p9, p10);
    check L18() else D7();
  D7():
    deopt 27 [r29];
  L18():
    popenv;
    return NULL;
  }
}
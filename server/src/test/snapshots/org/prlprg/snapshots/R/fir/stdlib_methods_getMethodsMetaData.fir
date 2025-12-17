fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner426905755;
    st getMethodsMetaData = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner426905755(f, where) {
  (reg f:*, reg where:*) -+> V { var f:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg getGeneric:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg fdef:*, reg fdef1:V, reg c:V, reg c1:L, reg _noMlists:cls, reg r11:V, reg c2:L, reg warning:cls, reg sprintf:cls, reg sQuote:cls, reg __:cls, reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg r18:V, reg methodsPackageMetaName:cls, reg __1:cls, reg r20:V, reg p7:p(V +), reg __2:cls, reg r22:V, reg p8:p(V +), reg r24:V, reg exists:cls, reg mname:*, reg mname1:V, reg p9:p(V +), reg where3:*, reg where4:V, reg p10:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg r28:V, reg missing:cls, reg r29:V, reg p11:p(V +), reg r31:V, reg c3:L, reg get:cls, reg mname2:*, reg mname3:V, reg p12:p(V +), reg where5:*, reg where6:V, reg p13:p(V +), reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg missing1:cls, reg r37:V, reg c4:L, reg _makeMlistFromTable:cls, reg fdef2:*, reg fdef3:V, reg p14:p(V +), reg r39:V, reg _makeMlistFromTable1:cls, reg fdef4:*, reg fdef5:V, reg p15:p(V +), reg where7:*, reg where8:V, reg p16:p(V +), reg r42:V |
    mkenv;
    st f = f;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    getGeneric = ldf getGeneric;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn getGeneric[, where](p2, p3);
    check L11() else D1();
  D1():
    deopt 5 [r6];
  L11():
    st fdef = r6;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r8):
    c1 = `as.logical`(r8);
    if c1 then L15() else L3();
  L12():
    fdef = ld fdef;
    check L14() else D2();
  L13():
    r7 = dyn base(<sym fdef>);
    goto L2(r7);
  D2():
    deopt 8 [fdef];
  L3():
    _noMlists = ldf `.noMlists`;
    check L18() else D3();
  L14():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c = `==`(fdef1, NULL);
    goto L2(c);
  L15():
    popenv;
    return NULL;
  D3():
    deopt 17 [];
  L18():
    r11 = dyn _noMlists();
    check L19() else D4();
  D4():
    deopt 18 [r11];
  L19():
    c2 = `as.logical`(r11);
    if c2 then L20() else L5();
  L5():
    goto L6();
  L6():
    methodsPackageMetaName = ldf methodsPackageMetaName;
    check L24() else D7();
  L20():
    warning = ldf warning;
    check L21() else D5();
  D5():
    deopt 20 [];
  D7():
    deopt 28 [];
  L21():
    p6 = prom<V +>{
      sprintf = ldf sprintf;
      p5 = prom<V +>{
        sQuote = ldf sQuote;
        p4 = prom<V +>{
          __ = ldf `@` in base;
          r12 = dyn __(<sym fdef>, <sym generic>);
          return r12;
        };
        r14 = dyn sQuote(p4);
        return r14;
      };
      r16 = dyn sprintf("Methods list objects are not maintained in this version of R:  request for function %s may return incorrect information", p5);
      return r16;
    };
    r18 = dyn warning[, domain](p6, NA_LGL);
    check L22() else D6();
  L24():
    p7 = prom<V +>{
      __1 = ldf `@` in base;
      r20 = dyn __1(<sym fdef>, <sym generic>);
      return r20;
    };
    p8 = prom<V +>{
      __2 = ldf `@` in base;
      r22 = dyn __2(<sym fdef>, <sym package>);
      return r22;
    };
    r24 = dyn methodsPackageMetaName("M", p7, p8);
    check L25() else D8();
  D6():
    deopt 24 [r18];
  D8():
    deopt 32 [r24];
  L22():
    goto L6();
  L25():
    st mname = r24;
    exists = ldf exists;
    check L26() else D9();
  D9():
    deopt 35 [];
  L26():
    p9 = prom<V +>{
      mname = ld mname;
      mname1 = force? mname;
      checkMissing(mname1);
      return mname1;
    };
    p10 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    p11 = prom<V +>{
      sym1 = ldf missing;
      base1 = ldf missing in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      missing = ldf missing in base;
      r29 = dyn missing(<sym where>);
      goto L0(r29);
    L2():
      r27 = dyn base1(<sym where>);
      goto L0(r27);
    };
    r31 = dyn exists[, where, inherits](p9, p10, p11);
    check L27() else D10();
  D10():
    deopt 41 [r31];
  L27():
    c3 = `as.logical`(r31);
    if c3 then L28() else L7();
  L7():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L28():
    get = ldf get;
    check L29() else D11();
  D11():
    deopt 43 [];
  L8(r36):
    c4 = `as.logical`(r36);
    if c4 then L34() else L9();
  L29():
    p12 = prom<V +>{
      mname2 = ld mname;
      mname3 = force? mname2;
      checkMissing(mname3);
      return mname3;
    };
    p13 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r34 = dyn get(p12, p13);
    check L30() else D12();
  L32():
    missing1 = ldf missing in base;
    r37 = dyn missing1(<sym where>);
    goto L8(r37);
  L33():
    r35 = dyn base2(<sym where>);
    goto L8(r35);
  D12():
    deopt 46 [r34];
  L9():
    _makeMlistFromTable1 = ldf `.makeMlistFromTable`;
    check L38() else D15();
  L30():
    popenv;
    return r34;
  L34():
    _makeMlistFromTable = ldf `.makeMlistFromTable`;
    check L35() else D13();
  D13():
    deopt 51 [];
  D15():
    deopt 55 [];
  L35():
    p14 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r39 = dyn _makeMlistFromTable(p14);
    check L36() else D14();
  L38():
    p15 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    p16 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r42 = dyn _makeMlistFromTable1(p15, p16);
    check L39() else D16();
  D14():
    deopt 53 [r39];
  D16():
    deopt 58 [r42];
  L36():
    popenv;
    return r39;
  L39():
    popenv;
    return r42;
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1089854538;
    st `.makeTraceClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1089854538(traceClassName, className, verbose) {
  (reg traceClassName:*, reg className:*, reg verbose:*) -+> V { var traceClassName:*, var className:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg isClass:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg traceClassName1:*, reg traceClassName2:V, reg as_character:cls, reg r2:V, reg p:p(V +), reg r4:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg traceClassName3:*, reg traceClassName4:V, reg as_character1:cls, reg r7:V, reg verbose1:*, reg verbose2:V, reg c1:L, reg message:cls, reg sprintf:cls, reg dQuote:cls, reg traceClassName5:*, reg traceClassName6:V, reg p1:p(V +), reg r11:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg _classEnv:cls, reg className1:*, reg className2:V, reg p4:p(V +), reg r18:V, reg environmentIsLocked:cls, reg env:*, reg env1:V, reg p5:p(V +), reg r20:V, reg c2:L, reg message1:cls, reg gettextf:cls, reg dQuote1:cls, reg className3:*, reg className4:V, reg p6:p(V +), reg r22:V, reg p7:p(V +), reg r24:V, reg p8:p(V +), reg r26:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg l:*, reg packageSlot__:cls, reg r27:V, reg setClass:cls, reg traceClassName7:*, reg traceClassName8:V, reg p9:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg className5:*, reg className6:V, reg c3:cls, reg r32:V, reg p10:p(V +), reg env2:*, reg env3:V, reg p11:p(V +), reg r35:V, reg existsMethod:cls, reg className7:*, reg className8:V, reg p12:p(V +), reg env4:*, reg env5:V, reg p13:p(V +), reg r38:V, reg c4:L, reg setMethod:cls, reg traceClassName9:*, reg traceClassName10:V, reg p14:p(V +), reg _showTraceable:*, reg _showTraceable1:V, reg p15:p(V +), reg r41:V, reg traceClassName11:*, reg traceClassName12:V |
    mkenv;
    st traceClassName = traceClassName;
    st className = className;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(TRUE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    isClass = ldf isClass;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      traceClassName1 = ld traceClassName;
      traceClassName2 = force? traceClassName1;
      checkMissing(traceClassName2);
      as_character = ldf `as.character` in base;
      r2 = dyn as_character(traceClassName2);
      goto L0(r2);
    L2():
      r = dyn base(<sym traceClassName>);
      goto L0(r);
    };
    r4 = dyn isClass(p);
    check L11() else D1();
  D1():
    deopt 3 [r4];
  L11():
    c = `as.logical`(r4);
    if c then L12() else L1();
  L1():
    verbose1 = ld verbose;
    check L19() else D4();
  L12():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D4():
    deopt 13 [verbose1];
  L2(r6):
    popenv;
    return r6;
  L13():
    traceClassName3 = ld traceClassName;
    check L15() else D2();
  L14():
    r5 = dyn base1(<sym traceClassName>);
    goto L2(r5);
  L19():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c1 = `as.logical`(verbose2);
    if c1 then L20() else L4();
  D2():
    deopt 6 [traceClassName3];
  L4():
    goto L5();
  L5():
    _classEnv = ldf `.classEnv`;
    check L24() else D7();
  L15():
    traceClassName4 = force? traceClassName3;
    checkMissing(traceClassName4);
    as_character1 = ldf `as.character` in base;
    r7 = dyn as_character1(traceClassName4);
    check L16() else D3();
  L20():
    message = ldf message;
    check L21() else D5();
  D3():
    deopt 9 [r7];
  D5():
    deopt 16 [];
  D7():
    deopt 24 [];
  L16():
    goto L2(r7);
  L21():
    p3 = prom<V +>{
      sprintf = ldf sprintf;
      p2 = prom<V +>{
        dQuote = ldf dQuote;
        p1 = prom<V +>{
          traceClassName5 = ld traceClassName;
          traceClassName6 = force? traceClassName5;
          checkMissing(traceClassName6);
          return traceClassName6;
        };
        r11 = dyn dQuote(p1);
        return r11;
      };
      r13 = dyn sprintf("Constructing traceable class %s", p2);
      return r13;
    };
    r15 = dyn message[, domain](p3, NA_LGL);
    check L22() else D6();
  L24():
    p4 = prom<V +>{
      className1 = ld className;
      className2 = force? className1;
      checkMissing(className2);
      return className2;
    };
    r18 = dyn _classEnv(p4);
    check L25() else D8();
  D6():
    deopt 20 [r15];
  D8():
    deopt 26 [r18];
  L22():
    goto L5();
  L25():
    st env = r18;
    environmentIsLocked = ldf environmentIsLocked;
    check L26() else D9();
  D9():
    deopt 29 [];
  L26():
    p5 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r20 = dyn environmentIsLocked(p5);
    check L27() else D10();
  D10():
    deopt 31 [r20];
  L27():
    c2 = `as.logical`(r20);
    if c2 then L28() else L6();
  L6():
    goto L7();
  L7():
    setClass = ldf setClass;
    check L35() else D16();
  L28():
    message1 = ldf message;
    check L29() else D11();
  D11():
    deopt 33 [];
  D16():
    deopt 51 [];
  L29():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote1 = ldf dQuote;
        p6 = prom<V +>{
          className3 = ld className;
          className4 = force? className3;
          checkMissing(className4);
          return className4;
        };
        r22 = dyn dQuote1(p6);
        return r22;
      };
      r24 = dyn gettextf("Environment of class %s is locked; using global environment for new class", p7);
      return r24;
    };
    r26 = dyn message1[, domain](p8, NA_LGL);
    check L30() else D12();
  L35():
    p9 = prom<V +>{
      traceClassName7 = ld traceClassName;
      traceClassName8 = force? traceClassName7;
      checkMissing(traceClassName8);
      return traceClassName8;
    };
    p10 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      className5 = ld className;
      className6 = force? className5;
      checkMissing(className6);
      c3 = ldf c in base;
      r32 = dyn c3(className6, "traceable");
      goto L0(r32);
    L2():
      r30 = dyn base2(<sym className>, "traceable");
      goto L0(r30);
    };
    p11 = prom<V +>{
      env2 = ld env;
      env3 = force? env2;
      checkMissing(env3);
      return env3;
    };
    r35 = dyn setClass[, contains, where](p9, p10, p11);
    check L36() else D17();
  D12():
    deopt 37 [r26];
  D17():
    deopt 57 [r35];
  L30():
    _GlobalEnv = ld `.GlobalEnv`;
    check L31() else D13();
  L36():
    existsMethod = ldf existsMethod;
    check L37() else D18();
  D13():
    deopt 38 [_GlobalEnv];
  D18():
    deopt 59 [];
  L31():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    st env = _GlobalEnv1;
    l = ld traceClassName;
    packageSlot__ = ldf `packageSlot<-`;
    check L32() else D14();
  L37():
    p12 = prom<V +>{
      className7 = ld className;
      className8 = force? className7;
      checkMissing(className8);
      return className8;
    };
    p13 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r38 = dyn existsMethod("show", p12, p13);
    check L38() else D19();
  D14():
    deopt 44 [NULL, l, NULL];
  D19():
    deopt 63 [r38];
  L32():
    r27 = dyn packageSlot__(l, NULL, NULL);
    check L33() else D15();
  L38():
    c4 = `as.logical`(r38);
    if c4 then L39() else L8();
  D15():
    deopt 46 [NULL, r27];
  L8():
    goto L9();
  L9():
    traceClassName11 = ld traceClassName;
    check L43() else D22();
  L33():
    st traceClassName = r27;
    goto L7();
  L39():
    setMethod = ldf setMethod;
    check L40() else D20();
  D20():
    deopt 65 [];
  D22():
    deopt 72 [traceClassName11];
  L40():
    p14 = prom<V +>{
      traceClassName9 = ld traceClassName;
      traceClassName10 = force? traceClassName9;
      checkMissing(traceClassName10);
      return traceClassName10;
    };
    p15 = prom<V +>{
      _showTraceable = ld `.showTraceable`;
      _showTraceable1 = force? _showTraceable;
      checkMissing(_showTraceable1);
      return _showTraceable1;
    };
    r41 = dyn setMethod("show", p14, p15);
    check L41() else D21();
  L43():
    traceClassName12 = force? traceClassName11;
    checkMissing(traceClassName12);
    popenv;
    return traceClassName12;
  D21():
    deopt 69 [r41];
  L41():
    goto L9();
  }
}
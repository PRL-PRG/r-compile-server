fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2650636851;
    st `.dollarForEnvRefClass` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2650636851(x, name) {
  (reg x:*, reg name:*) -+> V { var x:*, var name:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg what:*, reg what1:V, reg c:L, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg r6:V, reg what2:*, reg what3:V, reg as_character:cls, reg r7:V, reg name1:*, reg name2:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg x1:*, reg x2:V, reg as_environment:cls, reg r11:V, reg exists:cls, reg what4:*, reg what5:V, reg p:p(V +), reg selfEnv:*, reg selfEnv1:V, reg p1:p(V +), reg r14:V, reg c2:L, reg get:cls, reg what6:*, reg what7:V, reg p2:p(V +), reg selfEnv2:*, reg selfEnv3:V, reg p3:p(V +), reg r17:V, reg is:cls, reg x3:*, reg x4:V, reg p4:p(V +), reg r19:V, reg c3:L, reg envRefInferField:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg what8:*, reg what9:V, reg p6:p(V +), reg getClass:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg r23:V, reg x7:*, reg x8:V, reg class:cls, reg r24:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg selfEnv4:*, reg selfEnv5:V, reg p9:p(V +), reg r29:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg what10:*, reg what11:V, reg p10:p(V +), reg r31:V, reg p11:p(V +), reg r33:V, reg p12:p(V +), reg r35:V |
    mkenv;
    st x = x;
    st name = name;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st what = r1;
    sym1 = ldf `is.symbol`;
    base1 = ldf `is.symbol` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L8():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<sym name>);
    goto L0(r2);
  L9():
    r = dyn base(<sym name>);
    goto L0(r);
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L13() else L2();
  L10():
    what = ld what;
    check L12() else D0();
  L11():
    r3 = dyn base1(<sym what>);
    goto L1(r3);
  D0():
    deopt 5 [what];
  L2():
    name1 = ld name;
    check L19() else D3();
  L4():
    sym3 = ldf `as.environment`;
    base3 = ldf `as.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L12():
    what1 = force? what;
    checkMissing(what1);
    c = `is.symbol`(what1);
    goto L1(c);
  L13():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  D3():
    deopt 15 [name1];
  L3(r6):
    st what = r6;
    goto L4();
  L5(r10):
    st selfEnv = r10;
    exists = ldf exists;
    check L24() else D6();
  L14():
    what2 = ld what;
    check L16() else D1();
  L15():
    r5 = dyn base2(<sym what>);
    goto L3(r5);
  L19():
    name2 = force? name1;
    checkMissing(name2);
    st what = name2;
    goto L4();
  L20():
    x1 = ld x;
    check L22() else D4();
  L21():
    r9 = dyn base3(<sym x>);
    goto L5(r9);
  D1():
    deopt 10 [what2];
  D4():
    deopt 20 [x1];
  D6():
    deopt 26 [];
  L16():
    what3 = force? what2;
    checkMissing(what3);
    as_character = ldf `as.character` in base;
    r7 = dyn as_character(what3);
    check L17() else D2();
  L22():
    x2 = force? x1;
    checkMissing(x2);
    as_environment = ldf `as.environment` in base;
    r11 = dyn as_environment(x2);
    check L23() else D5();
  L24():
    p = prom<V +>{
      what4 = ld what;
      what5 = force? what4;
      checkMissing(what5);
      return what5;
    };
    p1 = prom<V +>{
      selfEnv = ld selfEnv;
      selfEnv1 = force? selfEnv;
      checkMissing(selfEnv1);
      return selfEnv1;
    };
    r14 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L25() else D7();
  D2():
    deopt 13 [r7];
  D5():
    deopt 23 [r11];
  D7():
    deopt 32 [r14];
  L17():
    goto L3(r7);
  L23():
    goto L5(r11);
  L25():
    c2 = `as.logical`(r14);
    if c2 then L26() else L6();
  L6():
    is = ldf is;
    check L30() else D10();
  L26():
    get = ldf get;
    check L27() else D8();
  D8():
    deopt 34 [];
  D10():
    deopt 40 [];
  L27():
    p2 = prom<V +>{
      what6 = ld what;
      what7 = force? what6;
      checkMissing(what7);
      return what7;
    };
    p3 = prom<V +>{
      selfEnv2 = ld selfEnv;
      selfEnv3 = force? selfEnv2;
      checkMissing(selfEnv3);
      return selfEnv3;
    };
    r17 = dyn get[, envir](p2, p3);
    check L28() else D9();
  L30():
    p4 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r19 = dyn is(p4, "envRefClass");
    check L31() else D11();
  D9():
    deopt 38 [r17];
  D11():
    deopt 43 [r19];
  L28():
    popenv;
    return r17;
  L31():
    c3 = `as.logical`(r19);
    if c3 then L32() else L7();
  L7():
    stop = ldf stop;
    check L36() else D14();
  L32():
    envRefInferField = ldf envRefInferField;
    check L33() else D12();
  D12():
    deopt 45 [];
  D14():
    deopt 52 [];
  L33():
    p5 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p6 = prom<V +>{
      what8 = ld what;
      what9 = force? what8;
      checkMissing(what9);
      return what9;
    };
    p8 = prom<V +>{
      getClass = ldf getClass;
      p7 = prom<V +>{
        sym4 = ldf class;
        base4 = ldf class in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r23):
        return r23;
      L1():
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        class = ldf class in base;
        r24 = dyn class(x8);
        goto L0(r24);
      L2():
        r22 = dyn base4(<sym x>);
        goto L0(r22);
      };
      r26 = dyn getClass(p7);
      return r26;
    };
    p9 = prom<V +>{
      selfEnv4 = ld selfEnv;
      selfEnv5 = force? selfEnv4;
      checkMissing(selfEnv5);
      return selfEnv5;
    };
    r29 = dyn envRefInferField(p5, p6, p8, p9);
    check L34() else D13();
  L36():
    p12 = prom<V +>{
      gettextf = ldf gettextf;
      p11 = prom<V +>{
        sQuote = ldf sQuote;
        p10 = prom<V +>{
          what10 = ld what;
          what11 = force? what10;
          checkMissing(what11);
          return what11;
        };
        r31 = dyn sQuote(p10);
        return r31;
      };
      r33 = dyn gettextf("%s is not a valid field or method name for this class", p11);
      return r33;
    };
    r35 = dyn stop[, domain](p12, NA_LGL);
    check L37() else D15();
  D13():
    deopt 50 [r29];
  D15():
    deopt 56 [r35];
  L34():
    popenv;
    return r29;
  L37():
    popenv;
    return r35;
  }
}
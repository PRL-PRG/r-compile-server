fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner960957553;
    st `.getMethodDefs` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner960957553(what, env) {
  (reg what:*, reg env:*) -+> V { var what:*, var env:*, reg objects:cls, reg env1:*, reg env2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg what1:*, reg what2:V, reg methods:*, reg methods1:V, reg match:cls, reg r6:V, reg is_na:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg missing:*, reg missing1:V, reg any:cls, reg r10:V, reg c:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg dQuote:cls, reg methods2:*, reg methods3:V, reg c1:L, reg methods5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg missing2:*, reg missing3:V, reg __:cls, reg r11:V, reg p1:p(V +), reg r13:V, reg p2:p(V +), reg r15:V, reg p3:p(V +), reg r17:V, reg p4:p(V +), reg r19:V, reg what3:*, reg what4:V, reg c2:L, reg what6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg missing4:*, reg missing5:V, reg r20:V, reg __1:cls, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg what7:*, reg what8:V, reg length:cls, reg r24:V, reg r25:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg what9:*, reg what10:V, reg length1:cls, reg r28:V, reg r29:V, reg c4:L, reg get:cls, reg what11:*, reg what12:V, reg p5:p(V +), reg env3:*, reg env4:V, reg p6:p(V +), reg r32:V, reg lapply:cls, reg what13:*, reg what14:V, reg p7:p(V +), reg r34:cls, reg p8:p(V +), reg r36:V |
    mkenv;
    st what = what;
    st env = env;
    objects = ldf objects;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      env1 = ld env;
      env2 = force? env1;
      checkMissing(env2);
      return env2;
    };
    r1 = dyn objects[envir, `all.names`](p, TRUE);
    check L11() else D1();
  D1():
    deopt 6 [r1];
  L11():
    st methods = r1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r3):
    st missing = r3;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L12():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L13():
    r2 = dyn base(<lang match(what, methods)>);
    goto L0(r2);
  L1(r5):
    is_na = ldf `is.na` in base;
    r7 = dyn is_na(r5);
    check L19() else D5();
  L2(r9):
    c = `as.logical`(r9);
    if c then L24() else L3();
  L14():
    what1 = ld what;
    check L16() else D2();
  L15():
    r4 = dyn base1(<sym what>, <sym methods>);
    goto L1(r4);
  L20():
    missing = ld missing;
    check L22() else D6();
  L21():
    r8 = dyn base2(<sym missing>);
    goto L2(r8);
  D2():
    deopt 12 [what1];
  D5():
    deopt 21 [r7];
  D6():
    deopt 25 [missing];
  L3():
    goto L5();
  L5():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L16():
    what2 = force? what1;
    checkMissing(what2);
    methods = ld methods;
    check L17() else D3();
  L19():
    goto L0(r7);
  L22():
    missing1 = force? missing;
    checkMissing(missing1);
    any = ldf any in base;
    r10 = dyn any(missing1);
    check L23() else D7();
  L24():
    warning = ldf warning;
    check L25() else D8();
  D3():
    deopt 14 [methods];
  D7():
    deopt 28 [r10];
  D8():
    deopt 30 [];
  L6(r23):
    r25 = `<`(r23, 1.0);
    c3 = `as.logical`(r25);
    if c3 then L37() else L7();
  L17():
    methods1 = force? methods;
    checkMissing(methods1);
    match = ldf match in base;
    r6 = dyn match(what2, methods1, NA_INT, NULL);
    check L18() else D4();
  L23():
    goto L2(r10);
  L25():
    p4 = prom<V +>{
      gettextf = ldf gettextf;
      p3 = prom<V +>{
        paste = ldf paste;
        p2 = prom<V +>{
          dQuote = ldf dQuote;
          p1 = prom<V +>{
            methods2 = ld methods;
            methods3 = force? methods2;
            checkMissing(methods3);
            c1 = `is.object`(methods3);
            if c1 then L1() else L2(methods3);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[", methods3);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(methods5):
            missing2 = ld missing;
            missing3 = force? missing2;
            __ = ldf `[` in base;
            r11 = dyn __(methods5, missing3);
            goto L0(r11);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r13 = dyn dQuote(p1);
          return r13;
        };
        r15 = dyn paste[, collapse](p2, ", ");
        return r15;
      };
      r17 = dyn gettextf("Methods not found: %s", p3);
      return r17;
    };
    r19 = dyn warning(p4);
    check L26() else D9();
  L33():
    what7 = ld what;
    check L35() else D12();
  L34():
    r22 = dyn base3(<sym what>);
    goto L6(r22);
  D4():
    deopt 19 [r6];
  D9():
    deopt 32 [r19];
  D12():
    deopt 44 [what7];
  L7():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L18():
    goto L1(r6);
  L26():
    what3 = ld what;
    check L27() else D10();
  L35():
    what8 = force? what7;
    checkMissing(what8);
    length = ldf length in base;
    r24 = dyn length(what8);
    check L36() else D13();
  L37():
    popenv;
    return NULL;
  D10():
    deopt 33 [what3];
  D13():
    deopt 47 [r24];
  L8(r27):
    r29 = `==`(r27, 1.0);
    c4 = `as.logical`(r29);
    if c4 then L43() else L9();
  L27():
    what4 = force? what3;
    checkMissing(what4);
    c2 = `is.object`(what4);
    if c2 then L28() else L29(what4);
  L36():
    goto L6(r24);
  L39():
    what9 = ld what;
    check L41() else D14();
  L40():
    r26 = dyn base4(<sym what>);
    goto L8(r26);
  D14():
    deopt 54 [what9];
  L4(dx3):
    st what = dx3;
    goto L5();
  L9():
    lapply = ldf lapply;
    check L47() else D18();
  L28():
    dr2 = tryDispatchBuiltin.1("[", what4);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(dr2);
  L29(what6):
    missing4 = ld missing;
    check L31() else D11();
  L41():
    what10 = force? what9;
    checkMissing(what10);
    length1 = ldf length in base;
    r28 = dyn length1(what10);
    check L42() else D15();
  L43():
    get = ldf get;
    check L44() else D16();
  D11():
    deopt 35 [what6, missing4];
  D15():
    deopt 57 [r28];
  D16():
    deopt 61 [];
  D18():
    deopt 67 [];
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L31():
    missing5 = force? missing4;
    checkMissing(missing5);
    r20 = `!`(missing5);
    __1 = ldf `[` in base;
    r21 = dyn __1(what6, r20);
    goto L4(r21);
  L42():
    goto L8(r28);
  L44():
    p5 = prom<V +>{
      what11 = ld what;
      what12 = force? what11;
      checkMissing(what12);
      return what12;
    };
    p6 = prom<V +>{
      env3 = ld env;
      env4 = force? env3;
      checkMissing(env4);
      return env4;
    };
    r32 = dyn get[, envir](p5, p6);
    check L45() else D17();
  L47():
    p7 = prom<V +>{
      what13 = ld what;
      what14 = force? what13;
      checkMissing(what14);
      return what14;
    };
    p8 = prom<V +>{
      r34 = clos inner2501545716;
      return r34;
    };
    r36 = dyn lapply(p7, p8);
    check L48() else D19();
  D17():
    deopt 65 [r32];
  D19():
    deopt 70 [r36];
  L45():
    popenv;
    return r32;
  L48():
    popenv;
    return r36;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg get:cls, reg x1:*, reg x2:V, reg p:p(V +), reg env:*, reg env1:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st x = x;
    get = ldf get;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r2 = dyn get[, envir](p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
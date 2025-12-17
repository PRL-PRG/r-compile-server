fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3052520283;
    st `.setMethodOverBinding` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3052520283(what, signature, method, where, verbose) {
  (reg what:*, reg signature:*, reg method:*, reg where:*, reg verbose:*) -+> V { var what:*, var signature:*, var method:*, var where:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg verbose1:*, reg verbose2:V, reg c:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg what1:*, reg what2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg sQuote1:cls, reg getPackageName:cls, reg where1:*, reg where2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V, reg exists:cls, reg what3:*, reg what4:V, reg p6:p(V +), reg where3:*, reg where4:V, reg p7:p(V +), reg r14:V, reg c1:L, reg get:cls, reg what5:*, reg what6:V, reg p8:p(V +), reg where5:*, reg where6:V, reg p9:p(V +), reg r17:V, reg is:cls, reg fdef:*, reg fdef1:V, reg p10:p(V +), reg r19:V, reg hasFunction:*, reg hasFunction1:V, reg c2:L, reg findFunction:cls, reg what7:*, reg what8:V, reg p11:p(V +), reg environment:cls, reg fdef2:*, reg fdef3:V, reg p12:p(V +), reg r23:V, reg p13:p(V +), reg r25:V, reg c3:L, reg r27:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r28:V, reg unlockBinding:cls, reg what9:*, reg what10:V, reg p14:p(V +), reg where7:*, reg where8:V, reg p15:p(V +), reg r31:V, reg setMethod:cls, reg what11:*, reg what12:V, reg p16:p(V +), reg signature1:*, reg signature2:V, reg p17:p(V +), reg method1:*, reg method2:V, reg p18:p(V +), reg where9:*, reg where10:V, reg p19:p(V +), reg r36:V, reg lockBinding:cls, reg what13:*, reg what14:V, reg p20:p(V +), reg where11:*, reg where12:V, reg p21:p(V +), reg r39:V, reg unlockBinding1:cls, reg what15:*, reg what16:V, reg p22:p(V +), reg where13:*, reg where14:V, reg p23:p(V +), reg r42:V, reg setMethod1:cls, reg what17:*, reg what18:V, reg p24:p(V +), reg signature3:*, reg signature4:V, reg p25:p(V +), reg method3:*, reg method4:V, reg p26:p(V +), reg where15:*, reg where16:V, reg p27:p(V +), reg r47:V, reg lockBinding1:cls, reg what19:*, reg what20:V, reg p28:p(V +), reg where17:*, reg where18:V, reg p29:p(V +), reg r50:V, reg setMethod2:cls, reg what21:*, reg what22:V, reg p30:p(V +), reg signature5:*, reg signature6:V, reg p31:p(V +), reg method5:*, reg method6:V, reg p32:p(V +), reg where19:*, reg where20:V, reg p33:p(V +), reg r55:V |
    mkenv;
    st what = what;
    st signature = signature;
    st method = method;
    st where = where;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(TRUE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    verbose1 = ld verbose;
    check L7() else D0();
  D0():
    deopt 0 [verbose1];
  L7():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c = `as.logical`(verbose2);
    if c then L8() else L1();
  L1():
    goto L2();
  L2():
    exists = ldf exists;
    check L12() else D3();
  L8():
    warning = ldf warning;
    check L9() else D1();
  D1():
    deopt 3 [];
  D3():
    deopt 11 [];
  L9():
    p5 = prom<V +>{
      gettextf = ldf gettextf;
      p1 = prom<V +>{
        sQuote = ldf sQuote;
        p = prom<V +>{
          what1 = ld what;
          what2 = force? what1;
          checkMissing(what2);
          return what2;
        };
        r1 = dyn sQuote(p);
        return r1;
      };
      p4 = prom<V +>{
        sQuote1 = ldf sQuote;
        p3 = prom<V +>{
          getPackageName = ldf getPackageName;
          p2 = prom<V +>{
            where1 = ld where;
            where2 = force? where1;
            checkMissing(where2);
            return where2;
          };
          r4 = dyn getPackageName(p2);
          return r4;
        };
        r6 = dyn sQuote1(p3);
        return r6;
      };
      r8 = dyn gettextf("setting a method over the binding of symbol %s in environment/package %s", p1, p4);
      return r8;
    };
    r10 = dyn warning[, domain](p5, NA_LGL);
    check L10() else D2();
  L12():
    p6 = prom<V +>{
      what3 = ld what;
      what4 = force? what3;
      checkMissing(what4);
      return what4;
    };
    p7 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r14 = dyn exists[, envir, inherits](p6, p7, FALSE);
    check L13() else D4();
  D2():
    deopt 7 [r10];
  D4():
    deopt 17 [r14];
  L10():
    goto L2();
  L13():
    c1 = `as.logical`(r14);
    if c1 then L14() else L3();
  L3():
    goto L4();
  L4():
    st hasFunction = FALSE;
    hasFunction = ld hasFunction;
    check L20() else D9();
  L14():
    get = ldf get;
    check L15() else D5();
  D5():
    deopt 19 [];
  D9():
    deopt 36 [hasFunction];
  L15():
    p8 = prom<V +>{
      what5 = ld what;
      what6 = force? what5;
      checkMissing(what6);
      return what6;
    };
    p9 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r17 = dyn get[, envir](p8, p9);
    check L16() else D6();
  L20():
    hasFunction1 = force? hasFunction;
    checkMissing(hasFunction1);
    c2 = `as.logical`(hasFunction1);
    if c2 then L21() else L5();
  D6():
    deopt 23 [r17];
  L5():
    setMethod2 = ldf setMethod;
    check L40() else D24();
  L16():
    st fdef = r17;
    is = ldf is;
    check L17() else D7();
  L21():
    findFunction = ldf findFunction;
    check L22() else D10();
  D7():
    deopt 26 [];
  D10():
    deopt 39 [];
  D24():
    deopt 85 [];
  L17():
    p10 = prom<V +>{
      fdef = ld fdef;
      fdef1 = force? fdef;
      checkMissing(fdef1);
      return fdef1;
    };
    r19 = dyn is(p10, "genericFunction");
    check L18() else D8();
  L22():
    p11 = prom<V +>{
      what7 = ld what;
      what8 = force? what7;
      checkMissing(what8);
      return what8;
    };
    p13 = prom<V +>{
      environment = ldf environment;
      p12 = prom<V +>{
        fdef2 = ld fdef;
        fdef3 = force? fdef2;
        checkMissing(fdef3);
        return fdef3;
      };
      r23 = dyn environment(p12);
      return r23;
    };
    r25 = dyn findFunction[, where](p11, p13);
    check L23() else D11();
  L40():
    p30 = prom<V +>{
      what21 = ld what;
      what22 = force? what21;
      checkMissing(what22);
      return what22;
    };
    p31 = prom<V +>{
      signature5 = ld signature;
      signature6 = force? signature5;
      checkMissing(signature6);
      return signature6;
    };
    p32 = prom<V +>{
      method5 = ld method;
      method6 = force? method5;
      checkMissing(method6);
      return method6;
    };
    p33 = prom<V +>{
      where19 = ld where;
      where20 = force? where19;
      checkMissing(where20);
      return where20;
    };
    r55 = dyn setMethod2[, , , where](p30, p31, p32, p33);
    check L41() else D25();
  D8():
    deopt 29 [r19];
  D11():
    deopt 43 [r25];
  D25():
    deopt 91 [r55];
  L18():
    st hasFunction = r19;
    goto L4();
  L23():
    c3 = `is.object`(r25);
    if c3 then L24() else L25(r25);
  L41():
    popenv;
    return r55;
  L6(dx1):
    st where2 = dx1;
    unlockBinding = ldf unlockBinding;
    check L27() else D12();
  L24():
    dr = tryDispatchBuiltin.1("[[", r25);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(r27):
    __ = ldf `[[` in base;
    r28 = dyn __(r27, 1);
    goto L6(r28);
  D12():
    deopt 49 [];
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L27():
    p14 = prom<V +>{
      what9 = ld what;
      what10 = force? what9;
      checkMissing(what10);
      return what10;
    };
    p15 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r31 = dyn unlockBinding(p14, p15);
    check L28() else D13();
  D13():
    deopt 52 [r31];
  L28():
    setMethod = ldf setMethod;
    check L29() else D14();
  D14():
    deopt 54 [];
  L29():
    p16 = prom<V +>{
      what11 = ld what;
      what12 = force? what11;
      checkMissing(what12);
      return what12;
    };
    p17 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p18 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    p19 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      return where10;
    };
    r36 = dyn setMethod[, , , where](p16, p17, p18, p19);
    check L30() else D15();
  D15():
    deopt 60 [r36];
  L30():
    lockBinding = ldf lockBinding;
    check L31() else D16();
  D16():
    deopt 62 [];
  L31():
    p20 = prom<V +>{
      what13 = ld what;
      what14 = force? what13;
      checkMissing(what14);
      return what14;
    };
    p21 = prom<V +>{
      where11 = ld where;
      where12 = force? where11;
      checkMissing(where12);
      return where12;
    };
    r39 = dyn lockBinding(p20, p21);
    check L32() else D17();
  D17():
    deopt 65 [r39];
  L32():
    unlockBinding1 = ldf unlockBinding;
    check L33() else D18();
  D18():
    deopt 67 [];
  L33():
    p22 = prom<V +>{
      what15 = ld what;
      what16 = force? what15;
      checkMissing(what16);
      return what16;
    };
    p23 = prom<V +>{
      where13 = ld where2;
      where14 = force? where13;
      checkMissing(where14);
      return where14;
    };
    r42 = dyn unlockBinding1(p22, p23);
    check L34() else D19();
  D19():
    deopt 70 [r42];
  L34():
    setMethod1 = ldf setMethod;
    check L35() else D20();
  D20():
    deopt 72 [];
  L35():
    p24 = prom<V +>{
      what17 = ld what;
      what18 = force? what17;
      checkMissing(what18);
      return what18;
    };
    p25 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p26 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p27 = prom<V +>{
      where15 = ld where2;
      where16 = force? where15;
      checkMissing(where16);
      return where16;
    };
    r47 = dyn setMethod1[, , , where](p24, p25, p26, p27);
    check L36() else D21();
  D21():
    deopt 78 [r47];
  L36():
    lockBinding1 = ldf lockBinding;
    check L37() else D22();
  D22():
    deopt 80 [];
  L37():
    p28 = prom<V +>{
      what19 = ld what;
      what20 = force? what19;
      checkMissing(what20);
      return what20;
    };
    p29 = prom<V +>{
      where17 = ld where2;
      where18 = force? where17;
      checkMissing(where18);
      return where18;
    };
    r50 = dyn lockBinding1(p28, p29);
    check L38() else D23();
  D23():
    deopt 83 [r50];
  L38():
    popenv;
    return r50;
  }
}
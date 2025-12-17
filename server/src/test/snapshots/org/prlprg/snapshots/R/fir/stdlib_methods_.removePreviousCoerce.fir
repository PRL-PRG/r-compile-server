fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3348354599;
    st `.removePreviousCoerce` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3348354599(from, to, where, prevIs) {
  (reg from:*, reg to:*, reg where:*, reg prevIs:*) -+> V { var from:*, var to:*, var where:*, var prevIs:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg from1:*, reg from2:V, reg to1:*, reg to2:V, reg c:cls, reg r2:V, reg getGeneric:cls, reg where1:*, reg where2:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg cdef:*, reg cdef1:V, reg c1:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg selectMethod:cls, reg sig:*, reg sig1:V, reg p1:p(V +), reg cdef2:*, reg cdef3:V, reg p2:p(V +), reg r13:V, reg c3:V, reg r14:V, reg getGeneric1:cls, reg where3:*, reg where4:V, reg p3:p(V +), reg r16:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg rdef:*, reg rdef1:V, reg c4:V, reg c5:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r21:V, reg r22:V, reg selectMethod1:cls, reg sig2:*, reg sig3:V, reg p4:p(V +), reg rdef2:*, reg rdef3:V, reg p5:p(V +), reg r25:V, reg c6:V, reg r26:V, reg prevCoerce:*, reg prevCoerce1:V, reg c7:L, reg c8:V, reg prevRepl:*, reg prevRepl1:V, reg c10:L, reg c11:V, reg c13:L, reg prevIs1:*, reg prevIs2:V, reg r27:V, reg c14:L, reg warning:cls, reg gettextf:cls, reg dQuote:cls, reg from3:*, reg from4:V, reg p6:p(V +), reg r29:V, reg p7:p(V +), reg dQuote1:cls, reg to3:*, reg to4:V, reg p8:p(V +), reg r32:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg r36:V, reg prevCoerce2:*, reg prevCoerce3:V, reg c15:L, reg setMethod:cls, reg cdef4:*, reg cdef5:V, reg p11:p(V +), reg sig4:*, reg sig5:V, reg p12:p(V +), reg where5:*, reg where6:V, reg p13:p(V +), reg r41:V, reg prevRepl2:*, reg prevRepl3:V, reg c16:L, reg setMethod1:cls, reg rdef4:*, reg rdef5:V, reg p14:p(V +), reg sig6:*, reg sig7:V, reg p15:p(V +), reg where7:*, reg where8:V, reg p16:p(V +), reg r46:V |
    mkenv;
    st from = from;
    st to = to;
    st where = where;
    st prevIs = prevIs;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    st sig = r1;
    getGeneric = ldf getGeneric;
    check L22() else D3();
  L17():
    from1 = ld from;
    check L19() else D0();
  L18():
    r = dyn base(<sym from>, <sym to>);
    goto L0(r);
  D0():
    deopt 2 [from1];
  D3():
    deopt 10 [];
  L19():
    from2 = force? from1;
    checkMissing(from2);
    to1 = ld to;
    check L20() else D1();
  L22():
    p = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r4 = dyn getGeneric[, where]("coerce", p);
    check L23() else D4();
  D1():
    deopt 4 [to1];
  D4():
    deopt 14 [r4];
  L20():
    to2 = force? to1;
    checkMissing(to2);
    c = ldf c in base;
    r2 = dyn c(from2, to2);
    check L21() else D2();
  L23():
    st cdef = r4;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  D2():
    deopt 7 [r2];
  L1(r6):
    c2 = `as.logical`(r6);
    if c2 then L27() else L2();
  L21():
    goto L0(r2);
  L24():
    cdef = ld cdef;
    check L26() else D5();
  L25():
    r5 = dyn base1(<sym cdef>);
    goto L1(r5);
  D5():
    deopt 17 [cdef];
  L2():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L26():
    cdef1 = force? cdef;
    checkMissing(cdef1);
    c1 = `==`(cdef1, NULL);
    goto L1(c1);
  L27():
    popenv;
    return FALSE;
  L4(r10):
    r14 = `!`(r10);
    st prevCoerce = r14;
    getGeneric1 = ldf getGeneric;
    check L34() else D8();
  L30():
    selectMethod = ldf selectMethod;
    check L32() else D6();
  L31():
    r9 = dyn base2(<lang selectMethod("coerce", sig, TRUE, FALSE, fdef=cdef)>);
    goto L4(r9);
  D6():
    deopt 27 [];
  D8():
    deopt 39 [];
  L32():
    p1 = prom<V +>{
      sig = ld sig;
      sig1 = force? sig;
      checkMissing(sig1);
      return sig1;
    };
    p2 = prom<V +>{
      cdef2 = ld cdef;
      cdef3 = force? cdef2;
      checkMissing(cdef3);
      return cdef3;
    };
    r13 = dyn selectMethod[, , , , fdef]("coerce", p1, TRUE, FALSE, p2);
    check L33() else D7();
  L34():
    p3 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r16 = dyn getGeneric1[, where]("coerce<-", p3);
    check L35() else D9();
  D7():
    deopt 34 [r13];
  D9():
    deopt 43 [r16];
  L33():
    c3 = `==`(r13, NULL);
    goto L4(c3);
  L35():
    st rdef = r16;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L5(r18):
    c5 = `as.logical`(r18);
    if c5 then L39() else L6();
  L36():
    rdef = ld rdef;
    check L38() else D10();
  L37():
    r17 = dyn base3(<sym rdef>);
    goto L5(r17);
  D10():
    deopt 46 [rdef];
  L6():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L38():
    rdef1 = force? rdef;
    checkMissing(rdef1);
    c4 = `==`(rdef1, NULL);
    goto L5(c4);
  L39():
    popenv;
    return FALSE;
  L8(r22):
    r26 = `!`(r22);
    st prevRepl = r26;
    prevCoerce = ld prevCoerce;
    check L46() else D13();
  L42():
    selectMethod1 = ldf selectMethod;
    check L44() else D11();
  L43():
    r21 = dyn base4(<lang selectMethod("coerce<-", sig, TRUE, FALSE, fdef=rdef)>);
    goto L8(r21);
  D11():
    deopt 56 [];
  D13():
    deopt 67 [prevCoerce];
  L44():
    p4 = prom<V +>{
      sig2 = ld sig;
      sig3 = force? sig2;
      checkMissing(sig3);
      return sig3;
    };
    p5 = prom<V +>{
      rdef2 = ld rdef;
      rdef3 = force? rdef2;
      checkMissing(rdef3);
      return rdef3;
    };
    r25 = dyn selectMethod1[, , , , fdef]("coerce<-", p4, TRUE, FALSE, p5);
    check L45() else D12();
  L46():
    prevCoerce1 = force? prevCoerce;
    checkMissing(prevCoerce1);
    c7 = `as.logical`(prevCoerce1);
    if c7 then L9(c7) else L47();
  D12():
    deopt 63 [r25];
  L9(c8):
    c13 = `as.logical`(c8);
    if c13 then L50() else L10();
  L45():
    c6 = `==`(r25, NULL);
    goto L8(c6);
  L47():
    prevRepl = ld prevRepl;
    check L48() else D14();
  D14():
    deopt 69 [c7, prevRepl];
  L10():
    popenv;
    return FALSE;
  L48():
    prevRepl1 = force? prevRepl;
    checkMissing(prevRepl1);
    c10 = `as.logical`(prevRepl1);
    c11 = `||`(c7, c10);
    goto L9(c11);
  L50():
    prevIs1 = ld prevIs;
    check L51() else D15();
  D15():
    deopt 72 [prevIs1];
  L51():
    prevIs2 = force? prevIs1;
    checkMissing(prevIs2);
    r27 = `!`(prevIs2);
    c14 = `as.logical`(r27);
    if c14 then L52() else L11();
  L11():
    goto L12();
  L12():
    prevCoerce2 = ld prevCoerce;
    check L56() else D18();
  L52():
    warning = ldf warning;
    check L53() else D16();
  D16():
    deopt 76 [];
  D18():
    deopt 83 [prevCoerce2];
  L53():
    p10 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        dQuote = ldf dQuote;
        p6 = prom<V +>{
          from3 = ld from;
          from4 = force? from3;
          checkMissing(from4);
          return from4;
        };
        r29 = dyn dQuote(p6);
        return r29;
      };
      p9 = prom<V +>{
        dQuote1 = ldf dQuote;
        p8 = prom<V +>{
          to3 = ld to;
          to4 = force? to3;
          checkMissing(to4);
          return to4;
        };
        r32 = dyn dQuote1(p8);
        return r32;
      };
      r34 = dyn gettextf("methods currently exist for coercing from %s to %s; they will be replaced.", p7, p9);
      return r34;
    };
    r36 = dyn warning[, domain](p10, NA_LGL);
    check L54() else D17();
  L56():
    prevCoerce3 = force? prevCoerce2;
    checkMissing(prevCoerce3);
    c15 = `as.logical`(prevCoerce3);
    if c15 then L57() else L13();
  D17():
    deopt 80 [r36];
  L13():
    goto L14();
  L14():
    prevRepl2 = ld prevRepl;
    check L61() else D21();
  L54():
    goto L12();
  L57():
    setMethod = ldf setMethod;
    check L58() else D19();
  D19():
    deopt 86 [];
  D21():
    deopt 95 [prevRepl2];
  L58():
    p11 = prom<V +>{
      cdef4 = ld cdef;
      cdef5 = force? cdef4;
      checkMissing(cdef5);
      return cdef5;
    };
    p12 = prom<V +>{
      sig4 = ld sig;
      sig5 = force? sig4;
      checkMissing(sig5);
      return sig5;
    };
    p13 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r41 = dyn setMethod[, , , where](p11, p12, NULL, p13);
    check L59() else D20();
  L61():
    prevRepl3 = force? prevRepl2;
    checkMissing(prevRepl3);
    c16 = `as.logical`(prevRepl3);
    if c16 then L62() else L15();
  D20():
    deopt 92 [r41];
  L15():
    goto L16();
  L16():
    popenv;
    return TRUE;
  L59():
    goto L14();
  L62():
    setMethod1 = ldf setMethod;
    check L63() else D22();
  D22():
    deopt 98 [];
  L63():
    p14 = prom<V +>{
      rdef4 = ld rdef;
      rdef5 = force? rdef4;
      checkMissing(rdef5);
      return rdef5;
    };
    p15 = prom<V +>{
      sig6 = ld sig;
      sig7 = force? sig6;
      checkMissing(sig7);
      return sig7;
    };
    p16 = prom<V +>{
      where7 = ld where;
      where8 = force? where7;
      checkMissing(where8);
      return where8;
    };
    r46 = dyn setMethod1[, , , where](p14, p15, NULL, p16);
    check L64() else D23();
  D23():
    deopt 104 [r46];
  L64():
    goto L16();
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1666920068;
    st `.undefineMethod` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1666920068(f, signature, where) {
  (reg f:*, reg signature:*, reg where:*) -+> V { var f:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg getGeneric:cls, reg f1:*, reg f2:V, reg p3:p(V +), reg where1:*, reg where2:V, reg p4:p(V +), reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg fdef:*, reg fdef1:V, reg c:V, reg c1:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg f3:*, reg f4:V, reg p5:p(V +), reg r12:V, reg p6:p(V +), reg r14:V, reg p7:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg getMethod:cls, reg fdef2:*, reg fdef3:V, reg p8:p(V +), reg signature1:*, reg signature2:V, reg p9:p(V +), reg r23:V, reg c2:V, reg r24:V, reg c3:L, reg setMethod:cls, reg f5:*, reg f6:V, reg p10:p(V +), reg signature3:*, reg signature4:V, reg p11:p(V +), reg where3:*, reg where4:V, reg p12:p(V +), reg r28:V |
    mkenv;
    st f = f;
    signature_isMissing = missing.0(signature);
    if signature_isMissing then L0() else L1(signature);
  L0():
    p = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p);
  L1(signature_orDefault):
    st signature = signature_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L2() else L3(where);
  L2():
    p2 = prom<V +>{
      topenv = ldf topenv;
      p1 = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r2 = dyn parent_frame();
        return r2;
      };
      r4 = dyn topenv(p1);
      return r4;
    };
    goto L3(p2);
  L3(where_orDefault):
    st where = where_orDefault;
    getGeneric = ldf getGeneric;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p3 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p4 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r8 = dyn getGeneric[, where](p3, p4);
    check L10() else D1();
  D1():
    deopt 5 [r8];
  L10():
    st fdef = r8;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L4(r10):
    c1 = `as.logical`(r10);
    if c1 then L14() else L5();
  L11():
    fdef = ld fdef;
    check L13() else D2();
  L12():
    r9 = dyn base(<sym fdef>);
    goto L4(r9);
  D2():
    deopt 8 [fdef];
  L5():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L13():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c = `==`(fdef1, NULL);
    goto L4(c);
  L14():
    warning = ldf warning;
    check L15() else D3();
  D3():
    deopt 12 [];
  L7(r20):
    r24 = `!`(r20);
    c3 = `as.logical`(r24);
    if c3 then L23() else L8();
  L15():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        sQuote = ldf sQuote;
        p5 = prom<V +>{
          f3 = ld f;
          f4 = force? f3;
          checkMissing(f4);
          return f4;
        };
        r12 = dyn sQuote(p5);
        return r12;
      };
      r14 = dyn gettextf("no generic function %s found", p6);
      return r14;
    };
    r16 = dyn warning[, domain](p7, NA_LGL);
    check L16() else D4();
  L19():
    getMethod = ldf getMethod;
    check L21() else D5();
  L20():
    r19 = dyn base1(<lang getMethod(fdef, signature, optional=TRUE)>);
    goto L7(r19);
  D4():
    deopt 16 [r16];
  D5():
    deopt 24 [];
  L8():
    invisible.0();
    popenv;
    return NULL;
  L16():
    popenv;
    return FALSE;
  L21():
    p8 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    p9 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    r23 = dyn getMethod[, , optional](p8, p9, TRUE);
    check L22() else D6();
  L23():
    setMethod = ldf setMethod;
    check L24() else D7();
  D6():
    deopt 29 [r23];
  D7():
    deopt 33 [];
  L22():
    c2 = `==`(r23, NULL);
    goto L7(c2);
  L24():
    p10 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p11 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p12 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r28 = dyn setMethod[, , , where](p10, p11, NULL, p12);
    check L25() else D8();
  D8():
    deopt 39 [r28];
  L25():
    popenv;
    return r28;
  }
}
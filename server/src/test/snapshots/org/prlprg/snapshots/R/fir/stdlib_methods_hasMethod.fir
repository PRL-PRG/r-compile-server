fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4110860704;
    st hasMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4110860704(f, signature, where) {
  (reg f:*, reg signature:*, reg where:*) -+> V { var f:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg _genEnv:cls, reg f1:*, reg f2:V, reg p1:p(V +), reg topenv:cls, reg parent_frame:cls, reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg p4:p(V +), reg getGeneric:cls, reg f3:*, reg f4:V, reg p5:p(V +), reg where1:*, reg where2:V, reg p6:p(V +), reg r11:V, reg sym:cls, reg base:cls, reg guard:L, reg r12:V, reg r13:V, reg fdef:*, reg fdef1:V, reg c:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg selectMethod:cls, reg f5:*, reg f6:V, reg p7:p(V +), reg signature1:*, reg signature2:V, reg p8:p(V +), reg fdef2:*, reg fdef3:V, reg p9:p(V +), reg r19:V, reg c2:V, reg r20:V |
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
    p4 = prom<V +>{
      _genEnv = ldf `.genEnv`;
      p1 = prom<V +>{
        f1 = ld f;
        f2 = force? f1;
        checkMissing(f2);
        return f2;
      };
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
      r7 = dyn _genEnv(p1, p3);
      return r7;
    };
    goto L3(p4);
  L3(where_orDefault):
    st where = where_orDefault;
    getGeneric = ldf getGeneric;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p5 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p6 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r11 = dyn getGeneric[, where](p5, p6);
    check L8() else D1();
  D1():
    deopt 5 [r11];
  L8():
    st fdef = r11;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L4(r13):
    c1 = `as.logical`(r13);
    if c1 then L12() else L5();
  L9():
    fdef = ld fdef;
    check L11() else D2();
  L10():
    r12 = dyn base(<sym fdef>);
    goto L4(r12);
  D2():
    deopt 8 [fdef];
  L5():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  L11():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    c = `==`(fdef1, NULL);
    goto L4(c);
  L12():
    popenv;
    return FALSE;
  L6(r15):
    r20 = `!`(r15);
    popenv;
    return r20;
  L14():
    selectMethod = ldf selectMethod;
    check L16() else D3();
  L15():
    r14 = dyn base1(<lang selectMethod(f, signature, optional=TRUE, fdef=fdef)>);
    goto L6(r14);
  D3():
    deopt 15 [];
  L16():
    p7 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p8 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    p9 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r19 = dyn selectMethod[, , optional, fdef](p7, p8, TRUE, p9);
    check L17() else D4();
  D4():
    deopt 22 [r19];
  L17():
    c2 = `==`(r19, NULL);
    goto L6(c2);
  }
}
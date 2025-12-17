fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1666920068;
    st existsMethod = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1666920068(f, signature, where) {
  (reg f:*, reg signature:*, reg where:*) -+> V { var f:*, var signature:*, reg signature_isMissing:L, reg signature_orDefault:*, reg character:cls, reg r:V, reg p:p(V +), var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg c:L, reg getMethod:cls, reg f1:*, reg f2:V, reg p3:p(V +), reg signature1:*, reg signature2:V, reg p4:p(V +), reg r11:V, reg getMethod1:cls, reg f3:*, reg f4:V, reg p5:p(V +), reg signature3:*, reg signature4:V, reg p6:p(V +), reg where1:*, reg where2:V, reg p7:p(V +), reg r16:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg method:*, reg method1:V, reg c1:V, reg r19:V |
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
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L4(r7):
    c = `as.logical`(r7);
    if c then L10() else L5();
  L8():
    missing = ldf missing in base;
    r8 = dyn missing(<sym where>);
    goto L4(r8);
  L9():
    r6 = dyn base(<sym where>);
    goto L4(r6);
  L5():
    getMethod1 = ldf getMethod;
    check L14() else D2();
  L6():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L10():
    getMethod = ldf getMethod;
    check L11() else D0();
  D0():
    deopt 4 [];
  D2():
    deopt 12 [];
  L7(r18):
    r19 = `!`(r18);
    popenv;
    return r19;
  L11():
    p3 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p4 = prom<V +>{
      signature1 = ld signature;
      signature2 = force? signature1;
      checkMissing(signature2);
      return signature2;
    };
    r11 = dyn getMethod[, , optional](p3, p4, TRUE);
    check L12() else D1();
  L14():
    p5 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    p6 = prom<V +>{
      signature3 = ld signature;
      signature4 = force? signature3;
      checkMissing(signature4);
      return signature4;
    };
    p7 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r16 = dyn getMethod1[, , where, optional](p5, p6, p7, TRUE);
    check L15() else D3();
  L16():
    method = ld method;
    check L18() else D4();
  L17():
    r17 = dyn base1(<sym method>);
    goto L7(r17);
  D1():
    deopt 9 [r11];
  D3():
    deopt 19 [r16];
  D4():
    deopt 22 [method];
  L12():
    st method = r11;
    goto L6();
  L15():
    st method = r16;
    goto L6();
  L18():
    method1 = force? method;
    checkMissing(method1);
    c1 = `==`(method1, NULL);
    goto L7(c1);
  }
}
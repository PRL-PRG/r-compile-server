fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1526981056;
    st `.person_elt_fld_gets` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1526981056(x, j, v) {
  (reg x:*, reg j:*, reg v:*) -+> V { var x:*, var j:*, var v:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _is_not_nonempty_text:cls, reg v1:*, reg v2:V, reg p:p(V +), reg r3:V, reg c:L, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg v3:*, reg v4:V, reg as_character:cls, reg r6:V, reg list:cls, reg r7:V, reg l:*, reg c1:L, reg r9:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg j1:*, reg j2:V, reg ___:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg vapply:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg is_null:*, reg is_null1:V, reg p2:p(V +), reg r17:V, reg all:cls, reg r18:V, reg c2:L, reg stop:cls, reg gettext:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st j = j;
    st v = v;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    l = ld x;
    c1 = `is.object`(l);
    if c1 then L18() else L19(r1, l);
  L7():
    _is_not_nonempty_text = ldf `.is_not_nonempty_text`;
    check L9() else D0();
  L8():
    r = dyn base(<lang if(.is_not_nonempty_text(v), NULL, as.character(v))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3(dx1):
    st x = dx1;
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L22() else L23();
  L9():
    p = prom<V +>{
      v1 = ld v;
      v2 = force? v1;
      checkMissing(v2);
      return v2;
    };
    r3 = dyn _is_not_nonempty_text(p);
    check L10() else D1();
  L18():
    dr = tryDispatchBuiltin.0("[<-", l, r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(r1, dr);
  L19(r9, l2):
    j1 = ld j;
    check L21() else D5();
  D1():
    deopt 5 [r3];
  D5():
    deopt 17 [r9, l2, r1, j1];
  L4(r14):
    c2 = `as.logical`(r14);
    if c2 then L27() else L5();
  L10():
    c = `as.logical`(r3);
    if c then L11() else L1();
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L21():
    j2 = force? j1;
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, r1, j2);
    goto L3(r12);
  L22():
    vapply = ldf vapply;
    check L24() else D6();
  L23():
    r13 = dyn base2(<lang vapply(x, is.null, NA_LGL)>);
    goto L4(r13);
  D6():
    deopt 24 [];
  L1():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(r4):
    list = ldf list in base;
    r7 = dyn list(r4);
    check L17() else D4();
  L5():
    goto L6();
  L6():
    x3 = ld x;
    check L31() else D11();
  L11():
    goto L2(NULL);
  L24():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      is_null = ld `is.null`;
      is_null1 = force? is_null;
      checkMissing(is_null1);
      return is_null1;
    };
    r17 = dyn vapply(p1, p2, NA_LGL);
    check L25() else D7();
  L27():
    stop = ldf stop;
    check L28() else D9();
  D4():
    deopt 15 [r7];
  D7():
    deopt 28 [r17];
  D9():
    deopt 32 [];
  D11():
    deopt 39 [x3];
  L13():
    v3 = ld v;
    check L15() else D2();
  L14():
    r5 = dyn base1(<sym v>);
    goto L2(r5);
  L17():
    goto L0(r7);
  L25():
    all = ldf all in base;
    r18 = dyn all(r17);
    check L26() else D8();
  L28():
    p3 = prom<V +>{
      gettext = ldf gettext;
      r19 = dyn gettext("must have some non-empty fields");
      return r19;
    };
    r21 = dyn stop[, domain](p3, NA_LGL);
    check L29() else D10();
  L31():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D2():
    deopt 10 [v3];
  D8():
    deopt 30 [r18];
  D10():
    deopt 36 [r21];
  L15():
    v4 = force? v3;
    checkMissing(v4);
    as_character = ldf `as.character` in base;
    r6 = dyn as_character(v4);
    check L16() else D3();
  L26():
    goto L4(r18);
  L29():
    goto L6();
  D3():
    deopt 13 [r6];
  L16():
    goto L2(r6);
  }
}
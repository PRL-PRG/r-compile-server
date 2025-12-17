fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner896732164;
    st `.getImplicitGroup` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner896732164(name, where) {
  (reg name:*, reg where:*) -+> V { var name:*, var where:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg where1:*, reg where2:V, reg c:L, reg where4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _ImplicitGroupMetaName:*, reg _ImplicitGroupMetaName1:V, reg __:cls, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg tbl:*, reg tbl1:V, reg c3:L, reg tbl3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg name1:*, reg name2:V, reg __1:cls, reg r6:V, reg c4:V, reg r7:V, reg c5:L, reg r8:*, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg list:cls, reg r15:V |
    mkenv;
    st name = name;
    st where = where;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L16() else L2();
  L9():
    where1 = ld where;
    check L11() else D0();
  L10():
    r = dyn base(<lang `<-`(tbl, `[[`(where, .ImplicitGroupMetaName))>);
    goto L0(r);
  D0():
    deopt 1 [where1];
  L2():
    goto L7();
  L7():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L11():
    where2 = force? where1;
    checkMissing(where2);
    c = `is.object`(where2);
    if c then L12() else L13(where2);
  L16():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L1(dx1):
    st tbl = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L3(r5):
    r7 = `!`(r5);
    c5 = `as.logical`(r7);
    if c5 then L24() else L5();
  L8(r14):
    popenv;
    return r14;
  L12():
    dr = tryDispatchBuiltin.1("[[", where2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(where4):
    _ImplicitGroupMetaName = ld `.ImplicitGroupMetaName`;
    check L15() else D1();
  L17():
    tbl = ld tbl;
    check L19() else D2();
  L18():
    r4 = dyn base1(<lang `<-`(r, `[[`(tbl, name))>);
    goto L3(r4);
  L29():
    list = ldf list in base;
    r15 = dyn list();
    check L31() else D5();
  L30():
    r13 = dyn base2();
    goto L8(r13);
  D1():
    deopt 3 [where4, _ImplicitGroupMetaName];
  D2():
    deopt 10 [tbl];
  D5():
    deopt 28 [r15];
  L5():
    goto L7();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L15():
    _ImplicitGroupMetaName1 = force? _ImplicitGroupMetaName;
    __ = ldf `[[` in base;
    r2 = dyn __(where4, _ImplicitGroupMetaName1);
    goto L1(r2);
  L19():
    tbl1 = force? tbl;
    checkMissing(tbl1);
    c3 = `is.object`(tbl1);
    if c3 then L20() else L21(tbl1);
  L24():
    r8 = ld r;
    check L25() else D4();
  L31():
    goto L8(r15);
  D4():
    deopt 18 [r8];
  L4(dx3):
    st r = dx3;
    c4 = `==`(dx3, NULL);
    goto L3(c4);
  L20():
    dr2 = tryDispatchBuiltin.1("[[", tbl1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(tbl3):
    name1 = ld name;
    check L23() else D3();
  L25():
    r9 = force? r8;
    checkMissing(r9);
    popenv;
    return r9;
  D3():
    deopt 12 [tbl3, name1];
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L23():
    name2 = force? name1;
    __1 = ldf `[[` in base;
    r6 = dyn __1(tbl3, name2);
    goto L4(r6);
  }
}
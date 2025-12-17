fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2832486343;
    st readFileSyms = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2832486343(fpath) {
  (reg fpath:*) -+> V { var fpath:*, reg read_symbols_from_object_file:cls, reg fpath1:*, reg fpath2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg v:*, reg v1:V, reg c:V, reg c1:L, reg data_frame:cls, reg character:cls, reg r4:V, reg p1:p(V +), reg character1:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg as_data_frame:cls, reg v2:*, reg v3:V, reg p3:p(V +), reg r10:V, reg c2:L, reg r12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg __:cls, reg r19:V |
    mkenv;
    st fpath = fpath;
    read_symbols_from_object_file = ldf read_symbols_from_object_file;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      fpath1 = ld fpath;
      fpath2 = force? fpath1;
      checkMissing(fpath2);
      return fpath2;
    };
    r1 = dyn read_symbols_from_object_file(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    st v = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r3):
    c1 = `as.logical`(r3);
    if c1 then L9() else L1();
  L6():
    v = ld v;
    check L8() else D2();
  L7():
    r2 = dyn base(<sym v>);
    goto L0(r2);
  D2():
    deopt 6 [v];
  L1():
    as_data_frame = ldf `as.data.frame`;
    check L13() else D5();
  L8():
    v1 = force? v;
    checkMissing(v1);
    c = `==`(v1, NULL);
    goto L0(c);
  L9():
    data_frame = ldf `data.frame`;
    check L10() else D3();
  D3():
    deopt 10 [];
  D5():
    deopt 17 [];
  L10():
    p1 = prom<V +>{
      character = ldf character;
      r4 = dyn character(0.0);
      return r4;
    };
    p2 = prom<V +>{
      character1 = ldf character;
      r6 = dyn character1(0.0);
      return r6;
    };
    r8 = dyn data_frame[name, type](p1, p2);
    check L11() else D4();
  L13():
    p3 = prom<V +>{
      v2 = ld v;
      v3 = force? v2;
      checkMissing(v3);
      return v3;
    };
    r10 = dyn as_data_frame(p3);
    check L14() else D6();
  D4():
    deopt 15 [r8];
  D6():
    deopt 19 [r10];
  L11():
    popenv;
    return r8;
  L14():
    c2 = `is.object`(r10);
    if c2 then L15() else L16(r10);
  L2(dx1):
    popenv;
    return dx1;
  L15():
    dr = tryDispatchBuiltin.1("[", r10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(r12):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L3(r16, r17):
    __ = ldf `[` in base;
    r19 = dyn __(r16, r17);
    goto L2(r19);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L18():
    c3 = ldf c in base;
    r18 = dyn c3("name", "type");
    check L20() else D7();
  L19():
    r15 = dyn base1("name", "type");
    goto L3(r12, r15);
  D7():
    deopt 25 [r12, r18];
  L20():
    goto L3(r12, r18);
  }
}
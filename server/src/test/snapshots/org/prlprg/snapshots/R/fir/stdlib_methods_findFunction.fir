fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2935266531;
    st findFunction = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2935266531(f, generic, where) {
  (reg f:*, reg generic:*, reg where:*) -+> V { var f:*, var generic:*, reg generic_isMissing:L, reg generic_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg _findAll:cls, reg f1:*, reg f2:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r6:V, reg logical:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg allWhere:*, reg allWhere1:V, reg length:cls, reg r9:V, reg p4:p(V +), reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg allWhere2:*, reg allWhere3:V, reg r14:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg allWhere4:*, reg allWhere5:V, reg c1:L, reg i6:I, reg allWhere7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg i13:I, reg r17:V, reg wherei:*, reg wherei1:V, reg c2:L, reg i15:I, reg wherei3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i17:I, reg dx3:V, reg f3:*, reg f4:V, reg __1:cls, reg r18:V, reg c3:V, reg r19:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg i22:I, reg r21:V, reg fdef:*, reg fdef1:V, reg is_function:cls, reg r22:V, reg c5:L, reg i24:I, reg c7:V, reg generic1:*, reg generic2:V, reg c8:L, reg i25:I, reg c9:L, reg c10:V, reg is_primitive:cls, reg fdef2:*, reg fdef3:V, reg p5:p(V +), reg r24:V, reg c13:L, reg c14:V, reg c17:L, reg i28:I, reg c18:L, reg c19:V, reg isGeneric:cls, reg f5:*, reg f6:V, reg p6:p(V +), reg wherei4:*, reg wherei5:V, reg p7:p(V +), reg fdef4:*, reg fdef5:V, reg p8:p(V +), reg r28:V, reg r29:V, reg c22:L, reg c23:V, reg c26:L, reg c27:V, reg l1:*, reg c29:L, reg i33:I, reg c31:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i35:I, reg c33:V, reg dx5:V, reg i36:*, reg i37:V, reg ___:cls, reg r30:V, reg i38:I, reg allWhere8:*, reg allWhere9:V, reg c35:L, reg allWhere11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ok:*, reg ok1:V, reg __2:cls, reg r31:V |
    mkenv;
    st f = f;
    generic_isMissing = missing.0(generic);
    if generic_isMissing then L0(TRUE) else L0(generic);
  L0(generic_orDefault):
    st generic = generic_orDefault;
    where_isMissing = missing.0(where);
    if where_isMissing then L1() else L2(where);
  L1():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L2(p1);
  L2(where_orDefault):
    st where = where_orDefault;
    _findAll = ldf `.findAll`;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p2 = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r6 = dyn _findAll(p2, p3);
    check L18() else D1();
  D1():
    deopt 4 [r6];
  L18():
    st allWhere = r6;
    logical = ldf logical;
    check L19() else D2();
  D2():
    deopt 7 [];
  L19():
    p4 = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      allWhere = ld allWhere;
      allWhere1 = force? allWhere;
      checkMissing(allWhere1);
      length = ldf length in base;
      r9 = dyn length(allWhere1);
      goto L0(r9);
    L2():
      r7 = dyn base(<sym allWhere>);
      goto L0(r7);
    };
    r11 = dyn logical(p4);
    check L20() else D3();
  D3():
    deopt 9 [r11];
  L20():
    st ok = r11;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L3(r13):
    s = toForSeq(r13);
    l = length(s);
    i = 0;
    goto L4(i);
  L21():
    allWhere2 = ld allWhere;
    check L23() else D4();
  L22():
    r12 = dyn base1(<sym allWhere>);
    goto L3(r12);
  D4():
    deopt 12 [allWhere2];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L24() else L15();
  L23():
    allWhere3 = force? allWhere2;
    checkMissing(allWhere3);
    r14 = seq_along(allWhere3);
    goto L3(r14);
  L15():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    allWhere4 = ld allWhere;
    check L25() else D5();
  L24():
    allWhere8 = ld allWhere;
    check L58() else D17();
  D5():
    deopt 15 [i2, allWhere4];
  D17():
    deopt 62 [allWhere8];
  L25():
    allWhere5 = force? allWhere4;
    checkMissing(allWhere5);
    c1 = `is.object`(allWhere5);
    if c1 then L26() else L27(i2, allWhere5);
  L58():
    allWhere9 = force? allWhere8;
    checkMissing(allWhere9);
    c35 = `is.object`(allWhere9);
    if c35 then L59() else L60(allWhere9);
  L5(i8, dx1):
    st wherei = dx1;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L16(dx7):
    popenv;
    return dx7;
  L26():
    dr = tryDispatchBuiltin.1("[[", allWhere5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(i2, dr);
  L27(i6, allWhere7):
    i9 = ld i;
    check L29() else D6();
  L59():
    dr6 = tryDispatchBuiltin.1("[", allWhere9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L61() else L60(dr6);
  L60(allWhere11):
    ok = ld ok;
    check L62() else D18();
  D6():
    deopt 17 [i6, allWhere7, i9];
  D18():
    deopt 64 [allWhere11, ok];
  L6(i13, r17):
    r19 = `!`(r17);
    c4 = `as.logical`(r19);
    if c4 then L37() else L8();
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(i2, dx);
  L29():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r15 = dyn __(allWhere7, i10);
    goto L5(i6, r15);
  L30():
    wherei = ld wherei;
    check L32() else D7();
  L31():
    r16 = dyn base2(<lang `<-`(fdef, `[[`(wherei, f))>);
    goto L6(i8, r16);
  L61():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L16(dx6);
  L62():
    ok1 = force? ok;
    __2 = ldf `[` in base;
    r31 = dyn __2(allWhere11, ok1);
    goto L16(r31);
  D7():
    deopt 22 [i8, wherei];
  L8():
    goto L14(i13);
  L14(i38):
    goto L4(i38);
  L32():
    wherei1 = force? wherei;
    checkMissing(wherei1);
    c2 = `is.object`(wherei1);
    if c2 then L33() else L34(i8, wherei1);
  L37():
    sym3 = ldf `is.function`;
    base3 = ldf `is.function` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L7(i17, dx3):
    st fdef = dx3;
    c3 = `==`(dx3, NULL);
    goto L6(i17, c3);
  L9(i22, r21):
    c5 = `as.logical`(r21);
    if c5 then L42() else L10(i22, c5);
  L33():
    dr2 = tryDispatchBuiltin.1("[[", wherei1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L35() else L34(i8, dr2);
  L34(i15, wherei3):
    f3 = ld f;
    check L36() else D8();
  L38():
    fdef = ld fdef;
    check L40() else D9();
  L39():
    r20 = dyn base3(<sym fdef>);
    goto L9(i13, r20);
  D8():
    deopt 24 [i15, wherei3, f3];
  D9():
    deopt 32 [i13, fdef];
  L10(i24, c7):
    l1 = ld ok;
    c29 = `is.object`(l1);
    if c29 then L53() else L54(i24, c7, l1);
  L35():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(i8, dx2);
  L36():
    f4 = force? f3;
    __1 = ldf `[[` in base;
    r18 = dyn __1(wherei3, f4);
    goto L7(i15, r18);
  L40():
    fdef1 = force? fdef;
    checkMissing(fdef1);
    is_function = ldf `is.function` in base;
    r22 = dyn is_function(fdef1);
    check L41() else D10();
  L42():
    generic1 = ld generic;
    check L43() else D11();
  D10():
    deopt 35 [i13, r22];
  D11():
    deopt 36 [i22, c5, generic1];
  L13(i35, c33, dx5):
    st ok = dx5;
    goto L14(i35);
  L41():
    goto L9(i13, r22);
  L43():
    generic2 = force? generic1;
    checkMissing(generic2);
    c8 = `as.logical`(generic2);
    if c8 then L11(i22, c5, c8) else L44();
  L53():
    dr4 = tryDispatchBuiltin.0("[<-", l1, c7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(i24, c7, dr4);
  L54(i33, c31, l3):
    i36 = ld i;
    check L56() else D16();
  D16():
    deopt 53 [i33, c31, l3, c7, i36];
  L11(i25, c9, c10):
    c17 = `as.logical`(c10);
    if c17 then L12(i25, c9, c17) else L48();
  L44():
    is_primitive = ldf `is.primitive`;
    check L45() else D12();
  L55():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L13(i24, c7, dx4);
  L56():
    i37 = force? i36;
    ___ = ldf `[<-` in base;
    r30 = dyn ___(l3, c7, i37);
    goto L13(i33, c31, r30);
  D12():
    deopt 39 [i22, c5, c8];
  L12(i28, c18, c19):
    c26 = `as.logical`(c19);
    c27 = `&&`(c18, c26);
    goto L10(i28, c27);
  L45():
    p5 = prom<V +>{
      fdef2 = ld fdef;
      fdef3 = force? fdef2;
      checkMissing(fdef3);
      return fdef3;
    };
    r24 = dyn is_primitive(p5);
    check L46() else D13();
  L48():
    isGeneric = ldf isGeneric;
    check L49() else D14();
  D13():
    deopt 41 [i22, c5, c8, r24];
  D14():
    deopt 44 [i25, c9, c17];
  L46():
    c13 = `as.logical`(r24);
    c14 = `||`(c8, c13);
    goto L11(i22, c5, c14);
  L49():
    p6 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p7 = prom<V +>{
      wherei4 = ld wherei;
      wherei5 = force? wherei4;
      checkMissing(wherei5);
      return wherei5;
    };
    p8 = prom<V +>{
      fdef4 = ld fdef;
      fdef5 = force? fdef4;
      checkMissing(fdef5);
      return fdef5;
    };
    r28 = dyn isGeneric(p6, p7, p8);
    check L50() else D15();
  D15():
    deopt 48 [i25, c9, c17, r28];
  L50():
    r29 = `!`(r28);
    c22 = `as.logical`(r29);
    c23 = `||`(c17, c22);
    goto L12(i25, c9, c23);
  }
}
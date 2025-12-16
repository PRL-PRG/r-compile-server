fun main() {
  () -+> V { reg r:cls, reg make_names:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg make_names1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg make_names2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V, reg make_names3:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg state_name:*, reg state_name1:V, reg c4:L, reg state_name3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg make_names4:cls, reg state_name4:*, reg state_name5:V, reg p4:p(V +), reg r22:V, reg state_name6:*, reg state_name7:V, reg r23:V, reg __:cls, reg r24:V |
    mkenv;
    r = clos `inner-842899025`;
    st `make.names` = r;
    make_names = ldf `make.names`;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("a and b", "a-and-b");
      goto L0(r3);
    L2():
      r1 = dyn base("a and b", "a-and-b");
      goto L0(r1);
    };
    r5 = dyn make_names[, unique](p, TRUE);
    check L2() else D1();
  D1():
    deopt 8 [r5];
  L2():
    make_names1 = ldf `make.names`;
    check L3() else D2();
  D2():
    deopt 10 [];
  L3():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("a and b", "a_and_b");
      goto L0(r8);
    L2():
      r6 = dyn base1("a and b", "a_and_b");
      goto L0(r6);
    };
    r10 = dyn make_names1[, unique](p1, TRUE);
    check L4() else D3();
  D3():
    deopt 14 [r10];
  L4():
    make_names2 = ldf `make.names`;
    check L5() else D4();
  D4():
    deopt 16 [];
  L5():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2("a and b", "a_and_b");
      goto L0(r13);
    L2():
      r11 = dyn base2("a and b", "a_and_b");
      goto L0(r11);
    };
    r15 = dyn make_names2[, unique, allow_](p2, TRUE, FALSE);
    check L6() else D5();
  D5():
    deopt 22 [r15];
  L6():
    make_names3 = ldf `make.names`;
    check L7() else D6();
  D6():
    deopt 24 [];
  L7():
    p3 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c3 = ldf c in base;
      r18 = dyn c3("", "X");
      goto L0(r18);
    L2():
      r16 = dyn base3("", "X");
      goto L0(r16);
    };
    r20 = dyn make_names3[, unique](p3, TRUE);
    check L8() else D7();
  D7():
    deopt 28 [r20];
  L8():
    state_name = ld `state.name`;
    check L9() else D8();
  D8():
    deopt 29 [state_name];
  L9():
    state_name1 = force? state_name;
    checkMissing(state_name1);
    c4 = `is.object`(state_name1);
    if c4 then L10() else L11(state_name1);
  L0(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("[", state_name1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(state_name3):
    make_names4 = ldf `make.names`;
    check L13() else D9();
  D9():
    deopt 32 [state_name3];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    p4 = prom<V +>{
      state_name4 = ld `state.name`;
      state_name5 = force? state_name4;
      checkMissing(state_name5);
      return state_name5;
    };
    r22 = dyn make_names4(p4);
    check L14() else D10();
  D10():
    deopt 34 [state_name3, r22];
  L14():
    state_name6 = ld `state.name`;
    check L15() else D11();
  D11():
    deopt 34 [state_name3, r22, state_name6];
  L15():
    state_name7 = force? state_name6;
    checkMissing(state_name7);
    r23 = `!=`(r22, state_name7);
    __ = ldf `[` in base;
    r24 = dyn __(state_name3, r23);
    goto L0(r24);
  }
}
fun `inner-842899025`(names, unique, allow_) {
  (reg names:*, reg unique:*, reg allow_:*) -+> V { var names:*, var unique:*, reg unique_isMissing:L, reg unique_orDefault:*, var allow_:*, reg allow__isMissing:L, reg allow__orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg names1:*, reg names2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg names3:*, reg names4:V, reg allow_1:*, reg allow_2:V, reg make_names:cls, reg r5:V, reg unique1:*, reg unique2:V, reg c:L, reg order:cls, reg names5:*, reg names6:V, reg names7:*, reg names8:V, reg r6:V, reg p:p(V +), reg r8:V, reg make_unique:cls, reg names9:*, reg names10:V, reg c1:L, reg names12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg o:*, reg o1:V, reg __:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg l:*, reg c2:L, reg r13:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r15:V, reg dx3:V, reg o2:*, reg o3:V, reg ___:cls, reg r16:V, reg names13:*, reg names14:V |
    mkenv;
    st names = names;
    unique_isMissing = missing.0(unique);
    if unique_isMissing then L0(FALSE) else L0(unique);
  L0(unique_orDefault):
    st unique = unique_orDefault;
    allow__isMissing = missing.0(allow_);
    if allow__isMissing then L1(TRUE) else L1(allow_);
  L1(allow__orDefault):
    st allow_ = allow__orDefault;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L2(r1):
    st names = r1;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    names1 = ld names;
    check L9() else D0();
  L8():
    r = dyn base(<sym names>);
    goto L2(r);
  D0():
    deopt 2 [names1];
  L3(r4):
    st names2 = r4;
    unique1 = ld unique;
    check L16() else D5();
  L9():
    names2 = force? names1;
    checkMissing(names2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(names2);
    check L10() else D1();
  L11():
    names3 = ld names;
    check L13() else D2();
  L12():
    r3 = dyn base1(<lang make.names(names, allow_)>);
    goto L3(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [names3];
  D5():
    deopt 16 [unique1];
  L10():
    goto L2(r2);
  L13():
    names4 = force? names3;
    checkMissing(names4);
    allow_1 = ld allow_;
    check L14() else D3();
  L16():
    unique2 = force? unique1;
    checkMissing(unique2);
    c = `as.logical`(unique2);
    if c then L17() else L4();
  D3():
    deopt 11 [allow_1];
  L4():
    goto L6();
  L6():
    names13 = ld names2;
    check L27() else D11();
  L14():
    allow_2 = force? allow_1;
    checkMissing(allow_2);
    make_names = ldf `make.names` in base;
    r5 = dyn make_names(names4, allow_2);
    check L15() else D4();
  L17():
    order = ldf order;
    check L18() else D6();
  D4():
    deopt 14 [r5];
  D6():
    deopt 19 [];
  D11():
    deopt 34 [names13];
  L15():
    goto L3(r5);
  L18():
    p = prom<V +>{
      names5 = ld names;
      names6 = force? names5;
      checkMissing(names6);
      names7 = ld names2;
      names8 = force? names7;
      checkMissing(names8);
      r6 = `!=`(names6, names8);
      return r6;
    };
    r8 = dyn order(p);
    check L19() else D7();
  L27():
    names14 = force? names13;
    checkMissing(names14);
    popenv;
    return names14;
  D7():
    deopt 21 [r8];
  L19():
    st o = r8;
    make_unique = ldf `make.unique`;
    check L20() else D8();
  D8():
    deopt 24 [];
  L20():
    p1 = prom<V +>{
      names9 = ld names2;
      names10 = force? names9;
      checkMissing(names10);
      c1 = `is.object`(names10);
      if c1 then L1() else L2(names10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", names10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(names12):
      o = ld o;
      o1 = force? o;
      __ = ldf `[` in base;
      r9 = dyn __(names12, o1);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r11 = dyn make_unique(p1);
    check L21() else D9();
  D9():
    deopt 26 [r11];
  L21():
    l = ld names2;
    c2 = `is.object`(l);
    if c2 then L22() else L23(r11, l);
  L5(r15, dx3):
    st names2 = dx3;
    goto L6();
  L22():
    dr2 = tryDispatchBuiltin.0("[<-", l, r11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(r11, dr2);
  L23(r13, l2):
    o2 = ld o;
    check L25() else D10();
  D10():
    deopt 28 [r13, l2, r11, o2];
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(r11, dx2);
  L25():
    o3 = force? o2;
    ___ = ldf `[<-` in base;
    r16 = dyn ___(l2, r11, o3);
    goto L5(r13, r16);
  }
}
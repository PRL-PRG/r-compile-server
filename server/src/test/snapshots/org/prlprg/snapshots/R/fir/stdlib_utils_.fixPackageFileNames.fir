fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner818821182;
    st `.fixPackageFileNames` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner818821182(list) {
  (reg list:*) -+> V { var list:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list1:*, reg list2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg list3:*, reg list4:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg list5:*, reg list6:V, reg gsub:cls, reg list7:*, reg list8:V, reg p:p(V +), reg r10:V, reg grep:cls, reg list9:*, reg list10:V, reg p1:p(V +), reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg wrong:*, reg wrong1:V, reg length1:cls, reg r15:V, reg c1:L, reg paste0:cls, reg list11:*, reg list12:V, reg c2:L, reg list14:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg wrong2:*, reg wrong3:V, reg __:cls, reg r16:V, reg p2:p(V +), reg r18:V, reg l:*, reg c3:L, reg r20:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r22:V, reg dx3:V, reg wrong4:*, reg wrong5:V, reg ___:cls, reg r23:V, reg grepl:cls, reg list15:*, reg list16:V, reg p3:p(V +), reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg ok:*, reg ok1:V, reg r29:V, reg any:cls, reg r30:V, reg c4:L, reg paste1:cls, reg list17:*, reg list18:V, reg c5:L, reg list20:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ok2:*, reg ok3:V, reg r31:V, reg __1:cls, reg r32:V, reg p4:p(V +), reg r34:V, reg l3:*, reg c6:L, reg r36:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r38:V, reg dx7:V, reg ok4:*, reg ok5:V, reg r39:V, reg ___1:cls, reg r40:V, reg tolower:cls, reg list21:*, reg list22:V, reg p5:p(V +), reg r43:V, reg make_unique:cls, reg list23:*, reg list24:V, reg p6:p(V +), reg r45:V, reg list25:*, reg list26:V, reg list27:*, reg list28:V, reg r46:V, reg list29:*, reg list30:V, reg c7:L, reg list32:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg changed:*, reg changed1:V, reg __2:cls, reg r47:V, reg l6:*, reg c8:L, reg dx11:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx13:V, reg dx15:V, reg changed2:*, reg changed3:V, reg ___2:cls, reg r48:V, reg list33:*, reg list34:V |
    mkenv;
    st list = list;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    st list = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L14():
    list1 = ld list;
    check L16() else D0();
  L15():
    r = dyn base(<sym list>);
    goto L0(r);
  D0():
    deopt 2 [list1];
  L1(r4):
    r6 = `==`(r4, 0);
    c = `as.logical`(r6);
    if c then L22() else L2();
  L16():
    list2 = force? list1;
    checkMissing(list2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(list2);
    check L17() else D1();
  L18():
    list3 = ld list;
    check L20() else D2();
  L19():
    r3 = dyn base1(<sym list>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [list3];
  L2():
    gsub = ldf gsub;
    check L26() else D5();
  L17():
    goto L0(r2);
  L20():
    list4 = force? list3;
    checkMissing(list4);
    length = ldf length in base;
    r5 = dyn length(list4);
    check L21() else D3();
  L22():
    list5 = ld list;
    check L23() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [list5];
  D5():
    deopt 21 [];
  L21():
    goto L1(r5);
  L23():
    list6 = force? list5;
    checkMissing(list6);
    popenv;
    return list6;
  L26():
    p = prom<V +>{
      list7 = ld list;
      list8 = force? list7;
      checkMissing(list8);
      return list8;
    };
    r10 = dyn gsub("[[:cntrl:]\"*/:<>?\\|]", "_", p);
    check L27() else D6();
  D6():
    deopt 25 [r10];
  L27():
    st list0 = r10;
    grep = ldf grep;
    check L28() else D7();
  D7():
    deopt 28 [];
  L28():
    p1 = prom<V +>{
      list9 = ld list0;
      list10 = force? list9;
      checkMissing(list10);
      return list10;
    };
    r12 = dyn grep("^(con|prn|aux|clock\\$|nul|lpt[1-3]|com[1-4])(\\..*|)$", p1);
    check L29() else D8();
  D8():
    deopt 31 [r12];
  L29():
    st wrong = r12;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L4(r14):
    c1 = `as.logical`(r14);
    if c1 then L34() else L5();
  L30():
    wrong = ld wrong;
    check L32() else D9();
  L31():
    r13 = dyn base2(<sym wrong>);
    goto L4(r13);
  D9():
    deopt 35 [wrong];
  L5():
    goto L7();
  L7():
    grepl = ldf grepl;
    check L42() else D14();
  L32():
    wrong1 = force? wrong;
    checkMissing(wrong1);
    length1 = ldf length in base;
    r15 = dyn length1(wrong1);
    check L33() else D10();
  L34():
    paste0 = ldf paste0;
    check L35() else D11();
  D10():
    deopt 38 [r15];
  D11():
    deopt 40 [];
  D14():
    deopt 52 [];
  L33():
    goto L4(r15);
  L35():
    p2 = prom<V +>{
      list11 = ld list0;
      list12 = force? list11;
      checkMissing(list12);
      c2 = `is.object`(list12);
      if c2 then L1() else L2(list12);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", list12);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(list14):
      wrong2 = ld wrong;
      wrong3 = force? wrong2;
      __ = ldf `[` in base;
      r16 = dyn __(list14, wrong3);
      goto L0(r16);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r18 = dyn paste0("zz", p2);
    check L36() else D12();
  L42():
    p3 = prom<V +>{
      list15 = ld list0;
      list16 = force? list15;
      checkMissing(list16);
      return list16;
    };
    r26 = dyn grepl("^[[:alnum:]]", p3);
    check L43() else D15();
  D12():
    deopt 43 [r18];
  D15():
    deopt 55 [r26];
  L36():
    l = ld list0;
    c3 = `is.object`(l);
    if c3 then L37() else L38(r18, l);
  L43():
    st ok = r26;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L44() else L45();
  L6(r22, dx3):
    st list0 = dx3;
    goto L7();
  L8(r28):
    c4 = `as.logical`(r28);
    if c4 then L48() else L9();
  L37():
    dr2 = tryDispatchBuiltin.0("[<-", l, r18);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L39() else L38(r18, dr2);
  L38(r20, l2):
    wrong4 = ld wrong;
    check L40() else D13();
  L44():
    ok = ld ok;
    check L46() else D16();
  L45():
    r27 = dyn base3(<lang `!`(ok)>);
    goto L8(r27);
  D13():
    deopt 45 [r20, l2, r18, wrong4];
  D16():
    deopt 59 [ok];
  L9():
    goto L11();
  L11():
    tolower = ldf tolower;
    check L56() else D21();
  L39():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(r18, dx2);
  L40():
    wrong5 = force? wrong4;
    ___ = ldf `[<-` in base;
    r23 = dyn ___(l2, r18, wrong5);
    goto L6(r20, r23);
  L46():
    ok1 = force? ok;
    checkMissing(ok1);
    r29 = `!`(ok1);
    any = ldf any in base;
    r30 = dyn any(r29);
    check L47() else D17();
  L48():
    paste1 = ldf paste0;
    check L49() else D18();
  D17():
    deopt 63 [r30];
  D18():
    deopt 65 [];
  D21():
    deopt 78 [];
  L47():
    goto L8(r30);
  L49():
    p4 = prom<V +>{
      list17 = ld list0;
      list18 = force? list17;
      checkMissing(list18);
      c5 = `is.object`(list18);
      if c5 then L1() else L2(list18);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", list18);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(list20):
      ok2 = ld ok;
      ok3 = force? ok2;
      checkMissing(ok3);
      r31 = `!`(ok3);
      __1 = ldf `[` in base;
      r32 = dyn __1(list20, r31);
      goto L0(r32);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r34 = dyn paste1("z", p4);
    check L50() else D19();
  L56():
    p5 = prom<V +>{
      list21 = ld list0;
      list22 = force? list21;
      checkMissing(list22);
      return list22;
    };
    r43 = dyn tolower(p5);
    check L57() else D22();
  D19():
    deopt 68 [r34];
  D22():
    deopt 80 [r43];
  L50():
    l3 = ld list0;
    c6 = `is.object`(l3);
    if c6 then L51() else L52(r34, l3);
  L57():
    st list1 = r43;
    make_unique = ldf `make.unique`;
    check L58() else D23();
  D23():
    deopt 83 [];
  L10(r38, dx7):
    st list0 = dx7;
    goto L11();
  L51():
    dr6 = tryDispatchBuiltin.0("[<-", l3, r34);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L53() else L52(r34, dr6);
  L52(r36, l5):
    ok4 = ld ok;
    check L54() else D20();
  L58():
    p6 = prom<V +>{
      list23 = ld list1;
      list24 = force? list23;
      checkMissing(list24);
      return list24;
    };
    r45 = dyn make_unique[, sep](p6, "_");
    check L59() else D24();
  D20():
    deopt 70 [r36, l5, r34, ok4];
  D24():
    deopt 87 [r45];
  L53():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L10(r34, dx6);
  L54():
    ok5 = force? ok4;
    checkMissing(ok5);
    r39 = `!`(ok5);
    ___1 = ldf `[<-` in base;
    r40 = dyn ___1(l5, r34, r39);
    goto L10(r36, r40);
  L59():
    st list2 = r45;
    list25 = ld list2;
    check L60() else D25();
  D25():
    deopt 89 [list25];
  L60():
    list26 = force? list25;
    checkMissing(list26);
    list27 = ld list1;
    check L61() else D26();
  D26():
    deopt 90 [list26, list27];
  L61():
    list28 = force? list27;
    checkMissing(list28);
    r46 = `!=`(list26, list28);
    st changed = r46;
    list29 = ld list2;
    check L62() else D27();
  D27():
    deopt 94 [list29];
  L62():
    list30 = force? list29;
    checkMissing(list30);
    c7 = `is.object`(list30);
    if c7 then L63() else L64(list30);
  L12(dx9):
    l6 = ld list0;
    c8 = `is.object`(l6);
    if c8 then L67() else L68(dx9, l6);
  L63():
    dr8 = tryDispatchBuiltin.1("[", list30);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(dr8);
  L64(list32):
    changed = ld changed;
    check L66() else D28();
  D28():
    deopt 96 [list32, changed];
  L13(dx15):
    st list0 = dx15;
    list33 = ld list0;
    check L71() else D30();
  L65():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx8);
  L66():
    changed1 = force? changed;
    __2 = ldf `[` in base;
    r47 = dyn __2(list32, changed1);
    goto L12(r47);
  L67():
    dr10 = tryDispatchBuiltin.0("[<-", l6, dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L69() else L68(dx9, dr10);
  L68(dx11, l8):
    changed2 = ld changed;
    check L70() else D29();
  D29():
    deopt 100 [dx11, l8, dx9, changed2];
  D30():
    deopt 104 [list33];
  L69():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx13);
  L70():
    changed3 = force? changed2;
    ___2 = ldf `[<-` in base;
    r48 = dyn ___2(l8, dx9, changed3);
    goto L13(r48);
  L71():
    list34 = force? list33;
    checkMissing(list34);
    popenv;
    return list34;
  }
}
fun main() {
  () -+> V { reg r:cls, reg conflicts:cls, reg r1:V, reg remove:cls, reg conflicts1:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg p:p(V +), reg r7:V |
    mkenv;
    r = clos `inner-836347093`;
    st conflicts = r;
    st lm = <int 1, 2, 3>;
    conflicts = ldf conflicts;
    check L0() else D0();
  D0():
    deopt 7 [];
  L0():
    r1 = dyn conflicts(<missing>, TRUE);
    check L1() else D1();
  D1():
    deopt 10 [r1];
  L1():
    remove = ldf remove;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p = prom<V +>{
      conflicts1 = ldf conflicts;
      r2 = dyn conflicts1[detail](TRUE);
      c = `is.object`(r2);
      if c then L1() else L2(r2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", r2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(r4):
      r5 = `$`(r4, <sym .GlobalEnv>);
      goto L0(r5);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r7 = dyn remove[list](p);
    check L3() else D3();
  D3():
    deopt 15 [r7];
  L3():
    popenv;
    return r7;
  }
}
fun `inner-836347093`(where, detail) {
  (reg where:*, reg detail:*) -+> V { var where:*, reg where_isMissing:L, reg where_orDefault:*, reg search:cls, reg r:V, reg p:p(V +), var detail:*, reg detail_isMissing:L, reg detail_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg where1:*, reg where2:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg stop:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg where3:*, reg where4:V, reg length1:cls, reg r12:V, reg vector:cls, reg r13:V, reg where5:*, reg where6:V, reg l:*, reg names__:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg where7:*, reg where8:V, reg r17:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg objects:cls, reg where9:*, reg where10:V, reg c2:L, reg where12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i5:*, reg i6:V, reg __:cls, reg r18:V, reg p1:p(V +), reg r20:V, reg l2:*, reg c3:L, reg i8:I, reg r22:V, reg l4:*, reg dr2:V, reg dc1:L, reg dx2:V, reg i10:I, reg dx3:V, reg i11:*, reg i12:V, reg ____:cls, reg r25:V, reg unlist:cls, reg z:*, reg z1:V, reg p2:p(V +), reg r27:V, reg duplicated:cls, reg all:*, reg all1:V, reg p3:p(V +), reg r29:V, reg all2:*, reg all3:V, reg c4:L, reg all5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg dups:*, reg dups1:V, reg __1:cls, reg r30:V, reg detail1:*, reg detail2:V, reg c5:L, reg where13:*, reg where14:V, reg s1:V, reg l5:I, reg i13:I, reg i14:I, reg i15:I, reg c6:L, reg x1:V, reg z2:*, reg z3:V, reg c7:L, reg i19:I, reg z5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i21:I, reg dx7:V, reg i22:*, reg i23:V, reg __2:cls, reg r31:V, reg c8:L, reg i25:I, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg i27:I, reg dx11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg i30:I, reg dx14:V, reg r33:V, reg dups2:*, reg dups3:V, reg z6:*, reg z7:V, reg c9:L, reg i32:I, reg dx16:V, reg z9:V, reg dr10:V, reg dc5:L, reg dx18:V, reg i34:I, reg dx19:V, reg dx20:V, reg i35:*, reg i36:V, reg __3:cls, reg r34:V, reg match:cls, reg r35:V, reg __4:cls, reg r36:V, reg l6:*, reg c10:L, reg i38:I, reg dx22:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx24:V, reg i40:I, reg dx26:V, reg i41:*, reg i42:V, reg ____1:cls, reg r37:V, reg l9:*, reg c11:L, reg r39:dots, reg l11:*, reg dr14:V, reg dc7:L, reg dx27:V, reg dx28:V, reg vapply:cls, reg z10:*, reg z11:V, reg p4:p(V +), reg r43:cls, reg p5:p(V +), reg r45:V, reg ___:cls, reg r46:V, reg z12:*, reg z13:V, reg dups4:*, reg dups5:V |
    mkenv;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p = prom<V +>{
      search = ldf search;
      r = dyn search();
      return r;
    };
    goto L1(p);
  L1(where_orDefault):
    st where = where_orDefault;
    detail_isMissing = missing.0(detail);
    if detail_isMissing then L2(FALSE) else L2(detail);
  L2(detail_orDefault):
    st detail = detail_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L3(r3):
    r5 = `<`(r3, 1);
    c = `as.logical`(r5);
    if c then L26() else L4();
  L22():
    where1 = ld where;
    check L24() else D0();
  L23():
    r2 = dyn base(<sym where>);
    goto L3(r2);
  D0():
    deopt 2 [where1];
  L4():
    goto L5();
  L5():
    sym1 = ldf vector;
    base1 = ldf vector in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L24():
    where2 = force? where1;
    checkMissing(where2);
    length = ldf length in base;
    r4 = dyn length(where2);
    check L25() else D1();
  L26():
    stop = ldf stop;
    check L27() else D2();
  D1():
    deopt 5 [r4];
  D2():
    deopt 9 [];
  L6(r9):
    st z = r9;
    where5 = ld where;
    check L37() else D7();
  L25():
    goto L3(r4);
  L27():
    r6 = dyn stop("argument 'where' of length 0");
    check L28() else D3();
  L30():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L31():
    r8 = dyn base1[, mode](<lang length(where)>, "list");
    goto L6(r8);
  D3():
    deopt 11 [r6];
  D7():
    deopt 26 [where5];
  L7(r11):
    vector = ldf vector in base;
    r13 = dyn vector("list", r11);
    check L36() else D6();
  L28():
    goto L5();
  L32():
    where3 = ld where;
    check L34() else D4();
  L33():
    r10 = dyn base2(<sym where>);
    goto L7(r10);
  L37():
    where6 = force? where5;
    checkMissing(where6);
    l = ld z;
    names__ = ldf `names<-`;
    check L38() else D8();
  D4():
    deopt 19 [where3];
  D6():
    deopt 24 [r13];
  D8():
    deopt 29 [where6, l, where6];
  L34():
    where4 = force? where3;
    checkMissing(where4);
    length1 = ldf length in base;
    r12 = dyn length1(where4);
    check L35() else D5();
  L36():
    goto L6(r13);
  L38():
    r14 = dyn names__(l, NULL, where6);
    check L39() else D9();
  D5():
    deopt 22 [r12];
  D9():
    deopt 31 [where6, r14];
  L35():
    goto L7(r12);
  L39():
    st z = r14;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L8(r16):
    s = toForSeq(r16);
    l1 = length(s);
    i = 0;
    goto L9(i);
  L40():
    where7 = ld where;
    check L42() else D10();
  L41():
    r15 = dyn base3(<sym where>);
    goto L8(r15);
  D10():
    deopt 34 [where7];
  L9(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l1, i2);
    if c1 then L43() else L11();
  L42():
    where8 = force? where7;
    checkMissing(where8);
    r17 = seq_along(where8);
    goto L8(r17);
  L11():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    objects = ldf objects;
    check L44() else D11();
  L43():
    unlist = ldf unlist;
    check L50() else D14();
  D11():
    deopt 38 [i2];
  D14():
    deopt 51 [];
  L44():
    p1 = prom<V +>{
      where9 = ld where;
      where10 = force? where9;
      checkMissing(where10);
      c2 = `is.object`(where10);
      if c2 then L1() else L2(where10);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", where10);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(where12):
      i5 = ld i;
      i6 = force? i5;
      __ = ldf `[` in base;
      r18 = dyn __(where12, i6);
      goto L0(r18);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r20 = dyn objects[pos](p1);
    check L45() else D12();
  L50():
    p2 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r27 = dyn unlist[, `use.names`](p2, FALSE);
    check L51() else D15();
  D12():
    deopt 41 [i2, r20];
  D15():
    deopt 55 [r27];
  L45():
    l2 = ld z;
    c3 = `is.object`(l2);
    if c3 then L46() else L47(i2, r20, l2);
  L51():
    st all = r27;
    duplicated = ldf duplicated;
    check L52() else D16();
  D16():
    deopt 58 [];
  L10(i10, dx3):
    st z = dx3;
    goto L9(i10);
  L46():
    dr2 = tryDispatchBuiltin.0("[[<-", l2, r20);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L48() else L47(i2, r20, dr2);
  L47(i8, r22, l4):
    i11 = ld i;
    check L49() else D13();
  L52():
    p3 = prom<V +>{
      all = ld all;
      all1 = force? all;
      checkMissing(all1);
      return all1;
    };
    r29 = dyn duplicated(p3);
    check L53() else D17();
  D13():
    deopt 43 [i8, r22, l4, r20, i11];
  D17():
    deopt 60 [r29];
  L48():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(i2, dx2);
  L49():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r25 = dyn ____(l4, r20, i12);
    goto L10(i8, r25);
  L53():
    st dups = r29;
    all2 = ld all;
    check L54() else D18();
  D18():
    deopt 62 [all2];
  L54():
    all3 = force? all2;
    checkMissing(all3);
    c4 = `is.object`(all3);
    if c4 then L55() else L56(all3);
  L12(dx5):
    st dups = dx5;
    detail1 = ld detail;
    check L59() else D20();
  L55():
    dr4 = tryDispatchBuiltin.1("[", all3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L57() else L56(dr4);
  L56(all5):
    dups = ld dups;
    check L58() else D19();
  D19():
    deopt 64 [all5, dups];
  D20():
    deopt 68 [detail1];
  L57():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L58():
    dups1 = force? dups;
    __1 = ldf `[` in base;
    r30 = dyn __1(all5, dups1);
    goto L12(r30);
  L59():
    detail2 = force? detail1;
    checkMissing(detail2);
    c5 = `as.logical`(detail2);
    if c5 then L60() else L13();
  L13():
    dups4 = ld dups;
    check L91() else D32();
  L60():
    where13 = ld where;
    check L61() else D21();
  D21():
    deopt 70 [where13];
  D32():
    deopt 112 [dups4];
  L61():
    where14 = force? where13;
    checkMissing(where14);
    s1 = toForSeq(where14);
    l5 = length(s1);
    i13 = 0;
    goto L14(i13);
  L91():
    dups5 = force? dups4;
    checkMissing(dups5);
    popenv;
    return dups5;
  L14(i14):
    i15 = `+`.1(i14, 1);
    c6 = `<`.1(l5, i15);
    if c6 then L62() else L20();
  L20():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st i = x1;
    z2 = ld z;
    check L63() else D22();
  L62():
    l9 = ld z;
    c11 = `is.object`(l9);
    if c11 then L84() else L85(NULL, l9);
  D22():
    deopt 72 [i15, z2];
  L21(dx28):
    st z = dx28;
    z12 = ld z;
    check L89() else D31();
  L63():
    z3 = force? z2;
    checkMissing(z3);
    c7 = `is.object`(z3);
    if c7 then L64() else L65(i15, z3);
  L84():
    dr14 = tryDispatchBuiltin.0("[<-", l9, NULL);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L86() else L85(NULL, dr14);
  L85(r39, l11):
    vapply = ldf vapply;
    check L87() else D29();
  D29():
    deopt 103 [r39, l11, NULL];
  D31():
    deopt 110 [z12];
  L15(i21, dx7):
    c8 = `is.object`(dx7);
    if c8 then L68() else L69(i21, dx7);
  L64():
    dr6 = tryDispatchBuiltin.1("[[", z3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L66() else L65(i15, dr6);
  L65(i19, z5):
    i22 = ld i;
    check L67() else D23();
  L86():
    dx27 = getTryDispatchBuiltinValue(dr14);
    goto L21(dx27);
  L87():
    p4 = prom<V +>{
      z10 = ld z;
      z11 = force? z10;
      checkMissing(z11);
      return z11;
    };
    p5 = prom<V +>{
      r43 = clos inner354062069;
      return r43;
    };
    r45 = dyn vapply(p4, p5, NA_LGL);
    check L88() else D30();
  L89():
    z13 = force? z12;
    checkMissing(z13);
    popenv;
    return z13;
  D23():
    deopt 74 [i19, z5, i22];
  D30():
    deopt 107 [r39, l11, NULL, r45];
  L16(i27, dx11):
    l6 = ld z;
    c10 = `is.object`(l6);
    if c10 then L80() else L81(i27, dx11, l6);
  L66():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(i15, dx6);
  L67():
    i23 = force? i22;
    __2 = ldf `[[` in base;
    r31 = dyn __2(z5, i23);
    goto L15(i19, r31);
  L68():
    dr8 = tryDispatchBuiltin.1("[", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L70() else L69(i21, dr8);
  L69(i25, dx9):
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  L88():
    ___ = ldf `[<-` in base;
    r46 = dyn ___(l11, NULL, r45);
    goto L21(r46);
  L17(i30, dx14, r33):
    __4 = ldf `[` in base;
    r36 = dyn __4(dx14, r33);
    goto L16(i30, r36);
  L19(i40, dx26):
    st z = dx26;
    goto L14(i40);
  L70():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L16(i21, dx10);
  L71():
    dups2 = ld dups;
    check L73() else D24();
  L72():
    r32 = dyn base4(<sym dups>, <lang `[[`(z, i)>, 0);
    goto L17(i25, dx9, r32);
  L80():
    dr12 = tryDispatchBuiltin.0("[[<-", l6, dx11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L82() else L81(i27, dx11, dr12);
  L81(i38, dx22, l8):
    i41 = ld i;
    check L83() else D28();
  D24():
    deopt 79 [i25, dx9, dups2];
  D28():
    deopt 92 [i38, dx22, l8, dx11, i41];
  L73():
    dups3 = force? dups2;
    checkMissing(dups3);
    z6 = ld z;
    check L74() else D25();
  L82():
    dx24 = getTryDispatchBuiltinValue(dr12);
    goto L19(i27, dx24);
  L83():
    i42 = force? i41;
    ____1 = ldf `[[<-` in base;
    r37 = dyn ____1(l8, dx11, i42);
    goto L19(i38, r37);
  D25():
    deopt 81 [i25, dx9, z6];
  L74():
    z7 = force? z6;
    checkMissing(z7);
    c9 = `is.object`(z7);
    if c9 then L75() else L76(i25, dx9, z7);
  L18(i34, dx19, dx20):
    match = ldf match in base;
    r35 = dyn match(dups3, dx20, 0, NULL);
    check L79() else D27();
  L75():
    dr10 = tryDispatchBuiltin.1("[[", z7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L77() else L76(i25, dx9, dr10);
  L76(i32, dx16, z9):
    i35 = ld i;
    check L78() else D26();
  D26():
    deopt 83 [i32, dx16, z9, i35];
  D27():
    deopt 89 [i34, dx19, r35];
  L77():
    dx18 = getTryDispatchBuiltinValue(dr10);
    goto L18(i25, dx9, dx18);
  L78():
    i36 = force? i35;
    __3 = ldf `[[` in base;
    r34 = dyn __3(z9, i36);
    goto L18(i32, dx16, r34);
  L79():
    goto L17(i34, dx19, r35);
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    r3 = `==`(r1, 0);
    popenv;
    return r3;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L4() else D1();
  D1():
    deopt 5 [r2];
  L4():
    goto L0(r2);
  }
}
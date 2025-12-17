fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1284573590;
    st `.mergeMethodsTable2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1284573590(table, newtable, envir, metaname) {
  (reg table:*, reg newtable:*, reg envir:*, reg metaname:*) -+> V { var table:*, var newtable:*, var envir:*, var metaname:*, reg as_list:cls, reg table1:*, reg table2:V, reg p:p(V +), reg r1:V, reg old:*, reg old1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg is:cls, reg what:*, reg what1:V, reg p1:p(V +), reg r3:V, reg c1:L, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg i9:I, reg r5:V, reg __:cls, reg r6:V, reg length:cls, reg r7:V, reg as_list1:cls, reg newtable1:*, reg newtable2:V, reg p2:p(V +), reg r10:V, reg new:*, reg new1:V, reg s1:V, reg l1:I, reg i13:I, reg i14:I, reg i15:I, reg c2:L, reg x1:V, reg is1:cls, reg what2:*, reg what3:V, reg p3:p(V +), reg r12:V, reg c3:L, reg i19:I, reg c5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg i22:I, reg c8:L, reg r14:V, reg __1:cls, reg r15:V, reg length1:cls, reg r16:V, reg mm:*, reg mm1:V, reg r17:V, reg c9:L, reg c10:V, reg c12:L, reg canStore:*, reg canStore1:V, reg c13:L, reg list2env:cls, reg new2:*, reg new3:V, reg p4:p(V +), reg table3:*, reg table4:V, reg p5:p(V +), reg r21:V, reg gsub:cls, reg metaname1:*, reg metaname2:V, reg p6:p(V +), reg r24:V, reg gsub1:cls, reg metaname3:*, reg metaname4:V, reg p7:p(V +), reg r26:V, reg getGeneric:cls, reg f:*, reg f1:V, reg p8:p(V +), reg envir1:*, reg envir2:V, reg p9:p(V +), reg package:*, reg package1:V, reg p10:p(V +), reg r30:V, reg _mergeMethodsTable:cls, reg generic:*, reg generic1:V, reg p11:p(V +), reg table5:*, reg table6:V, reg p12:p(V +), reg newtable3:*, reg newtable4:V, reg p13:p(V +), reg r34:V, reg table7:*, reg table8:V |
    mkenv;
    st table = table;
    st newtable = newtable;
    st envir = envir;
    st metaname = metaname;
    as_list = ldf `as.list`;
    check L15() else D0();
  D0():
    deopt 1 [];
  L15():
    p = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    r1 = dyn as_list[, `all.names`](p, TRUE);
    check L16() else D1();
  D1():
    deopt 5 [r1];
  L16():
    st old = r1;
    st mm = 1.0;
    old = ld old;
    check L17() else D2();
  D2():
    deopt 10 [old];
  L17():
    old1 = force? old;
    checkMissing(old1);
    s = toForSeq(old1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L18() else L5();
  L3():
    as_list1 = ldf `as.list`;
    check L27() else D6();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    is = ldf is;
    check L19() else D3();
  L18():
    goto L3();
  D3():
    deopt 13 [i2];
  D6():
    deopt 32 [];
  L19():
    p1 = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    r3 = dyn is(p1, "MethodDefinition");
    check L20() else D4();
  L27():
    p2 = prom<V +>{
      newtable1 = ld newtable;
      newtable2 = force? newtable1;
      checkMissing(newtable2);
      return newtable2;
    };
    r10 = dyn as_list1[, `all.names`](p2, TRUE);
    check L28() else D7();
  D4():
    deopt 16 [i2, r3];
  D7():
    deopt 36 [r10];
  L20():
    c1 = `as.logical`(r3);
    if c1 then L21() else L1();
  L28():
    st new = r10;
    st canStore = TRUE;
    new = ld new;
    check L29() else D8();
  D8():
    deopt 41 [new];
  L1():
    goto L0(i2);
  L21():
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L29():
    new1 = force? new;
    checkMissing(new1);
    s1 = toForSeq(new1);
    l1 = length(s1);
    i13 = 0;
    goto L6(i13);
  L2(i9, r5):
    st mm = r5;
    goto L3();
  L6(i14):
    i15 = `+`.1(i14, 1);
    c2 = `<`.1(l1, i15);
    if c2 then L30() else L12();
  L22():
    __ = ldf `@` in base;
    r6 = dyn __(<sym what>, <sym defined>);
    length = ldf length in base;
    r7 = dyn length(r6);
    check L24() else D5();
  L23():
    r4 = dyn base(<lang `@`(what, defined)>);
    goto L2(i2, r4);
  D5():
    deopt 22 [i2, r7];
  L10():
    canStore = ld canStore;
    check L42() else D13();
  L12():
    x1 = `[[`(s1, i15, NULL, TRUE);
    st what = x1;
    is1 = ldf is;
    check L31() else D9();
  L24():
    goto L2(i2, r7);
  L30():
    goto L10();
  D9():
    deopt 44 [i15];
  D13():
    deopt 67 [canStore];
  L31():
    p3 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    r12 = dyn is1(p3, "MethodDefinition");
    check L32() else D10();
  L42():
    canStore1 = force? canStore;
    checkMissing(canStore1);
    c13 = `as.logical`(canStore1);
    if c13 then L43() else L13();
  D10():
    deopt 47 [i15, r12];
  L13():
    gsub = ldf gsub;
    check L47() else D16();
  L14():
    table7 = ld table;
    check L55() else D24();
  L32():
    c3 = `as.logical`(r12);
    if c3 then L33() else L7(i15, c3);
  L43():
    list2env = ldf list2env;
    check L44() else D14();
  D14():
    deopt 70 [];
  D16():
    deopt 75 [];
  D24():
    deopt 103 [table7];
  L7(i19, c5):
    c12 = `as.logical`(c5);
    if c12 then L39() else L9();
  L33():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L44():
    p4 = prom<V +>{
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      return new3;
    };
    p5 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    r21 = dyn list2env(p4, p5);
    check L45() else D15();
  L47():
    p6 = prom<V +>{
      metaname1 = ld metaname;
      metaname2 = force? metaname1;
      checkMissing(metaname2);
      return metaname2;
    };
    r24 = dyn gsub("^\\.__T__(.*):([^:]+)", "\\1", p6);
    check L48() else D17();
  L55():
    table8 = force? table7;
    checkMissing(table8);
    popenv;
    return table8;
  D15():
    deopt 73 [r21];
  D17():
    deopt 79 [r24];
  L8(i22, c8, r14):
    mm = ld mm;
    check L37() else D12();
  L9():
    goto L6(i19);
  L34():
    __1 = ldf `@` in base;
    r15 = dyn __1(<sym what>, <sym defined>);
    length1 = ldf length in base;
    r16 = dyn length1(r15);
    check L36() else D11();
  L35():
    r13 = dyn base1(<lang `@`(what, defined)>);
    goto L8(i15, c3, r13);
  L39():
    st canStore = FALSE;
    goto L10();
  L45():
    goto L14();
  L48():
    st f = r24;
    gsub1 = ldf gsub;
    check L49() else D18();
  D11():
    deopt 53 [i15, c3, r16];
  D12():
    deopt 53 [i22, c8, r14, mm];
  D18():
    deopt 82 [];
  L36():
    goto L8(i15, c3, r16);
  L37():
    mm1 = force? mm;
    checkMissing(mm1);
    r17 = `!=`(r14, mm1);
    c9 = `as.logical`(r17);
    c10 = `&&`(c8, c9);
    goto L7(i22, c10);
  L49():
    p7 = prom<V +>{
      metaname3 = ld metaname;
      metaname4 = force? metaname3;
      checkMissing(metaname4);
      return metaname4;
    };
    r26 = dyn gsub1("^\\.__T__(.*):([^:]+(.*))", "\\2", p7);
    check L50() else D19();
  D19():
    deopt 86 [r26];
  L50():
    st package = r26;
    getGeneric = ldf getGeneric;
    check L51() else D20();
  D20():
    deopt 89 [];
  L51():
    p8 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p9 = prom<V +>{
      envir1 = ld envir;
      envir2 = force? envir1;
      checkMissing(envir2);
      return envir2;
    };
    p10 = prom<V +>{
      package = ld package;
      package1 = force? package;
      checkMissing(package1);
      return package1;
    };
    r30 = dyn getGeneric(p8, TRUE, p9, p10);
    check L52() else D21();
  D21():
    deopt 94 [r30];
  L52():
    st generic = r30;
    _mergeMethodsTable = ldf `.mergeMethodsTable`;
    check L53() else D22();
  D22():
    deopt 97 [];
  L53():
    p11 = prom<V +>{
      generic = ld generic;
      generic1 = force? generic;
      checkMissing(generic1);
      return generic1;
    };
    p12 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      return table6;
    };
    p13 = prom<V +>{
      newtable3 = ld newtable;
      newtable4 = force? newtable3;
      checkMissing(newtable4);
      return newtable4;
    };
    r34 = dyn _mergeMethodsTable(p11, p12, p13, TRUE);
    check L54() else D23();
  D23():
    deopt 102 [r34];
  L54():
    goto L14();
  }
}
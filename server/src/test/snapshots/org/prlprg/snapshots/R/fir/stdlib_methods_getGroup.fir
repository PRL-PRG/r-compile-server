fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner852906074;
    st getGroup = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner852906074(fdef, recursive, where) {
  (reg fdef:*, reg recursive:*, reg where:*) -+> V { var fdef:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg fdef1:*, reg fdef2:V, reg c:L, reg c1:L, reg getGeneric:cls, reg fdef3:*, reg fdef4:V, reg p2:p(V +), reg where1:*, reg where2:V, reg p3:p(V +), reg r8:V, reg is:cls, reg fdef5:*, reg fdef6:V, reg p4:p(V +), reg r11:V, reg c2:L, reg __:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg list:cls, reg r16:V, reg recursive1:*, reg recursive2:V, reg c3:L, reg c5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg c8:L, reg r18:V, reg group:*, reg group1:V, reg length:cls, reg r19:V, reg c9:L, reg c10:V, reg c12:L, reg group2:*, reg group3:V, reg group4:*, reg group5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c13:L, reg x:V, reg getGeneric1:cls, reg gp:*, reg gp1:V, reg p5:p(V +), reg where3:*, reg where4:V, reg p6:p(V +), reg r22:V, reg is1:cls, reg fgp:*, reg fgp1:V, reg p7:p(V +), reg r24:V, reg c14:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg i9:I, reg r26:V, reg allGroups:*, reg allGroups1:V, reg Recall:cls, reg fgp2:*, reg fgp3:V, reg p8:p(V +), reg where5:*, reg where6:V, reg p9:p(V +), reg r29:V, reg c15:cls, reg r30:V, reg i10:I, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg allGroups2:*, reg allGroups3:V, reg length1:cls, reg r34:V, reg r35:V, reg c16:L, reg sapply:cls, reg allGroups4:*, reg allGroups5:V, reg p10:p(V +), reg r37:cls, reg p11:p(V +), reg r39:V, reg allGroups6:*, reg allGroups7:V, reg c17:L, reg allGroups9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg duplicated:cls, reg ids:*, reg ids1:V, reg p12:p(V +), reg r41:V, reg r42:V, reg __1:cls, reg r43:V, reg allGroups10:*, reg allGroups11:V, reg group6:*, reg group7:V |
    mkenv;
    st fdef = fdef;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(FALSE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
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
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L3(r5):
    c1 = `as.logical`(r5);
    if c1 then L24() else L4();
  L21():
    fdef1 = ld fdef;
    check L23() else D0();
  L22():
    r4 = dyn base(<sym fdef>);
    goto L3(r4);
  D0():
    deopt 1 [fdef1];
  L4():
    goto L5();
  L5():
    is = ldf is;
    check L28() else D3();
  L23():
    fdef2 = force? fdef1;
    checkMissing(fdef2);
    c = `is.character`(fdef2);
    goto L3(c);
  L24():
    getGeneric = ldf getGeneric;
    check L25() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 14 [];
  L25():
    p2 = prom<V +>{
      fdef3 = ld fdef;
      fdef4 = force? fdef3;
      checkMissing(fdef4);
      return fdef4;
    };
    p3 = prom<V +>{
      where1 = ld where;
      where2 = force? where1;
      checkMissing(where2);
      return where2;
    };
    r8 = dyn getGeneric[, where](p2, p3);
    check L26() else D2();
  L28():
    p4 = prom<V +>{
      fdef5 = ld fdef;
      fdef6 = force? fdef5;
      checkMissing(fdef6);
      return fdef6;
    };
    r11 = dyn is(p4, "genericFunction");
    check L29() else D4();
  D2():
    deopt 9 [r8];
  D4():
    deopt 17 [r11];
  L26():
    st fdef = r8;
    goto L5();
  L29():
    c2 = `as.logical`(r11);
    if c2 then L30() else L6();
  L6():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L7():
    recursive1 = ld recursive;
    check L35() else D6();
  L30():
    __ = ldf `@` in base;
    r12 = dyn __(<sym fdef>, <sym group>);
    st group = r12;
    goto L7();
  D6():
    deopt 26 [recursive1];
  L8(r15):
    st group = r15;
    goto L7();
  L32():
    list = ldf list in base;
    r16 = dyn list();
    check L34() else D5();
  L33():
    r14 = dyn base1();
    goto L8(r14);
  L35():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    c3 = `as.logical`(recursive2);
    if c3 then L36() else L9(c3);
  D5():
    deopt 24 [r16];
  L9(c5):
    c12 = `as.logical`(c5);
    if c12 then L42() else L11();
  L34():
    goto L8(r16);
  L36():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L10(c8, r18):
    c9 = `as.logical`(r18);
    c10 = `&&`(c8, c9);
    goto L9(c10);
  L11():
    group6 = ld group;
    check L74() else D27();
  L37():
    group = ld group;
    check L39() else D7();
  L38():
    r17 = dyn base2(<sym group>);
    goto L10(c3, r17);
  L42():
    group2 = ld group;
    check L43() else D9();
  D7():
    deopt 30 [c3, group];
  D9():
    deopt 35 [group2];
  D27():
    deopt 97 [group6];
  L39():
    group1 = force? group;
    checkMissing(group1);
    length = ldf length in base;
    r19 = dyn length(group1);
    check L40() else D8();
  L43():
    group3 = force? group2;
    checkMissing(group3);
    st allGroups = group3;
    group4 = ld group;
    check L44() else D10();
  L74():
    group7 = force? group6;
    checkMissing(group7);
    popenv;
    return group7;
  D8():
    deopt 33 [c3, r19];
  D10():
    deopt 38 [group4];
  L40():
    goto L10(c3, r19);
  L44():
    group5 = force? group4;
    checkMissing(group5);
    s = toForSeq(group5);
    l = length(s);
    i = 0;
    goto L12(i);
  L12(i1):
    i2 = `+`.1(i1, 1);
    c13 = `<`.1(l, i2);
    if c13 then L45() else L16();
  L16():
    x = `[[`(s, i2, NULL, TRUE);
    st gp = x;
    getGeneric1 = ldf getGeneric;
    check L46() else D11();
  L45():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D11():
    deopt 41 [i2];
  L17(r33):
    r35 = `>`(r33, 1);
    c16 = `as.logical`(r35);
    if c16 then L62() else L18();
  L46():
    p5 = prom<V +>{
      gp = ld gp;
      gp1 = force? gp;
      checkMissing(gp1);
      return gp1;
    };
    p6 = prom<V +>{
      where3 = ld where;
      where4 = force? where3;
      checkMissing(where4);
      return where4;
    };
    r22 = dyn getGeneric1[, where](p5, p6);
    check L47() else D12();
  L58():
    allGroups2 = ld allGroups;
    check L60() else D19();
  L59():
    r32 = dyn base4(<sym allGroups>);
    goto L17(r32);
  D12():
    deopt 45 [i2, r22];
  D19():
    deopt 72 [allGroups2];
  L18():
    goto L20();
  L20():
    allGroups10 = ld allGroups;
    check L72() else D26();
  L47():
    st fgp = r22;
    is1 = ldf is;
    check L48() else D13();
  L60():
    allGroups3 = force? allGroups2;
    checkMissing(allGroups3);
    length1 = ldf length in base;
    r34 = dyn length1(allGroups3);
    check L61() else D20();
  L62():
    sapply = ldf sapply;
    check L63() else D21();
  D13():
    deopt 48 [i2];
  D20():
    deopt 75 [r34];
  D21():
    deopt 79 [];
  D26():
    deopt 95 [allGroups10];
  L48():
    p7 = prom<V +>{
      fgp = ld fgp;
      fgp1 = force? fgp;
      checkMissing(fgp1);
      return fgp1;
    };
    r24 = dyn is1(p7, "groupGenericFunction");
    check L49() else D14();
  L61():
    goto L17(r34);
  L63():
    p10 = prom<V +>{
      allGroups4 = ld allGroups;
      allGroups5 = force? allGroups4;
      checkMissing(allGroups5);
      return allGroups5;
    };
    p11 = prom<V +>{
      r37 = clos inner2501545716;
      return r37;
    };
    r39 = dyn sapply(p10, p11);
    check L64() else D22();
  L72():
    allGroups11 = force? allGroups10;
    checkMissing(allGroups11);
    popenv;
    return allGroups11;
  D14():
    deopt 51 [i2, r24];
  D22():
    deopt 82 [r39];
  L49():
    c14 = `as.logical`(r24);
    if c14 then L50() else L13();
  L64():
    st ids = r39;
    allGroups6 = ld allGroups;
    check L65() else D23();
  D23():
    deopt 84 [allGroups6];
  L13():
    goto L15(i2);
  L15(i10):
    goto L12(i10);
  L50():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L65():
    allGroups7 = force? allGroups6;
    checkMissing(allGroups7);
    c17 = `is.object`(allGroups7);
    if c17 then L66() else L67(allGroups7);
  L14(i9, r26):
    st allGroups = r26;
    goto L15(i9);
  L19(dx1):
    st allGroups = dx1;
    goto L20();
  L51():
    allGroups = ld allGroups;
    check L53() else D15();
  L52():
    r25 = dyn base3(<sym allGroups>, <lang Recall(fgp, TRUE, where)>);
    goto L14(i2, r25);
  L66():
    dr = tryDispatchBuiltin.1("[", allGroups7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L68() else L67(dr);
  L67(allGroups9):
    duplicated = ldf duplicated;
    check L69() else D24();
  D15():
    deopt 54 [i2, allGroups];
  D24():
    deopt 87 [allGroups9];
  L53():
    allGroups1 = force? allGroups;
    checkMissing(allGroups1);
    Recall = ldf Recall;
    check L54() else D16();
  L68():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L69():
    p12 = prom<V +>{
      ids = ld ids;
      ids1 = force? ids;
      checkMissing(ids1);
      return ids1;
    };
    r41 = dyn duplicated(p12);
    check L70() else D25();
  D16():
    deopt 57 [i2];
  D25():
    deopt 89 [allGroups9, r41];
  L54():
    p8 = prom<V +>{
      fgp2 = ld fgp;
      fgp3 = force? fgp2;
      checkMissing(fgp3);
      return fgp3;
    };
    p9 = prom<V +>{
      where5 = ld where;
      where6 = force? where5;
      checkMissing(where6);
      return where6;
    };
    r29 = dyn Recall(p8, TRUE, p9);
    check L55() else D17();
  L70():
    r42 = `!`(r41);
    __1 = ldf `[` in base;
    r43 = dyn __1(allGroups9, r42);
    goto L19(r43);
  D17():
    deopt 61 [i2, r29];
  L55():
    c15 = ldf c in base;
    r30 = dyn c15(allGroups1, r29);
    check L56() else D18();
  D18():
    deopt 63 [i2, r30];
  L56():
    goto L14(i2, r30);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg packageSlot:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg pkg:*, reg pkg1:V, reg c:V, reg c1:L, reg x3:*, reg x4:V, reg paste:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg pkg2:*, reg pkg3:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st x = x;
    packageSlot = ldf packageSlot;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn packageSlot(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    st pkg = r1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r3):
    c1 = `as.logical`(r3);
    if c1 then L7() else L1();
  L4():
    pkg = ld pkg;
    check L6() else D2();
  L5():
    r2 = dyn base(<sym pkg>);
    goto L0(r2);
  D2():
    deopt 6 [pkg];
  L1():
    paste = ldf paste;
    check L10() else D4();
  L6():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    c = `==`(pkg1, NULL);
    goto L0(c);
  L7():
    x3 = ld x;
    check L8() else D3();
  D3():
    deopt 9 [x3];
  D4():
    deopt 12 [];
  L8():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L10():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    p2 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r6 = dyn paste[, , sep](p1, p2, ":");
    check L11() else D5();
  D5():
    deopt 17 [r6];
  L11():
    popenv;
    return r6;
  }
}
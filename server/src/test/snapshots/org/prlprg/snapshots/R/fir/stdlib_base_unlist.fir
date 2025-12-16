fun main() {
  () -+> V { reg r:cls, reg unlist:cls, reg options:cls, reg r1:V, reg p:p(V +), reg r3:V, reg unlist1:cls, reg options1:cls, reg r4:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg LETTERS:*, reg LETTERS1:V, reg c:L, reg LETTERS3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg list:cls, reg r12:V, reg list1:cls, reg r13:V, reg unlist2:cls, reg l_ex:*, reg l_ex1:V, reg p2:p(V +), reg r15:V, reg unlist3:cls, reg l_ex2:*, reg l_ex3:V, reg p3:p(V +), reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg list2:cls, reg r20:V, reg unlist4:cls, reg l1:*, reg l2:V, reg p4:p(V +), reg r22:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r23:V, reg r24:V, reg as_name:cls, reg r25:V, reg list3:cls, reg r26:V, reg unlist5:cls, reg l3:*, reg l4:V, reg p5:p(V +), reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg as_name1:cls, reg r31:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r32:V, reg r33:V, reg quote:cls, reg r34:V, reg letters:*, reg letters1:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg expression:cls, reg r37:V, reg list4:cls, reg r38:V, reg __1:cls, reg r39:V, reg r40:cls, reg ll:*, reg ll1:V, reg p6:p(V +), reg r42:V, reg ll2:*, reg ll3:V, reg s:V, reg l5:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg stopifnot:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r43:V, reg r44:V, reg x1:*, reg x2:V, reg unlist6:cls, reg x3:*, reg x4:V, reg p7:p(V +), reg r46:V, reg identical:cls, reg r47:V, reg p8:p(V +), reg r49:V |
    mkenv;
    r = clos inner1988023488;
    st unlist = r;
    unlist = ldf unlist;
    check L10() else D0();
  D0():
    deopt 4 [];
  L10():
    p = prom<V +>{
      options = ldf options;
      r1 = dyn options();
      return r1;
    };
    r3 = dyn unlist(p);
    check L11() else D1();
  D1():
    deopt 6 [r3];
  L11():
    unlist1 = ldf unlist;
    check L12() else D2();
  D2():
    deopt 8 [];
  L12():
    p1 = prom<V +>{
      options1 = ldf options;
      r4 = dyn options1();
      return r4;
    };
    r6 = dyn unlist1[, `use.names`](p1, FALSE);
    check L13() else D3();
  D3():
    deopt 12 [r6];
  L13():
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r8):
    st `l.ex` = r8;
    unlist2 = ldf unlist;
    check L24() else D7();
  L14():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L15():
    r7 = dyn base[a, b, c](<lang list(`:`(1.0, 5.0), `[`(LETTERS, `:`(1.0, 5.0)))>, "Z", NA_LGL);
    goto L0(r7);
  D7():
    deopt 35 [];
  L1(r10):
    list1 = ldf list in base;
    r13 = dyn list1(r10, "Z", NA_LGL);
    check L23() else D6();
  L16():
    LETTERS = ld LETTERS;
    check L18() else D4();
  L17():
    r9 = dyn base1(<lang `:`(1.0, 5.0)>, <lang `[`(LETTERS, `:`(1.0, 5.0))>);
    goto L1(r9);
  L24():
    p2 = prom<V +>{
      l_ex = ld `l.ex`;
      l_ex1 = force? l_ex;
      checkMissing(l_ex1);
      return l_ex1;
    };
    r15 = dyn unlist2[, recursive](p2, FALSE);
    check L25() else D8();
  D4():
    deopt 19 [LETTERS];
  D6():
    deopt 32 [r13];
  D8():
    deopt 39 [r15];
  L18():
    LETTERS1 = force? LETTERS;
    checkMissing(LETTERS1);
    c = `is.object`(LETTERS1);
    if c then L19() else L20(LETTERS1);
  L23():
    goto L0(r13);
  L25():
    unlist3 = ldf unlist;
    check L26() else D9();
  D9():
    deopt 41 [];
  L2(dx1):
    list = ldf list in base;
    r12 = dyn list(<int 1, 2, 3, 4, 5>, dx1);
    check L22() else D5();
  L19():
    dr = tryDispatchBuiltin.1("[", LETTERS1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(LETTERS3):
    __ = ldf `[` in base;
    r11 = dyn __(LETTERS3, <int 1, 2, 3, 4, 5>);
    goto L2(r11);
  L26():
    p3 = prom<V +>{
      l_ex2 = ld `l.ex`;
      l_ex3 = force? l_ex2;
      checkMissing(l_ex3);
      return l_ex3;
    };
    r17 = dyn unlist3[, recursive](p3, TRUE);
    check L27() else D10();
  D5():
    deopt 25 [r12];
  D10():
    deopt 45 [r17];
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L22():
    goto L1(r12);
  L27():
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L3(r19):
    st l1 = r19;
    unlist4 = ldf unlist;
    check L31() else D12();
  L28():
    list2 = ldf list in base;
    r20 = dyn list2("a", 2.0, 3.141592653589793+2.0i);
    check L30() else D11();
  L29():
    r18 = dyn base2[a, b, c]("a", 2.0, <lang `+`(pi, 2.0i)>);
    goto L3(r18);
  D11():
    deopt 56 [r20];
  D12():
    deopt 59 [];
  L30():
    goto L3(r20);
  L31():
    p4 = prom<V +>{
      l1 = ld l1;
      l2 = force? l1;
      checkMissing(l2);
      return l2;
    };
    r22 = dyn unlist4(p4);
    check L32() else D13();
  D13():
    deopt 61 [r22];
  L32():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L4(r24):
    st l2 = r24;
    unlist5 = ldf unlist;
    check L38() else D17();
  L33():
    as_name = ldf `as.name`;
    check L35() else D14();
  L34():
    r23 = dyn base3[a, b, c]("a", <lang as.name("b")>, <lang `+`(pi, 2.0i)>);
    goto L4(r23);
  D14():
    deopt 67 [];
  D17():
    deopt 78 [];
  L35():
    r25 = dyn as_name("b");
    check L36() else D15();
  L38():
    p5 = prom<V +>{
      l3 = ld l2;
      l4 = force? l3;
      checkMissing(l4);
      return l4;
    };
    r28 = dyn unlist5(p5);
    check L39() else D18();
  D15():
    deopt 69 [r25];
  D18():
    deopt 80 [r28];
  L36():
    list3 = ldf list in base;
    r26 = dyn list3("a", r25, 3.141592653589793+2.0i);
    check L37() else D16();
  L39():
    sym4 = ldf list;
    base4 = ldf list in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  D16():
    deopt 75 [r26];
  L5(r30):
    st ll = r30;
    __1 = ldf `::`;
    check L50() else D23();
  L37():
    goto L4(r26);
  L40():
    as_name1 = ldf `as.name`;
    check L42() else D19();
  L41():
    r29 = dyn base4(<lang as.name("sinc")>, <lang quote(`+`(a, b))>, <lang `:`(1.0, 10.0)>, <sym letters>, <lang expression(`+`(1.0, x))>);
    goto L5(r29);
  D19():
    deopt 84 [];
  D23():
    deopt 101 [];
  L42():
    r31 = dyn as_name1("sinc");
    check L43() else D20();
  L50():
    r39 = dyn __1("utils", "str");
    check L51() else D24();
  D20():
    deopt 86 [r31];
  D24():
    deopt 104 [r39];
  L43():
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L51():
    checkFun.0(r39);
    r40 = r39 as cls;
    p6 = prom<V +>{
      ll = ld ll;
      ll1 = force? ll;
      checkMissing(ll1);
      return ll1;
    };
    r42 = dyn r40(p6);
    check L52() else D25();
  D25():
    deopt 107 [r42];
  L6(r33):
    letters = ld letters;
    check L46() else D21();
  L44():
    quote = ldf quote in base;
    r34 = dyn quote(<lang `+`(a, b)>);
    goto L6(r34);
  L45():
    r32 = dyn base5(<lang `+`(a, b)>);
    goto L6(r32);
  L52():
    ll2 = ld ll;
    check L53() else D26();
  D21():
    deopt 92 [letters];
  D26():
    deopt 108 [ll2];
  L46():
    letters1 = force? letters;
    checkMissing(letters1);
    sym6 = ldf expression;
    base6 = ldf expression in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L47() else L48();
  L53():
    ll3 = force? ll2;
    checkMissing(ll3);
    s = toForSeq(ll3);
    l5 = length(s);
    i = 0;
    goto L8(i);
  L7(r36):
    list4 = ldf list in base;
    r38 = dyn list4(r31, r33, <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>, letters1, r36);
    check L49() else D22();
  L8(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l5, i2);
    if c1 then L54() else L9();
  L47():
    expression = ldf expression in base;
    r37 = dyn expression(<lang `+`(1.0, x)>);
    goto L7(r37);
  L48():
    r35 = dyn base6(<lang `+`(1.0, x)>);
    goto L7(r35);
  D22():
    deopt 98 [r38];
  L9():
    x = `[[`(s, i2, NULL, TRUE);
    st x = x;
    stopifnot = ldf stopifnot;
    check L55() else D27();
  L49():
    goto L5(r38);
  L54():
    invisible.0();
    popenv;
    return i2;
  D27():
    deopt 111 [i2];
  L55():
    p8 = prom<V +>{
      sym7 = ldf identical;
      base7 = ldf identical in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unlist6 = ldf unlist;
      p7 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r46 = dyn unlist6(p7);
      identical = ldf identical in base;
      r47 = dyn identical(x2, r46, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r47);
    L2():
      r43 = dyn base7(<sym x>, <lang unlist(x)>);
      goto L0(r43);
    };
    r49 = dyn stopifnot(p8);
    check L56() else D28();
  D28():
    deopt 113 [i2, r49];
  L56():
    goto L8(i2);
  }
}
fun inner1988023488(x, recursive, `use.names`) {
  (reg x:*, reg recursive:*, reg use_names:*) -+> V { var x:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var `use.names`:*, reg use_names_isMissing:L, reg use_names_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg recursive1:*, reg recursive2:V, reg islistfactor:cls, reg r2:V, reg c:L, reg recursive3:*, reg recursive4:V, reg c1:L, reg r3:cls, reg r4:cls, reg r5:cls, reg unique:cls, reg URapply:cls, reg x3:*, reg x4:V, reg p:p(V +), reg levels:*, reg levels1:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg r10:V, reg use_names1:*, reg use_names2:V, reg c2:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x5:*, reg x6:V, reg recursive5:*, reg recursive6:V, reg use_names3:*, reg use_names4:V, reg unlist:cls, reg r15:V, reg names:cls, reg r16:V, reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg r19:V, reg URapply1:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg as_character:*, reg as_character1:V, reg p4:p(V +), reg r22:V, reg lv:*, reg lv1:V, reg match:cls, reg r23:V, reg structure:cls, reg res:*, reg res1:V, reg p5:p(V +), reg lv2:*, reg lv3:V, reg p6:p(V +), reg nm:*, reg nm1:V, reg p7:p(V +), reg r27:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r28:V, reg r29:V, reg x9:*, reg x10:V, reg recursive7:*, reg recursive8:V, reg use_names5:*, reg use_names6:V, reg unlist1:cls, reg r30:V |
    mkenv;
    st x = x;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(TRUE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    use_names_isMissing = missing.0(use_names);
    if use_names_isMissing then L1(TRUE) else L1(use_names);
  L1(use_names_orDefault):
    st `use.names` = use_names_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r1):
    c = `as.logical`(r1);
    if c then L17() else L3();
  L12():
    x1 = ld x;
    check L14() else D0();
  L13():
    r = dyn base(<lang islistfactor(x, recursive)>);
    goto L2(r);
  D0():
    deopt 2 [x1];
  L3():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L14():
    x2 = force? x1;
    checkMissing(x2);
    recursive1 = ld recursive;
    check L15() else D1();
  L17():
    recursive3 = ld recursive;
    check L18() else D3();
  D1():
    deopt 4 [recursive1];
  D3():
    deopt 8 [recursive3];
  L11(r29):
    popenv;
    return r29;
  L15():
    recursive2 = force? recursive1;
    checkMissing(recursive2);
    islistfactor = ldf islistfactor in base;
    r2 = dyn islistfactor(x2, recursive2);
    check L16() else D2();
  L18():
    recursive4 = force? recursive3;
    checkMissing(recursive4);
    c1 = `as.logical`(recursive4);
    if c1 then L19() else L4();
  L44():
    x9 = ld x;
    check L46() else D18();
  L45():
    r28 = dyn base4(<lang unlist(x, recursive, use.names)>);
    goto L11(r28);
  D2():
    deopt 7 [r2];
  D18():
    deopt 65 [x9];
  L4():
    r5 = clos inner873462865;
    goto L5(r5);
  L5(r4):
    st URapply = r4;
    unique = ldf unique;
    check L21() else D4();
  L16():
    goto L2(r2);
  L19():
    r3 = clos inner873462865;
    goto L5(r3);
  L46():
    x10 = force? x9;
    checkMissing(x10);
    recursive7 = ld recursive;
    check L47() else D19();
  D4():
    deopt 16 [];
  D19():
    deopt 67 [recursive7];
  L21():
    p2 = prom<V +>{
      URapply = ldf URapply;
      p = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      p1 = prom<V +>{
        levels = ld levels;
        levels1 = force? levels;
        checkMissing(levels1);
        return levels1;
      };
      r8 = dyn URapply(p, p1);
      return r8;
    };
    r10 = dyn unique(p2);
    check L22() else D5();
  L47():
    recursive8 = force? recursive7;
    checkMissing(recursive8);
    use_names5 = ld `use.names`;
    check L48() else D20();
  D5():
    deopt 18 [r10];
  D20():
    deopt 69 [use_names5];
  L22():
    st lv = r10;
    use_names1 = ld `use.names`;
    check L23() else D6();
  L48():
    use_names6 = force? use_names5;
    checkMissing(use_names6);
    unlist1 = ldf unlist in base;
    r30 = dyn unlist1(x10, recursive8, use_names6);
    check L49() else D21();
  D6():
    deopt 20 [use_names1];
  D21():
    deopt 72 [r30];
  L23():
    use_names2 = force? use_names1;
    checkMissing(use_names2);
    c2 = `as.logical`(use_names2);
    if c2 then L24() else L6();
  L49():
    goto L11(r30);
  L6():
    goto L9(NULL);
  L9(r17):
    st nm = r17;
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L24():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L7(r12):
    goto L9(r12);
  L10(r19):
    st res = r19;
    structure = ldf structure;
    check L41() else D16();
  L25():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L26():
    r11 = dyn base1(<lang .Internal(unlist(x, recursive, use.names))>);
    goto L7(r11);
  L35():
    URapply1 = ldf URapply;
    check L37() else D12();
  L36():
    r18 = dyn base3(<lang URapply(x, as.character)>, <sym lv>);
    goto L10(r18);
  D12():
    deopt 42 [];
  D16():
    deopt 54 [];
  L8(r14):
    names = ldf names in base;
    r16 = dyn names(r14);
    check L33() else D11();
  L27():
    x5 = ld x;
    check L29() else D7();
  L28():
    r13 = dyn base2(<lang unlist(x, recursive, use.names)>);
    goto L8(r13);
  L37():
    p3 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p4 = prom<V +>{
      as_character = ld `as.character`;
      as_character1 = force? as_character;
      checkMissing(as_character1);
      return as_character1;
    };
    r22 = dyn URapply1(p3, p4);
    check L38() else D13();
  L41():
    p5 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p6 = prom<V +>{
      lv2 = ld lv;
      lv3 = force? lv2;
      checkMissing(lv3);
      return lv3;
    };
    p7 = prom<V +>{
      nm = ld nm;
      nm1 = force? nm;
      checkMissing(nm1);
      return nm1;
    };
    r27 = dyn structure[, levels, names, class](p5, p6, p7, "factor");
    check L42() else D17();
  D7():
    deopt 26 [x5];
  D11():
    deopt 35 [r16];
  D13():
    deopt 45 [r22];
  D17():
    deopt 62 [r27];
  L29():
    x6 = force? x5;
    checkMissing(x6);
    recursive5 = ld recursive;
    check L30() else D8();
  L33():
    goto L7(r16);
  L38():
    lv = ld lv;
    check L39() else D14();
  L42():
    popenv;
    return r27;
  D8():
    deopt 28 [recursive5];
  D14():
    deopt 46 [lv];
  L30():
    recursive6 = force? recursive5;
    checkMissing(recursive6);
    use_names3 = ld `use.names`;
    check L31() else D9();
  L39():
    lv1 = force? lv;
    checkMissing(lv1);
    match = ldf match in base;
    r23 = dyn match(r22, lv1, NA_INT, NULL);
    check L40() else D15();
  D9():
    deopt 30 [use_names3];
  D15():
    deopt 51 [r23];
  L31():
    use_names4 = force? use_names3;
    checkMissing(use_names4);
    unlist = ldf unlist in base;
    r15 = dyn unlist(x6, recursive6, use_names4);
    check L32() else D10();
  L40():
    goto L10(r23);
  D10():
    deopt 33 [r15];
  L32():
    goto L8(r15);
  }
}
fun inner873462865(x, Fn) {
  (reg x:*, reg Fn:*) -+> V { var x:*, var Fn:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg rapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg Fn1:*, reg Fn2:V, reg p1:p(V +), reg r4:V, reg recursive:*, reg recursive1:V, reg unlist:cls, reg r5:V |
    mkenv;
    st x = x;
    st Fn = Fn;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    rapply = ldf rapply;
    check L3() else D0();
  L2():
    r = dyn base(<lang unlist(rapply(x, Fn, how="list"), recursive, FALSE)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      Fn1 = ld Fn;
      Fn2 = force? Fn1;
      checkMissing(Fn2);
      return Fn2;
    };
    r4 = dyn rapply[, , how](p, p1, "list");
    check L4() else D1();
  D1():
    deopt 8 [r4];
  L4():
    recursive = ld recursive;
    check L5() else D2();
  D2():
    deopt 9 [recursive];
  L5():
    recursive1 = force? recursive;
    checkMissing(recursive1);
    unlist = ldf unlist in base;
    r5 = dyn unlist(r4, recursive1, FALSE);
    check L6() else D3();
  D3():
    deopt 13 [r5];
  L6():
    goto L0(r5);
  }
}
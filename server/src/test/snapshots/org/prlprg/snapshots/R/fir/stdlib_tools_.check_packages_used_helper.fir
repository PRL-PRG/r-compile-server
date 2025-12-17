fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner239110401;
    st `.check_packages_used_helper` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner239110401(db, files) {
  (reg db:*, reg files:*) -+> V { var db:*, var files:*, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg _get_requires_from_package_db:cls, reg db5:*, reg db6:V, reg p:p(V +), reg r2:V, reg _get_requires_from_package_db1:cls, reg db7:*, reg db8:V, reg p1:p(V +), reg r4:V, reg _get_requires_from_package_db2:cls, reg db9:*, reg db10:V, reg p2:p(V +), reg r6:V, reg _get_requires_from_package_db3:cls, reg db11:*, reg db12:V, reg p3:p(V +), reg r8:V, reg _get_standard_package_names:cls, reg r9:V, reg c1:L, reg r11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg depends:*, reg depends1:V, reg imports:*, reg imports1:V, reg suggests:*, reg suggests1:V, reg enhances:*, reg enhances1:V, reg pkg_name:*, reg pkg_name1:V, reg standard_package_names:*, reg standard_package_names1:V, reg c2:cls, reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c3:cls, reg r18:V, reg character:cls, reg r19:V, reg character1:cls, reg r20:V, reg character2:cls, reg r21:V, reg r22:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg files1:*, reg files2:V, reg c4:L, reg c5:L, reg files3:*, reg files4:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg tryCatch:cls, reg parse:cls, reg f:*, reg f1:V, reg p4:p(V +), reg p5:p(V +), reg r27:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg exprs:*, reg exprs1:V, reg r30:I, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg c7:L, reg x1:V, reg find_bad_exprs:cls, reg exprs2:*, reg exprs3:V, reg c8:L, reg exprs5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i10:*, reg i11:V, reg __1:cls, reg r31:V, reg p6:p(V +), reg p7:p(V +), reg r35:cls, reg p8:p(V +), reg r37:V, reg tryCatch1:cls, reg parse1:cls, reg files5:*, reg files6:V, reg p9:p(V +), reg p10:p(V +), reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg exprs6:*, reg exprs7:V, reg r43:I, reg s2:V, reg l2:I, reg i13:I, reg i14:I, reg i15:I, reg c9:L, reg x2:V, reg find_bad_exprs1:cls, reg exprs8:*, reg exprs9:V, reg c10:L, reg exprs11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg i18:*, reg i19:V, reg __2:cls, reg r44:V, reg p11:p(V +), reg p12:p(V +), reg r48:cls, reg p13:p(V +), reg r50:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg r52:V, reg unique:cls, reg bad_exprs:*, reg bad_exprs1:V, reg p14:p(V +), reg r54:V, reg unique1:cls, reg bad_imports:*, reg bad_imports1:V, reg p15:p(V +), reg r56:V, reg unique2:cls, reg bad_data:*, reg bad_data1:V, reg p16:p(V +), reg r58:V, reg unique3:cls, reg parse_errors:*, reg parse_errors1:V, reg p17:p(V +), reg r60:V, reg list:cls, reg r61:V, reg l3:*, reg class__:cls, reg r62:V, reg res:*, reg res1:V |
    mkenv;
    st db = db;
    st files = files;
    db1 = ld db;
    check L9() else D0();
  D0():
    deopt 0 [db1];
  L9():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L10() else L11(db2);
  L0(dx1):
    st pkg_name = dx1;
    _get_requires_from_package_db = ldf `.get_requires_from_package_db`;
    check L13() else D1();
  L10():
    dr = tryDispatchBuiltin.1("[", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(db4):
    __ = ldf `[` in base;
    r = dyn __(db4, "Package");
    goto L0(r);
  D1():
    deopt 7 [];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    p = prom<V +>{
      db5 = ld db;
      db6 = force? db5;
      checkMissing(db6);
      return db6;
    };
    r2 = dyn _get_requires_from_package_db(p, "Depends");
    check L14() else D2();
  D2():
    deopt 10 [r2];
  L14():
    st depends = r2;
    _get_requires_from_package_db1 = ldf `.get_requires_from_package_db`;
    check L15() else D3();
  D3():
    deopt 13 [];
  L15():
    p1 = prom<V +>{
      db7 = ld db;
      db8 = force? db7;
      checkMissing(db8);
      return db8;
    };
    r4 = dyn _get_requires_from_package_db1(p1, "Imports");
    check L16() else D4();
  D4():
    deopt 16 [r4];
  L16():
    st imports = r4;
    _get_requires_from_package_db2 = ldf `.get_requires_from_package_db`;
    check L17() else D5();
  D5():
    deopt 19 [];
  L17():
    p2 = prom<V +>{
      db9 = ld db;
      db10 = force? db9;
      checkMissing(db10);
      return db10;
    };
    r6 = dyn _get_requires_from_package_db2(p2, "Suggests");
    check L18() else D6();
  D6():
    deopt 22 [r6];
  L18():
    st suggests = r6;
    _get_requires_from_package_db3 = ldf `.get_requires_from_package_db`;
    check L19() else D7();
  D7():
    deopt 25 [];
  L19():
    p3 = prom<V +>{
      db11 = ld db;
      db12 = force? db11;
      checkMissing(db12);
      return db12;
    };
    r8 = dyn _get_requires_from_package_db3(p3, "Enhances");
    check L20() else D8();
  D8():
    deopt 28 [r8];
  L20():
    st enhances = r8;
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L21() else D9();
  D9():
    deopt 31 [];
  L21():
    r9 = dyn _get_standard_package_names();
    check L22() else D10();
  D10():
    deopt 32 [r9];
  L22():
    c1 = `is.object`(r9);
    if c1 then L24() else L25(r9);
  L23(dx3):
    st standard_package_names = dx3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L24():
    dr2 = tryDispatchBuiltin.1("$", r9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(dr2);
  L25(r11):
    r12 = `$`(r11, <sym base>);
    goto L23(r12);
  L1(r14):
    st depends_suggests = r14;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L27():
    depends = ld depends;
    check L29() else D11();
  L28():
    r13 = dyn base(<sym depends>, <sym imports>, <sym suggests>, <sym enhances>, <sym pkg_name>, <sym standard_package_names>);
    goto L1(r13);
  D11():
    deopt 37 [depends];
  L2(r17):
    st common_names = r17;
    character = ldf character;
    check L39() else D19();
  L29():
    depends1 = force? depends;
    checkMissing(depends1);
    imports = ld imports;
    check L30() else D12();
  L36():
    c3 = ldf c in base;
    r18 = dyn c3("pkg", "pkgName", "package", "pos");
    check L38() else D18();
  L37():
    r16 = dyn base1("pkg", "pkgName", "package", "pos");
    goto L2(r16);
  D12():
    deopt 39 [imports];
  D18():
    deopt 59 [r18];
  D19():
    deopt 62 [];
  L30():
    imports1 = force? imports;
    checkMissing(imports1);
    suggests = ld suggests;
    check L31() else D13();
  L38():
    goto L2(r18);
  L39():
    r19 = dyn character();
    check L40() else D20();
  D13():
    deopt 41 [suggests];
  D20():
    deopt 63 [r19];
  L31():
    suggests1 = force? suggests;
    checkMissing(suggests1);
    enhances = ld enhances;
    check L32() else D14();
  L40():
    st bad_exprs = r19;
    st parse_errors = r19;
    character1 = ldf character;
    check L41() else D21();
  D14():
    deopt 43 [enhances];
  D21():
    deopt 67 [];
  L32():
    enhances1 = force? enhances;
    checkMissing(enhances1);
    pkg_name = ld pkg_name;
    check L33() else D15();
  L41():
    r20 = dyn character1();
    check L42() else D22();
  D15():
    deopt 45 [pkg_name];
  D22():
    deopt 68 [r20];
  L33():
    pkg_name1 = force? pkg_name;
    checkMissing(pkg_name1);
    standard_package_names = ld standard_package_names;
    check L34() else D16();
  L42():
    st bad_imports = r20;
    character2 = ldf character;
    check L43() else D23();
  D16():
    deopt 47 [standard_package_names];
  D23():
    deopt 71 [];
  L34():
    standard_package_names1 = force? standard_package_names;
    checkMissing(standard_package_names1);
    c2 = ldf c in base;
    r15 = dyn c2(depends1, imports1, suggests1, enhances1, pkg_name1, standard_package_names1);
    check L35() else D17();
  L43():
    r21 = dyn character2();
    check L44() else D24();
  D17():
    deopt 50 [r15];
  D24():
    deopt 72 [r21];
  L35():
    goto L1(r15);
  L44():
    st bad_data = r21;
    r22 = clos inner3708401697;
    st find_bad_exprs = r22;
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L3(r24):
    c5 = `as.logical`(r24);
    if c5 then L48() else L4();
  L45():
    files1 = ld files;
    check L47() else D25();
  L46():
    r23 = dyn base2(<sym files>);
    goto L3(r23);
  D25():
    deopt 78 [files1];
  L4():
    tryCatch1 = ldf tryCatch;
    check L54() else D29();
  L7():
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L47():
    files2 = force? files1;
    checkMissing(files2);
    c4 = `is.character`(files2);
    goto L3(c4);
  L48():
    files3 = ld files;
    check L49() else D26();
  D26():
    deopt 81 [files3];
  D29():
    deopt 93 [];
  L8(r52):
    st res = r52;
    l3 = ld res;
    class__ = ldf `class<-`;
    check L67() else D40();
  L49():
    files4 = force? files3;
    checkMissing(files4);
    s = toForSeq(files4);
    l = length(s);
    i = 0;
    goto L5(i);
  L54():
    p12 = prom<V +>{
      parse1 = ldf parse;
      p9 = prom<V +>{
        files5 = ld files;
        files6 = force? files5;
        checkMissing(files6);
        return files6;
      };
      p10 = prom<V +>{
        return -1;
      };
      r40 = dyn parse1[file, n](p9, p10);
      st exprs = r40;
      sym4 = ldf seq_along;
      base4 = ldf seq_along in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L3() else L4();
    L0(r42):
      s2 = toForSeq(r42);
      l2 = length(s2);
      i13 = 0;
      goto L1(i13);
    L3():
      exprs6 = ld exprs;
      exprs7 = force? exprs6;
      checkMissing(exprs7);
      r43 = seq_along(exprs7);
      goto L0(r43);
    L4():
      r41 = dyn base4(<sym exprs>);
      goto L0(r41);
    L1(i14):
      i15 = `+`.1(i14, 1);
      c9 = `<`.1(l2, i15);
      if c9 then L5() else L2();
    L2():
      x2 = `[[`(s2, i15, NULL, TRUE);
      st i = x2;
      find_bad_exprs1 = ldf find_bad_exprs;
      p11 = prom<V +>{
        exprs8 = ld exprs;
        exprs9 = force? exprs8;
        checkMissing(exprs9);
        c10 = `is.object`(exprs9);
        if c10 then L1() else L2(exprs9);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[[", exprs9);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(exprs11):
        i18 = ld i;
        i19 = force? i18;
        __2 = ldf `[[` in base;
        r44 = dyn __2(exprs11, i19);
        goto L0(r44);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      dyn find_bad_exprs1(p11);
      goto L1(i15);
    L5():
      invisible.0();
      return i15;
    };
    p13 = prom<V +>{
      r48 = clos inner3708401697;
      return r48;
    };
    r50 = dyn tryCatch1[, error](p12, p13);
    check L55() else D30();
  L56():
    unique = ldf unique;
    check L58() else D31();
  L57():
    r51 = dyn base5[others, imports, data, methods_message, parse_errors](<lang unique(bad_exprs)>, <lang unique(bad_imports)>, <lang unique(bad_data)>, "", <lang unique(parse_errors)>);
    goto L8(r51);
  D30():
    deopt 97 [r50];
  D31():
    deopt 101 [];
  D40():
    deopt 128 ["check_packages_used", l3, "check_packages_used"];
  L5(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L50() else L6();
  L55():
    goto L7();
  L58():
    p14 = prom<V +>{
      bad_exprs = ld bad_exprs;
      bad_exprs1 = force? bad_exprs;
      checkMissing(bad_exprs1);
      return bad_exprs1;
    };
    r54 = dyn unique(p14);
    check L59() else D32();
  L67():
    r62 = dyn class__(l3, NULL, "check_packages_used");
    check L68() else D41();
  D32():
    deopt 103 [r54];
  D41():
    deopt 130 ["check_packages_used", r62];
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    tryCatch = ldf tryCatch;
    check L51() else D27();
  L50():
    goto L7();
  L59():
    unique1 = ldf unique;
    check L60() else D33();
  L68():
    st res = r62;
    res = ld res;
    check L69() else D42();
  D27():
    deopt 84 [i2];
  D33():
    deopt 106 [];
  D42():
    deopt 132 [res];
  L51():
    p7 = prom<V +>{
      parse = ldf parse;
      p4 = prom<V +>{
        f = ld f;
        f1 = force? f;
        checkMissing(f1);
        return f1;
      };
      p5 = prom<V +>{
        return -1;
      };
      r27 = dyn parse[file, n](p4, p5);
      st exprs = r27;
      sym3 = ldf seq_along;
      base3 = ldf seq_along in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r29):
      s1 = toForSeq(r29);
      l1 = length(s1);
      i5 = 0;
      goto L1(i5);
    L3():
      exprs = ld exprs;
      exprs1 = force? exprs;
      checkMissing(exprs1);
      r30 = seq_along(exprs1);
      goto L0(r30);
    L4():
      r28 = dyn base3(<sym exprs>);
      goto L0(r28);
    L1(i6):
      i7 = `+`.1(i6, 1);
      c7 = `<`.1(l1, i7);
      if c7 then L5() else L2();
    L2():
      x1 = `[[`(s1, i7, NULL, TRUE);
      st i = x1;
      find_bad_exprs = ldf find_bad_exprs;
      p6 = prom<V +>{
        exprs2 = ld exprs;
        exprs3 = force? exprs2;
        checkMissing(exprs3);
        c8 = `is.object`(exprs3);
        if c8 then L1() else L2(exprs3);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", exprs3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(exprs5):
        i10 = ld i;
        i11 = force? i10;
        __1 = ldf `[[` in base;
        r31 = dyn __1(exprs5, i11);
        goto L0(r31);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      dyn find_bad_exprs(p6);
      goto L1(i7);
    L5():
      invisible.0();
      return i7;
    };
    p8 = prom<V +>{
      r35 = clos inner3708401697;
      return r35;
    };
    r37 = dyn tryCatch[, error](p7, p8);
    check L52() else D28();
  L60():
    p15 = prom<V +>{
      bad_imports = ld bad_imports;
      bad_imports1 = force? bad_imports;
      checkMissing(bad_imports1);
      return bad_imports1;
    };
    r56 = dyn unique1(p15);
    check L61() else D34();
  L69():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  D28():
    deopt 88 [i2, r37];
  D34():
    deopt 108 [r56];
  L52():
    goto L5(i2);
  L61():
    unique2 = ldf unique;
    check L62() else D35();
  D35():
    deopt 111 [];
  L62():
    p16 = prom<V +>{
      bad_data = ld bad_data;
      bad_data1 = force? bad_data;
      checkMissing(bad_data1);
      return bad_data1;
    };
    r58 = dyn unique2(p16);
    check L63() else D36();
  D36():
    deopt 113 [r58];
  L63():
    unique3 = ldf unique;
    check L64() else D37();
  D37():
    deopt 118 [];
  L64():
    p17 = prom<V +>{
      parse_errors = ld parse_errors;
      parse_errors1 = force? parse_errors;
      checkMissing(parse_errors1);
      return parse_errors1;
    };
    r60 = dyn unique3(p17);
    check L65() else D38();
  D38():
    deopt 120 [r60];
  L65():
    list = ldf list in base;
    r61 = dyn list(r54, r56, r58, "", r60);
    check L66() else D39();
  D39():
    deopt 123 [r61];
  L66():
    goto L8(r61);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg is_expression:cls, reg r5:V, reg c6:L, reg c7:V, reg c9:L, reg deparse:cls, reg e5:*, reg e6:V, reg c10:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r6:V, reg p:p(V +), reg r8:V, reg c11:L, reg r10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r11:V, reg _in_:cls, reg Call:*, reg Call1:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg c12:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg c13:L, reg c15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg c18:L, reg r19:V, reg e9:*, reg e10:V, reg length:cls, reg r20:V, reg r21:V, reg c19:L, reg c20:V, reg c22:L, reg vapply:cls, reg e11:*, reg e12:V, reg p3:p(V +), reg r23:cls, reg p4:p(V +), reg r25:V, reg match_call:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg baseenv:cls, reg r28:V, reg c23:L, reg r30:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg Call2:*, reg Call3:V, reg __2:cls, reg r31:V, reg p5:p(V +), reg e13:*, reg e14:V, reg c24:L, reg e16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg keep:*, reg keep1:V, reg __3:cls, reg r33:V, reg p6:p(V +), reg r35:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg mc:*, reg mc1:V, reg c25:L, reg mc3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r38:V, reg c26:V, reg r39:V, reg c27:L, reg _in_1:cls, reg Call4:*, reg Call5:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r41:V, reg r42:V, reg c28:cls, reg r43:V, reg p8:p(V +), reg r45:V, reg c29:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r46:V, reg r47:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg pkg:*, reg pkg1:V, reg class:cls, reg r50:V, reg identical:cls, reg r51:V, reg r52:V, reg c30:L, reg r53:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r55:V, reg r56:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg r58:V, reg pkg2:*, reg pkg3:V, reg class1:cls, reg r59:V, reg identical1:cls, reg r60:V, reg r61:V, reg c31:L, reg c33:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r62:V, reg c36:L, reg r63:V, reg mc4:*, reg mc5:V, reg c37:L, reg c39:L, reg mc7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c41:L, reg dx11:V, reg r64:V, reg c42:V, reg r65:V, reg c43:L, reg c44:V, reg c46:L, reg c48:V, reg isFALSE:cls, reg co:*, reg co1:V, reg p9:p(V +), reg r67:V, reg r68:V, reg c49:L, reg c50:V, reg c52:L, reg dunno:*, reg dunno1:V, reg r69:V, reg c53:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r70:V, reg r71:V, reg pkg4:*, reg pkg5:V, reg as_character:cls, reg r72:V, reg _notin_:cls, reg pkg6:*, reg pkg7:V, reg p10:p(V +), reg sym13:cls, reg base13:cls, reg guard13:L, reg r74:V, reg r75:V, reg depends_suggests:*, reg depends_suggests1:V, reg common_names:*, reg common_names1:V, reg c54:cls, reg r76:V, reg p11:p(V +), reg r78:V, reg c55:L, reg sym14:cls, reg base14:cls, reg guard14:L, reg r79:V, reg r80:V, reg bad_exprs:*, reg bad_exprs1:V, reg pkg8:*, reg pkg9:V, reg c56:cls, reg r81:V, reg r82:V, reg r83:V, reg r84:V, reg _in_2:cls, reg Call6:*, reg Call7:V, reg p12:p(V +), reg r87:V, reg c57:L, reg deparse1:cls, reg e17:*, reg e18:V, reg c58:L, reg e20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __4:cls, reg r88:V, reg p13:p(V +), reg r90:V, reg _in_3:cls, reg pkg10:*, reg pkg11:V, reg p14:p(V +), reg depends_suggests2:*, reg depends_suggests3:V, reg p15:p(V +), reg r93:V, reg r94:V, reg c59:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r95:V, reg r96:V, reg bad_imports:*, reg bad_imports1:V, reg pkg12:*, reg pkg13:V, reg c60:cls, reg r97:V, reg r98:V, reg _in_4:cls, reg Call8:*, reg Call9:V, reg p16:p(V +), reg r100:V, reg c61:L, reg deparse2:cls, reg e21:*, reg e22:V, reg c62:L, reg e24:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __5:cls, reg r101:V, reg p17:p(V +), reg r103:V, reg _in_5:cls, reg pkg14:*, reg pkg15:V, reg p18:p(V +), reg depends_suggests4:*, reg depends_suggests5:V, reg p19:p(V +), reg r106:V, reg r107:V, reg c63:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r108:V, reg r109:V, reg bad_imports2:*, reg bad_imports3:V, reg pkg16:*, reg pkg17:V, reg c64:cls, reg r110:V, reg r111:V, reg _in_6:cls, reg Call10:*, reg Call11:V, reg p20:p(V +), reg r113:V, reg c65:L, reg c67:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r114:V, reg c70:L, reg r115:V, reg e25:*, reg e26:V, reg length1:cls, reg r116:V, reg r117:V, reg c71:L, reg c72:V, reg c74:L, reg c75:V, reg _in_7:cls, reg Call12:*, reg Call13:V, reg p21:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r119:V, reg r120:V, reg c77:cls, reg r121:V, reg p22:p(V +), reg r123:V, reg c78:L, reg c79:V, reg c81:L, reg match_call1:cls, reg __6:cls, reg r124:V, reg p23:p(V +), reg e27:*, reg e28:V, reg p24:p(V +), reg r127:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r128:V, reg r129:V, reg mc8:*, reg mc9:V, reg c82:L, reg mc11:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r130:V, reg c83:L, reg c84:L, reg c86:V, reg _notin_1:cls, reg pkg18:*, reg pkg19:V, reg p25:p(V +), reg depends_suggests6:*, reg depends_suggests7:V, reg p26:p(V +), reg r133:V, reg c87:L, reg c88:V, reg c90:L, reg sym20:cls, reg base20:cls, reg guard20:L, reg r134:V, reg r135:V, reg bad_data:*, reg bad_data1:V, reg pkg20:*, reg pkg21:V, reg c91:cls, reg r136:V, reg r137:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r138:V, reg r139:V, reg e29:*, reg e30:V, reg r140:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c92:L, reg x:V, reg Recall:cls, reg e31:*, reg e32:V, reg c93:L, reg e34:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg i5:*, reg i6:V, reg __7:cls, reg r141:V, reg p27:p(V +), reg r143:V |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L50() else L51();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L54();
  L50():
    e1 = ld e;
    check L52() else D0();
  L51():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L60() else L3();
  L52():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L53() else D1();
  L54():
    sym1 = ldf `is.expression`;
    base1 = ldf `is.expression` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    c6 = `as.logical`(r4);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    invisible.0();
    popenv;
    return NULL;
  L53():
    goto L0(r2);
  L55():
    e3 = ld e;
    check L57() else D2();
  L56():
    r3 = dyn base1(<sym e>);
    goto L2(c, r3);
  L60():
    deparse = ldf deparse;
    check L61() else D4();
  D2():
    deopt 8 [c, e3];
  D4():
    deopt 14 [];
  L57():
    e4 = force? e3;
    checkMissing(e4);
    is_expression = ldf `is.expression` in base;
    r5 = dyn is_expression(e4);
    check L58() else D3();
  L61():
    p = prom<V +>{
      e5 = ld e;
      e6 = force? e5;
      checkMissing(e6);
      c10 = `is.object`(e6);
      if c10 then L1() else L2(e6);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", e6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e8):
      __ = ldf `[[` in base;
      r6 = dyn __(e8, 1);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r8 = dyn deparse(p);
    check L62() else D5();
  D3():
    deopt 11 [c, r5];
  D5():
    deopt 16 [r8];
  L58():
    goto L2(c, r5);
  L62():
    c11 = `is.object`(r8);
    if c11 then L63() else L64(r8);
  L4(dx3):
    st Call = dx3;
    _in_ = ldf `%in%`;
    check L66() else D6();
  L63():
    dr2 = tryDispatchBuiltin.1("[", r8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L65() else L64(dr2);
  L64(r10):
    __1 = ldf `[` in base;
    r11 = dyn __1(r10, 1);
    goto L4(r11);
  D6():
    deopt 22 [];
  L65():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L66():
    p1 = prom<V +>{
      Call = ld Call;
      Call1 = force? Call;
      checkMissing(Call1);
      return Call1;
    };
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      c12 = ldf c in base;
      r15 = dyn c12("library", "require", "loadNamespace", "requireNamespace");
      goto L0(r15);
    L2():
      r13 = dyn base2("library", "require", "loadNamespace", "requireNamespace");
      goto L0(r13);
    };
    r17 = dyn _in_(p1, p2);
    check L67() else D7();
  D7():
    deopt 25 [r17];
  L67():
    c13 = `as.logical`(r17);
    if c13 then L68() else L5(c13);
  L5(c15):
    c22 = `as.logical`(c15);
    if c22 then L74() else L7();
  L68():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L69() else L70();
  L6(c18, r19):
    r21 = `>=`(r19, 2);
    c19 = `as.logical`(r21);
    c20 = `&&`(c18, c19);
    goto L5(c20);
  L7():
    _in_2 = ldf `%in%`;
    check L140() else D34();
  L29():
    sym21 = ldf seq_along;
    base21 = ldf seq_along in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L204() else L205();
  L69():
    e9 = ld e;
    check L71() else D8();
  L70():
    r18 = dyn base3(<sym e>);
    goto L6(c13, r18);
  L74():
    vapply = ldf vapply;
    check L75() else D10();
  D8():
    deopt 28 [c13, e9];
  D10():
    deopt 36 [];
  D34():
    deopt 156 [];
  L47(r139):
    s = toForSeq(r139);
    l = length(s);
    i = 0;
    goto L48(i);
  L71():
    e10 = force? e9;
    checkMissing(e10);
    length = ldf length in base;
    r20 = dyn length(e10);
    check L72() else D9();
  L75():
    p3 = prom<V +>{
      e11 = ld e;
      e12 = force? e11;
      checkMissing(e12);
      return e12;
    };
    p4 = prom<V +>{
      r23 = clos inner2501545716;
      return r23;
    };
    r25 = dyn vapply(p3, p4, NA_LGL);
    check L76() else D11();
  L140():
    p12 = prom<V +>{
      Call6 = ld Call;
      Call7 = force? Call6;
      checkMissing(Call7);
      return Call7;
    };
    r87 = dyn _in_2(p12, "::");
    check L141() else D35();
  L204():
    e29 = ld e;
    check L206() else D66();
  L205():
    r138 = dyn base21(<sym e>);
    goto L47(r138);
  D9():
    deopt 31 [c13, r20];
  D11():
    deopt 40 [r25];
  D35():
    deopt 159 [r87];
  D66():
    deopt 261 [e29];
  L48(i1):
    i2 = `+`.1(i1, 1);
    c92 = `<`.1(l, i2);
    if c92 then L207() else L49();
  L72():
    goto L6(c13, r20);
  L76():
    st keep = r25;
    match_call = ldf `match.call`;
    check L77() else D12();
  L141():
    c57 = `as.logical`(r87);
    if c57 then L142() else L30();
  L206():
    e30 = force? e29;
    checkMissing(e30);
    r140 = seq_along(e30);
    goto L47(r140);
  D12():
    deopt 43 [];
  L30():
    _in_4 = ldf `%in%`;
    check L155() else D43();
  L49():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    Recall = ldf Recall;
    check L208() else D67();
  L77():
    p5 = prom<V +>{
      sym4 = ldf baseenv;
      base4 = ldf baseenv in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r27):
      c23 = `is.object`(r27);
      if c23 then L4() else L5(r27);
    L2():
      baseenv = ldf baseenv in base;
      r28 = dyn baseenv();
      goto L0(r28);
    L3():
      r26 = dyn base4();
      goto L0(r26);
    L1(dx5):
      return dx5;
    L4():
      dr4 = tryDispatchBuiltin.1("[[", r27);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(r30):
      Call2 = ld Call;
      Call3 = force? Call2;
      __2 = ldf `[[` in base;
      r31 = dyn __2(r30, Call3);
      goto L1(r31);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    };
    p6 = prom<V +>{
      e13 = ld e;
      e14 = force? e13;
      checkMissing(e14);
      c24 = `is.object`(e14);
      if c24 then L1() else L2(e14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", e14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(e16):
      keep = ld keep;
      keep1 = force? keep;
      __3 = ldf `[` in base;
      r33 = dyn __3(e16, keep1);
      goto L0(r33);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r35 = dyn match_call(p5, p6);
    check L78() else D13();
  L142():
    deparse1 = ldf deparse;
    check L143() else D36();
  L207():
    invisible.0();
    popenv;
    return i2;
  D13():
    deopt 46 [r35];
  D36():
    deopt 161 [];
  D43():
    deopt 183 [];
  D67():
    deopt 265 [i2];
  L78():
    st mc = r35;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L143():
    p13 = prom<V +>{
      e17 = ld e;
      e18 = force? e17;
      checkMissing(e18);
      c58 = `is.object`(e18);
      if c58 then L1() else L2(e18);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", e18);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(e20):
      __4 = ldf `[[` in base;
      r88 = dyn __4(e20, 2);
      goto L0(r88);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r90 = dyn deparse1(p13);
    check L144() else D37();
  L155():
    p16 = prom<V +>{
      Call8 = ld Call;
      Call9 = force? Call8;
      checkMissing(Call9);
      return Call9;
    };
    r100 = dyn _in_4(p16, ":::");
    check L156() else D44();
  L208():
    p27 = prom<V +>{
      e31 = ld e;
      e32 = force? e31;
      checkMissing(e32);
      c93 = `is.object`(e32);
      if c93 then L1() else L2(e32);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", e32);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(e34):
      i5 = ld i;
      i6 = force? i5;
      __7 = ldf `[[` in base;
      r141 = dyn __7(e34, i6);
      goto L0(r141);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    r143 = dyn Recall(p27);
    check L209() else D68();
  D37():
    deopt 163 [r90];
  D44():
    deopt 186 [r100];
  D68():
    deopt 267 [i2, r143];
  L8(r37):
    r39 = `!`(r37);
    c27 = `as.logical`(r39);
    if c27 then L86() else L9();
  L79():
    mc = ld mc;
    check L81() else D14();
  L80():
    r36 = dyn base5(<lang `<-`(pkg, `$`(mc, package))>);
    goto L8(r36);
  L144():
    st pkg = r90;
    _in_3 = ldf `%in%`;
    check L145() else D38();
  L156():
    c61 = `as.logical`(r100);
    if c61 then L157() else L34();
  L209():
    goto L48(i2);
  D14():
    deopt 49 [mc];
  D38():
    deopt 166 [];
  L9():
    goto L28(NULL);
  L28(r84):
    goto L29();
  L34():
    _in_6 = ldf `%in%`;
    check L170() else D52();
  L81():
    mc1 = force? mc;
    checkMissing(mc1);
    c25 = `is.object`(mc1);
    if c25 then L83() else L84(mc1);
  L86():
    st dunno = FALSE;
    _in_1 = ldf `%in%`;
    check L87() else D15();
  L145():
    p14 = prom<V +>{
      pkg10 = ld pkg;
      pkg11 = force? pkg10;
      checkMissing(pkg11);
      return pkg11;
    };
    p15 = prom<V +>{
      depends_suggests2 = ld depends_suggests;
      depends_suggests3 = force? depends_suggests2;
      checkMissing(depends_suggests3);
      return depends_suggests3;
    };
    r93 = dyn _in_3(p14, p15);
    check L146() else D39();
  L157():
    deparse2 = ldf deparse;
    check L158() else D45();
  D15():
    deopt 59 [];
  D39():
    deopt 169 [r93];
  D45():
    deopt 188 [];
  D52():
    deopt 210 [];
  L82(dx9):
    st pkg = dx9;
    c26 = `==`(dx9, NULL);
    goto L8(c26);
  L83():
    dr8 = tryDispatchBuiltin.1("$", mc1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L85() else L84(dr8);
  L84(mc3):
    r38 = `$`(mc3, <sym package>);
    goto L82(r38);
  L87():
    p7 = prom<V +>{
      Call4 = ld Call;
      Call5 = force? Call4;
      checkMissing(Call5);
      return Call5;
    };
    p8 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r42):
      return r42;
    L1():
      c28 = ldf c in base;
      r43 = dyn c28("loadNamespace", "requireNamespace");
      goto L0(r43);
    L2():
      r41 = dyn base6("loadNamespace", "requireNamespace");
      goto L0(r41);
    };
    r45 = dyn _in_1(p7, p8);
    check L88() else D16();
  L146():
    r94 = `!`(r93);
    c59 = `as.logical`(r94);
    if c59 then L147() else L31();
  L158():
    p17 = prom<V +>{
      e21 = ld e;
      e22 = force? e21;
      checkMissing(e22);
      c62 = `is.object`(e22);
      if c62 then L1() else L2(e22);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", e22);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(e24):
      __5 = ldf `[[` in base;
      r101 = dyn __5(e24, 2);
      goto L0(r101);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r103 = dyn deparse2(p17);
    check L159() else D46();
  L170():
    p20 = prom<V +>{
      Call10 = ld Call;
      Call11 = force? Call10;
      checkMissing(Call11);
      return Call11;
    };
    r113 = dyn _in_6(p20, "data");
    check L171() else D53();
  D16():
    deopt 62 [r45];
  D46():
    deopt 190 [r103];
  D53():
    deopt 213 [r113];
  L31():
    goto L33(NULL);
  L33(r98):
    goto L29();
  L85():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L82(dx8);
  L88():
    c29 = `as.logical`(r45);
    if c29 then L89() else L10();
  L147():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L148() else L149();
  L159():
    st pkg = r103;
    _in_5 = ldf `%in%`;
    check L160() else D47();
  L171():
    c65 = `as.logical`(r113);
    if c65 then L172() else L38(c65);
  D47():
    deopt 193 [];
  L10():
    sym9 = ldf identical;
    base9 = ldf identical in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L100() else L101();
  L15():
    dunno = ld dunno;
    check L122() else D26();
  L32(r96):
    sst bad_imports = r96;
    goto L33(r96);
  L38(c67):
    c74 = `as.logical`(c67);
    if c74 then L40(c74) else L178();
  L89():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L148():
    bad_imports = ld bad_imports;
    check L150() else D40();
  L149():
    r95 = dyn base15(<sym bad_imports>, <sym pkg>);
    goto L32(r95);
  L160():
    p18 = prom<V +>{
      pkg14 = ld pkg;
      pkg15 = force? pkg14;
      checkMissing(pkg15);
      return pkg15;
    };
    p19 = prom<V +>{
      depends_suggests4 = ld depends_suggests;
      depends_suggests5 = force? depends_suggests4;
      checkMissing(depends_suggests5);
      return depends_suggests5;
    };
    r106 = dyn _in_5(p18, p19);
    check L161() else D48();
  L172():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L173() else L174();
  D26():
    deopt 125 [dunno];
  D40():
    deopt 173 [bad_imports];
  D48():
    deopt 196 [r106];
  L11(r47):
    r52 = `!`(r47);
    c30 = `as.logical`(r52);
    if c30 then L97() else L13();
  L16(r56):
    r61 = `!`(r56);
    c31 = `as.logical`(r61);
    if c31 then L107() else L18(c31);
  L39(c70, r115):
    r117 = `>=`(r115, 3);
    c71 = `as.logical`(r117);
    c72 = `&&`(c70, c71);
    goto L38(c72);
  L40(c75):
    c81 = `as.logical`(c75);
    if c81 then L182() else L41();
  L90():
    sym8 = ldf class;
    base8 = ldf class in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L92() else L93();
  L91():
    r46 = dyn base7(<lang class(pkg)>, "character");
    goto L11(r46);
  L100():
    sym10 = ldf class;
    base10 = ldf class in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L102() else L103();
  L101():
    r55 = dyn base9(<lang class(pkg)>, "character");
    goto L16(r55);
  L122():
    dunno1 = force? dunno;
    checkMissing(dunno1);
    r69 = `!`(dunno1);
    c53 = `as.logical`(r69);
    if c53 then L123() else L22();
  L150():
    bad_imports1 = force? bad_imports;
    checkMissing(bad_imports1);
    pkg12 = ld pkg;
    check L151() else D41();
  L161():
    r107 = `!`(r106);
    c63 = `as.logical`(r107);
    if c63 then L162() else L35();
  L173():
    e25 = ld e;
    check L175() else D54();
  L174():
    r114 = dyn base17(<sym e>);
    goto L39(c65, r114);
  L178():
    _in_7 = ldf `%in%`;
    check L179() else D56();
  D41():
    deopt 175 [pkg12];
  D54():
    deopt 216 [c65, e25];
  D56():
    deopt 224 [c74];
  L12(r49):
    identical = ldf identical in base;
    r51 = dyn identical(r49, "character", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L96() else D19();
  L13():
    goto L14(NULL);
  L14(r53):
    goto L15();
  L17(r58):
    identical1 = ldf identical in base;
    r60 = dyn identical1(r58, "character", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L106() else D22();
  L18(c33):
    c46 = `as.logical`(c33);
    if c46 then L116() else L20(c46);
  L22():
    goto L27(NULL);
  L27(r83):
    goto L28(r83);
  L35():
    goto L37(NULL);
  L37(r111):
    goto L29();
  L41():
    goto L29();
  L92():
    pkg = ld pkg;
    check L94() else D17();
  L93():
    r48 = dyn base8(<sym pkg>);
    goto L12(r48);
  L97():
    st dunno = TRUE;
    goto L14(TRUE);
  L102():
    pkg2 = ld pkg;
    check L104() else D20();
  L103():
    r57 = dyn base10(<sym pkg>);
    goto L17(r57);
  L107():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L108() else L109();
  L123():
    sym12 = ldf `as.character`;
    base12 = ldf `as.character` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L124() else L125();
  L151():
    pkg13 = force? pkg12;
    checkMissing(pkg13);
    c60 = ldf c in base;
    r97 = dyn c60(bad_imports1, pkg13);
    check L152() else D42();
  L162():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L163() else L164();
  L175():
    e26 = force? e25;
    checkMissing(e26);
    length1 = ldf length in base;
    r116 = dyn length1(e26);
    check L176() else D55();
  L179():
    p21 = prom<V +>{
      Call12 = ld Call;
      Call13 = force? Call12;
      checkMissing(Call13);
      return Call13;
    };
    p22 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r120):
      return r120;
    L1():
      c77 = ldf c in base;
      r121 = dyn c77("utils::data", "utils:::data");
      goto L0(r121);
    L2():
      r119 = dyn base18("utils::data", "utils:::data");
      goto L0(r119);
    };
    r123 = dyn _in_7(p21, p22);
    check L180() else D57();
  L182():
    match_call1 = ldf `match.call`;
    check L183() else D58();
  D17():
    deopt 67 [pkg];
  D19():
    deopt 80 [r51];
  D20():
    deopt 91 [pkg2];
  D22():
    deopt 104 [r60];
  D42():
    deopt 178 [r97];
  D55():
    deopt 219 [c65, r116];
  D57():
    deopt 227 [c74, r123];
  D58():
    deopt 230 [];
  L19(c36, r63):
    r65 = `!`(r63);
    c43 = `as.logical`(r65);
    c44 = `&&`(c36, c43);
    goto L18(c44);
  L20(c48):
    c52 = `as.logical`(c48);
    if c52 then L120() else L21();
  L23(r71):
    st pkg = r71;
    _notin_ = ldf `%notin%`;
    check L128() else D29();
  L36(r109):
    sst bad_imports = r109;
    goto L37(r109);
  L94():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    class = ldf class in base;
    r50 = dyn class(pkg1);
    check L95() else D18();
  L96():
    goto L11(r51);
  L104():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    class1 = ldf class in base;
    r59 = dyn class1(pkg3);
    check L105() else D21();
  L106():
    goto L16(r60);
  L108():
    mc4 = ld mc;
    check L110() else D23();
  L109():
    r62 = dyn base11(<lang `<-`(co, `$`(mc, character.only))>);
    goto L19(c31, r62);
  L116():
    isFALSE = ldf isFALSE;
    check L117() else D24();
  L124():
    pkg4 = ld pkg;
    check L126() else D27();
  L125():
    r70 = dyn base12(<sym pkg>);
    goto L23(r70);
  L152():
    goto L32(r97);
  L163():
    bad_imports2 = ld bad_imports;
    check L165() else D49();
  L164():
    r108 = dyn base16(<sym bad_imports>, <sym pkg>);
    goto L36(r108);
  L176():
    goto L39(c65, r116);
  L180():
    c78 = `as.logical`(r123);
    c79 = `||`(c74, c78);
    goto L40(c79);
  L183():
    p23 = prom<V +>{
      __6 = ldf `::`;
      r124 = dyn __6("utils", "data");
      return r124;
    };
    p24 = prom<V +>{
      e27 = ld e;
      e28 = force? e27;
      checkMissing(e28);
      return e28;
    };
    r127 = dyn match_call1(p23, p24);
    check L184() else D59();
  D18():
    deopt 70 [r50];
  D21():
    deopt 94 [r59];
  D23():
    deopt 107 [c31, mc4];
  D24():
    deopt 115 [c46];
  D27():
    deopt 130 [pkg4];
  D29():
    deopt 136 [];
  D49():
    deopt 200 [bad_imports2];
  D59():
    deopt 233 [r127];
  L21():
    goto L15();
  L95():
    goto L12(r50);
  L105():
    goto L17(r59);
  L110():
    mc5 = force? mc4;
    checkMissing(mc5);
    c37 = `is.object`(mc5);
    if c37 then L112() else L113(c31, mc5);
  L117():
    p9 = prom<V +>{
      co = ld co;
      co1 = force? co;
      checkMissing(co1);
      return co1;
    };
    r67 = dyn isFALSE(p9);
    check L118() else D25();
  L120():
    st dunno = TRUE;
    goto L15();
  L126():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    as_character = ldf `as.character` in base;
    r72 = dyn as_character(pkg5);
    check L127() else D28();
  L128():
    p10 = prom<V +>{
      pkg6 = ld pkg;
      pkg7 = force? pkg6;
      checkMissing(pkg7);
      return pkg7;
    };
    p11 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r75):
      return r75;
    L1():
      depends_suggests = ld depends_suggests;
      depends_suggests1 = force? depends_suggests;
      checkMissing(depends_suggests1);
      common_names = ld common_names;
      common_names1 = force? common_names;
      checkMissing(common_names1);
      c54 = ldf c in base;
      r76 = dyn c54(depends_suggests1, common_names1);
      goto L0(r76);
    L2():
      r74 = dyn base13(<sym depends_suggests>, <sym common_names>);
      goto L0(r74);
    };
    r78 = dyn _notin_(p10, p11);
    check L129() else D30();
  L165():
    bad_imports3 = force? bad_imports2;
    checkMissing(bad_imports3);
    pkg16 = ld pkg;
    check L166() else D50();
  L184():
    st mc = r127;
    sym19 = ldf `is.character`;
    base19 = ldf `is.character` in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L185() else L186();
  D25():
    deopt 117 [c46, r67];
  D28():
    deopt 133 [r72];
  D30():
    deopt 139 [r78];
  D50():
    deopt 202 [pkg16];
  L42(r129):
    c84 = `as.logical`(r129);
    if c84 then L192() else L43(c84);
  L111(c41, dx11):
    st co = dx11;
    c42 = `==`(dx11, NULL);
    goto L19(c41, c42);
  L112():
    dr10 = tryDispatchBuiltin.1("$", mc5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L114() else L113(c31, dr10);
  L113(c39, mc7):
    r64 = `$`(mc7, <sym character.only>);
    goto L111(c39, r64);
  L118():
    r68 = `!`(r67);
    c49 = `as.logical`(r68);
    c50 = `&&`(c46, c49);
    goto L20(c50);
  L127():
    goto L23(r72);
  L129():
    c55 = `as.logical`(r78);
    if c55 then L130() else L24();
  L166():
    pkg17 = force? pkg16;
    checkMissing(pkg17);
    c64 = ldf c in base;
    r110 = dyn c64(bad_imports3, pkg17);
    check L167() else D51();
  L185():
    mc8 = ld mc;
    check L187() else D60();
  L186():
    r128 = dyn base19(<lang `<-`(pkg, `$`(mc, package))>);
    goto L42(r128);
  D51():
    deopt 205 [r110];
  D60():
    deopt 236 [mc8];
  L24():
    goto L26(NULL);
  L26(r82):
    goto L27(r82);
  L43(c86):
    c90 = `as.logical`(c86);
    if c90 then L196() else L44();
  L114():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L111(c31, dx10);
  L130():
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L131() else L132();
  L167():
    goto L36(r110);
  L187():
    mc9 = force? mc8;
    checkMissing(mc9);
    c82 = `is.object`(mc9);
    if c82 then L189() else L190(mc9);
  L192():
    _notin_1 = ldf `%notin%`;
    check L193() else D61();
  D61():
    deopt 242 [c84];
  L25(r80):
    sst bad_exprs = r80;
    goto L26(r80);
  L44():
    goto L46(NULL);
  L46(r137):
    goto L29();
  L131():
    bad_exprs = ld bad_exprs;
    check L133() else D31();
  L132():
    r79 = dyn base14(<sym bad_exprs>, <sym pkg>);
    goto L25(r79);
  L188(dx17):
    st pkg = dx17;
    c83 = `is.character`(dx17);
    goto L42(c83);
  L189():
    dr16 = tryDispatchBuiltin.1("$", mc9);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L191() else L190(dr16);
  L190(mc11):
    r130 = `$`(mc11, <sym package>);
    goto L188(r130);
  L193():
    p25 = prom<V +>{
      pkg18 = ld pkg;
      pkg19 = force? pkg18;
      checkMissing(pkg19);
      return pkg19;
    };
    p26 = prom<V +>{
      depends_suggests6 = ld depends_suggests;
      depends_suggests7 = force? depends_suggests6;
      checkMissing(depends_suggests7);
      return depends_suggests7;
    };
    r133 = dyn _notin_1(p25, p26);
    check L194() else D62();
  L196():
    sym20 = ldf c;
    base20 = ldf c in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L197() else L198();
  D31():
    deopt 142 [bad_exprs];
  D62():
    deopt 245 [c84, r133];
  L45(r135):
    sst bad_data = r135;
    goto L46(r135);
  L133():
    bad_exprs1 = force? bad_exprs;
    checkMissing(bad_exprs1);
    pkg8 = ld pkg;
    check L134() else D32();
  L191():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L188(dx16);
  L194():
    c87 = `as.logical`(r133);
    c88 = `&&`(c84, c87);
    goto L43(c88);
  L197():
    bad_data = ld bad_data;
    check L199() else D63();
  L198():
    r134 = dyn base20(<sym bad_data>, <sym pkg>);
    goto L45(r134);
  D32():
    deopt 144 [pkg8];
  D63():
    deopt 249 [bad_data];
  L134():
    pkg9 = force? pkg8;
    checkMissing(pkg9);
    c56 = ldf c in base;
    r81 = dyn c56(bad_exprs1, pkg9);
    check L135() else D33();
  L199():
    bad_data1 = force? bad_data;
    checkMissing(bad_data1);
    pkg20 = ld pkg;
    check L200() else D64();
  D33():
    deopt 147 [r81];
  D64():
    deopt 251 [pkg20];
  L135():
    goto L25(r81);
  L200():
    pkg21 = force? pkg20;
    checkMissing(pkg21);
    c91 = ldf c in base;
    r136 = dyn c91(bad_data1, pkg21);
    check L201() else D65();
  D65():
    deopt 254 [r136];
  L201():
    goto L45(r136);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg deparse:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg r5:V |
    mkenv;
    st x = x;
    deparse = ldf deparse;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn deparse(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    c = `is.object`(r1);
    if c then L3() else L4(r1);
  L0(dx1):
    r5 = `!=`(dx1, "...");
    popenv;
    return r5;
  L3():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, 1);
    goto L0(r4);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}
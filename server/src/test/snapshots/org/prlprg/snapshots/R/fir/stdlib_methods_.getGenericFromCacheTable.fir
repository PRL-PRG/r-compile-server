fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner22362285;
    st `.getGenericFromCacheTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner22362285(name, where, pkg, table) {
  (reg name:*, reg where:*, reg pkg:*, reg table:*) -+> V { var name:*, var where:*, var pkg:*, reg pkg_isMissing:L, reg pkg_orDefault:*, var table:*, reg exists:cls, reg name1:*, reg name2:V, reg p:p(V +), reg table1:*, reg table2:V, reg p1:p(V +), reg r2:V, reg c:L, reg get:cls, reg name3:*, reg name4:V, reg p2:p(V +), reg table3:*, reg table4:V, reg p3:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg value:*, reg value1:V, reg is_list:cls, reg r8:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg pkg1:*, reg pkg2:V, reg nzchar:cls, reg r11:V, reg r12:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg where1:*, reg where2:V, reg c3:L, reg c4:L, reg where3:*, reg where4:V, reg where5:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg name5:*, reg name6:V, reg attr:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg pkg3:*, reg pkg4:V, reg c5:V, reg c6:L, reg getPackageName:cls, reg where6:*, reg where7:V, reg p4:p(V +), reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r23:V, reg r24:V, reg pkg5:*, reg pkg6:V, reg identical:cls, reg r25:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg value2:*, reg value3:V, reg names:cls, reg r28:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg pkg7:*, reg pkg8:V, reg pkgs:*, reg pkgs1:V, reg match:cls, reg r31:V, reg i:*, reg i1:V, reg r32:V, reg c8:L, reg value4:*, reg value5:V, reg c9:L, reg value7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i2:*, reg i3:V, reg __:cls, reg r33:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r36:V, reg r37:V, reg pkgs2:*, reg pkgs3:V, reg match1:cls, reg r38:V, reg i4:*, reg i5:V, reg r39:V, reg c10:L, reg value8:*, reg value9:V, reg c11:L, reg value11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i6:*, reg i7:V, reg __1:cls, reg r40:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r43:V, reg r44:V, reg pkgs4:*, reg pkgs5:V, reg match2:cls, reg r45:V, reg i8:*, reg i9:V, reg r46:V, reg c12:L, reg value12:*, reg value13:V, reg c13:L, reg value15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i10:*, reg i11:V, reg __2:cls, reg r47:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r48:V, reg r49:V, reg pkg9:*, reg pkg10:V, reg nzchar1:cls, reg r50:V, reg c14:L, reg c16:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r51:V, reg c19:L, reg r52:V, reg pkg11:*, reg pkg12:V, reg __3:cls, reg r53:V, reg identical1:cls, reg r54:V, reg r55:V, reg c20:L, reg c21:V, reg c23:L, reg value16:*, reg value17:V |
    mkenv;
    st name = name;
    st where = where;
    pkg_isMissing = missing.0(pkg);
    if pkg_isMissing then L0("") else L0(pkg);
  L0(pkg_orDefault):
    st pkg = pkg_orDefault;
    st table = table;
    exists = ldf exists;
    check L32() else D0();
  D0():
    deopt 1 [];
  L32():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      table1 = ld table;
      table2 = force? table1;
      checkMissing(table2);
      return table2;
    };
    r2 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L33() else D1();
  D1():
    deopt 7 [r2];
  L33():
    c = `as.logical`(r2);
    if c then L34() else L1();
  L1():
    popenv;
    return NULL;
  L34():
    get = ldf get;
    check L35() else D2();
  D2():
    deopt 9 [];
  L35():
    p2 = prom<V +>{
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      return name4;
    };
    p3 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    r5 = dyn get[, envir](p2, p3);
    check L36() else D3();
  D3():
    deopt 13 [r5];
  L36():
    st value = r5;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L37() else L38();
  L2(r7):
    c1 = `as.logical`(r7);
    if c1 then L41() else L3();
  L37():
    value = ld value;
    check L39() else D4();
  L38():
    r6 = dyn base(<sym value>);
    goto L2(r6);
  D4():
    deopt 17 [value];
  L3():
    sym10 = ldf nzchar;
    base10 = ldf nzchar in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L115() else L116();
  L39():
    value1 = force? value;
    checkMissing(value1);
    is_list = ldf `is.list` in base;
    r8 = dyn is_list(value1);
    check L40() else D5();
  L41():
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L42() else L43();
  D5():
    deopt 20 [r8];
  L4(r10):
    r12 = `!`(r10);
    c2 = `as.logical`(r12);
    if c2 then L46() else L5();
  L28(r49):
    c14 = `as.logical`(r49);
    if c14 then L119() else L29(c14);
  L40():
    goto L2(r8);
  L42():
    pkg1 = ld pkg;
    check L44() else D6();
  L43():
    r9 = dyn base1(<sym pkg>);
    goto L4(r9);
  L115():
    pkg9 = ld pkg;
    check L117() else D35();
  L116():
    r48 = dyn base10(<sym pkg>);
    goto L28(r48);
  D6():
    deopt 23 [pkg1];
  D35():
    deopt 151 [pkg9];
  L5():
    goto L15();
  L15():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L71() else L72();
  L29(c16):
    c23 = `as.logical`(c16);
    if c23 then L125() else L31();
  L44():
    pkg2 = force? pkg1;
    checkMissing(pkg2);
    nzchar = ldf nzchar in base;
    r11 = dyn nzchar(pkg2);
    check L45() else D7();
  L46():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L117():
    pkg10 = force? pkg9;
    checkMissing(pkg10);
    nzchar1 = ldf nzchar in base;
    r50 = dyn nzchar1(pkg10);
    check L118() else D36();
  L119():
    sym11 = ldf identical;
    base11 = ldf identical in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L120() else L121();
  D7():
    deopt 26 [r11];
  D36():
    deopt 154 [r50];
  L6(r14):
    c4 = `as.logical`(r14);
    if c4 then L50() else L7();
  L16(r27):
    st pkgs = r27;
    sym7 = ldf match;
    base7 = ldf match in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  L30(c19, r52):
    r55 = `!`(r52);
    c20 = `as.logical`(r55);
    c21 = `&&`(c19, c20);
    goto L29(c21);
  L31():
    value16 = ld value;
    check L127() else D39();
  L45():
    goto L4(r11);
  L47():
    where1 = ld where;
    check L49() else D8();
  L48():
    r13 = dyn base2(<sym where>);
    goto L6(r13);
  L71():
    value2 = ld value;
    check L73() else D17();
  L72():
    r26 = dyn base6(<sym value>);
    goto L16(r26);
  L118():
    goto L28(r50);
  L120():
    pkg11 = ld pkg;
    check L122() else D37();
  L121():
    r51 = dyn base11(<sym pkg>, <lang `@`(value, package)>);
    goto L30(c14, r51);
  L125():
    popenv;
    return NULL;
  D8():
    deopt 29 [where1];
  D17():
    deopt 78 [value2];
  D37():
    deopt 157 [c14, pkg11];
  D39():
    deopt 174 [value16];
  L7():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L8(where5):
    goto L15();
  L17(r30):
    st i = r30;
    i = ld i;
    check L80() else D22();
  L49():
    where2 = force? where1;
    checkMissing(where2);
    c3 = `is.character`(where2);
    goto L6(c3);
  L50():
    where3 = ld where;
    check L51() else D9();
  L73():
    value3 = force? value2;
    checkMissing(value3);
    names = ldf names in base;
    r28 = dyn names(value3);
    check L74() else D18();
  L75():
    pkg7 = ld pkg;
    check L77() else D19();
  L76():
    r29 = dyn base7(<sym pkg>, <sym pkgs>, 0);
    goto L17(r29);
  L122():
    pkg12 = force? pkg11;
    checkMissing(pkg12);
    __3 = ldf `@` in base;
    r53 = dyn __3(<sym value>, <sym package>);
    identical1 = ldf identical in base;
    r54 = dyn identical1(pkg12, r53, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L123() else D38();
  L127():
    value17 = force? value16;
    checkMissing(value17);
    popenv;
    return value17;
  D9():
    deopt 32 [where3];
  D18():
    deopt 81 [r28];
  D19():
    deopt 85 [pkg7];
  D22():
    deopt 94 [i];
  D38():
    deopt 169 [c14, r54];
  L9(r16):
    st pkg = r16;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L57() else L58();
  L51():
    where4 = force? where3;
    checkMissing(where4);
    st pkg = where4;
    goto L8(where4);
  L53():
    name5 = ld name;
    check L55() else D10();
  L54():
    r15 = dyn base3(<sym name>, "package");
    goto L9(r15);
  L74():
    goto L16(r28);
  L77():
    pkg8 = force? pkg7;
    checkMissing(pkg8);
    pkgs = ld pkgs;
    check L78() else D20();
  L80():
    i1 = force? i;
    checkMissing(i1);
    r32 = `>`(i1, 0);
    c8 = `as.logical`(r32);
    if c8 then L81() else L18();
  L123():
    goto L30(c14, r54);
  D10():
    deopt 37 [name5];
  D20():
    deopt 87 [pkgs];
  L10(r19):
    c6 = `as.logical`(r19);
    if c6 then L60() else L11();
  L18():
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L89() else L90();
  L55():
    name6 = force? name5;
    checkMissing(name6);
    attr = ldf attr in base;
    r17 = dyn attr(name6, "package");
    check L56() else D11();
  L57():
    pkg3 = ld pkg;
    check L59() else D12();
  L58():
    r18 = dyn base4(<sym pkg>);
    goto L10(r18);
  L78():
    pkgs1 = force? pkgs;
    checkMissing(pkgs1);
    match = ldf match in base;
    r31 = dyn match(pkg8, pkgs1, 0, NULL);
    check L79() else D21();
  L81():
    value4 = ld value;
    check L82() else D23();
  D11():
    deopt 41 [r17];
  D12():
    deopt 44 [pkg3];
  D21():
    deopt 92 [r31];
  D23():
    deopt 98 [value4];
  L11():
    goto L12();
  L12():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  L21(r37):
    st i = r37;
    i4 = ld i;
    check L93() else D27();
  L56():
    goto L9(r17);
  L59():
    pkg4 = force? pkg3;
    checkMissing(pkg4);
    c5 = `==`(pkg4, NULL);
    goto L10(c5);
  L60():
    getPackageName = ldf getPackageName;
    check L61() else D13();
  L79():
    goto L17(r31);
  L82():
    value5 = force? value4;
    checkMissing(value5);
    c9 = `is.object`(value5);
    if c9 then L83() else L84(value5);
  L89():
    pkgs2 = ld pkgs;
    check L91() else D25();
  L90():
    r36 = dyn base8("methods", <sym pkgs>, 0);
    goto L21(r36);
  D13():
    deopt 48 [];
  D25():
    deopt 109 [pkgs2];
  D27():
    deopt 116 [i4];
  L13(r24):
    c7 = `as.logical`(r24);
    if c7 then L68() else L14();
  L19(dx1):
    popenv;
    return dx1;
  L61():
    p4 = prom<V +>{
      where6 = ld where;
      where7 = force? where6;
      checkMissing(where7);
      return where7;
    };
    r21 = dyn getPackageName(p4, FALSE);
    check L62() else D14();
  L64():
    pkg5 = ld pkg;
    check L66() else D15();
  L65():
    r23 = dyn base5(<sym pkg>, ".GlobalEnv");
    goto L13(r23);
  L83():
    dr = tryDispatchBuiltin.1("[[", value5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L85() else L84(dr);
  L84(value7):
    i2 = ld i;
    check L86() else D24();
  L91():
    pkgs3 = force? pkgs2;
    checkMissing(pkgs3);
    match1 = ldf match in base;
    r38 = dyn match1("methods", pkgs3, 0, NULL);
    check L92() else D26();
  L93():
    i5 = force? i4;
    checkMissing(i5);
    r39 = `>`(i5, 0);
    c10 = `as.logical`(r39);
    if c10 then L94() else L22();
  D14():
    deopt 51 [r21];
  D15():
    deopt 57 [pkg5];
  D24():
    deopt 100 [value7, i2];
  D26():
    deopt 114 [r38];
  L14():
    goto L8(NULL);
  L22():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L102() else L103();
  L62():
    st pkg = r21;
    goto L12();
  L66():
    pkg6 = force? pkg5;
    checkMissing(pkg6);
    identical = ldf identical in base;
    r25 = dyn identical(pkg6, ".GlobalEnv", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L67() else D16();
  L68():
    st pkg = "";
    goto L8("");
  L85():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L86():
    i3 = force? i2;
    __ = ldf `[[` in base;
    r33 = dyn __(value7, i3);
    goto L19(r33);
  L92():
    goto L21(r38);
  L94():
    value8 = ld value;
    check L95() else D28();
  D16():
    deopt 68 [r25];
  D28():
    deopt 120 [value8];
  L25(r44):
    st i = r44;
    i8 = ld i;
    check L106() else D32();
  L67():
    goto L13(r25);
  L95():
    value9 = force? value8;
    checkMissing(value9);
    c11 = `is.object`(value9);
    if c11 then L96() else L97(value9);
  L102():
    pkgs4 = ld pkgs;
    check L104() else D30();
  L103():
    r43 = dyn base9("base", <sym pkgs>, 0);
    goto L25(r43);
  D30():
    deopt 131 [pkgs4];
  D32():
    deopt 138 [i8];
  L23(dx3):
    popenv;
    return dx3;
  L96():
    dr2 = tryDispatchBuiltin.1("[[", value9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L98() else L97(dr2);
  L97(value11):
    i6 = ld i;
    check L99() else D29();
  L104():
    pkgs5 = force? pkgs4;
    checkMissing(pkgs5);
    match2 = ldf match in base;
    r45 = dyn match2("base", pkgs5, 0, NULL);
    check L105() else D31();
  L106():
    i9 = force? i8;
    checkMissing(i9);
    r46 = `>`(i9, 0);
    c12 = `as.logical`(r46);
    if c12 then L107() else L26();
  D29():
    deopt 122 [value11, i6];
  D31():
    deopt 136 [r45];
  L26():
    popenv;
    return NULL;
  L98():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L23(dx2);
  L99():
    i7 = force? i6;
    __1 = ldf `[[` in base;
    r40 = dyn __1(value11, i7);
    goto L23(r40);
  L105():
    goto L25(r45);
  L107():
    value12 = ld value;
    check L108() else D33();
  D33():
    deopt 142 [value12];
  L108():
    value13 = force? value12;
    checkMissing(value13);
    c13 = `is.object`(value13);
    if c13 then L109() else L110(value13);
  L27(dx5):
    popenv;
    return dx5;
  L109():
    dr4 = tryDispatchBuiltin.1("[[", value13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L111() else L110(dr4);
  L110(value15):
    i10 = ld i;
    check L112() else D34();
  D34():
    deopt 144 [value15, i10];
  L111():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L27(dx4);
  L112():
    i11 = force? i10;
    __2 = ldf `[[` in base;
    r47 = dyn __2(value15, i11);
    goto L27(r47);
  }
}
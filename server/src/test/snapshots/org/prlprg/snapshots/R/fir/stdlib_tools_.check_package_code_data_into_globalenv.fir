fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_data_into_globalenv` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg r:cls, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg _find_calls_in_package_code:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg predicate:*, reg predicate1:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg r6:V, reg l:*, reg class__:cls, reg r7:V, reg calls:*, reg calls1:V |
    mkenv;
    st dir = dir;
    r = clos inner3708401697;
    st predicate = r;
    Filter = ldf Filter;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      length = ld length;
      length1 = force? length;
      checkMissing(length1);
      return length1;
    };
    p3 = prom<V +>{
      _find_calls_in_package_code = ldf `.find_calls_in_package_code`;
      p1 = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      p2 = prom<V +>{
        predicate = ld predicate;
        predicate1 = force? predicate;
        checkMissing(predicate1);
        return predicate1;
      };
      r4 = dyn _find_calls_in_package_code[, , recursive](p1, p2, TRUE);
      return r4;
    };
    r6 = dyn Filter(p, p3);
    check L1() else D1();
  D1():
    deopt 7 [r6];
  L1():
    st calls = r6;
    l = ld calls;
    class__ = ldf `class<-`;
    check L2() else D2();
  D2():
    deopt 12 ["check_package_code_data_into_globalenv", l, "check_package_code_data_into_globalenv"];
  L2():
    r7 = dyn class__(l, NULL, "check_package_code_data_into_globalenv");
    check L3() else D3();
  D3():
    deopt 14 ["check_package_code_data_into_globalenv", r7];
  L3():
    st calls = r7;
    calls = ld calls;
    check L4() else D4();
  D4():
    deopt 16 [calls];
  L4():
    calls1 = force? calls;
    checkMissing(calls1);
    popenv;
    return calls1;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c8:L, reg r7:V, reg e3:*, reg e4:V, reg c9:L, reg c11:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c13:L, reg dx1:V, reg __:cls, reg r8:V, reg as_character:cls, reg r9:V, reg length:cls, reg r10:V, reg r11:V, reg c14:L, reg c15:V, reg c17:L, reg c18:V, reg x:*, reg x1:V, reg r12:V, reg c20:L, reg c21:V, reg c23:L, reg e7:*, reg e8:V, reg c24:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg c25:cls, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r21:V, reg r22:V, reg e11:*, reg e12:V, reg names:cls, reg r23:V, reg c26:V, reg r24:V, reg c27:L, reg e13:*, reg e14:V, reg c28:L, reg e16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _notin_:cls, reg nms:*, reg nms1:V, reg p:p(V +), reg tab:*, reg tab1:V, reg p1:p(V +), reg r27:V, reg __1:cls, reg r28:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg e17:*, reg e18:V, reg length1:cls, reg r31:V, reg r32:V, reg c29:L, reg c31:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg c34:L, reg r34:V, reg env:*, reg env1:V, reg c35:V, reg c36:L, reg c37:L, reg c38:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg c45:L, reg c46:L, reg r36:V, reg env2:*, reg env3:V, reg c47:L, reg c48:L, reg c52:L, reg c53:L, reg c54:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r37:V, reg c61:L, reg c62:L, reg c63:L, reg r38:V, reg env4:*, reg env5:V, reg as_character1:cls, reg r39:V, reg r40:V, reg c64:L, reg c65:V, reg c69:L, reg c70:V, reg c73:L, reg c74:L, reg c75:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r41:V, reg c82:L, reg c83:L, reg r42:V, reg env6:*, reg env7:V, reg is_call1:cls, reg r43:V, reg c84:L, reg c88:L, reg c89:L, reg c90:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r44:V, reg c97:L, reg c98:L, reg c99:L, reg r45:V, reg env8:*, reg env9:V, reg c100:L, reg c104:L, reg c105:L, reg c106:L, reg env11:V, reg dr6:V, reg dc3:L, reg dx7:V, reg c110:L, reg c111:L, reg c112:L, reg dx8:V, reg __2:cls, reg r46:V, reg as_character2:cls, reg r47:V, reg r48:V, reg c113:L, reg c114:V, reg c118:L, reg c119:V, reg c122:L, reg c123:V |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L1(c) else L30();
  L26():
    e1 = ld e;
    check L28() else D0();
  L27():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c1):
    c17 = `as.logical`(c1);
    if c17 then L5(c17) else L42();
  L28():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L29() else D1();
  L30():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    r11 = `!=`(r5, 1);
    c14 = `as.logical`(r11);
    c15 = `||`(c5, c14);
    goto L1(c15);
  L5(c18):
    c23 = `as.logical`(c18);
    if c23 then L45() else L6();
  L29():
    goto L0(r2);
  L31():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L32():
    r4 = dyn base1(<lang `<-`(x, as.character(`[[`(e, 1)))>);
    goto L2(c, r4);
  L42():
    x = ld x;
    check L43() else D5();
  D5():
    deopt 24 [c17, x];
  L3(c8, r7):
    st x = r7;
    length = ldf length in base;
    r10 = dyn length(r7);
    check L40() else D4();
  L6():
    e7 = ld e;
    check L48() else D6();
  L33():
    e3 = ld e;
    check L35() else D2();
  L34():
    r6 = dyn base2(<lang `[[`(e, 1)>);
    goto L3(c, r6);
  L43():
    x1 = force? x;
    checkMissing(x1);
    r12 = `!=`(x1, "data");
    c20 = `as.logical`(r12);
    c21 = `||`(c17, c20);
    goto L5(c21);
  L45():
    popenv;
    return FALSE;
  D2():
    deopt 11 [c, e3];
  D4():
    deopt 20 [c8, r10];
  D6():
    deopt 34 [e7];
  L35():
    e4 = force? e3;
    checkMissing(e4);
    c9 = `is.object`(e4);
    if c9 then L36() else L37(c, e4);
  L40():
    goto L2(c8, r10);
  L48():
    e8 = force? e7;
    checkMissing(e8);
    c24 = `is.object`(e8);
    if c24 then L50() else L51(e8);
  L4(c13, dx1):
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(dx1);
    check L39() else D3();
  L36():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(c, dr);
  L37(c11, e6):
    __ = ldf `[[` in base;
    r8 = dyn __(e6, 1);
    goto L4(c11, r8);
  L49(dx3):
    st env = dx3;
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L50():
    dr2 = tryDispatchBuiltin.1("$", e8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(e10):
    r15 = `$`(e10, <sym envir>);
    goto L49(r15);
  D3():
    deopt 17 [c13, r9];
  L8(r17):
    st tab = r17;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(c, dx);
  L39():
    goto L3(c13, r9);
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L49(dx2);
  L53():
    c25 = ldf c in base;
    r18 = dyn c25("package", "lib.loc", "verbose", "envir");
    check L55() else D7();
  L54():
    r16 = dyn base3("package", "lib.loc", "verbose", "envir");
    goto L8(r16);
  D7():
    deopt 45 [r18];
  L9(r20):
    r24 = `!`(r20);
    c27 = `as.logical`(r24);
    if c27 then L62() else L11();
  L55():
    goto L8(r18);
  L56():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L58() else L59();
  L57():
    r19 = dyn base4(<lang `<-`(nms, names(e))>);
    goto L9(r19);
  L10(r22):
    st nms = r22;
    c26 = `==`(r22, NULL);
    goto L9(c26);
  L11():
    goto L13();
  L13():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L70() else L71();
  L58():
    e11 = ld e;
    check L60() else D8();
  L59():
    r21 = dyn base5(<sym e>);
    goto L10(r21);
  L62():
    e13 = ld e;
    check L63() else D10();
  D8():
    deopt 50 [e11];
  D10():
    deopt 57 [e13];
  L14(r30):
    r32 = `>`(r30, 1);
    c29 = `as.logical`(r32);
    if c29 then L74() else L15(c29);
  L60():
    e12 = force? e11;
    checkMissing(e12);
    names = ldf names in base;
    r23 = dyn names(e12);
    check L61() else D9();
  L63():
    e14 = force? e13;
    checkMissing(e14);
    c28 = `is.object`(e14);
    if c28 then L64() else L65(e14);
  L70():
    e17 = ld e;
    check L72() else D13();
  L71():
    r29 = dyn base6(<sym e>);
    goto L14(r29);
  D9():
    deopt 53 [r23];
  D13():
    deopt 70 [e17];
  L12(dx5):
    st e = dx5;
    goto L13();
  L15(c31):
    visible.0();
    popenv;
    return c31;
  L61():
    goto L10(r23);
  L64():
    dr4 = tryDispatchBuiltin.1("[", e14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L66() else L65(dr4);
  L65(e16):
    _notin_ = ldf `%notin%`;
    check L67() else D11();
  L72():
    e18 = force? e17;
    checkMissing(e18);
    length1 = ldf length in base;
    r31 = dyn length1(e18);
    check L73() else D14();
  L74():
    sym7 = ldf `is.null`;
    base7 = ldf `is.null` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L75() else L76();
  D11():
    deopt 60 [e16];
  D14():
    deopt 73 [r31];
  L16(c34, r34):
    c36 = `as.logical`(r34);
    if c36 then L17(c34, c36) else L78();
  L66():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L12(dx4);
  L67():
    p = prom<V +>{
      nms = ld nms;
      nms1 = force? nms;
      checkMissing(nms1);
      return nms1;
    };
    p1 = prom<V +>{
      tab = ld tab;
      tab1 = force? tab;
      checkMissing(tab1);
      return tab1;
    };
    r27 = dyn _notin_(p, p1);
    check L68() else D12();
  L73():
    goto L14(r31);
  L75():
    env = ld env;
    check L77() else D15();
  L76():
    r33 = dyn base7(<sym env>);
    goto L16(c29, r33);
  D12():
    deopt 63 [e16, r27];
  D15():
    deopt 77 [c29, env];
  L17(c37, c38):
    c73 = `as.logical`(c38);
    if c73 then L21(c37, c73) else L89();
  L68():
    __1 = ldf `[` in base;
    r28 = dyn __1(e16, r27);
    goto L12(r28);
  L77():
    env1 = force? env;
    checkMissing(env1);
    c35 = `==`(env1, NULL);
    goto L16(c29, c35);
  L78():
    sym8 = ldf `is.name`;
    base8 = ldf `is.name` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L79() else L80();
  L18(c45, c46, r36):
    c48 = `as.logical`(r36);
    if c48 then L82() else L19(c45, c46, c48);
  L21(c74, c75):
    c122 = `as.logical`(c75);
    c123 = `&&`(c74, c122);
    goto L15(c123);
  L79():
    env2 = ld env;
    check L81() else D16();
  L80():
    r35 = dyn base8(<sym env>);
    goto L18(c34, c36, r35);
  L89():
    sym10 = ldf `is.call`;
    base10 = ldf `is.call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L90() else L91();
  D16():
    deopt 81 [c34, c36, env2];
  L19(c52, c53, c54):
    c69 = `as.logical`(c54);
    c70 = `||`(c53, c69);
    goto L17(c52, c70);
  L22(c82, c83, r42):
    c84 = `as.logical`(r42);
    if c84 then L94() else L23(c82, c83, c84);
  L81():
    env3 = force? env2;
    checkMissing(env3);
    c47 = `is.symbol`(env3);
    goto L18(c34, c36, c47);
  L82():
    sym9 = ldf `as.character`;
    base9 = ldf `as.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L83() else L84();
  L90():
    env6 = ld env;
    check L92() else D19();
  L91():
    r41 = dyn base10(<sym env>);
    goto L22(c37, c73, r41);
  D19():
    deopt 96 [c37, c73, env6];
  L20(c61, c62, c63, r38):
    r40 = `==`(r38, ".GlobalEnv");
    c64 = `as.logical`(r40);
    c65 = `&&`(c63, c64);
    goto L19(c61, c62, c65);
  L23(c88, c89, c90):
    c118 = `as.logical`(c90);
    c119 = `||`(c89, c118);
    goto L21(c88, c119);
  L83():
    env4 = ld env;
    check L85() else D17();
  L84():
    r37 = dyn base9(<sym env>);
    goto L20(c45, c46, c48, r37);
  L92():
    env7 = force? env6;
    checkMissing(env7);
    is_call1 = ldf `is.call` in base;
    r43 = dyn is_call1(env7);
    check L93() else D20();
  L94():
    sym11 = ldf `as.character`;
    base11 = ldf `as.character` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L95() else L96();
  D17():
    deopt 86 [c45, c46, c48, env4];
  D20():
    deopt 99 [c37, c73, r43];
  L24(c97, c98, c99, r45):
    r48 = `==`(r45, "globalenv");
    c113 = `as.logical`(r48);
    c114 = `&&`(c99, c113);
    goto L23(c97, c98, c114);
  L85():
    env5 = force? env4;
    checkMissing(env5);
    as_character1 = ldf `as.character` in base;
    r39 = dyn as_character1(env5);
    check L86() else D18();
  L93():
    goto L22(c37, c73, r43);
  L95():
    env8 = ld env;
    check L97() else D21();
  L96():
    r44 = dyn base11(<lang `[[`(env, 1)>);
    goto L24(c82, c83, c84, r44);
  D18():
    deopt 89 [c45, c46, c48, r39];
  D21():
    deopt 102 [c82, c83, c84, env8];
  L86():
    goto L20(c45, c46, c48, r39);
  L97():
    env9 = force? env8;
    checkMissing(env9);
    c100 = `is.object`(env9);
    if c100 then L98() else L99(c82, c83, c84, env9);
  L25(c110, c111, c112, dx8):
    as_character2 = ldf `as.character` in base;
    r47 = dyn as_character2(dx8);
    check L101() else D22();
  L98():
    dr6 = tryDispatchBuiltin.1("[[", env9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L100() else L99(c82, c83, c84, dr6);
  L99(c104, c105, c106, env11):
    __2 = ldf `[[` in base;
    r46 = dyn __2(env11, 1);
    goto L25(c104, c105, c106, r46);
  D22():
    deopt 108 [c110, c111, c112, r47];
  L100():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L25(c82, c83, c84, dx7);
  L101():
    goto L24(c110, c111, c112, r47);
  }
}
fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_assign_to_globalenv` = r;
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
    deopt 12 ["check_package_code_assign_to_globalenv", l, "check_package_code_assign_to_globalenv"];
  L2():
    r7 = dyn class__(l, NULL, "check_package_code_assign_to_globalenv");
    check L3() else D3();
  D3():
    deopt 14 ["check_package_code_assign_to_globalenv", r7];
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
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c8:L, reg r7:V, reg e3:*, reg e4:V, reg c9:L, reg c11:L, reg e6:V, reg dr:V, reg dc:L, reg dx:V, reg c13:L, reg dx1:V, reg __:cls, reg r8:V, reg as_character:cls, reg r9:V, reg length:cls, reg r10:V, reg r11:V, reg c14:L, reg c15:V, reg c17:L, reg c18:V, reg x:*, reg x1:V, reg r12:V, reg c20:L, reg c21:V, reg c23:L, reg e7:*, reg e8:V, reg c24:L, reg e10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg e13:V, reg r16:V, reg e14:*, reg e15:V, reg as_character1:cls, reg r17:V, reg r18:V, reg __1:cls, reg r19:V, reg tryCatch:cls, reg match_call:cls, reg __2:cls, reg r20:V, reg p:p(V +), reg e16:*, reg e17:V, reg p1:p(V +), reg r23:V, reg p2:p(V +), reg identity:*, reg identity1:V, reg p3:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg mc:*, reg mc1:V, reg inherits:cls, reg r29:V, reg c25:L, reg c26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg c30:L, reg r31:V, reg mc2:*, reg mc3:V, reg c31:L, reg c33:L, reg mc5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c35:L, reg dx5:V, reg r32:V, reg identical:cls, reg r33:V, reg c36:L, reg c37:V, reg c39:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg mc6:*, reg mc7:V, reg c40:L, reg mc9:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r38:V, reg c41:V, reg r39:V, reg c42:L, reg c44:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r40:V, reg c47:L, reg r41:V, reg tryCatch1:cls, reg eval:cls, reg env:*, reg env1:V, reg p4:p(V +), reg r43:V, reg p5:p(V +), reg identity2:*, reg identity3:V, reg p6:p(V +), reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg c50:L, reg r48:V, reg globalenv:cls, reg r49:V, reg identical1:cls, reg r50:V, reg c51:L, reg c52:V, reg c54:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r53:V, reg r54:V, reg mc10:*, reg mc11:V, reg c55:L, reg mc13:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r55:V, reg c56:V, reg r56:V, reg c57:L, reg c59:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg c62:L, reg r58:V, reg tryCatch2:cls, reg eval1:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r59:V, reg r60:V, reg call:cls, reg r61:V, reg p7:p(V +), reg r63:V, reg p8:p(V +), reg identity4:*, reg identity5:V, reg p9:p(V +), reg r66:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r67:V, reg c65:L, reg r68:V, reg globalenv1:cls, reg r69:V, reg identical2:cls, reg r70:V, reg c66:L, reg c67:V, reg c69:L |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L1(c) else L31();
  L27():
    e1 = ld e;
    check L29() else D0();
  L28():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c1):
    c17 = `as.logical`(c1);
    if c17 then L5(c17) else L43();
  L29():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L30() else D1();
  L31():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  D1():
    deopt 5 [r2];
  L2(c5, r5):
    r11 = `!=`(r5, 1);
    c14 = `as.logical`(r11);
    c15 = `||`(c5, c14);
    goto L1(c15);
  L5(c18):
    c23 = `as.logical`(c18);
    if c23 then L46() else L6();
  L30():
    goto L0(r2);
  L32():
    sym2 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L34() else L35();
  L33():
    r4 = dyn base1(<lang `<-`(x, as.character(`[[`(e, 1)))>);
    goto L2(c, r4);
  L43():
    x = ld x;
    check L44() else D5();
  D5():
    deopt 24 [c17, x];
  L3(c8, r7):
    st x = r7;
    length = ldf length in base;
    r10 = dyn length(r7);
    check L41() else D4();
  L6():
    e7 = ld e;
    check L49() else D6();
  L34():
    e3 = ld e;
    check L36() else D2();
  L35():
    r6 = dyn base2(<lang `[[`(e, 1)>);
    goto L3(c, r6);
  L44():
    x1 = force? x;
    checkMissing(x1);
    r12 = `!=`(x1, "assign");
    c20 = `as.logical`(r12);
    c21 = `||`(c17, c20);
    goto L5(c21);
  L46():
    popenv;
    return FALSE;
  D2():
    deopt 11 [c, e3];
  D4():
    deopt 20 [c8, r10];
  D6():
    deopt 34 [e7];
  L36():
    e4 = force? e3;
    checkMissing(e4);
    c9 = `is.object`(e4);
    if c9 then L37() else L38(c, e4);
  L41():
    goto L2(c8, r10);
  L49():
    e8 = force? e7;
    checkMissing(e8);
    c24 = `is.object`(e8);
    if c24 then L50() else L51(e8);
  L4(c13, dx1):
    as_character = ldf `as.character` in base;
    r9 = dyn as_character(dx1);
    check L40() else D3();
  L8(dx3):
    st e = dx3;
    tryCatch = ldf tryCatch;
    check L57() else D9();
  L37():
    dr = tryDispatchBuiltin.1("[[", e4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L39() else L38(c, dr);
  L38(c11, e6):
    __ = ldf `[[` in base;
    r8 = dyn __(e6, 1);
    goto L4(c11, r8);
  L50():
    dr2 = tryDispatchBuiltin.1("[", e8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(e10):
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  D3():
    deopt 17 [c13, r9];
  D9():
    deopt 47 [];
  L9(e13, r16):
    r18 = `!=`(r16, "...");
    __1 = ldf `[` in base;
    r19 = dyn __1(e13, r18);
    goto L8(r19);
  L39():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(c, dx);
  L40():
    goto L3(c13, r9);
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L53():
    e14 = ld e;
    check L55() else D7();
  L54():
    r15 = dyn base3(<sym e>);
    goto L9(e10, r15);
  L57():
    p2 = prom<V +>{
      match_call = ldf `match.call`;
      p = prom<V +>{
        __2 = ldf `::`;
        r20 = dyn __2("base", "assign");
        return r20;
      };
      p1 = prom<V +>{
        e16 = ld e;
        e17 = force? e16;
        checkMissing(e17);
        return e17;
      };
      r23 = dyn match_call(p, p1);
      return r23;
    };
    p3 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r26 = dyn tryCatch[, error](p2, p3);
    check L58() else D10();
  D7():
    deopt 38 [e10, e14];
  D10():
    deopt 51 [r26];
  L55():
    e15 = force? e14;
    checkMissing(e15);
    as_character1 = ldf `as.character` in base;
    r17 = dyn as_character1(e15);
    check L56() else D8();
  L58():
    st mc = r26;
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L59() else L60();
  D8():
    deopt 41 [e10, r17];
  L10(r28):
    c25 = `as.logical`(r28);
    if c25 then L11(c25) else L63();
  L56():
    goto L9(e10, r17);
  L59():
    mc = ld mc;
    check L61() else D11();
  L60():
    r27 = dyn base4(<sym mc>, "error");
    goto L10(r27);
  D11():
    deopt 55 [mc];
  L11(c26):
    c39 = `as.logical`(c26);
    if c39 then L73() else L13();
  L61():
    mc1 = force? mc;
    checkMissing(mc1);
    inherits = ldf inherits in base;
    r29 = dyn inherits(mc1, "error", FALSE);
    check L62() else D12();
  L63():
    sym5 = ldf identical;
    base5 = ldf identical in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L64() else L65();
  D12():
    deopt 60 [r29];
  L12(c30, r31):
    c36 = `as.logical`(r31);
    c37 = `||`(c30, c36);
    goto L11(c37);
  L13():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L76() else L77();
  L62():
    goto L10(r29);
  L64():
    mc2 = ld mc;
    check L66() else D13();
  L65():
    r30 = dyn base5(<lang `$`(mc, x)>, ".Random.seed");
    goto L12(c25, r30);
  L73():
    popenv;
    return FALSE;
  D13():
    deopt 63 [c25, mc2];
  L15(r37):
    r39 = `!`(r37);
    c42 = `as.logical`(r39);
    if c42 then L83() else L16(c42);
  L66():
    mc3 = force? mc2;
    checkMissing(mc3);
    c31 = `is.object`(mc3);
    if c31 then L68() else L69(c25, mc3);
  L76():
    mc6 = ld mc;
    check L78() else D15();
  L77():
    r36 = dyn base6(<lang `<-`(env, `$`(mc, envir))>);
    goto L15(r36);
  D15():
    deopt 83 [mc6];
  L16(c44):
    c54 = `as.logical`(c44);
    if c54 then L93() else L19();
  L67(c35, dx5):
    identical = ldf identical in base;
    r33 = dyn identical(dx5, ".Random.seed", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L71() else D14();
  L68():
    dr4 = tryDispatchBuiltin.1("$", mc3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L70() else L69(c25, dr4);
  L69(c33, mc5):
    r32 = `$`(mc5, <sym x>);
    goto L67(c33, r32);
  L78():
    mc7 = force? mc6;
    checkMissing(mc7);
    c40 = `is.object`(mc7);
    if c40 then L80() else L81(mc7);
  L83():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L84() else L85();
  D14():
    deopt 75 [c35, r33];
  L17(c47, r41):
    c51 = `as.logical`(r41);
    c52 = `&&`(c47, c51);
    goto L16(c52);
  L19():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L70():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L67(c25, dx4);
  L71():
    goto L12(c35, r33);
  L79(dx7):
    st env = dx7;
    c41 = `==`(dx7, NULL);
    goto L15(c41);
  L80():
    dr6 = tryDispatchBuiltin.1("$", mc7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(dr6);
  L81(mc9):
    r38 = `$`(mc9, <sym envir>);
    goto L79(r38);
  L84():
    tryCatch1 = ldf tryCatch;
    check L86() else D16();
  L85():
    r40 = dyn base7(<lang tryCatch(eval(env), error=identity)>, <lang globalenv()>);
    goto L17(c42, r40);
  L93():
    popenv;
    return TRUE;
  D16():
    deopt 92 [c42];
  L21(r54):
    r56 = `!`(r54);
    c57 = `as.logical`(r56);
    if c57 then L103() else L22(c57);
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L79(dx6);
  L86():
    p5 = prom<V +>{
      eval = ldf eval;
      p4 = prom<V +>{
        env = ld env;
        env1 = force? env;
        checkMissing(env1);
        return env1;
      };
      r43 = dyn eval(p4);
      return r43;
    };
    p6 = prom<V +>{
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      return identity3;
    };
    r46 = dyn tryCatch1[, error](p5, p6);
    check L87() else D17();
  L96():
    mc10 = ld mc;
    check L98() else D20();
  L97():
    r53 = dyn base9(<lang `<-`(pos, `$`(mc, pos))>);
    goto L21(r53);
  D17():
    deopt 96 [c42, r46];
  D20():
    deopt 117 [mc10];
  L22(c59):
    c69 = `as.logical`(c59);
    if c69 then L113() else L25();
  L87():
    sym8 = ldf globalenv;
    base8 = ldf globalenv in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  L98():
    mc11 = force? mc10;
    checkMissing(mc11);
    c55 = `is.object`(mc11);
    if c55 then L100() else L101(mc11);
  L103():
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L104() else L105();
  L18(c50, r48):
    identical1 = ldf identical in base;
    r50 = dyn identical1(r46, r48, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L91() else D19();
  L23(c62, r58):
    c66 = `as.logical`(r58);
    c67 = `&&`(c62, c66);
    goto L22(c67);
  L25():
    popenv;
    return FALSE;
  L88():
    globalenv = ldf globalenv in base;
    r49 = dyn globalenv();
    check L90() else D18();
  L89():
    r47 = dyn base8();
    goto L18(c42, r47);
  L99(dx9):
    st pos = dx9;
    c56 = `==`(dx9, NULL);
    goto L21(c56);
  L100():
    dr8 = tryDispatchBuiltin.1("$", mc11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L102() else L101(dr8);
  L101(mc13):
    r55 = `$`(mc13, <sym pos>);
    goto L99(r55);
  L104():
    tryCatch2 = ldf tryCatch;
    check L106() else D21();
  L105():
    r57 = dyn base10(<lang tryCatch(eval(call("as.environment", pos)), error=identity)>, <lang globalenv()>);
    goto L23(c57, r57);
  L113():
    popenv;
    return TRUE;
  D18():
    deopt 100 [c42, r49];
  D19():
    deopt 109 [c50, r50];
  D21():
    deopt 126 [c57];
  L90():
    goto L18(c42, r49);
  L91():
    goto L17(c50, r50);
  L102():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L99(dx8);
  L106():
    p8 = prom<V +>{
      eval1 = ldf eval;
      p7 = prom<V +>{
        sym11 = ldf call;
        base11 = ldf call in base;
        guard11 = `==`.4(sym11, base11);
        if guard11 then L1() else L2();
      L0(r60):
        return r60;
      L1():
        call = ldf call in base;
        r61 = dyn call("as.environment", <sym pos>);
        goto L0(r61);
      L2():
        r59 = dyn base11("as.environment", <sym pos>);
        goto L0(r59);
      };
      r63 = dyn eval1(p7);
      return r63;
    };
    p9 = prom<V +>{
      identity4 = ld identity;
      identity5 = force? identity4;
      checkMissing(identity5);
      return identity5;
    };
    r66 = dyn tryCatch2[, error](p8, p9);
    check L107() else D22();
  D22():
    deopt 130 [c57, r66];
  L107():
    sym12 = ldf globalenv;
    base12 = ldf globalenv in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L108() else L109();
  L24(c65, r68):
    identical2 = ldf identical in base;
    r70 = dyn identical2(r66, r68, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L111() else D24();
  L108():
    globalenv1 = ldf globalenv in base;
    r69 = dyn globalenv1();
    check L110() else D23();
  L109():
    r67 = dyn base12();
    goto L24(c57, r67);
  D23():
    deopt 134 [c57, r69];
  D24():
    deopt 143 [c65, r70];
  L110():
    goto L24(c57, r69);
  L111():
    goto L23(c65, r70);
  }
}
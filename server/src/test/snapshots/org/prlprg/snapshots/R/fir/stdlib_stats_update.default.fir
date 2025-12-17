fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2424956287;
    st `update.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2424956287(object, `formula.`, `...`, evaluate) {
  (reg object:*, reg formula_:*, reg ddd:dots, reg evaluate:*) -+> V { var object:*, var `formula.`:*, var `...`:dots?, var evaluate:*, reg evaluate_isMissing:L, reg evaluate_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getCall:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r3:V, reg c:V, reg c1:L, reg stop:cls, reg r4:V, reg __:cls, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg r10:V, reg c2:L, reg update:cls, reg formula:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg formula_1:*, reg formula_2:V, reg p3:p(V +), reg r15:V, reg l:*, reg c3:L, reg r17:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg r19:V, reg dx1:V, reg r20:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg extras:*, reg extras1:V, reg length:cls, reg r24:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg extras2:*, reg extras3:V, reg names:cls, reg r31:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r32:V, reg r33:V, reg call:*, reg call1:V, reg names1:cls, reg r34:V, reg match:cls, reg r35:V, reg is_na:cls, reg r36:V, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r38:V, reg r39:V, reg extras4:*, reg extras5:V, reg names2:cls, reg r40:V, reg c5:L, reg r42:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg existing:*, reg existing1:V, reg __1:cls, reg r43:V, reg s:V, reg l3:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg extras6:*, reg extras7:V, reg c7:L, reg i6:I, reg extras9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg a:*, reg a1:V, reg __2:cls, reg r44:V, reg l4:*, reg c8:L, reg i10:I, reg dx7:V, reg l6:*, reg dr6:V, reg dc3:L, reg dx9:V, reg i12:I, reg dx11:V, reg a2:*, reg a3:V, reg ____:cls, reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg existing2:*, reg existing3:V, reg r48:V, reg any:cls, reg r49:V, reg c9:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg r51:V, reg as_list:cls, reg call2:*, reg call3:V, reg p4:p(V +), reg r53:V, reg extras10:*, reg extras11:V, reg c10:L, reg extras13:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg existing4:*, reg existing5:V, reg r54:V, reg __3:cls, reg r55:V, reg c11:cls, reg r56:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r57:V, reg r58:V, reg call4:*, reg call5:V, reg as_call:cls, reg r59:V, reg r60:V, reg evaluate1:*, reg evaluate2:V, reg c12:L, reg eval:cls, reg call6:*, reg call7:V, reg p5:p(V +), reg parent_frame:cls, reg r63:V, reg p6:p(V +), reg r65:V, reg call8:*, reg call9:V |
    mkenv;
    st object = object;
    st `formula.` = formula_;
    st `...` = ddd;
    evaluate_isMissing = missing.0(evaluate);
    if evaluate_isMissing then L0(TRUE) else L0(evaluate);
  L0(evaluate_orDefault):
    st evaluate = evaluate_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L27() else L28();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L31() else L2();
  L27():
    getCall = ldf getCall;
    check L29() else D0();
  L28():
    r = dyn base(<lang `<-`(call, getCall(object))>);
    goto L1(r);
  D0():
    deopt 2 [];
  L2():
    goto L3();
  L3():
    __ = ldf `$` in base;
    r6 = dyn __(<lang match.call(expand.dots=FALSE)>, <sym ...>);
    st extras = r6;
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L35() else L36();
  L29():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r3 = dyn getCall(p);
    check L30() else D1();
  L31():
    stop = ldf stop;
    check L32() else D2();
  D1():
    deopt 4 [r3];
  D2():
    deopt 8 [];
  L4(r8):
    r10 = `!`(r8);
    c2 = `as.logical`(r10);
    if c2 then L37() else L5();
  L30():
    st call = r3;
    c = `==`(r3, NULL);
    goto L1(c);
  L32():
    r4 = dyn stop("need an object with call component");
    check L33() else D3();
  L35():
    missing = ldf missing in base;
    r9 = dyn missing(<sym formula.>);
    goto L4(r9);
  L36():
    r7 = dyn base1(<sym formula.>);
    goto L4(r7);
  D3():
    deopt 10 [r4];
  L5():
    goto L6();
  L6():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L33():
    goto L3();
  L37():
    update = ldf update;
    check L38() else D4();
  D4():
    deopt 21 [];
  L7(r23):
    c4 = `as.logical`(r23);
    if c4 then L49() else L8();
  L38():
    p2 = prom<V +>{
      formula = ldf formula;
      p1 = prom<V +>{
        object3 = ld object;
        object4 = force? object3;
        checkMissing(object4);
        return object4;
      };
      r12 = dyn formula(p1);
      return r12;
    };
    p3 = prom<V +>{
      formula_1 = ld `formula.`;
      formula_2 = force? formula_1;
      checkMissing(formula_2);
      return formula_2;
    };
    r15 = dyn update(p2, p3);
    check L39() else D5();
  L45():
    extras = ld extras;
    check L47() else D6();
  L46():
    r22 = dyn base2(<sym extras>);
    goto L7(r22);
  D5():
    deopt 24 [r15];
  D6():
    deopt 32 [extras];
  L8():
    goto L25();
  L25():
    evaluate1 = ld evaluate;
    check L103() else D29();
  L39():
    l = ld call;
    c3 = `is.object`(l);
    if c3 then L41() else L42(r15, l);
  L47():
    extras1 = force? extras;
    checkMissing(extras1);
    length = ldf length in base;
    r24 = dyn length(extras1);
    check L48() else D7();
  L49():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  D7():
    deopt 35 [r24];
  D29():
    deopt 115 [evaluate1];
  L9(r26):
    r37 = `!`(r26);
    st existing = r37;
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  L40(r19, dx1):
    st call = dx1;
    goto L6();
  L41():
    dr = tryDispatchBuiltin.0("$<-", l, r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(r15, dr);
  L42(r17, l2):
    r20 = `$<-`(l2, <sym formula>, r15);
    goto L40(r17, r20);
  L48():
    goto L7(r24);
  L50():
    sym4 = ldf match;
    base4 = ldf match in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L51():
    r25 = dyn base3(<lang match(names(extras), names(call))>);
    goto L9(r25);
  L103():
    evaluate2 = force? evaluate1;
    checkMissing(evaluate2);
    c12 = `as.logical`(evaluate2);
    if c12 then L104() else L26();
  L10(r28):
    is_na = ldf `is.na` in base;
    r36 = dyn is_na(r28);
    check L63() else D13();
  L13(r39):
    c5 = `is.object`(r39);
    if c5 then L68() else L69(r39);
  L26():
    call8 = ld call;
    check L108() else D32();
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L40(r15, dx);
  L52():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L53():
    r27 = dyn base4(<lang names(extras)>, <lang names(call)>);
    goto L10(r27);
  L64():
    extras4 = ld extras;
    check L66() else D14();
  L65():
    r38 = dyn base7(<sym extras>);
    goto L13(r38);
  L104():
    eval = ldf eval;
    check L105() else D30();
  D13():
    deopt 57 [r36];
  D14():
    deopt 62 [extras4];
  D30():
    deopt 118 [];
  D32():
    deopt 122 [call8];
  L11(r30):
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L14(dx3):
    s = toForSeq(dx3);
    l3 = length(s);
    i = 0;
    goto L15(i);
  L54():
    extras2 = ld extras;
    check L56() else D8();
  L55():
    r29 = dyn base5(<sym extras>);
    goto L11(r29);
  L63():
    goto L9(r36);
  L66():
    extras5 = force? extras4;
    checkMissing(extras5);
    names2 = ldf names in base;
    r40 = dyn names2(extras5);
    check L67() else D15();
  L68():
    dr2 = tryDispatchBuiltin.1("[", r39);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L70() else L69(dr2);
  L69(r42):
    existing = ld existing;
    check L71() else D16();
  L105():
    p5 = prom<V +>{
      call6 = ld call;
      call7 = force? call6;
      checkMissing(call7);
      return call7;
    };
    p6 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r63 = dyn parent_frame();
      return r63;
    };
    r65 = dyn eval(p5, p6);
    check L106() else D31();
  L108():
    call9 = force? call8;
    checkMissing(call9);
    popenv;
    return call9;
  D8():
    deopt 42 [extras2];
  D15():
    deopt 65 [r40];
  D16():
    deopt 66 [r42, existing];
  D31():
    deopt 121 [r65];
  L12(r33):
    match = ldf match in base;
    r35 = dyn match(r30, r33, NA_INT, NULL);
    check L62() else D12();
  L15(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l3, i2);
    if c6 then L72() else L18();
  L56():
    extras3 = force? extras2;
    checkMissing(extras3);
    names = ldf names in base;
    r31 = dyn names(extras3);
    check L57() else D9();
  L58():
    call = ld call;
    check L60() else D10();
  L59():
    r32 = dyn base6(<sym call>);
    goto L12(r32);
  L67():
    goto L13(r40);
  L70():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L14(dx2);
  L71():
    existing1 = force? existing;
    __1 = ldf `[` in base;
    r43 = dyn __1(r42, existing1);
    goto L14(r43);
  L106():
    popenv;
    return r65;
  D9():
    deopt 45 [r31];
  D10():
    deopt 48 [call];
  D12():
    deopt 55 [r35];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st a = x;
    extras6 = ld extras;
    check L73() else D17();
  L57():
    goto L11(r31);
  L60():
    call1 = force? call;
    checkMissing(call1);
    names1 = ldf names in base;
    r34 = dyn names1(call1);
    check L61() else D11();
  L62():
    goto L10(r35);
  L72():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L82() else L83();
  D11():
    deopt 51 [r34];
  D17():
    deopt 69 [i2, extras6];
  L19(r47):
    c9 = `as.logical`(r47);
    if c9 then L86() else L20();
  L61():
    goto L12(r34);
  L73():
    extras7 = force? extras6;
    checkMissing(extras7);
    c7 = `is.object`(extras7);
    if c7 then L74() else L75(i2, extras7);
  L82():
    existing2 = ld existing;
    check L84() else D20();
  L83():
    r46 = dyn base8(<lang `!`(existing)>);
    goto L19(r46);
  D20():
    deopt 84 [existing2];
  L16(i8, dx5):
    l4 = ld call;
    c8 = `is.object`(l4);
    if c8 then L78() else L79(i8, dx5, l4);
  L20():
    goto L24(NULL);
  L24(r60):
    goto L25();
  L74():
    dr4 = tryDispatchBuiltin.1("[[", extras7);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L76() else L75(i2, dr4);
  L75(i6, extras9):
    a = ld a;
    check L77() else D18();
  L84():
    existing3 = force? existing2;
    checkMissing(existing3);
    r48 = `!`(existing3);
    any = ldf any in base;
    r49 = dyn any(r48);
    check L85() else D21();
  L86():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L87() else L88();
  D18():
    deopt 71 [i6, extras9, a];
  D21():
    deopt 88 [r49];
  L17(i12, dx11):
    st call = dx11;
    goto L15(i12);
  L21(r51):
    st call = r51;
    sym10 = ldf `as.call`;
    base10 = ldf `as.call` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L97() else L98();
  L76():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L16(i2, dx4);
  L77():
    a1 = force? a;
    __2 = ldf `[[` in base;
    r44 = dyn __2(extras9, a1);
    goto L16(i6, r44);
  L78():
    dr6 = tryDispatchBuiltin.0("[[<-", l4, dx5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L80() else L79(i8, dx5, dr6);
  L79(i10, dx7, l6):
    a2 = ld a;
    check L81() else D19();
  L85():
    goto L19(r49);
  L87():
    as_list = ldf `as.list`;
    check L89() else D22();
  L88():
    r50 = dyn base9(<lang as.list(call)>, <lang `[`(extras, `!`(existing))>);
    goto L21(r50);
  D19():
    deopt 75 [i10, dx7, l6, dx5, a2];
  D22():
    deopt 92 [];
  L23(r58):
    st call = r58;
    goto L24(r58);
  L80():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L17(i8, dx9);
  L81():
    a3 = force? a2;
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l6, dx5, a3);
    goto L17(i10, r45);
  L89():
    p4 = prom<V +>{
      call2 = ld call;
      call3 = force? call2;
      checkMissing(call3);
      return call3;
    };
    r53 = dyn as_list(p4);
    check L90() else D23();
  L97():
    call4 = ld call;
    check L99() else D27();
  L98():
    r57 = dyn base10(<sym call>);
    goto L23(r57);
  D23():
    deopt 94 [r53];
  D27():
    deopt 106 [call4];
  L90():
    extras10 = ld extras;
    check L91() else D24();
  L99():
    call5 = force? call4;
    checkMissing(call5);
    as_call = ldf `as.call` in base;
    r59 = dyn as_call(call5);
    check L100() else D28();
  D24():
    deopt 95 [extras10];
  D28():
    deopt 109 [r59];
  L91():
    extras11 = force? extras10;
    checkMissing(extras11);
    c10 = `is.object`(extras11);
    if c10 then L92() else L93(extras11);
  L100():
    goto L23(r59);
  L22(dx13):
    c11 = ldf c in base;
    r56 = dyn c11(r53, dx13);
    check L96() else D26();
  L92():
    dr8 = tryDispatchBuiltin.1("[", extras11);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L94() else L93(dr8);
  L93(extras13):
    existing4 = ld existing;
    check L95() else D25();
  D25():
    deopt 97 [extras13, existing4];
  D26():
    deopt 102 [r56];
  L94():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L22(dx12);
  L95():
    existing5 = force? existing4;
    checkMissing(existing5);
    r54 = `!`(existing5);
    __3 = ldf `[` in base;
    r55 = dyn __3(extras13, r54);
    goto L22(r55);
  L96():
    goto L21(r56);
  }
}
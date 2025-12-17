fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner567080220;
    st contrasts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner567080220(x, contrasts, sparse) {
  (reg x:*, reg contrasts:*, reg sparse:*) -+> V { var x:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var sparse:*, reg sparse_isMissing:L, reg sparse_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg factor:cls, reg x3:*, reg x4:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c2:cls, reg r5:V, reg p1:p(V +), reg r7:V, reg is_factor:cls, reg x5:*, reg x6:V, reg p2:p(V +), reg r10:V, reg r11:V, reg c3:L, reg stop:cls, reg r12:V, reg contrasts1:*, reg contrasts2:V, reg r14:V, reg c4:L, reg _Diag:cls, reg levels:cls, reg x7:*, reg x8:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg sparse1:*, reg sparse2:V, reg p5:p(V +), reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg x9:*, reg x10:V, reg attr:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg ctr:*, reg ctr1:V, reg c5:V, reg c6:L, reg c7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg c11:L, reg r28:V, reg ctr2:*, reg ctr3:V, reg c12:L, reg c13:L, reg c14:V, reg c16:L, reg NL:*, reg NL1:V, reg c17:L, reg getOption:cls, reg r29:V, reg c18:L, reg r31:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg is_ordered:cls, reg x11:*, reg x12:V, reg p6:p(V +), reg r33:V, reg c19:L, reg r36:V, reg r37:I, reg __:cls, reg r38:V, reg get:cls, reg ctr4:*, reg ctr5:V, reg p7:p(V +), reg parent_frame:cls, reg r40:V, reg p8:p(V +), reg r42:V, reg isTRUE:cls, reg sparse3:*, reg sparse4:V, reg p9:p(V +), reg r44:V, reg c20:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:S, reg r51:V, reg formals:cls, reg ctrfn:*, reg ctrfn1:V, reg p10:p(V +), reg r53:V, reg names:cls, reg r54:V, reg r55:V, reg any:cls, reg r56:V, reg r57:V, reg c21:L, reg warning:cls, reg sprintf:cls, reg ctr6:*, reg ctr7:V, reg p11:p(V +), reg r59:V, reg p12:p(V +), reg r61:V, reg r62:V, reg useSparse:*, reg useSparse1:V, reg c22:L, reg ctrfn2:cls, reg levels1:cls, reg x13:*, reg x14:V, reg p13:p(V +), reg r65:V, reg p14:p(V +), reg contrasts3:*, reg contrasts4:V, reg p15:p(V +), reg sparse5:*, reg sparse6:V, reg p16:p(V +), reg r69:V, reg r70:V, reg ctrfn3:cls, reg levels2:cls, reg x15:*, reg x16:V, reg p17:p(V +), reg r72:V, reg p18:p(V +), reg contrasts5:*, reg contrasts6:V, reg p19:p(V +), reg r75:V, reg ctr8:*, reg ctr9:V |
    mkenv;
    st x = x;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L0(TRUE) else L0(contrasts);
  L0(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    sparse_isMissing = missing.0(sparse);
    if sparse_isMissing then L1(FALSE) else L1(sparse);
  L1(sparse_orDefault):
    st sparse = sparse_orDefault;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L2(r1):
    c1 = `as.logical`(r1);
    if c1 then L31() else L3();
  L28():
    x1 = ld x;
    check L30() else D0();
  L29():
    r = dyn base(<sym x>);
    goto L2(r);
  D0():
    deopt 1 [x1];
  L3():
    goto L4();
  L4():
    is_factor = ldf `is.factor`;
    check L35() else D3();
  L30():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.logical`(x2);
    goto L2(c);
  L31():
    factor = ldf factor;
    check L32() else D1();
  D1():
    deopt 5 [];
  D3():
    deopt 14 [];
  L32():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c2 = ldf c in base;
      r5 = dyn c2(FALSE, TRUE);
      goto L0(r5);
    L2():
      r3 = dyn base1(FALSE, TRUE);
      goto L0(r3);
    };
    r7 = dyn factor[, levels](p, p1);
    check L33() else D2();
  L35():
    p2 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r10 = dyn is_factor(p2);
    check L36() else D4();
  D2():
    deopt 9 [r7];
  D4():
    deopt 16 [r10];
  L33():
    st x = r7;
    goto L4();
  L36():
    r11 = `!`(r10);
    c3 = `as.logical`(r11);
    if c3 then L37() else L5();
  L5():
    goto L6();
  L6():
    contrasts1 = ld contrasts;
    check L41() else D7();
  L37():
    stop = ldf stop;
    check L38() else D5();
  D5():
    deopt 19 [];
  D7():
    deopt 24 [contrasts1];
  L38():
    r12 = dyn stop("contrasts apply only to factors");
    check L39() else D6();
  L41():
    contrasts2 = force? contrasts1;
    checkMissing(contrasts2);
    r14 = `!`(contrasts2);
    c4 = `as.logical`(r14);
    if c4 then L42() else L7();
  D6():
    deopt 21 [r12];
  L7():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L47() else L48();
  L39():
    goto L6();
  L42():
    _Diag = ldf `.Diag`;
    check L43() else D8();
  D8():
    deopt 28 [];
  L9(r23):
    st ctr = r23;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L43():
    p4 = prom<V +>{
      levels = ldf levels;
      p3 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r16 = dyn levels(p3);
      return r16;
    };
    p5 = prom<V +>{
      sparse1 = ld sparse;
      sparse2 = force? sparse1;
      checkMissing(sparse2);
      return sparse2;
    };
    r19 = dyn _Diag[, sparse](p4, p5);
    check L44() else D9();
  L47():
    x9 = ld x;
    check L49() else D10();
  L48():
    r22 = dyn base2(<sym x>, "contrasts");
    goto L9(r22);
  D9():
    deopt 32 [r19];
  D10():
    deopt 38 [x9];
  L10(r26):
    st NL = r26;
    c6 = `as.logical`(r26);
    if c6 then L11(c6) else L54();
  L44():
    popenv;
    return r19;
  L49():
    x10 = force? x9;
    checkMissing(x10);
    attr = ldf attr in base;
    r24 = dyn attr(x10, "contrasts");
    check L50() else D11();
  L51():
    ctr = ld ctr;
    check L53() else D12();
  L52():
    r25 = dyn base3(<sym ctr>);
    goto L10(r25);
  D11():
    deopt 42 [r24];
  D12():
    deopt 45 [ctr];
  L11(c7):
    c16 = `as.logical`(c7);
    if c16 then L59() else L13();
  L50():
    goto L9(r24);
  L53():
    ctr1 = force? ctr;
    checkMissing(ctr1);
    c5 = `==`(ctr1, NULL);
    goto L10(c5);
  L54():
    sym4 = ldf `is.character`;
    base4 = ldf `is.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L12(c11, r28):
    c13 = `as.logical`(r28);
    c14 = `||`(c11, c13);
    goto L11(c14);
  L13():
    goto L27();
  L27():
    ctr8 = ld ctr;
    check L98() else D34();
  L55():
    ctr2 = ld ctr;
    check L57() else D13();
  L56():
    r27 = dyn base4(<sym ctr>);
    goto L12(c6, r27);
  L59():
    NL = ld NL;
    check L60() else D14();
  D13():
    deopt 50 [c6, ctr2];
  D14():
    deopt 54 [NL];
  D34():
    deopt 131 [ctr8];
  L57():
    ctr3 = force? ctr2;
    checkMissing(ctr3);
    c12 = `is.character`(ctr3);
    goto L12(c6, c12);
  L60():
    NL1 = force? NL;
    checkMissing(NL1);
    c17 = `as.logical`(NL1);
    if c17 then L61() else L14();
  L98():
    ctr9 = force? ctr8;
    checkMissing(ctr9);
    popenv;
    return ctr9;
  L14():
    goto L18();
  L18():
    get = ldf get;
    check L72() else D19();
  L61():
    getOption = ldf getOption;
    check L62() else D15();
  D15():
    deopt 57 [];
  D19():
    deopt 73 [];
  L62():
    r29 = dyn getOption("contrasts");
    check L63() else D16();
  L72():
    p7 = prom<V +>{
      ctr4 = ld ctr;
      ctr5 = force? ctr4;
      checkMissing(ctr5);
      return ctr5;
    };
    p8 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r40 = dyn parent_frame();
      return r40;
    };
    r42 = dyn get[, mode, envir](p7, "function", p8);
    check L73() else D20();
  D16():
    deopt 59 [r29];
  D20():
    deopt 79 [r42];
  L63():
    c18 = `is.object`(r29);
    if c18 then L64() else L65(r29);
  L73():
    st ctrfn = r42;
    isTRUE = ldf isTRUE;
    check L74() else D21();
  D21():
    deopt 82 [];
  L15(dx1):
    st ctr = dx1;
    goto L18();
  L64():
    dr = tryDispatchBuiltin.1("[[", r29);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L66() else L65(dr);
  L65(r31):
    is_ordered = ldf `is.ordered`;
    check L67() else D17();
  L74():
    p9 = prom<V +>{
      sparse3 = ld sparse;
      sparse4 = force? sparse3;
      checkMissing(sparse4);
      return sparse4;
    };
    r44 = dyn isTRUE(p9);
    check L75() else D22();
  D17():
    deopt 61 [r31];
  D22():
    deopt 84 [r44];
  L66():
    dx = getTryDispatchBuiltinValue(dr);
    goto L15(dx);
  L67():
    p6 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r33 = dyn is_ordered(p6);
    check L68() else D18();
  L75():
    st useSparse = r44;
    c20 = `as.logical`(r44);
    if c20 then L76() else L19();
  D18():
    deopt 63 [r31, r33];
  L19():
    goto L24();
  L24():
    useSparse = ld useSparse;
    check L90() else D29();
  L68():
    c19 = `as.logical`(r33);
    if c19 then L69() else L16();
  L76():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L77() else L78();
  D29():
    deopt 112 [useSparse];
  L16():
    goto L17(r31, 1);
  L17(r36, r37):
    __ = ldf `[[` in base;
    r38 = dyn __(r36, r37);
    goto L15(r38);
  L20(r46):
    st useSparse = r46;
    r57 = `!`(r46);
    c21 = `as.logical`(r57);
    if c21 then L85() else L22();
  L69():
    goto L17(r31, 2);
  L77():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L79() else L80();
  L78():
    r45 = dyn base5(<lang `==`("sparse", names(formals(ctrfn)))>);
    goto L20(r45);
  L90():
    useSparse1 = force? useSparse;
    checkMissing(useSparse1);
    c22 = `as.logical`(useSparse1);
    if c22 then L91() else L25();
  L21(r50, r51):
    r55 = `==`(r50, r51);
    any = ldf any in base;
    r56 = dyn any(r55);
    check L84() else D26();
  L22():
    goto L23(NULL);
  L23(r62):
    goto L24();
  L25():
    ctrfn3 = ldf ctrfn;
    check L95() else D32();
  L26(r70):
    st ctr = r70;
    goto L27();
  L79():
    formals = ldf formals;
    check L81() else D23();
  L80():
    r49 = dyn base6(<lang formals(ctrfn)>);
    goto L21("sparse", r49);
  L85():
    warning = ldf warning;
    check L86() else D27();
  L91():
    ctrfn2 = ldf ctrfn;
    check L92() else D30();
  D23():
    deopt 92 ["sparse"];
  D26():
    deopt 99 [r56];
  D27():
    deopt 103 [];
  D30():
    deopt 115 [];
  D32():
    deopt 123 [];
  L81():
    p10 = prom<V +>{
      ctrfn = ld ctrfn;
      ctrfn1 = force? ctrfn;
      checkMissing(ctrfn1);
      return ctrfn1;
    };
    r53 = dyn formals(p10);
    check L82() else D24();
  L84():
    goto L20(r56);
  L86():
    p12 = prom<V +>{
      sprintf = ldf sprintf;
      p11 = prom<V +>{
        ctr6 = ld ctr;
        ctr7 = force? ctr6;
        checkMissing(ctr7);
        return ctr7;
      };
      r59 = dyn sprintf("contrast function '%s' does not support 'sparse = TRUE'", p11);
      return r59;
    };
    r61 = dyn warning[, domain](p12, NA_LGL);
    check L87() else D28();
  L92():
    p14 = prom<V +>{
      levels1 = ldf levels;
      p13 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        return x14;
      };
      r65 = dyn levels1(p13);
      return r65;
    };
    p15 = prom<V +>{
      contrasts3 = ld contrasts;
      contrasts4 = force? contrasts3;
      checkMissing(contrasts4);
      return contrasts4;
    };
    p16 = prom<V +>{
      sparse5 = ld sparse;
      sparse6 = force? sparse5;
      checkMissing(sparse6);
      return sparse6;
    };
    r69 = dyn ctrfn2[, contrasts, sparse](p14, p15, p16);
    check L93() else D31();
  L95():
    p18 = prom<V +>{
      levels2 = ldf levels;
      p17 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        return x16;
      };
      r72 = dyn levels2(p17);
      return r72;
    };
    p19 = prom<V +>{
      contrasts5 = ld contrasts;
      contrasts6 = force? contrasts5;
      checkMissing(contrasts6);
      return contrasts6;
    };
    r75 = dyn ctrfn3[, contrasts](p18, p19);
    check L96() else D33();
  D24():
    deopt 94 ["sparse", r53];
  D28():
    deopt 107 [r61];
  D31():
    deopt 121 [r69];
  D33():
    deopt 127 [r75];
  L82():
    names = ldf names in base;
    r54 = dyn names(r53);
    check L83() else D25();
  L87():
    goto L23(r61);
  L93():
    goto L26(r69);
  L96():
    goto L26(r75);
  D25():
    deopt 96 ["sparse", r54];
  L83():
    goto L21("sparse", r54);
  }
}
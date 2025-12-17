fun main() {
  () -+> V { reg r:cls, reg r1:cls, reg r2:cls, reg bar:*, reg bar1:V, reg options:cls, reg r3:cls, reg p:p(V +), reg r5:V |
    mkenv;
    r = clos inner1139050501;
    st traceback = r;
    r1 = clos inner2501545716;
    st foo = r1;
    r2 = clos inner2501545716;
    st bar = r2;
    bar = ld bar;
    check L0() else D0();
  D0():
    deopt 9 [bar];
  L0():
    bar1 = force? bar;
    checkMissing(bar1);
    options = ldf options;
    check L1() else D1();
  D1():
    deopt 12 [];
  L1():
    p = prom<V +>{
      r3 = clos inner2708337952;
      return r3;
    };
    r5 = dyn options[error](p);
    check L2() else D2();
  D2():
    deopt 15 [r5];
  L2():
    popenv;
    return r5;
  }
}
fun inner1139050501(x, `max.lines`) {
  (reg x:*, reg max_lines:*) -+> V { var x:*, reg x_isMissing:L, reg x_orDefault:*, var `max.lines`:*, reg max_lines_isMissing:L, reg max_lines_orDefault:*, reg getOption:cls, reg getOption1:cls, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg _traceback:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg max_lines1:*, reg max_lines2:V, reg p4:p(V +), reg r9:V, reg length:cls, reg r10:V, reg n:*, reg n1:V, reg r11:V, reg c:L, reg cat:cls, reg gettext:cls, reg r12:V, reg p5:p(V +), reg r14:V, reg n2:*, reg n3:V, reg r16:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x3:V, reg x4:*, reg x5:V, reg c2:L, reg i6:I, reg x7:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r17:V, reg paste0:cls, reg n4:*, reg n5:V, reg i11:*, reg i12:V, reg r18:V, reg r19:V, reg p6:p(V +), reg r21:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r22:V, reg i15:I, reg r23:V, reg xi:*, reg xi1:V, reg length1:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg i18:I, reg r26:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg i21:I, reg r28:V, reg xi2:*, reg xi3:V, reg attr:cls, reg r29:V, reg c3:V, reg r30:V, reg c4:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg i26:I, reg r32:V, reg srcref:*, reg srcref1:V, reg attr1:cls, reg r33:V, reg paste1:cls, reg basename:cls, reg srcfile:*, reg srcfile1:V, reg c5:L, reg srcfile3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r34:V, reg p7:p(V +), reg r36:V, reg p8:p(V +), reg srcref2:*, reg srcref3:V, reg c6:L, reg srcref5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r38:V, reg p9:p(V +), reg r40:V, reg i27:I, reg r41:V, reg isTRUE:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg xi4:*, reg xi5:V, reg attr2:cls, reg r44:V, reg p10:p(V +), reg r46:V, reg c7:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r47:V, reg i32:I, reg r48:V, reg xi6:*, reg xi7:V, reg c8:cls, reg r49:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r50:V, reg i35:I, reg r51:V, reg xi8:*, reg xi9:V, reg length2:cls, reg r52:V, reg i36:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg i39:I, reg r55:V, reg srcloc:*, reg srcloc1:V, reg c9:V, reg r56:V, reg c10:L, reg paste2:cls, reg xi10:*, reg xi11:V, reg c11:L, reg xi13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg m:*, reg m1:V, reg __2:cls, reg r57:V, reg p11:p(V +), reg srcloc2:*, reg srcloc3:V, reg p12:p(V +), reg r60:V, reg l1:*, reg c12:L, reg i43:I, reg r62:V, reg l3:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i45:I, reg r64:V, reg dx9:V, reg m2:*, reg m3:V, reg ___:cls, reg r65:V, reg i46:I, reg m4:*, reg m5:V, reg r67:V, reg c13:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg i51:I, reg r69:V, reg label:*, reg label1:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r70:V, reg i54:I, reg r71:V, reg rep:cls, reg r72:V, reg c14:cls, reg r73:V, reg i55:I, reg cat1:cls, reg paste3:cls, reg label2:*, reg label3:V, reg p13:p(V +), reg xi14:*, reg xi15:V, reg p14:p(V +), reg r77:V, reg p15:p(V +), reg r79:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r80:V, reg r81:V, reg x8:*, reg x9:V, reg invisible:cls, reg r82:V |
    mkenv;
    x_isMissing = missing.0(x);
    if x_isMissing then L0(NULL) else L0(x);
  L0(x_orDefault):
    st x = x_orDefault;
    max_lines_isMissing = missing.0(max_lines);
    if max_lines_isMissing then L1() else L2(max_lines);
  L1():
    p2 = prom<V +>{
      getOption = ldf getOption;
      p1 = prom<V +>{
        getOption1 = ldf getOption;
        p = prom<V +>{
          return -1;
        };
        r1 = dyn getOption1("deparse.max.lines", p);
        return r1;
      };
      r3 = dyn getOption("traceback.max.lines", p1);
      return r3;
    };
    goto L2(p2);
  L2(max_lines_orDefault):
    st `max.lines` = max_lines_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L3(r6):
    st n = r6;
    n = ld n;
    check L33() else D3();
  L28():
    _traceback = ldf `.traceback`;
    check L30() else D0();
  L29():
    r5 = dyn base(<lang `<-`(x, .traceback(x, max.lines=max.lines))>);
    goto L3(r5);
  D0():
    deopt 3 [];
  D3():
    deopt 12 [n];
  L30():
    p3 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p4 = prom<V +>{
      max_lines1 = ld `max.lines`;
      max_lines2 = force? max_lines1;
      checkMissing(max_lines2);
      return max_lines2;
    };
    r9 = dyn _traceback[, `max.lines`](p3, p4);
    check L31() else D1();
  L33():
    n1 = force? n;
    checkMissing(n1);
    r11 = `==`(n1, 0);
    c = `as.logical`(r11);
    if c then L34() else L4();
  D1():
    deopt 7 [r9];
  L4():
    n2 = ld n;
    check L38() else D6();
  L5():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L99() else L100();
  L31():
    st x = r9;
    length = ldf length in base;
    r10 = dyn length(r9);
    check L32() else D2();
  L34():
    cat = ldf cat;
    check L35() else D4();
  D2():
    deopt 10 [r10];
  D4():
    deopt 17 [];
  D6():
    deopt 22 [1, n2];
  L27(r81):
    popenv;
    return r81;
  L32():
    goto L3(r10);
  L35():
    p5 = prom<V +>{
      gettext = ldf gettext;
      r12 = dyn gettext("No traceback available");
      return r12;
    };
    r14 = dyn cat(p5, "\n");
    check L36() else D5();
  L38():
    n3 = force? n2;
    checkMissing(n3);
    r16 = `:`(1, n3);
    s = toForSeq(r16);
    l = length(s);
    i = 0;
    goto L6(i);
  L99():
    x8 = ld x;
    check L101() else D34();
  L100():
    r80 = dyn base11(<sym x>);
    goto L27(r80);
  D5():
    deopt 20 [r14];
  D34():
    deopt 138 [x8];
  L6(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L39() else L26();
  L36():
    goto L5();
  L101():
    x9 = force? x8;
    checkMissing(x9);
    invisible = ldf invisible in base;
    r82 = dyn invisible(x9);
    check L102() else D35();
  D35():
    deopt 141 [r82];
  L26():
    x3 = `[[`(s, i2, NULL, TRUE);
    st i = x3;
    x4 = ld x;
    check L40() else D7();
  L39():
    goto L5();
  L102():
    goto L27(r82);
  D7():
    deopt 25 [i2, x4];
  L40():
    x5 = force? x4;
    checkMissing(x5);
    c2 = `is.object`(x5);
    if c2 then L41() else L42(i2, x5);
  L7(i8, dx1):
    st xi = dx1;
    paste0 = ldf paste0;
    check L45() else D9();
  L41():
    dr = tryDispatchBuiltin.1("[[", x5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L43() else L42(i2, dr);
  L42(i6, x7):
    i9 = ld i;
    check L44() else D8();
  D8():
    deopt 27 [i6, x7, i9];
  D9():
    deopt 32 [i8];
  L43():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(i2, dx);
  L44():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r17 = dyn __(x7, i10);
    goto L7(i6, r17);
  L45():
    p6 = prom<V +>{
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      i11 = ld i;
      i12 = force? i11;
      checkMissing(i12);
      r18 = `-`(n5, i12);
      r19 = `+`(r18, 1);
      return r19;
    };
    r21 = dyn paste0(p6, ": ");
    check L46() else D10();
  D10():
    deopt 35 [i8, r21];
  L46():
    st label = r21;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L47() else L48();
  L8(i15, r23):
    st m = r23;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L51() else L52();
  L47():
    xi = ld xi;
    check L49() else D11();
  L48():
    r22 = dyn base1(<sym xi>);
    goto L8(i8, r22);
  D11():
    deopt 39 [i8, xi];
  L9(i18, r26):
    r30 = `!`(r26);
    c4 = `as.logical`(r30);
    if c4 then L57() else L11();
  L49():
    xi1 = force? xi;
    checkMissing(xi1);
    length1 = ldf length in base;
    r24 = dyn length1(xi1);
    check L50() else D12();
  L51():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L53() else L54();
  L52():
    r25 = dyn base2(<lang `<-`(srcref, attr(xi, "srcref"))>);
    goto L9(i15, r25);
  D12():
    deopt 42 [i8, r24];
  L10(i21, r28):
    st srcref = r28;
    c3 = `==`(r28, NULL);
    goto L9(i21, c3);
  L11():
    goto L13(i18, NULL);
  L13(i27, r41):
    st srcloc = r41;
    isTRUE = ldf isTRUE;
    check L65() else D19();
  L50():
    goto L8(i8, r24);
  L53():
    xi2 = ld xi;
    check L55() else D13();
  L54():
    r27 = dyn base3(<sym xi>, "srcref");
    goto L10(i15, r27);
  L57():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D13():
    deopt 47 [i15, xi2];
  D19():
    deopt 74 [i27];
  L12(i26, r32):
    st srcfile = r32;
    paste1 = ldf paste0;
    check L62() else D17();
  L55():
    xi3 = force? xi2;
    checkMissing(xi3);
    attr = ldf attr in base;
    r29 = dyn attr(xi3, "srcref");
    check L56() else D14();
  L58():
    srcref = ld srcref;
    check L60() else D15();
  L59():
    r31 = dyn base4(<sym srcref>, "srcfile");
    goto L12(i18, r31);
  L65():
    p10 = prom<V +>{
      sym5 = ldf attr;
      base5 = ldf attr in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      xi4 = ld xi;
      xi5 = force? xi4;
      checkMissing(xi5);
      attr2 = ldf attr in base;
      r44 = dyn attr2(xi5, "truncated");
      goto L0(r44);
    L2():
      r42 = dyn base5(<sym xi>, "truncated");
      goto L0(r42);
    };
    r46 = dyn isTRUE(p10);
    check L66() else D20();
  D14():
    deopt 51 [i15, r29];
  D15():
    deopt 57 [i18, srcref];
  D17():
    deopt 64 [i26];
  D20():
    deopt 76 [i27, r46];
  L56():
    goto L10(i15, r29);
  L60():
    srcref1 = force? srcref;
    checkMissing(srcref1);
    attr1 = ldf attr in base;
    r33 = dyn attr1(srcref1, "srcfile");
    check L61() else D16();
  L62():
    p8 = prom<V +>{
      basename = ldf basename;
      p7 = prom<V +>{
        srcfile = ld srcfile;
        srcfile1 = force? srcfile;
        checkMissing(srcfile1);
        c5 = `is.object`(srcfile1);
        if c5 then L1() else L2(srcfile1);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", srcfile1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(srcfile3):
        r34 = `$`(srcfile3, <sym filename>);
        goto L0(r34);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r36 = dyn basename(p7);
      return r36;
    };
    p9 = prom<V +>{
      srcref2 = ld srcref;
      srcref3 = force? srcref2;
      checkMissing(srcref3);
      c6 = `is.object`(srcref3);
      if c6 then L1() else L2(srcref3);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", srcref3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(srcref5):
      __1 = ldf `[` in base;
      r38 = dyn __1(srcref5, 1);
      goto L0(r38);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r40 = dyn paste1(" at ", p8, "#", p9);
    check L63() else D18();
  L66():
    c7 = `as.logical`(r46);
    if c7 then L67() else L14();
  D16():
    deopt 61 [i18, r33];
  D18():
    deopt 69 [i26, r40];
  L14():
    goto L17(i27);
  L17(i36):
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L77() else L78();
  L61():
    goto L12(i18, r33);
  L63():
    goto L13(i26, r40);
  L67():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L68() else L69();
  L15(i32, r48):
    st xi = r48;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  L18(i39, r55):
    r56 = `!`(r55);
    c10 = `as.logical`(r56);
    if c10 then L80() else L19();
  L68():
    xi6 = ld xi;
    check L70() else D21();
  L69():
    r47 = dyn base6(<sym xi>, " ...");
    goto L15(i27, r47);
  L77():
    srcloc = ld srcloc;
    check L79() else D25();
  L78():
    r54 = dyn base8(<sym srcloc>);
    goto L18(i36, r54);
  D21():
    deopt 79 [i27, xi6];
  D25():
    deopt 95 [i36, srcloc];
  L16(i35, r51):
    st m = r51;
    goto L17(i35);
  L19():
    goto L21(i39);
  L21(i46):
    m4 = ld m;
    check L88() else D29();
  L70():
    xi7 = force? xi6;
    checkMissing(xi7);
    c8 = ldf c in base;
    r49 = dyn c8(xi7, " ...");
    check L71() else D22();
  L72():
    xi8 = ld xi;
    check L74() else D23();
  L73():
    r50 = dyn base7(<sym xi>);
    goto L16(i32, r50);
  L79():
    srcloc1 = force? srcloc;
    checkMissing(srcloc1);
    c9 = `==`(srcloc1, NULL);
    goto L18(i36, c9);
  L80():
    paste2 = ldf paste0;
    check L81() else D26();
  D22():
    deopt 83 [i27, r49];
  D23():
    deopt 87 [i32, xi8];
  D26():
    deopt 100 [i39];
  D29():
    deopt 111 [i46, m4];
  L71():
    goto L15(i27, r49);
  L74():
    xi9 = force? xi8;
    checkMissing(xi9);
    length2 = ldf length in base;
    r52 = dyn length2(xi9);
    check L75() else D24();
  L81():
    p11 = prom<V +>{
      xi10 = ld xi;
      xi11 = force? xi10;
      checkMissing(xi11);
      c11 = `is.object`(xi11);
      if c11 then L1() else L2(xi11);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", xi11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(xi13):
      m = ld m;
      m1 = force? m;
      __2 = ldf `[` in base;
      r57 = dyn __2(xi13, m1);
      goto L0(r57);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p12 = prom<V +>{
      srcloc2 = ld srcloc;
      srcloc3 = force? srcloc2;
      checkMissing(srcloc3);
      return srcloc3;
    };
    r60 = dyn paste2(p11, p12);
    check L82() else D27();
  L88():
    m5 = force? m4;
    checkMissing(m5);
    r67 = `>`(m5, 1.0);
    c13 = `as.logical`(r67);
    if c13 then L89() else L22();
  D24():
    deopt 90 [i32, r52];
  D27():
    deopt 103 [i39, r60];
  L22():
    goto L25(i46);
  L25(i55):
    cat1 = ldf cat;
    check L97() else D32();
  L75():
    goto L16(i32, r52);
  L82():
    l1 = ld xi;
    c12 = `is.object`(l1);
    if c12 then L83() else L84(i39, r60, l1);
  L89():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L90() else L91();
  D32():
    deopt 128 [i55];
  L20(i45, r64, dx9):
    st xi = dx9;
    goto L21(i45);
  L23(i51, r69):
    st label = r69;
    goto L25(i51);
  L83():
    dr8 = tryDispatchBuiltin.0("[<-", l1, r60);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L85() else L84(i39, r60, dr8);
  L84(i43, r62, l3):
    m2 = ld m;
    check L86() else D28();
  L90():
    label = ld label;
    check L92() else D30();
  L91():
    r68 = dyn base9(<sym label>, <lang rep(substr("          ", 1, nchar(label, type="w")), `-`(m, 1))>);
    goto L23(i46, r68);
  L97():
    p15 = prom<V +>{
      paste3 = ldf paste0;
      p13 = prom<V +>{
        label2 = ld label;
        label3 = force? label2;
        checkMissing(label3);
        return label3;
      };
      p14 = prom<V +>{
        xi14 = ld xi;
        xi15 = force? xi14;
        checkMissing(xi15);
        return xi15;
      };
      r77 = dyn paste3(p13, p14);
      return r77;
    };
    r79 = dyn cat1[, sep](p15, "\n");
    check L98() else D33();
  D28():
    deopt 105 [i43, r62, l3, r60, m2];
  D30():
    deopt 117 [i46, label];
  D33():
    deopt 132 [i55, r79];
  L85():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L20(i39, r60, dx8);
  L86():
    m3 = force? m2;
    ___ = ldf `[<-` in base;
    r65 = dyn ___(l3, r60, m3);
    goto L20(i43, r62, r65);
  L92():
    label1 = force? label;
    checkMissing(label1);
    sym10 = ldf rep;
    base10 = ldf rep in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L93() else L94();
  L98():
    goto L6(i55);
  L24(i54, r71):
    c14 = ldf c in base;
    r73 = dyn c14(label1, r71);
    check L95() else D31();
  L93():
    rep = ldf rep in base;
    r72 = dyn rep(<lang substr("          ", 1, nchar(label, type="w"))>, <lang `-`(m, 1)>);
    goto L24(i46, r72);
  L94():
    r70 = dyn base10(<lang substr("          ", 1, nchar(label, type="w"))>, <lang `-`(m, 1)>);
    goto L24(i46, r70);
  D31():
    deopt 123 [i54, r73];
  L95():
    goto L23(i54, r73);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg print:cls, reg r:V, reg bar:cls, reg r1:V |
    mkenv;
    st x = x;
    print = ldf print;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn print(1.0);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    bar = ldf bar;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    r1 = dyn bar(2.0);
    check L3() else D3();
  D3():
    deopt 7 [r1];
  L3():
    popenv;
    return r1;
  }
}
fun inner2708337952() {
  () -+> V { reg traceback:cls, reg r:V |
    mkenv;
    traceback = ldf traceback;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn traceback(3.0);
    check L1() else D1();
  D1():
    deopt 3 [r];
  L1():
    popenv;
    return r;
  }
}
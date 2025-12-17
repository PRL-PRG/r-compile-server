fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4259292012;
    st `.parse_text_as_much_as_possible` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4259292012(txt) {
  (reg txt:*) -+> V { var txt:*, reg r:cls, reg tryCatch:cls, reg fun:cls, reg txt1:*, reg txt2:V, reg p:p(V +), reg r2:V, reg p1:p(V +), reg identity:*, reg identity1:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg exprs:*, reg exprs1:V, reg inherits:cls, reg r8:V, reg r9:V, reg c:L, reg exprs2:*, reg exprs3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg expression:cls, reg r14:V, reg unlist:cls, reg strsplit:cls, reg txt3:*, reg txt4:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg character:cls, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg lines:*, reg lines1:V, reg length:cls, reg r22:V, reg c1:L, reg lines2:*, reg lines3:V, reg c2:L, reg lines5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg r25:V, reg tryCatch1:cls, reg fun1:cls, reg txt5:*, reg txt6:V, reg p5:p(V +), reg r27:V, reg p6:p(V +), reg identity2:*, reg identity3:V, reg p7:p(V +), reg r30:V, reg inherits1:cls, reg r31:V, reg c3:L, reg c5:V, reg i:*, reg i1:V, reg n:*, reg n1:V, reg r32:V, reg c6:L, reg c7:V, reg c9:L, reg i2:*, reg i3:V, reg r33:V, reg paste:cls, reg txt7:*, reg txt8:V, reg p8:p(V +), reg lines6:*, reg lines7:V, reg c10:L, reg lines9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i4:*, reg i5:V, reg __1:cls, reg r35:V, reg p9:p(V +), reg r37:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r38:V, reg r39:V, reg yy:*, reg yy1:V, reg inherits2:cls, reg r40:V, reg c11:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg bad_lines:*, reg bad_lines1:V, reg lines10:*, reg lines11:V, reg c12:L, reg lines13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r43:V, reg c13:cls, reg r44:V, reg lines14:*, reg lines15:V, reg c14:L, reg lines17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r45:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r46:V, reg r47:V, reg exprs4:*, reg exprs5:V, reg yy2:*, reg yy3:V, reg c15:cls, reg r48:V, reg lines18:*, reg lines19:V, reg c16:L, reg lines21:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r49:V, reg lines24:V, reg r50:V, reg i6:*, reg i7:V, reg r51:I, reg r52:V, reg __4:cls, reg r53:V, reg bad_lines2:*, reg bad_lines3:V, reg l:*, reg attr__:cls, reg r54:V, reg exprs6:*, reg exprs7:V |
    mkenv;
    st txt = txt;
    r = clos inner4259292012;
    st fun = r;
    tryCatch = ldf tryCatch;
    check L21() else D0();
  D0():
    deopt 4 [];
  L21():
    p1 = prom<V +>{
      fun = ldf fun;
      p = prom<V +>{
        txt1 = ld txt;
        txt2 = force? txt1;
        checkMissing(txt2);
        return txt2;
      };
      r2 = dyn fun(p);
      return r2;
    };
    p2 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r5 = dyn tryCatch[, error](p1, p2);
    check L22() else D1();
  D1():
    deopt 8 [r5];
  L22():
    st exprs = r5;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L0(r7):
    r9 = `!`(r7);
    c = `as.logical`(r9);
    if c then L27() else L1();
  L23():
    exprs = ld exprs;
    check L25() else D2();
  L24():
    r6 = dyn base(<sym exprs>, "error");
    goto L0(r6);
  D2():
    deopt 12 [exprs];
  L1():
    sym1 = ldf expression;
    base1 = ldf expression in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L25():
    exprs1 = force? exprs;
    checkMissing(exprs1);
    inherits = ldf inherits in base;
    r8 = dyn inherits(exprs1, "error", FALSE);
    check L26() else D3();
  L27():
    exprs2 = ld exprs;
    check L28() else D4();
  D3():
    deopt 17 [r8];
  D4():
    deopt 19 [exprs2];
  L3(r13):
    st exprs = r13;
    unlist = ldf unlist;
    check L33() else D5();
  L26():
    goto L0(r8);
  L28():
    exprs3 = force? exprs2;
    checkMissing(exprs3);
    popenv;
    return exprs3;
  L31():
    expression = ldf expression in base;
    r14 = dyn expression();
    goto L3(r14);
  L32():
    r12 = dyn base1();
    goto L3(r12);
  D5():
    deopt 29 [];
  L33():
    p4 = prom<V +>{
      strsplit = ldf strsplit;
      p3 = prom<V +>{
        txt3 = ld txt;
        txt4 = force? txt3;
        checkMissing(txt4);
        return txt4;
      };
      r16 = dyn strsplit(p3, "\n");
      return r16;
    };
    r18 = dyn unlist(p4);
    check L34() else D6();
  D6():
    deopt 31 [r18];
  L34():
    st lines = r18;
    character = ldf character;
    check L35() else D7();
  D7():
    deopt 34 [];
  L35():
    r19 = dyn character();
    check L36() else D8();
  D8():
    deopt 35 [r19];
  L36():
    st bad_lines = r19;
    goto L20();
  L20():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L37() else L38();
  L4(r21):
    st n = r21;
    c1 = `as.logical`(r21);
    if c1 then L41() else L5();
  L37():
    lines = ld lines;
    check L39() else D9();
  L38():
    r20 = dyn base2(<sym lines>);
    goto L4(r20);
  D9():
    deopt 39 [lines];
  L5():
    bad_lines2 = ld bad_lines;
    check L91() else D31();
  L39():
    lines1 = force? lines;
    checkMissing(lines1);
    length = ldf length in base;
    r22 = dyn length(lines1);
    check L40() else D10();
  L41():
    st i = 1;
    lines2 = ld lines;
    check L42() else D11();
  D10():
    deopt 42 [r22];
  D11():
    deopt 47 [lines2];
  D31():
    deopt 134 [bad_lines2];
  L40():
    goto L4(r22);
  L42():
    lines3 = force? lines2;
    checkMissing(lines3);
    c2 = `is.object`(lines3);
    if c2 then L43() else L44(lines3);
  L91():
    bad_lines3 = force? bad_lines2;
    checkMissing(bad_lines3);
    l = ld exprs;
    attr__ = ldf `attr<-`;
    check L92() else D32();
  D32():
    deopt 137 [bad_lines3, l, bad_lines3];
  L6(dx1):
    st txt = dx1;
    goto L10();
  L43():
    dr = tryDispatchBuiltin.1("[", lines3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L45() else L44(dr);
  L44(lines5):
    __ = ldf `[` in base;
    r23 = dyn __(lines5, 1);
    goto L6(r23);
  L92():
    r54 = dyn attr__(l, NULL, "bad_lines", bad_lines3);
    check L93() else D33();
  D33():
    deopt 140 [bad_lines3, r54];
  L10():
    sym3 = ldf inherits;
    base3 = ldf inherits in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L45():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L93():
    st exprs = r54;
    exprs6 = ld exprs;
    check L94() else D34();
  D34():
    deopt 142 [exprs6];
  L7(r25):
    c3 = `as.logical`(r25);
    if c3 then L51() else L8(c3);
  L46():
    tryCatch1 = ldf tryCatch;
    check L48() else D12();
  L47():
    r24 = dyn base3(<lang `<-`(yy, tryCatch(fun(txt), error=identity))>, "error");
    goto L7(r24);
  L94():
    exprs7 = force? exprs6;
    checkMissing(exprs7);
    popenv;
    return exprs7;
  D12():
    deopt 56 [];
  L8(c5):
    c9 = `as.logical`(c5);
    if c9 then L55() else L9();
  L48():
    p6 = prom<V +>{
      fun1 = ldf fun;
      p5 = prom<V +>{
        txt5 = ld txt;
        txt6 = force? txt5;
        checkMissing(txt6);
        return txt6;
      };
      r27 = dyn fun1(p5);
      return r27;
    };
    p7 = prom<V +>{
      identity2 = ld identity;
      identity3 = force? identity2;
      checkMissing(identity3);
      return identity3;
    };
    r30 = dyn tryCatch1[, error](p6, p7);
    check L49() else D13();
  L51():
    i = ld i;
    check L52() else D15();
  D13():
    deopt 60 [r30];
  D15():
    deopt 66 [c3, i];
  L9():
    sym4 = ldf inherits;
    base4 = ldf inherits in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L60() else L61();
  L49():
    st yy = r30;
    inherits1 = ldf inherits in base;
    r31 = dyn inherits1(r30, "error", FALSE);
    check L50() else D14();
  L52():
    i1 = force? i;
    checkMissing(i1);
    n = ld n;
    check L53() else D16();
  L55():
    i2 = ld i;
    check L56() else D17();
  D14():
    deopt 65 [r31];
  D16():
    deopt 67 [c3, i1, n];
  D17():
    deopt 71 [i2];
  L11(r39):
    c11 = `as.logical`(r39);
    if c11 then L64() else L12();
  L50():
    goto L7(r31);
  L53():
    n1 = force? n;
    checkMissing(n1);
    r32 = `<`(i1, n1);
    c6 = `as.logical`(r32);
    c7 = `&&`(c3, c6);
    goto L8(c7);
  L56():
    i3 = force? i2;
    checkMissing(i3);
    r33 = `+`(i3, 1);
    st i = r33;
    paste = ldf paste;
    check L57() else D18();
  L60():
    yy = ld yy;
    check L62() else D20();
  L61():
    r38 = dyn base4(<sym yy>, "error");
    goto L11(r38);
  D18():
    deopt 77 [];
  D20():
    deopt 89 [yy];
  L12():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L78() else L79();
  L16():
    goto L20();
  L57():
    p8 = prom<V +>{
      txt7 = ld txt;
      txt8 = force? txt7;
      checkMissing(txt8);
      return txt8;
    };
    p9 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      c10 = `is.object`(lines7);
      if c10 then L1() else L2(lines7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", lines7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(lines9):
      i4 = ld i;
      i5 = force? i4;
      __1 = ldf `[` in base;
      r35 = dyn __1(lines9, i5);
      goto L0(r35);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r37 = dyn paste[, , collapse](p8, p9, "\n");
    check L58() else D19();
  L62():
    yy1 = force? yy;
    checkMissing(yy1);
    inherits2 = ldf inherits in base;
    r40 = dyn inherits2(yy1, "error", FALSE);
    check L63() else D21();
  L64():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L65() else L66();
  D19():
    deopt 82 [r37];
  D21():
    deopt 94 [r40];
  L13(r42):
    st bad_lines = r42;
    lines14 = ld lines;
    check L73() else D25();
  L17(r47):
    st exprs = r47;
    lines18 = ld lines;
    check L83() else D29();
  L58():
    st txt = r37;
    goto L10();
  L63():
    goto L11(r40);
  L65():
    bad_lines = ld bad_lines;
    check L67() else D22();
  L66():
    r41 = dyn base5(<sym bad_lines>, <lang `[`(lines, 1)>);
    goto L13(r41);
  L78():
    exprs4 = ld exprs;
    check L80() else D26();
  L79():
    r46 = dyn base6(<sym exprs>, <sym yy>);
    goto L17(r46);
  D22():
    deopt 97 [bad_lines];
  D25():
    deopt 107 [lines14];
  D26():
    deopt 115 [exprs4];
  D29():
    deopt 122 [lines18];
  L67():
    bad_lines1 = force? bad_lines;
    checkMissing(bad_lines1);
    lines10 = ld lines;
    check L68() else D23();
  L73():
    lines15 = force? lines14;
    checkMissing(lines15);
    c14 = `is.object`(lines15);
    if c14 then L74() else L75(lines15);
  L80():
    exprs5 = force? exprs4;
    checkMissing(exprs5);
    yy2 = ld yy;
    check L81() else D27();
  L83():
    lines19 = force? lines18;
    checkMissing(lines19);
    c16 = `is.object`(lines19);
    if c16 then L84() else L85(lines19);
  D23():
    deopt 99 [lines10];
  D27():
    deopt 117 [yy2];
  L15(dx7):
    st lines = dx7;
    goto L16();
  L18(dx10):
    st lines = dx10;
    goto L16();
  L68():
    lines11 = force? lines10;
    checkMissing(lines11);
    c12 = `is.object`(lines11);
    if c12 then L69() else L70(lines11);
  L74():
    dr6 = tryDispatchBuiltin.1("[", lines15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L76() else L75(dr6);
  L75(lines17):
    __3 = ldf `[` in base;
    r45 = dyn __3(lines17, -1);
    goto L15(r45);
  L81():
    yy3 = force? yy2;
    checkMissing(yy3);
    c15 = ldf c in base;
    r48 = dyn c15(exprs5, yy3);
    check L82() else D28();
  L84():
    dr8 = tryDispatchBuiltin.1("[", lines19);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L86() else L85(dr8);
  L85(lines21):
    sym7 = ldf seq_len;
    base7 = ldf seq_len in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L87() else L88();
  D28():
    deopt 120 [r48];
  L14(dx5):
    c13 = ldf c in base;
    r44 = dyn c13(bad_lines1, dx5);
    check L72() else D24();
  L19(lines24, r50):
    r52 = `-`(<missing>, r50);
    __4 = ldf `[` in base;
    r53 = dyn __4(lines24, r52);
    goto L18(r53);
  L69():
    dr4 = tryDispatchBuiltin.1("[", lines11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L71() else L70(dr4);
  L70(lines13):
    __2 = ldf `[` in base;
    r43 = dyn __2(lines13, 1);
    goto L14(r43);
  L76():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L15(dx6);
  L82():
    goto L17(r48);
  L86():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L18(dx9);
  L87():
    i6 = ld i;
    check L89() else D30();
  L88():
    r49 = dyn base7(<sym i>);
    goto L19(lines21, r49);
  D24():
    deopt 105 [r44];
  D30():
    deopt 125 [lines21, i6];
  L71():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L14(dx4);
  L72():
    goto L13(r44);
  L89():
    i7 = force? i6;
    checkMissing(i7);
    r51 = seq_len(i7);
    goto L19(lines21, r51);
  }
}
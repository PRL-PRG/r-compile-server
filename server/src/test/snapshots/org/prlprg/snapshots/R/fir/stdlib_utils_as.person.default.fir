fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `as.person.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg inherits:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V, reg trimws:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x5:*, reg x6:V, reg as_character:cls, reg r7:V, reg p:p(V +), reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x7:*, reg x8:V, reg length:cls, reg r12:V, reg r13:V, reg c1:L, reg person:cls, reg r14:V, reg r17:cls, reg r18:cls, reg zify:cls, reg x9:*, reg x10:V, reg p1:p(V +), reg r20:V, reg zify1:cls, reg y:*, reg y1:V, reg p2:p(V +), reg r22:V, reg zify2:cls, reg y2:*, reg y3:V, reg p3:p(V +), reg r24:V, reg do_call:cls, reg c2:*, reg c3:V, reg p4:p(V +), reg regmatches:cls, reg x11:*, reg x12:V, reg p5:p(V +), reg gregexpr:cls, reg pattern:*, reg pattern1:V, reg p6:p(V +), reg y4:*, reg y5:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg r33:V, reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg x17:*, reg x18:V, reg p10:p(V +), reg _is_not_nonempty_text:*, reg _is_not_nonempty_text1:V, reg p11:p(V +), reg r36:V, reg r37:V, reg __:cls, reg r38:V, reg which:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r41:V, reg r42:V, reg x19:*, reg x20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg c5:cls, reg r45:V, reg match:cls, reg r46:V, reg is_na:cls, reg r47:V, reg r48:V, reg p12:p(V +), reg r50:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r51:V, reg r52:V, reg jr:*, reg jr1:V, reg length1:cls, reg r53:V, reg c6:L, reg jr2:*, reg jr3:V, reg c7:L, reg jr5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg jr6:*, reg jr7:V, reg r54:V, reg __1:cls, reg r55:V, reg paste:cls, reg x21:*, reg x22:V, reg c8:L, reg x24:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg jr8:*, reg jr9:V, reg r56:V, reg __2:cls, reg r57:V, reg p13:p(V +), reg x25:*, reg x26:V, reg c9:L, reg x28:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg jr10:*, reg jr11:V, reg __3:cls, reg r59:V, reg p14:p(V +), reg r61:V, reg l:*, reg c10:L, reg r63:V, reg l2:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg jr12:*, reg jr13:V, reg r66:V, reg ___:cls, reg r67:V, reg x29:*, reg x30:V, reg c11:L, reg x32:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg jr14:*, reg jr15:V, reg r68:V, reg __4:cls, reg r69:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg x33:*, reg x34:V, reg length2:cls, reg r72:V, reg r73:V, reg c12:L, reg person1:cls, reg r74:V, reg r77:cls, reg as_list:cls, reg do_call1:cls, reg c13:*, reg c14:V, reg p15:p(V +), reg lapply:cls, reg x35:*, reg x36:V, reg p16:p(V +), reg as_person1:*, reg as_person2:V, reg p17:p(V +), reg r81:V, reg p18:p(V +), reg r83:V, reg p19:p(V +), reg r85:V |
    mkenv;
    st x = x;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    c = `as.logical`(r1);
    if c then L20() else L1();
  L16():
    x1 = ld x;
    check L18() else D0();
  L17():
    r = dyn base(<sym x>, "person");
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    trimws = ldf trimws;
    check L24() else D3();
  L18():
    x2 = force? x1;
    checkMissing(x2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(x2, "person", FALSE);
    check L19() else D1();
  L20():
    x3 = ld x;
    check L21() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [x3];
  D3():
    deopt 14 [];
  L19():
    goto L0(r2);
  L21():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L24():
    p = prom<V +>{
      sym1 = ldf `as.character`;
      base1 = ldf `as.character` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r6):
      return r6;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      as_character = ldf `as.character` in base;
      r7 = dyn as_character(x6);
      goto L0(r7);
    L2():
      r5 = dyn base1(<sym x>);
      goto L0(r5);
    };
    r9 = dyn trimws(p);
    check L25() else D4();
  D4():
    deopt 16 [r9];
  L25():
    st x = r9;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  L3(r11):
    r13 = `!`(r11);
    c1 = `as.logical`(r13);
    if c1 then L30() else L4();
  L26():
    x7 = ld x;
    check L28() else D5();
  L27():
    r10 = dyn base2(<sym x>);
    goto L3(r10);
  D5():
    deopt 20 [x7];
  L4():
    r17 = clos inner2883214734;
    st strings = r17;
    r18 = clos inner3386431380;
    st zify = r18;
    zify = ldf zify;
    check L35() else D9();
  L28():
    x8 = force? x7;
    checkMissing(x8);
    length = ldf length in base;
    r12 = dyn length(x8);
    check L29() else D6();
  L30():
    person = ldf person;
    check L31() else D7();
  D6():
    deopt 23 [r12];
  D7():
    deopt 26 [];
  D9():
    deopt 38 [];
  L29():
    goto L3(r12);
  L31():
    r14 = dyn person();
    check L32() else D8();
  L35():
    p1 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r20 = dyn zify("\\([^)]*\\)", p1);
    check L36() else D10();
  D8():
    deopt 27 [r14];
  D10():
    deopt 41 [r20];
  L32():
    popenv;
    return r14;
  L36():
    st y = r20;
    zify1 = ldf zify;
    check L37() else D11();
  D11():
    deopt 44 [];
  L37():
    p2 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r22 = dyn zify1("\\[[^]]*\\]", p2);
    check L38() else D12();
  D12():
    deopt 47 [r22];
  L38():
    st y = r22;
    zify2 = ldf zify;
    check L39() else D13();
  D13():
    deopt 50 [];
  L39():
    p3 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      return y3;
    };
    r24 = dyn zify2("<[^>]*>", p3);
    check L40() else D14();
  D14():
    deopt 53 [r24];
  L40():
    st y = r24;
    st pattern = "[[:space:]]?(,|,?[[:space:]]and)[[:space:]]+";
    do_call = ldf `do.call`;
    check L41() else D15();
  D15():
    deopt 59 [];
  L41():
    p4 = prom<V +>{
      c2 = ld c;
      c3 = force? c2;
      checkMissing(c3);
      return c3;
    };
    p9 = prom<V +>{
      regmatches = ldf regmatches;
      p5 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        return x12;
      };
      p8 = prom<V +>{
        gregexpr = ldf gregexpr;
        p6 = prom<V +>{
          pattern = ld pattern;
          pattern1 = force? pattern;
          checkMissing(pattern1);
          return pattern1;
        };
        p7 = prom<V +>{
          y4 = ld y;
          y5 = force? y4;
          checkMissing(y5);
          return y5;
        };
        r29 = dyn gregexpr(p6, p7);
        return r29;
      };
      r31 = dyn regmatches[, , invert](p5, p8, TRUE);
      return r31;
    };
    r33 = dyn do_call(p4, p9);
    check L42() else D16();
  D16():
    deopt 62 [r33];
  L42():
    st x = r33;
    x13 = ld x;
    check L43() else D17();
  D17():
    deopt 64 [x13];
  L43():
    x14 = force? x13;
    checkMissing(x14);
    c4 = `is.object`(x14);
    if c4 then L44() else L45(x14);
  L6(dx1):
    st x = dx1;
    which = ldf which;
    check L49() else D20();
  L44():
    dr = tryDispatchBuiltin.1("[", x14);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(dr);
  L45(x16):
    vapply = ldf vapply;
    check L47() else D18();
  D18():
    deopt 67 [x16];
  D20():
    deopt 76 [];
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L47():
    p10 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    p11 = prom<V +>{
      _is_not_nonempty_text = ld `.is_not_nonempty_text`;
      _is_not_nonempty_text1 = force? _is_not_nonempty_text;
      checkMissing(_is_not_nonempty_text1);
      return _is_not_nonempty_text1;
    };
    r36 = dyn vapply(p10, p11, NA_LGL);
    check L48() else D19();
  L49():
    p12 = prom<V +>{
      sym3 = ldf `is.na`;
      base3 = ldf `is.na` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L3() else L4();
    L0(r40):
      r48 = `!`(r40);
      return r48;
    L3():
      sym4 = ldf match;
      base4 = ldf match in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L4():
      r39 = dyn base3(<lang match(x, c("Jr", "Jr.", "jr", "jr."))>);
      goto L0(r39);
    L1(r42):
      is_na = ldf `is.na` in base;
      r47 = dyn is_na(r42);
      goto L0(r47);
    L5():
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L7() else L8();
    L6():
      r41 = dyn base4(<sym x>, <lang c("Jr", "Jr.", "jr", "jr.")>);
      goto L1(r41);
    L2(r44):
      match = ldf match in base;
      r46 = dyn match(x20, r44, NA_INT, NULL);
      goto L1(r46);
    L7():
      c5 = ldf c in base;
      r45 = dyn c5("Jr", "Jr.", "jr", "jr.");
      goto L2(r45);
    L8():
      r43 = dyn base5("Jr", "Jr.", "jr", "jr.");
      goto L2(r43);
    };
    r50 = dyn which(p12);
    check L50() else D21();
  D19():
    deopt 71 [x16, r36];
  D21():
    deopt 78 [r50];
  L48():
    r37 = `!`(r36);
    __ = ldf `[` in base;
    r38 = dyn __(x16, r37);
    goto L6(r38);
  L50():
    st jr = r50;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L51() else L52();
  L7(r52):
    c6 = `as.logical`(r52);
    if c6 then L55() else L8();
  L51():
    jr = ld jr;
    check L53() else D22();
  L52():
    r51 = dyn base6(<sym jr>);
    goto L7(r51);
  D22():
    deopt 82 [jr];
  L8():
    goto L12();
  L12():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L73() else L74();
  L53():
    jr1 = force? jr;
    checkMissing(jr1);
    length1 = ldf length in base;
    r53 = dyn length1(jr1);
    check L54() else D23();
  L55():
    jr2 = ld jr;
    check L56() else D24();
  D23():
    deopt 85 [r53];
  D24():
    deopt 86 [jr2];
  L13(r71):
    r73 = `!`(r71);
    c12 = `as.logical`(r73);
    if c12 then L77() else L14();
  L54():
    goto L7(r53);
  L56():
    jr3 = force? jr2;
    checkMissing(jr3);
    c7 = `is.object`(jr3);
    if c7 then L57() else L58(jr3);
  L73():
    x33 = ld x;
    check L75() else D31();
  L74():
    r70 = dyn base7(<sym x>);
    goto L13(r70);
  D31():
    deopt 119 [x33];
  L9(dx3):
    st jr = dx3;
    paste = ldf paste;
    check L61() else D26();
  L14():
    r77 = clos inner2501545716;
    st as_person1 = r77;
    as_list = ldf `as.list`;
    check L82() else D35();
  L57():
    dr2 = tryDispatchBuiltin.1("[", jr3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L59() else L58(dr2);
  L58(jr5):
    jr6 = ld jr;
    check L60() else D25();
  L75():
    x34 = force? x33;
    checkMissing(x34);
    length2 = ldf length in base;
    r72 = dyn length2(x34);
    check L76() else D32();
  L77():
    person1 = ldf person;
    check L78() else D33();
  D25():
    deopt 88 [jr5, jr6];
  D26():
    deopt 95 [];
  D32():
    deopt 122 [r72];
  D33():
    deopt 125 [];
  D35():
    deopt 134 [];
  L59():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  L60():
    jr7 = force? jr6;
    checkMissing(jr7);
    r54 = `>`(jr7, 1);
    __1 = ldf `[` in base;
    r55 = dyn __1(jr5, r54);
    goto L9(r55);
  L61():
    p13 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c8 = `is.object`(x22);
      if c8 then L1() else L2(x22);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x22);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x24):
      jr8 = ld jr;
      jr9 = force? jr8;
      checkMissing(jr9);
      r56 = `-`(jr9, 1);
      __2 = ldf `[` in base;
      r57 = dyn __2(x24, r56);
      goto L0(r57);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p14 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c9 = `is.object`(x26);
      if c9 then L1() else L2(x26);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x26);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x28):
      jr10 = ld jr;
      jr11 = force? jr10;
      __3 = ldf `[` in base;
      r59 = dyn __3(x28, jr11);
      goto L0(r59);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r61 = dyn paste[, , sep](p13, p14, ", ");
    check L62() else D27();
  L76():
    goto L13(r72);
  L78():
    r74 = dyn person1();
    check L79() else D34();
  L82():
    p19 = prom<V +>{
      do_call1 = ldf `do.call`;
      p15 = prom<V +>{
        c13 = ld c;
        c14 = force? c13;
        checkMissing(c14);
        return c14;
      };
      p18 = prom<V +>{
        lapply = ldf lapply;
        p16 = prom<V +>{
          x35 = ld x;
          x36 = force? x35;
          checkMissing(x36);
          return x36;
        };
        p17 = prom<V +>{
          as_person1 = ld as_person1;
          as_person2 = force? as_person1;
          checkMissing(as_person2);
          return as_person2;
        };
        r81 = dyn lapply(p16, p17);
        return r81;
      };
      r83 = dyn do_call1(p15, p18);
      return r83;
    };
    r85 = dyn as_list(p19);
    check L83() else D36();
  D27():
    deopt 100 [r61];
  D34():
    deopt 126 [r74];
  D36():
    deopt 136 [r85];
  L62():
    l = ld x;
    c10 = `is.object`(l);
    if c10 then L63() else L64(r61, l);
  L79():
    popenv;
    return r74;
  L83():
    popenv;
    return r85;
  L10(dx9):
    st x = dx9;
    x29 = ld x;
    check L67() else D29();
  L63():
    dr8 = tryDispatchBuiltin.0("[<-", l, r61);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L65() else L64(r61, dr8);
  L64(r63, l2):
    jr12 = ld jr;
    check L66() else D28();
  D28():
    deopt 102 [r63, l2, r61, jr12];
  D29():
    deopt 108 [x29];
  L65():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L66():
    jr13 = force? jr12;
    checkMissing(jr13);
    r66 = `-`(jr13, 1);
    ___ = ldf `[<-` in base;
    r67 = dyn ___(l2, r61, r66);
    goto L10(r67);
  L67():
    x30 = force? x29;
    checkMissing(x30);
    c11 = `is.object`(x30);
    if c11 then L68() else L69(x30);
  L11(dx11):
    st x = dx11;
    goto L12();
  L68():
    dr10 = tryDispatchBuiltin.1("[", x30);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L70() else L69(dr10);
  L69(x32):
    jr14 = ld jr;
    check L71() else D30();
  D30():
    deopt 110 [x32, jr14];
  L70():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L11(dx10);
  L71():
    jr15 = force? jr14;
    checkMissing(jr15);
    r68 = `-`(<missing>, jr15);
    __4 = ldf `[` in base;
    r69 = dyn __4(x32, r68);
    goto L11(r69);
  }
}
fun inner2883214734(n, c) {
  (reg n:*, reg c:*) -+> V { var n:*, var c:*, reg c_isMissing:L, reg c_orDefault:*, reg vapply:cls, reg Map:cls, reg rep_int:*, reg rep_int1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c1:*, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg n1:*, reg n2:V, reg length:cls, reg r5:V, reg rep_int2:cls, reg r6:V, reg p1:p(V +), reg n3:*, reg n4:V, reg p2:p(V +), reg r9:V, reg p3:p(V +), reg paste:*, reg paste1:V, reg p4:p(V +), reg r12:V |
    mkenv;
    st n = n;
    c_isMissing = missing.0(c);
    if c_isMissing then L0("z") else L0(c);
  L0(c_orDefault):
    st c = c_orDefault;
    vapply = ldf vapply;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p3 = prom<V +>{
      Map = ldf Map;
      p = prom<V +>{
        rep_int = ld `rep.int`;
        rep_int1 = force? rep_int;
        checkMissing(rep_int1);
        return rep_int1;
      };
      p1 = prom<V +>{
        sym = ldf `rep.int`;
        base = ldf `rep.int` in base;
        guard = `==`.4(sym, base);
        if guard then L2() else L3();
      L0(r2):
        return r2;
      L2():
        c1 = ld c;
        c2 = force? c1;
        checkMissing(c2);
        sym1 = ldf length;
        base1 = ldf length in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L4() else L5();
      L3():
        r1 = dyn base(<sym c>, <lang length(n)>);
        goto L0(r1);
      L1(r4):
        rep_int2 = ldf `rep.int` in base;
        r6 = dyn rep_int2(c2, r4);
        goto L0(r6);
      L4():
        n1 = ld n;
        n2 = force? n1;
        checkMissing(n2);
        length = ldf length in base;
        r5 = dyn length(n2);
        goto L1(r5);
      L5():
        r3 = dyn base1(<sym n>);
        goto L1(r3);
      };
      p2 = prom<V +>{
        n3 = ld n;
        n4 = force? n3;
        checkMissing(n4);
        return n4;
      };
      r9 = dyn Map[, , , `USE.NAMES`](p, p1, p2, FALSE);
      return r9;
    };
    p4 = prom<V +>{
      paste = ld paste;
      paste1 = force? paste;
      checkMissing(paste1);
      return paste1;
    };
    r12 = dyn vapply[, , , collapse](p3, p4, "", "");
    check L2() else D1();
  D1():
    deopt 7 [r12];
  L2():
    popenv;
    return r12;
  }
}
fun inner3386431380(pattern, x) {
  (reg pattern:*, reg x:*) -+> V { var pattern:*, var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg character:cls, reg r4:V, reg gregexpr:cls, reg pattern1:*, reg pattern2:V, reg p:p(V +), reg x3:*, reg x4:V, reg p1:p(V +), reg r9:V, reg Map:cls, reg strings:*, reg strings1:V, reg p2:p(V +), reg lapply:cls, reg regmatches:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg m:*, reg m1:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg nchar:*, reg nchar1:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg l:*, reg regmatches__:cls, reg m2:*, reg m3:V, reg p8:p(V +), reg r20:V, reg x7:*, reg x8:V |
    mkenv;
    st pattern = pattern;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L7() else L1();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    gregexpr = ldf gregexpr;
    check L12() else D4();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L6() else D1();
  L7():
    character = ldf character;
    check L8() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L6():
    goto L0(r2);
  L8():
    r4 = dyn character();
    check L9() else D3();
  L12():
    p = prom<V +>{
      pattern1 = ld pattern;
      pattern2 = force? pattern1;
      checkMissing(pattern2);
      return pattern2;
    };
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn gregexpr(p, p1);
    check L13() else D5();
  D3():
    deopt 9 [r4];
  D5():
    deopt 17 [r9];
  L9():
    popenv;
    return r4;
  L13():
    st m = r9;
    Map = ldf Map;
    check L14() else D6();
  D6():
    deopt 20 [];
  L14():
    p2 = prom<V +>{
      strings = ld strings;
      strings1 = force? strings;
      checkMissing(strings1);
      return strings1;
    };
    p7 = prom<V +>{
      lapply = ldf lapply;
      p5 = prom<V +>{
        regmatches = ldf regmatches;
        p3 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          return x6;
        };
        p4 = prom<V +>{
          m = ld m;
          m1 = force? m;
          checkMissing(m1);
          return m1;
        };
        r13 = dyn regmatches(p3, p4);
        return r13;
      };
      p6 = prom<V +>{
        nchar = ld nchar;
        nchar1 = force? nchar;
        checkMissing(nchar1);
        return nchar1;
      };
      r16 = dyn lapply(p5, p6);
      return r16;
    };
    r18 = dyn Map(p2, p7);
    check L15() else D7();
  D7():
    deopt 23 [r18];
  L15():
    l = ld x;
    regmatches__ = ldf `regmatches<-`;
    check L16() else D8();
  D8():
    deopt 25 [r18, l, r18];
  L16():
    p8 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r20 = dyn regmatches__(l, NULL, p8, r18);
    check L17() else D9();
  D9():
    deopt 28 [r18, r20];
  L17():
    st x = r20;
    x7 = ld x;
    check L18() else D10();
  D10():
    deopt 30 [x7];
  L18():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  }
}
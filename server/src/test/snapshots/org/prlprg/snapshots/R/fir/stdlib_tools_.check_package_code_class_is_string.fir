fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st `.check_package_code_class_is_string` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg r:cls, reg r1:cls, reg Filter:cls, reg length:*, reg length1:V, reg p:p(V +), reg _find_calls_in_package_code:cls, reg dir1:*, reg dir2:V, reg p1:p(V +), reg funB:*, reg funB1:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg x:*, reg x1:V, reg length2:cls, reg r10:V, reg c:L, reg sprintf:cls, reg sQuote:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg x2:*, reg x3:V, reg names:cls, reg r15:V, reg lengths:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg r17:V, reg rep_int:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg vapply:cls, reg unlist:cls, reg x6:*, reg x7:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:cls, reg p9:p(V +), reg r27:V, reg p10:p(V +), reg r29:V, reg writeLines:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg s:*, reg s1:V, reg c1:cls, reg r32:V, reg p11:p(V +), reg r34:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg x8:*, reg x9:V, reg invisible:cls, reg r38:V |
    mkenv;
    st dir = dir;
    r = clos inner3708401697;
    st funA = r;
    r1 = clos inner3708401697;
    st funB = r1;
    Filter = ldf Filter;
    check L4() else D0();
  D0():
    deopt 7 [];
  L4():
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
        funB = ld funB;
        funB1 = force? funB;
        checkMissing(funB1);
        return funB1;
      };
      r5 = dyn _find_calls_in_package_code[, , recursive](p1, p2, TRUE);
      return r5;
    };
    r7 = dyn Filter(p, p3);
    check L5() else D1();
  D1():
    deopt 10 [r7];
  L5():
    st x = r7;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r9):
    c = `as.logical`(r9);
    if c then L10() else L1();
  L6():
    x = ld x;
    check L8() else D2();
  L7():
    r8 = dyn base(<sym x>);
    goto L0(r8);
  D2():
    deopt 14 [x];
  L1():
    goto L2();
  L2():
    sym4 = ldf invisible;
    base4 = ldf invisible in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L16() else L17();
  L8():
    x1 = force? x;
    checkMissing(x1);
    length2 = ldf length in base;
    r10 = dyn length2(x1);
    check L9() else D3();
  L10():
    sprintf = ldf sprintf;
    check L11() else D4();
  D3():
    deopt 17 [r10];
  D4():
    deopt 19 [];
  L3(r37):
    popenv;
    return r37;
  L9():
    goto L0(r10);
  L11():
    p6 = prom<V +>{
      sQuote = ldf sQuote;
      p5 = prom<V +>{
        sym1 = ldf `rep.int`;
        base1 = ldf `rep.int` in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L2() else L3();
      L0(r12):
        return r12;
      L2():
        sym2 = ldf names;
        base2 = ldf names in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L4() else L5();
      L3():
        r11 = dyn base1(<lang names(x)>, <lang lengths(x)>);
        goto L0(r11);
      L1(r14):
        lengths = ldf lengths;
        p4 = prom<V +>{
          x4 = ld x;
          x5 = force? x4;
          checkMissing(x5);
          return x5;
        };
        r17 = dyn lengths(p4);
        rep_int = ldf `rep.int` in base;
        r18 = dyn rep_int(r14, r17);
        goto L0(r18);
      L4():
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        names = ldf names in base;
        r15 = dyn names(x3);
        goto L1(r15);
      L5():
        r13 = dyn base2(<sym x>);
        goto L1(r13);
      };
      r20 = dyn sQuote(p5);
      return r20;
    };
    p10 = prom<V +>{
      vapply = ldf vapply;
      p8 = prom<V +>{
        unlist = ldf unlist;
        p7 = prom<V +>{
          x6 = ld x;
          x7 = force? x6;
          checkMissing(x7);
          return x7;
        };
        r23 = dyn unlist(p7);
        return r23;
      };
      p9 = prom<V +>{
        r25 = clos inner3708401697;
        return r25;
      };
      r27 = dyn vapply(p8, p9, "");
      return r27;
    };
    r29 = dyn sprintf("File %s: %s", p6, p10);
    check L12() else D5();
  L16():
    x8 = ld x;
    check L18() else D8();
  L17():
    r36 = dyn base4(<sym x>);
    goto L3(r36);
  D5():
    deopt 23 [r29];
  D8():
    deopt 33 [x8];
  L12():
    st s = r29;
    writeLines = ldf writeLines;
    check L13() else D6();
  L18():
    x9 = force? x8;
    checkMissing(x9);
    invisible = ldf invisible in base;
    r38 = dyn invisible(x9);
    check L19() else D9();
  D6():
    deopt 26 [];
  D9():
    deopt 36 [r38];
  L13():
    p11 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r31):
      return r31;
    L1():
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      c1 = ldf c in base;
      r32 = dyn c1("Found if() conditions comparing class() to string:", s1, "Use inherits() (or maybe is()) instead.");
      goto L0(r32);
    L2():
      r30 = dyn base3("Found if() conditions comparing class() to string:", <sym s>, "Use inherits() (or maybe is()) instead.");
      goto L0(r30);
    };
    r34 = dyn writeLines(p11);
    check L14() else D7();
  L19():
    goto L3(r38);
  D7():
    deopt 28 [r34];
  L14():
    goto L2();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg is_call:cls, reg r2:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg e3:*, reg e4:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c14:L, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c17:L, reg r10:V, reg e5:*, reg e6:V, reg c18:L, reg c20:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg c22:L, reg dx1:V, reg __:cls, reg r11:V, reg as_character:cls, reg r12:V, reg length1:cls, reg r13:V, reg r14:V, reg c23:L, reg c24:V, reg c26:L, reg _in_:cls, reg s:*, reg s1:V, reg p:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg c27:cls, reg r18:V, reg p1:p(V +), reg r20:V, reg c28:L, reg Recall:cls, reg e9:*, reg e10:V, reg c29:L, reg e12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r21:V, reg p2:p(V +), reg r23:V, reg _in_1:cls, reg s2:*, reg s3:V, reg p3:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg c30:cls, reg r29:V, reg p4:p(V +), reg r31:V, reg c31:L, reg Recall1:cls, reg e13:*, reg e14:V, reg c32:L, reg e16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r32:V, reg p5:p(V +), reg r34:V, reg c33:L, reg c34:V, reg Recall2:cls, reg e17:*, reg e18:V, reg c36:L, reg e20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r35:V, reg p6:p(V +), reg r37:V, reg c37:L, reg c38:V, reg _in_2:cls, reg s4:*, reg s5:V, reg p7:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg c40:cls, reg r42:V, reg p8:p(V +), reg r44:V, reg c41:L, reg c43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r45:V, reg c46:L, reg r46:V, reg e21:*, reg e22:V, reg c47:L, reg c49:L, reg e24:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c51:L, reg dx9:V, reg __4:cls, reg r47:V, reg is_call1:cls, reg r48:V, reg c52:L, reg c53:V, reg c55:L, reg c57:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg c60:L, reg r50:V, reg e25:*, reg e26:V, reg c61:L, reg c63:L, reg e28:V, reg dr10:V, reg dc5:L, reg dx10:V, reg c65:L, reg dx11:V, reg __5:cls, reg r51:V, reg as_character1:cls, reg r52:V, reg c66:L, reg c68:L, reg r54:V, reg dr12:V, reg dc6:L, reg dx12:V, reg c70:L, reg dx13:V, reg __6:cls, reg r55:V, reg r56:V, reg c71:L, reg c72:V, reg c74:L, reg c76:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r57:V, reg c79:L, reg r58:V, reg e29:*, reg e30:V, reg c80:L, reg c82:L, reg e32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg c84:L, reg dx15:V, reg __7:cls, reg r59:V, reg c85:L, reg c86:L, reg c87:V, reg c89:L |
    mkenv;
    st e = e;
    sym = ldf `is.call`;
    base = ldf `is.call` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L0(r1):
    c = `as.logical`(r1);
    if c then L28() else L1(c);
  L24():
    e1 = ld e;
    check L26() else D0();
  L25():
    r = dyn base(<sym e>);
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L34() else L3(c9);
  L26():
    e2 = force? e1;
    checkMissing(e2);
    is_call = ldf `is.call` in base;
    r2 = dyn is_call(e2);
    check L27() else D1();
  L28():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  D1():
    deopt 5 [r2];
  L2(c5, r4):
    r6 = `>=`(r4, 2);
    c6 = `as.logical`(r6);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3(c11):
    c26 = `as.logical`(c11);
    if c26 then L46() else L7();
  L27():
    goto L0(r2);
  L29():
    e3 = ld e;
    check L31() else D2();
  L30():
    r3 = dyn base1(<sym e>);
    goto L2(c, r3);
  L34():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  D2():
    deopt 8 [c, e3];
  L4(c14, r8):
    r14 = `==`(r8, 1);
    c23 = `as.logical`(r14);
    c24 = `&&`(c14, c23);
    goto L3(c24);
  L7():
    goto L23();
  L23():
    popenv;
    return FALSE;
  L31():
    e4 = force? e3;
    checkMissing(e4);
    length = ldf length in base;
    r5 = dyn length(e4);
    check L32() else D3();
  L35():
    sym3 = ldf `as.character`;
    base3 = ldf `as.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  L36():
    r7 = dyn base2(<lang `<-`(s, as.character(`[[`(e, 1)))>);
    goto L4(c9, r7);
  L46():
    _in_ = ldf `%in%`;
    check L47() else D7();
  D3():
    deopt 11 [c, r5];
  D7():
    deopt 33 [];
  L5(c17, r10):
    st s = r10;
    length1 = ldf length in base;
    r13 = dyn length1(r10);
    check L44() else D6();
  L32():
    goto L2(c, r5);
  L37():
    e5 = ld e;
    check L39() else D4();
  L38():
    r9 = dyn base3(<lang `[[`(e, 1)>);
    goto L5(c9, r9);
  L47():
    p = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      return s1;
    };
    p1 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r17):
      return r17;
    L1():
      c27 = ldf c in base;
      r18 = dyn c27("(", "!");
      goto L0(r18);
    L2():
      r16 = dyn base4("(", "!");
      goto L0(r16);
    };
    r20 = dyn _in_(p, p1);
    check L48() else D8();
  D4():
    deopt 19 [c9, e5];
  D6():
    deopt 28 [c17, r13];
  D8():
    deopt 36 [r20];
  L39():
    e6 = force? e5;
    checkMissing(e6);
    c18 = `is.object`(e6);
    if c18 then L40() else L41(c9, e6);
  L44():
    goto L4(c17, r13);
  L48():
    c28 = `as.logical`(r20);
    if c28 then L49() else L8();
  L6(c22, dx1):
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(dx1);
    check L43() else D5();
  L8():
    _in_1 = ldf `%in%`;
    check L54() else D11();
  L40():
    dr = tryDispatchBuiltin.1("[[", e6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(c9, dr);
  L41(c20, e8):
    __ = ldf `[[` in base;
    r11 = dyn __(e8, 1);
    goto L6(c20, r11);
  L49():
    Recall = ldf Recall;
    check L50() else D9();
  D5():
    deopt 25 [c22, r12];
  D9():
    deopt 38 [];
  D11():
    deopt 43 [];
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(c9, dx);
  L43():
    goto L5(c22, r12);
  L50():
    p2 = prom<V +>{
      e9 = ld e;
      e10 = force? e9;
      checkMissing(e10);
      c29 = `is.object`(e10);
      if c29 then L1() else L2(e10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[[", e10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(e12):
      __1 = ldf `[[` in base;
      r21 = dyn __1(e12, 2);
      goto L0(r21);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r23 = dyn Recall(p2);
    check L51() else D10();
  L54():
    p3 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      return s3;
    };
    p4 = prom<V +>{
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c30 = ldf c in base;
      r29 = dyn c30("||", "&&", "|", "&");
      goto L0(r29);
    L2():
      r27 = dyn base5("||", "&&", "|", "&");
      goto L0(r27);
    };
    r31 = dyn _in_1(p3, p4);
    check L55() else D12();
  D10():
    deopt 40 [r23];
  D12():
    deopt 46 [r31];
  L51():
    popenv;
    return r23;
  L55():
    c31 = `as.logical`(r31);
    if c31 then L56() else L10();
  L10():
    _in_2 = ldf `%in%`;
    check L65() else D17();
  L56():
    Recall1 = ldf Recall;
    check L57() else D13();
  D13():
    deopt 48 [];
  D17():
    deopt 58 [];
  L57():
    p5 = prom<V +>{
      e13 = ld e;
      e14 = force? e13;
      checkMissing(e14);
      c32 = `is.object`(e14);
      if c32 then L1() else L2(e14);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", e14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(e16):
      __2 = ldf `[[` in base;
      r32 = dyn __2(e16, 2);
      goto L0(r32);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r34 = dyn Recall1(p5);
    check L58() else D14();
  L65():
    p7 = prom<V +>{
      s4 = ld s;
      s5 = force? s4;
      checkMissing(s5);
      return s5;
    };
    p8 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      c40 = ldf c in base;
      r42 = dyn c40("==", "!=");
      goto L0(r42);
    L2():
      r40 = dyn base6("==", "!=");
      goto L0(r40);
    };
    r44 = dyn _in_2(p7, p8);
    check L66() else D18();
  D14():
    deopt 50 [r34];
  D18():
    deopt 61 [r44];
  L58():
    c33 = `as.logical`(r34);
    if c33 then L11(c33) else L59();
  L66():
    c41 = `as.logical`(r44);
    if c41 then L67() else L12(c41);
  L11(c34):
    popenv;
    return c34;
  L12(c43):
    c55 = `as.logical`(c43);
    if c55 then L76() else L15(c55);
  L59():
    Recall2 = ldf Recall;
    check L60() else D15();
  L67():
    sym7 = ldf `is.call`;
    base7 = ldf `is.call` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L68() else L69();
  D15():
    deopt 52 [c33];
  L13(c46, r46):
    c52 = `as.logical`(r46);
    c53 = `&&`(c46, c52);
    goto L12(c53);
  L15(c57):
    c74 = `as.logical`(c57);
    if c74 then L88() else L19(c74);
  L60():
    p6 = prom<V +>{
      e17 = ld e;
      e18 = force? e17;
      checkMissing(e18);
      c36 = `is.object`(e18);
      if c36 then L1() else L2(e18);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", e18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(e20):
      __3 = ldf `[[` in base;
      r35 = dyn __3(e20, 3);
      goto L0(r35);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r37 = dyn Recall2(p6);
    check L61() else D16();
  L68():
    e21 = ld e;
    check L70() else D19();
  L69():
    r45 = dyn base7(<lang `<-`(e2, `[[`(e, 2))>);
    goto L13(c41, r45);
  L76():
    sym8 = ldf `as.character`;
    base8 = ldf `as.character` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L77() else L78();
  D16():
    deopt 54 [c33, r37];
  D19():
    deopt 64 [c41, e21];
  L16(c60, r50):
    c66 = `is.object`(r50);
    if c66 then L84() else L85(c60, r50);
  L19(c76):
    c89 = `as.logical`(c76);
    if c89 then L96() else L22();
  L61():
    c37 = `as.logical`(r37);
    c38 = `||`(c33, c37);
    goto L11(c38);
  L70():
    e22 = force? e21;
    checkMissing(e22);
    c47 = `is.object`(e22);
    if c47 then L71() else L72(c41, e22);
  L77():
    e25 = ld e2;
    check L79() else D21();
  L78():
    r49 = dyn base8(<lang `[[`(e2, 1)>);
    goto L16(c55, r49);
  L88():
    sym9 = ldf `is.character`;
    base9 = ldf `is.character` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L89() else L90();
  D21():
    deopt 75 [c55, e25];
  L14(c51, dx9):
    st e2 = dx9;
    is_call1 = ldf `is.call` in base;
    r48 = dyn is_call1(dx9);
    check L74() else D20();
  L18(c70, dx13):
    r56 = `==`(dx13, "class");
    c71 = `as.logical`(r56);
    c72 = `&&`(c70, c71);
    goto L15(c72);
  L20(c79, r58):
    c86 = `as.logical`(r58);
    c87 = `&&`(c79, c86);
    goto L19(c87);
  L22():
    goto L23();
  L71():
    dr8 = tryDispatchBuiltin.1("[[", e22);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L73() else L72(c41, dr8);
  L72(c49, e24):
    __4 = ldf `[[` in base;
    r47 = dyn __4(e24, 2);
    goto L14(c49, r47);
  L79():
    e26 = force? e25;
    checkMissing(e26);
    c61 = `is.object`(e26);
    if c61 then L80() else L81(c55, e26);
  L84():
    dr12 = tryDispatchBuiltin.1("[", r50);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L86() else L85(c60, dr12);
  L85(c68, r54):
    __6 = ldf `[` in base;
    r55 = dyn __6(r54, 1);
    goto L18(c68, r55);
  L89():
    e29 = ld e;
    check L91() else D23();
  L90():
    r57 = dyn base9(<lang `[[`(e, 3)>);
    goto L20(c74, r57);
  L96():
    popenv;
    return TRUE;
  D20():
    deopt 71 [c51, r48];
  D23():
    deopt 89 [c74, e29];
  L17(c65, dx11):
    as_character1 = ldf `as.character` in base;
    r52 = dyn as_character1(dx11);
    check L83() else D22();
  L73():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L14(c41, dx8);
  L74():
    goto L13(c51, r48);
  L80():
    dr10 = tryDispatchBuiltin.1("[[", e26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L82() else L81(c55, dr10);
  L81(c63, e28):
    __5 = ldf `[[` in base;
    r51 = dyn __5(e28, 1);
    goto L17(c63, r51);
  L86():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L18(c60, dx12);
  L91():
    e30 = force? e29;
    checkMissing(e30);
    c80 = `is.object`(e30);
    if c80 then L92() else L93(c74, e30);
  D22():
    deopt 81 [c65, r52];
  L21(c84, dx15):
    c85 = `is.character`(dx15);
    goto L20(c84, c85);
  L82():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L17(c55, dx10);
  L83():
    goto L16(c65, r52);
  L92():
    dr14 = tryDispatchBuiltin.1("[[", e30);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L94() else L93(c74, dr14);
  L93(c82, e32):
    __7 = ldf `[[` in base;
    r59 = dyn __7(e32, 3);
    goto L21(c82, r59);
  L94():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L21(c74, dx14);
  }
}
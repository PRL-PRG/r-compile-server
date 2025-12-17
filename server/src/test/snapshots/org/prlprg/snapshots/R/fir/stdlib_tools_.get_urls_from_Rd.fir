fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2403000482;
    st `.get_urls_from_Rd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2403000482(x, href, ifdef) {
  (reg x:*, reg href:*, reg ifdef:*) -+> V { var x:*, var href:*, reg href_isMissing:L, reg href_orDefault:*, var ifdef:*, reg ifdef_isMissing:L, reg ifdef_orDefault:*, reg character:cls, reg r:V, reg r1:cls, reg lapply:cls, reg x1:*, reg x2:V, reg p:p(V +), reg recurse:*, reg recurse1:V, reg p1:p(V +), reg r4:V, reg unique:cls, reg trimws:cls, reg urls:*, reg urls1:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V |
    mkenv;
    st x = x;
    href_isMissing = missing.0(href);
    if href_isMissing then L0(TRUE) else L0(href);
  L0(href_orDefault):
    st href = href_orDefault;
    ifdef_isMissing = missing.0(ifdef);
    if ifdef_isMissing then L1(FALSE) else L1(ifdef);
  L1(ifdef_orDefault):
    st ifdef = ifdef_orDefault;
    character = ldf character;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn character();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st urls = r;
    r1 = clos inner3708401697;
    st recurse = r1;
    lapply = ldf lapply;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      recurse = ld recurse;
      recurse1 = force? recurse;
      checkMissing(recurse1);
      return recurse1;
    };
    r4 = dyn lapply(p, p1);
    check L5() else D3();
  D3():
    deopt 11 [r4];
  L5():
    unique = ldf unique;
    check L6() else D4();
  D4():
    deopt 13 [];
  L6():
    p3 = prom<V +>{
      trimws = ldf trimws;
      p2 = prom<V +>{
        urls = ld urls;
        urls1 = force? urls;
        checkMissing(urls1);
        return urls1;
      };
      r6 = dyn trimws(p2);
      return r6;
    };
    r8 = dyn unique(p3);
    check L7() else D5();
  D5():
    deopt 15 [r8];
  L7():
    popenv;
    return r8;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg attr:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg tag:*, reg tag1:V, reg identical:cls, reg r5:V, reg c:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg urls:*, reg urls1:V, reg lines2str:cls, reg _Rd_deparse:cls, reg e3:*, reg e4:V, reg p:p(V +), reg r9:V, reg p1:p(V +), reg r11:V, reg c1:cls, reg r12:V, reg href:*, reg href1:V, reg c2:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg c7:L, reg r14:V, reg tag2:*, reg tag3:V, reg identical1:cls, reg r15:V, reg c8:L, reg c9:V, reg c11:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r16:V, reg r17:V, reg urls2:*, reg urls3:V, reg lines2str1:cls, reg _Rd_deparse1:cls, reg e5:*, reg e6:V, reg c12:L, reg e8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg p2:p(V +), reg r20:V, reg p3:p(V +), reg r22:V, reg c13:cls, reg r23:V, reg ifdef:*, reg ifdef1:V, reg c14:L, reg c16:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg c19:L, reg r25:V, reg tag4:*, reg tag5:V, reg length:cls, reg r26:V, reg c20:L, reg c21:V, reg c23:L, reg c25:V, reg _in_:cls, reg tag6:*, reg tag7:V, reg p4:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r28:V, reg r29:V, reg c26:cls, reg r30:V, reg p5:p(V +), reg r32:V, reg c27:L, reg c28:V, reg c30:L, reg e9:*, reg e10:V, reg c31:L, reg e12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r33:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r34:V, reg r35:V, reg RdTags:cls, reg condition:*, reg condition1:V, reg p6:p(V +), reg r37:V, reg r38:V, reg all:cls, reg r39:V, reg c32:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r40:V, reg r41:V, reg _in_1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r42:V, reg r43:V, reg c33:cls, reg r44:V, reg p7:p(V +), reg trimws:cls, reg strsplit:cls, reg paste:cls, reg condition2:*, reg condition3:V, reg p8:p(V +), reg r47:V, reg p9:p(V +), reg r49:V, reg c34:L, reg r51:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r52:V, reg p10:p(V +), reg r54:V, reg p11:p(V +), reg r56:V, reg any:cls, reg r57:V, reg c35:L, reg recurse:cls, reg e13:*, reg e14:V, reg c36:L, reg e16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r58:V, reg p12:p(V +), reg r60:V, reg tag8:*, reg tag9:V, reg r61:V, reg c37:L, reg recurse1:cls, reg e17:*, reg e18:V, reg c38:L, reg e20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __4:cls, reg r62:V, reg p13:p(V +), reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r65:V, reg r66:V, reg e21:*, reg e22:V, reg is_list:cls, reg r67:V, reg c39:L, reg lapply:cls, reg e23:*, reg e24:V, reg p14:p(V +), reg recurse2:*, reg recurse3:V, reg p15:p(V +), reg r70:V |
    mkenv;
    st e = e;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L0(r1):
    st tag = r1;
    sym1 = ldf identical;
    base1 = ldf identical in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L20():
    e1 = ld e;
    check L22() else D0();
  L21():
    r = dyn base(<sym e>, "Rd_tag");
    goto L0(r);
  D0():
    deopt 2 [e1];
  L1(r4):
    c = `as.logical`(r4);
    if c then L28() else L2();
  L22():
    e2 = force? e1;
    checkMissing(e2);
    attr = ldf attr in base;
    r2 = dyn attr(e2, "Rd_tag");
    check L23() else D1();
  L24():
    tag = ld tag;
    check L26() else D2();
  L25():
    r3 = dyn base1(<sym tag>, "\\url");
    goto L1(r3);
  D1():
    deopt 6 [r2];
  D2():
    deopt 10 [tag];
  L2():
    href = ld href;
    check L36() else D8();
  L23():
    goto L0(r2);
  L26():
    tag1 = force? tag;
    checkMissing(tag1);
    identical = ldf identical in base;
    r5 = dyn identical(tag1, "\\url", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L27() else D3();
  L28():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  D3():
    deopt 21 [r5];
  D8():
    deopt 34 [href];
  L3(r7):
    sst urls = r7;
    invisible.0();
    popenv;
    return r7;
  L27():
    goto L1(r5);
  L29():
    urls = ld urls;
    check L31() else D4();
  L30():
    r6 = dyn base2(<sym urls>, <lang lines2str(.Rd_deparse(e, tag=FALSE))>);
    goto L3(r6);
  L36():
    href1 = force? href;
    checkMissing(href1);
    c2 = `as.logical`(href1);
    if c2 then L37() else L4(c2);
  D4():
    deopt 24 [urls];
  L4(c4):
    c11 = `as.logical`(c4);
    if c11 then L43() else L6();
  L31():
    urls1 = force? urls;
    checkMissing(urls1);
    lines2str = ldf lines2str;
    check L32() else D5();
  L37():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  D5():
    deopt 27 [];
  L5(c7, r14):
    c8 = `as.logical`(r14);
    c9 = `&&`(c7, c8);
    goto L4(c9);
  L6():
    ifdef = ld ifdef;
    check L51() else D15();
  L32():
    p1 = prom<V +>{
      _Rd_deparse = ldf `.Rd_deparse`;
      p = prom<V +>{
        e3 = ld e;
        e4 = force? e3;
        checkMissing(e4);
        return e4;
      };
      r9 = dyn _Rd_deparse[, tag](p, FALSE);
      return r9;
    };
    r11 = dyn lines2str(p1);
    check L33() else D6();
  L38():
    tag2 = ld tag;
    check L40() else D9();
  L39():
    r13 = dyn base3(<sym tag>, "\\href");
    goto L5(c2, r13);
  L43():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  D6():
    deopt 29 [r11];
  D9():
    deopt 38 [c2, tag2];
  D15():
    deopt 63 [ifdef];
  L7(r17):
    sst urls = r17;
    invisible.0();
    popenv;
    return r17;
  L33():
    c1 = ldf c in base;
    r12 = dyn c1(urls1, r11);
    check L34() else D7();
  L40():
    tag3 = force? tag2;
    checkMissing(tag3);
    identical1 = ldf identical in base;
    r15 = dyn identical1(tag3, "\\href", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L41() else D10();
  L44():
    urls2 = ld urls;
    check L46() else D11();
  L45():
    r16 = dyn base4(<sym urls>, <lang lines2str(.Rd_deparse(`[[`(e, 1), tag=FALSE))>);
    goto L7(r16);
  L51():
    ifdef1 = force? ifdef;
    checkMissing(ifdef1);
    c14 = `as.logical`(ifdef1);
    if c14 then L52() else L8(c14);
  D7():
    deopt 31 [r12];
  D10():
    deopt 49 [c2, r15];
  D11():
    deopt 53 [urls2];
  L8(c16):
    c23 = `as.logical`(c16);
    if c23 then L58() else L10(c23);
  L34():
    goto L3(r12);
  L41():
    goto L5(c2, r15);
  L46():
    urls3 = force? urls2;
    checkMissing(urls3);
    lines2str1 = ldf lines2str;
    check L47() else D12();
  L52():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L53() else L54();
  D12():
    deopt 56 [];
  L9(c19, r25):
    c20 = `as.logical`(r25);
    c21 = `&&`(c19, c20);
    goto L8(c21);
  L10(c25):
    c30 = `as.logical`(c25);
    if c30 then L62() else L11();
  L47():
    p3 = prom<V +>{
      _Rd_deparse1 = ldf `.Rd_deparse`;
      p2 = prom<V +>{
        e5 = ld e;
        e6 = force? e5;
        checkMissing(e6);
        c12 = `is.object`(e6);
        if c12 then L1() else L2(e6);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", e6);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(e8):
        __ = ldf `[[` in base;
        r18 = dyn __(e8, 1);
        goto L0(r18);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r20 = dyn _Rd_deparse1[, tag](p2, FALSE);
      return r20;
    };
    r22 = dyn lines2str1(p3);
    check L48() else D13();
  L53():
    tag4 = ld tag;
    check L55() else D16();
  L54():
    r24 = dyn base5(<sym tag>);
    goto L9(c14, r24);
  L58():
    _in_ = ldf `%in%`;
    check L59() else D18();
  D13():
    deopt 58 [r22];
  D16():
    deopt 67 [c14, tag4];
  D18():
    deopt 73 [c23];
  L11():
    sym10 = ldf `is.list`;
    base10 = ldf `is.list` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L89() else L90();
  L48():
    c13 = ldf c in base;
    r23 = dyn c13(urls3, r22);
    check L49() else D14();
  L55():
    tag5 = force? tag4;
    checkMissing(tag5);
    length = ldf length in base;
    r26 = dyn length(tag5);
    check L56() else D17();
  L59():
    p4 = prom<V +>{
      tag6 = ld tag;
      tag7 = force? tag6;
      checkMissing(tag7);
      return tag7;
    };
    p5 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r29):
      return r29;
    L1():
      c26 = ldf c in base;
      r30 = dyn c26("\\if", "\\ifelse");
      goto L0(r30);
    L2():
      r28 = dyn base6("\\if", "\\ifelse");
      goto L0(r28);
    };
    r32 = dyn _in_(p4, p5);
    check L60() else D19();
  L62():
    e9 = ld e;
    check L63() else D20();
  D14():
    deopt 60 [r23];
  D17():
    deopt 70 [c14, r26];
  D19():
    deopt 76 [c23, r32];
  D20():
    deopt 78 [e9];
  L18(r66):
    c39 = `as.logical`(r66);
    if c39 then L93() else L19();
  L49():
    goto L7(r23);
  L56():
    goto L9(c14, r26);
  L60():
    c27 = `as.logical`(r32);
    c28 = `&&`(c23, c27);
    goto L10(c28);
  L63():
    e10 = force? e9;
    checkMissing(e10);
    c31 = `is.object`(e10);
    if c31 then L64() else L65(e10);
  L89():
    e21 = ld e;
    check L91() else D32();
  L90():
    r65 = dyn base10(<sym e>);
    goto L18(r65);
  D32():
    deopt 123 [e21];
  L12(dx3):
    st condition = dx3;
    sym7 = ldf all;
    base7 = ldf all in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  L19():
    invisible.0();
    popenv;
    return NULL;
  L64():
    dr2 = tryDispatchBuiltin.1("[[", e10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L66() else L65(dr2);
  L65(e12):
    __1 = ldf `[[` in base;
    r33 = dyn __1(e12, 1);
    goto L12(r33);
  L91():
    e22 = force? e21;
    checkMissing(e22);
    is_list = ldf `is.list` in base;
    r67 = dyn is_list(e22);
    check L92() else D33();
  L93():
    lapply = ldf lapply;
    check L94() else D34();
  D33():
    deopt 126 [r67];
  D34():
    deopt 128 [];
  L13(r35):
    c32 = `as.logical`(r35);
    if c32 then L72() else L14();
  L66():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L67():
    RdTags = ldf RdTags;
    check L69() else D21();
  L68():
    r34 = dyn base7(<lang `==`(RdTags(condition), "TEXT")>);
    goto L13(r34);
  L92():
    goto L18(r67);
  L94():
    p14 = prom<V +>{
      e23 = ld e;
      e24 = force? e23;
      checkMissing(e24);
      return e24;
    };
    p15 = prom<V +>{
      recurse2 = ld recurse;
      recurse3 = force? recurse2;
      checkMissing(recurse3);
      return recurse3;
    };
    r70 = dyn lapply(p14, p15);
    check L95() else D35();
  D21():
    deopt 87 [];
  D35():
    deopt 131 [r70];
  L14():
    invisible.0();
    popenv;
    return NULL;
  L69():
    p6 = prom<V +>{
      condition = ld condition;
      condition1 = force? condition;
      checkMissing(condition1);
      return condition1;
    };
    r37 = dyn RdTags(p6);
    check L70() else D22();
  L72():
    sym8 = ldf any;
    base8 = ldf any in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L73() else L74();
  L95():
    popenv;
    return r70;
  D22():
    deopt 89 [r37];
  L15(r41):
    c35 = `as.logical`(r41);
    if c35 then L78() else L16();
  L70():
    r38 = `==`(r37, "TEXT");
    all = ldf all in base;
    r39 = dyn all(r38);
    check L71() else D23();
  L73():
    _in_1 = ldf `%in%`;
    check L75() else D24();
  L74():
    r40 = dyn base8(<lang `%in%`(c("TRUE", "html"), trimws(`[[`(strsplit(paste(condition, collapse=""), ","), 1)))>);
    goto L15(r40);
  D23():
    deopt 93 [r39];
  D24():
    deopt 97 [];
  L16():
    tag8 = ld tag;
    check L82() else D29();
  L71():
    goto L13(r39);
  L75():
    p7 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      c33 = ldf c in base;
      r44 = dyn c33("TRUE", "html");
      goto L0(r44);
    L2():
      r42 = dyn base9("TRUE", "html");
      goto L0(r42);
    };
    p11 = prom<V +>{
      trimws = ldf trimws;
      p10 = prom<V +>{
        strsplit = ldf strsplit;
        p9 = prom<V +>{
          paste = ldf paste;
          p8 = prom<V +>{
            condition2 = ld condition;
            condition3 = force? condition2;
            checkMissing(condition3);
            return condition3;
          };
          r47 = dyn paste[, collapse](p8, "");
          return r47;
        };
        r49 = dyn strsplit(p9, ",");
        c34 = `is.object`(r49);
        if c34 then L1() else L2(r49);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", r49);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(r51):
        __2 = ldf `[[` in base;
        r52 = dyn __2(r51, 1);
        goto L0(r52);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r54 = dyn trimws(p10);
      return r54;
    };
    r56 = dyn _in_1(p7, p11);
    check L76() else D25();
  L78():
    recurse = ldf recurse;
    check L79() else D27();
  D25():
    deopt 100 [r56];
  D27():
    deopt 104 [];
  D29():
    deopt 107 [tag8];
  L76():
    any = ldf any in base;
    r57 = dyn any(r56);
    check L77() else D26();
  L79():
    p12 = prom<V +>{
      e13 = ld e;
      e14 = force? e13;
      checkMissing(e14);
      c36 = `is.object`(e14);
      if c36 then L1() else L2(e14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[[", e14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(e16):
      __3 = ldf `[[` in base;
      r58 = dyn __3(e16, 2);
      goto L0(r58);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r60 = dyn recurse(p12);
    check L80() else D28();
  L82():
    tag9 = force? tag8;
    checkMissing(tag9);
    r61 = `==`(tag9, "\\ifelse");
    c37 = `as.logical`(r61);
    if c37 then L83() else L17();
  D26():
    deopt 102 [r57];
  D28():
    deopt 106 [r60];
  L17():
    invisible.0();
    popenv;
    return NULL;
  L77():
    goto L15(r57);
  L80():
    popenv;
    return r60;
  L83():
    recurse1 = ldf recurse;
    check L84() else D30();
  D30():
    deopt 112 [];
  L84():
    p13 = prom<V +>{
      e17 = ld e;
      e18 = force? e17;
      checkMissing(e18);
      c38 = `is.object`(e18);
      if c38 then L1() else L2(e18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", e18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(e20):
      __4 = ldf `[[` in base;
      r62 = dyn __4(e20, 3);
      goto L0(r62);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r64 = dyn recurse1(p13);
    check L85() else D31();
  D31():
    deopt 114 [r64];
  L85():
    popenv;
    return r64;
  }
}
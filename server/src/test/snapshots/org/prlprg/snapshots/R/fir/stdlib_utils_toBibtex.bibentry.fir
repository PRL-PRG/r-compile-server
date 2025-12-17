fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3197553692;
    st `toBibtex.bibentry` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3197553692(object, escape, `...`) {
  (reg object:*, reg escape:*, reg ddd:dots) -+> V { var object:*, var escape:*, reg escape_isMissing:L, reg escape_orDefault:*, var `...`:dots?, reg r:cls, reg r1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg object1:*, reg object2:V, reg length:cls, reg r4:V, reg c:L, reg l:*, reg c1:L, reg r6:dots, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg head:cls, reg unlist:cls, reg lapply:cls, reg object3:*, reg object4:V, reg p:p(V +), reg format_bibentry1:*, reg format_bibentry2:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg p4:p(V +), reg r17:V, reg character:cls, reg r19:V, reg l3:*, reg class__:cls, reg r20:V, reg y:*, reg y1:V |
    mkenv;
    st object = object;
    escape_isMissing = missing.0(escape);
    if escape_isMissing then L0(FALSE) else L0(escape);
  L0(escape_orDefault):
    st escape = escape_orDefault;
    st `...` = ddd;
    r = clos inner2949496299;
    st format_author = r;
    r1 = clos inner4102710431;
    st format_bibentry1 = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r3):
    c = `as.logical`(r3);
    if c then L8() else L2();
  L4():
    object1 = ld object;
    check L6() else D0();
  L5():
    r2 = dyn base(<sym object>);
    goto L1(r2);
  D0():
    deopt 8 [object1];
  L2():
    character = ldf character;
    check L16() else D4();
  L3():
    l3 = ld y;
    class__ = ldf `class<-`;
    check L18() else D6();
  L6():
    object2 = force? object1;
    checkMissing(object2);
    length = ldf length in base;
    r4 = dyn length(object2);
    check L7() else D1();
  L8():
    l = ld object;
    c1 = `is.object`(l);
    if c1 then L10() else L11(NULL, l);
  D1():
    deopt 11 [r4];
  D4():
    deopt 24 [];
  D6():
    deopt 30 ["Bibtex", l3, "Bibtex"];
  L7():
    goto L1(r4);
  L9(dx1):
    st object = dx1;
    head = ldf head;
    check L13() else D2();
  L10():
    dr = tryDispatchBuiltin.0("$<-", l, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(NULL, dr);
  L11(r6, l2):
    r9 = `$<-`(l2, <sym .index>, NULL);
    goto L9(r9);
  L16():
    r19 = dyn character();
    check L17() else D5();
  L18():
    r20 = dyn class__(l3, NULL, "Bibtex");
    check L19() else D7();
  D2():
    deopt 18 [];
  D5():
    deopt 25 [r19];
  D7():
    deopt 32 ["Bibtex", r20];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L13():
    p3 = prom<V +>{
      unlist = ldf unlist;
      p2 = prom<V +>{
        lapply = ldf lapply;
        p = prom<V +>{
          object3 = ld object;
          object4 = force? object3;
          checkMissing(object4);
          return object4;
        };
        p1 = prom<V +>{
          format_bibentry1 = ld format_bibentry1;
          format_bibentry2 = force? format_bibentry1;
          checkMissing(format_bibentry2);
          return format_bibentry2;
        };
        r12 = dyn lapply(p, p1);
        return r12;
      };
      r14 = dyn unlist(p2);
      return r14;
    };
    p4 = prom<V +>{
      return -1;
    };
    r17 = dyn head(p3, p4);
    check L14() else D3();
  L17():
    st y = r19;
    goto L3();
  L19():
    st y = r20;
    y = ld y;
    check L20() else D8();
  D3():
    deopt 21 [r17];
  D8():
    deopt 34 [y];
  L14():
    st y = r17;
    goto L3();
  L20():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner2949496299(author) {
  (reg author:*) -+> V { var author:*, reg paste:cls, reg vapply:cls, reg author1:*, reg author2:V, reg p:p(V +), reg r1:cls, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg r5:V |
    mkenv;
    st author = author;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      vapply = ldf vapply;
      p = prom<V +>{
        author1 = ld author;
        author2 = force? author1;
        checkMissing(author2);
        return author2;
      };
      p1 = prom<V +>{
        r1 = clos inner3913899244;
        return r1;
      };
      r3 = dyn vapply(p, p1, "");
      return r3;
    };
    r5 = dyn paste[, collapse](p2, " and ");
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    popenv;
    return r5;
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg p1:*, reg p2:V, reg c:L, reg p4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg fnms:*, reg fnms1:V, reg c1:V, reg c2:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c7:L, reg r4:V, reg p5:*, reg p6:V, reg c8:L, reg c10:L, reg p8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c12:L, reg dx3:V, reg r5:V, reg c13:V, reg c14:L, reg c15:V, reg c17:L, reg c19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c22:L, reg r7:V, reg fnms2:*, reg fnms3:V, reg identical:cls, reg r8:V, reg c23:L, reg c24:L, reg c25:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c32:L, reg c33:L, reg r10:V, reg p9:*, reg p10:V, reg c34:L, reg c37:L, reg c38:L, reg p12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg c41:L, reg c42:L, reg dx5:V, reg r11:V, reg identical1:cls, reg r12:V, reg c43:L, reg c44:V, reg r13:V, reg c47:L, reg c48:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg fnms4:*, reg fnms5:V, reg length:cls, reg r16:V, reg r17:V, reg c50:L, reg c51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg c55:L, reg r19:V, reg grepl:cls, reg fnms6:*, reg fnms7:V, reg p13:p(V +), reg r21:V, reg any:cls, reg r22:V, reg c56:L, reg c57:V, reg c59:L, reg c60:V, reg only_given_or_family:*, reg only_given_or_family1:V, reg c62:L, reg c63:V, reg c65:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r23:V, reg r24:V, reg c66:cls, reg r25:V, reg r26:V, reg only_given_or_family2:*, reg only_given_or_family3:V, reg c67:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r27:V, reg r28:V, reg c68:cls, reg r29:V, reg r30:V, reg format:cls, reg p14:*, reg p15:V, reg p16:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg c69:cls, reg r34:V, reg p17:p(V +), reg sym9:cls, reg base9:cls, reg guard9:L, reg r36:V, reg r37:V, reg gbrc:*, reg gbrc1:V, reg fbrc:*, reg fbrc1:V, reg list:cls, reg r38:V, reg p18:p(V +), reg r40:V |
    mkenv;
    st p = p;
    p1 = ld p;
    check L17() else D0();
  D0():
    deopt 0 [p1];
  L17():
    p2 = force? p1;
    checkMissing(p2);
    c = `is.object`(p2);
    if c then L19() else L20(p2);
  L18(dx1):
    st fnms = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L19():
    dr = tryDispatchBuiltin.1("$", p2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(p4):
    r = `$`(p4, <sym family>);
    goto L18(r);
  L0(r2):
    c2 = `as.logical`(r2);
    if c2 then L1(c2) else L25();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  L22():
    fnms = ld fnms;
    check L24() else D1();
  L23():
    r1 = dyn base(<sym fnms>);
    goto L0(r1);
  D1():
    deopt 5 [fnms];
  L1(c3):
    c17 = `as.logical`(c3);
    if c17 then L34() else L3(c17);
  L24():
    fnms1 = force? fnms;
    checkMissing(fnms1);
    c1 = `==`(fnms1, NULL);
    goto L0(c1);
  L25():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L2(c7, r4):
    c14 = `as.logical`(r4);
    c15 = `||`(c7, c14);
    goto L1(c15);
  L3(c19):
    st only_given_or_family = c19;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L26():
    p5 = ld p;
    check L28() else D2();
  L27():
    r3 = dyn base1(<lang `$`(p, given)>);
    goto L2(c2, r3);
  L34():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  D2():
    deopt 9 [c2, p5];
  L4(c22, r7):
    c23 = `as.logical`(r7);
    if c23 then L5(c22, c23) else L39();
  L7(r15):
    r17 = `>`(r15, 1);
    c50 = `as.logical`(r17);
    if c50 then L8(c50) else L54();
  L28():
    p6 = force? p5;
    checkMissing(p6);
    c8 = `is.object`(p6);
    if c8 then L30() else L31(c2, p6);
  L35():
    fnms2 = ld fnms;
    check L37() else D3();
  L36():
    r6 = dyn base2(<sym fnms>, "others");
    goto L4(c17, r6);
  L50():
    fnms4 = ld fnms;
    check L52() else D7();
  L51():
    r14 = dyn base4(<sym fnms>);
    goto L7(r14);
  D3():
    deopt 16 [c17, fnms2];
  D7():
    deopt 49 [fnms4];
  L5(c24, c25):
    r13 = `!`(c25);
    c47 = `as.logical`(r13);
    c48 = `&&`(c24, c47);
    goto L3(c48);
  L8(c51):
    c59 = `as.logical`(c51);
    if c59 then L10(c59) else L61();
  L29(c12, dx3):
    c13 = `==`(dx3, NULL);
    goto L2(c12, c13);
  L30():
    dr2 = tryDispatchBuiltin.1("$", p6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(c2, dr2);
  L31(c10, p8):
    r5 = `$`(p8, <sym given>);
    goto L29(c10, r5);
  L37():
    fnms3 = force? fnms2;
    checkMissing(fnms3);
    identical = ldf identical in base;
    r8 = dyn identical(fnms3, "others", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L38() else D4();
  L39():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L52():
    fnms5 = force? fnms4;
    checkMissing(fnms5);
    length = ldf length in base;
    r16 = dyn length(fnms5);
    check L53() else D8();
  L54():
    sym5 = ldf any;
    base5 = ldf any in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  D4():
    deopt 27 [c17, r8];
  D8():
    deopt 52 [r16];
  L6(c32, c33, r10):
    c43 = `as.logical`(r10);
    c44 = `||`(c33, c43);
    goto L5(c32, c44);
  L9(c55, r19):
    c56 = `as.logical`(r19);
    c57 = `||`(c55, c56);
    goto L8(c57);
  L10(c60):
    c65 = `as.logical`(c60);
    if c65 then L64() else L11();
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L29(c2, dx2);
  L38():
    goto L4(c17, r8);
  L40():
    p9 = ld p;
    check L42() else D5();
  L41():
    r9 = dyn base3(<lang `$`(p, given)>, "others");
    goto L6(c22, c23, r9);
  L53():
    goto L7(r16);
  L55():
    grepl = ldf grepl;
    check L57() else D9();
  L56():
    r18 = dyn base5(<lang grepl("[[:space:]]", fnms)>);
    goto L9(c50, r18);
  L61():
    only_given_or_family = ld only_given_or_family;
    check L62() else D12();
  D5():
    deopt 30 [c22, c23, p9];
  D9():
    deopt 58 [c50];
  D12():
    deopt 65 [c59, only_given_or_family];
  L11():
    goto L13("");
  L13(r26):
    st fbrc = r26;
    only_given_or_family2 = ld only_given_or_family;
    check L69() else D14();
  L42():
    p10 = force? p9;
    checkMissing(p10);
    c34 = `is.object`(p10);
    if c34 then L44() else L45(c22, c23, p10);
  L57():
    p13 = prom<V +>{
      fnms6 = ld fnms;
      fnms7 = force? fnms6;
      checkMissing(fnms7);
      return fnms7;
    };
    r21 = dyn grepl("[[:space:]]", p13);
    check L58() else D10();
  L62():
    only_given_or_family1 = force? only_given_or_family;
    checkMissing(only_given_or_family1);
    c62 = `as.logical`(only_given_or_family1);
    c63 = `||`(c59, c62);
    goto L10(c63);
  L64():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  D10():
    deopt 61 [c50, r21];
  D14():
    deopt 77 [only_given_or_family2];
  L12(r24):
    goto L13(r24);
  L43(c41, c42, dx5):
    identical1 = ldf identical in base;
    r12 = dyn identical1(dx5, "others", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L47() else D6();
  L44():
    dr4 = tryDispatchBuiltin.1("$", p10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(c22, c23, dr4);
  L45(c37, c38, p12):
    r11 = `$`(p12, <sym given>);
    goto L43(c37, c38, r11);
  L58():
    any = ldf any in base;
    r22 = dyn any(r21);
    check L59() else D11();
  L65():
    c66 = ldf c in base;
    r25 = dyn c66("{", "}");
    check L67() else D13();
  L66():
    r23 = dyn base6("{", "}");
    goto L12(r23);
  L69():
    only_given_or_family3 = force? only_given_or_family2;
    checkMissing(only_given_or_family3);
    c67 = `as.logical`(only_given_or_family3);
    if c67 then L70() else L14();
  D6():
    deopt 42 [c41, c42, r12];
  D11():
    deopt 63 [c50, r22];
  D13():
    deopt 73 [r25];
  L14():
    goto L16("");
  L16(r30):
    st gbrc = r30;
    format = ldf format;
    check L75() else D16();
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(c22, c23, dx4);
  L47():
    goto L6(c41, c42, r12);
  L59():
    goto L9(c50, r22);
  L67():
    goto L12(r25);
  L70():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L71() else L72();
  D16():
    deopt 89 [];
  L15(r28):
    goto L16(r28);
  L71():
    c68 = ldf c in base;
    r29 = dyn c68("{", "}");
    check L73() else D15();
  L72():
    r27 = dyn base7("{", "}");
    goto L15(r27);
  L75():
    p16 = prom<V +>{
      p14 = ld p;
      p15 = force? p14;
      checkMissing(p15);
      return p15;
    };
    p17 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r33):
      return r33;
    L1():
      c69 = ldf c in base;
      r34 = dyn c69("given", "family");
      goto L0(r34);
    L2():
      r32 = dyn base8("given", "family");
      goto L0(r32);
    };
    p18 = prom<V +>{
      sym9 = ldf list;
      base9 = ldf list in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r37):
      return r37;
    L1():
      gbrc = ld gbrc;
      gbrc1 = force? gbrc;
      checkMissing(gbrc1);
      fbrc = ld fbrc;
      fbrc1 = force? fbrc;
      checkMissing(fbrc1);
      list = ldf list in base;
      r38 = dyn list(gbrc1, fbrc1);
      goto L0(r38);
    L2():
      r36 = dyn base9[given, family](<sym gbrc>, <sym fbrc>);
      goto L0(r36);
    };
    r40 = dyn format[, include, braces](p16, p17, p18);
    check L76() else D17();
  D15():
    deopt 84 [r29];
  D17():
    deopt 95 [r40];
  L73():
    goto L15(r29);
  L76():
    popenv;
    return r40;
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg object1:*, reg object2:V, reg unclass:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V, reg paste0:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg object3:*, reg object4:V, reg attr:cls, reg r8:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg object5:*, reg object6:V, reg attr1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg _in_:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg object7:*, reg object8:V, reg names:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg c1:L, reg format_author:cls, reg object9:*, reg object10:V, reg c2:L, reg object12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r20:V, reg p3:p(V +), reg r22:V, reg l:*, reg c3:L, reg r24:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r26:V, reg dx5:V, reg r27:V, reg _in_1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg object13:*, reg object14:V, reg names1:cls, reg r31:V, reg p4:p(V +), reg r33:V, reg c4:L, reg format_author1:cls, reg object15:*, reg object16:V, reg c5:L, reg object18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r34:V, reg p5:p(V +), reg r36:V, reg l3:*, reg c6:L, reg r38:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r40:V, reg dx9:V, reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg rval:*, reg rval1:V, reg vapply:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg object19:*, reg object20:V, reg names2:cls, reg r47:V, reg p6:p(V +), reg r49:cls, reg p7:p(V +), reg r51:V, reg c7:cls, reg r52:V, reg isTRUE:cls, reg escape:*, reg escape1:V, reg p8:p(V +), reg r54:V, reg c8:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg rval2:*, reg rval3:V, reg enc2utf8:cls, reg r57:V, reg Encoding:cls, reg rval4:*, reg rval5:V, reg p9:p(V +), reg r59:V, reg r60:V, reg __1:cls, reg r61:V, reg r62:cls, reg rval6:*, reg rval7:V, reg c9:L, reg rval9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind:*, reg ind1:V, reg __2:cls, reg r63:V, reg p10:p(V +), reg r65:V, reg l6:*, reg c10:L, reg r67:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r69:V, reg dx13:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r70:V, reg rval10:*, reg rval11:V |
    mkenv;
    st object = object;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    c = `is.object`(r1);
    if c then L15() else L16(r1);
  L11():
    object1 = ld object;
    check L13() else D0();
  L12():
    r = dyn base(<sym object>);
    goto L0(r);
  D0():
    deopt 2 [object1];
  L1(dx1):
    st object = dx1;
    paste0 = ldf paste0;
    check L18() else D2();
  L13():
    object2 = force? object1;
    checkMissing(object2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(object2);
    check L14() else D1();
  L15():
    dr = tryDispatchBuiltin.1("[[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L17() else L16(dr);
  L16(r4):
    __ = ldf `[[` in base;
    r5 = dyn __(r4, 1);
    goto L1(r5);
  D1():
    deopt 5 [r2];
  D2():
    deopt 11 [];
  L14():
    goto L0(r2);
  L17():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L18():
    p = prom<V +>{
      sym1 = ldf attr;
      base1 = ldf attr in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      attr = ldf attr in base;
      r8 = dyn attr(object4, "bibtype");
      goto L0(r8);
    L2():
      r6 = dyn base1(<sym object>, "bibtype");
      goto L0(r6);
    };
    p1 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      object5 = ld object;
      object6 = force? object5;
      checkMissing(object6);
      attr1 = ldf attr in base;
      r12 = dyn attr1(object6, "key");
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym object>, "key");
      goto L0(r10);
    };
    r14 = dyn paste0("@", p, "{", p1, ",");
    check L19() else D3();
  D3():
    deopt 17 [r14];
  L19():
    st rval = r14;
    _in_ = ldf `%in%`;
    check L20() else D4();
  D4():
    deopt 20 [];
  L20():
    p2 = prom<V +>{
      sym3 = ldf names;
      base3 = ldf names in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      names = ldf names in base;
      r17 = dyn names(object8);
      goto L0(r17);
    L2():
      r15 = dyn base3(<sym object>);
      goto L0(r15);
    };
    r19 = dyn _in_("author", p2);
    check L21() else D5();
  D5():
    deopt 23 [r19];
  L21():
    c1 = `as.logical`(r19);
    if c1 then L22() else L2();
  L2():
    goto L3();
  L3():
    _in_1 = ldf `%in%`;
    check L30() else D8();
  L22():
    format_author = ldf format_author;
    check L23() else D6();
  D6():
    deopt 25 [];
  D8():
    deopt 34 [];
  L23():
    p3 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c2 = `is.object`(object10);
      if c2 then L1() else L2(object10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object12):
      r20 = `$`(object12, <sym author>);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn format_author(p3);
    check L24() else D7();
  L30():
    p4 = prom<V +>{
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      names1 = ldf names in base;
      r31 = dyn names1(object14);
      goto L0(r31);
    L2():
      r29 = dyn base4(<sym object>);
      goto L0(r29);
    };
    r33 = dyn _in_1("editor", p4);
    check L31() else D9();
  D7():
    deopt 27 [r22];
  D9():
    deopt 37 [r33];
  L24():
    l = ld object;
    c3 = `is.object`(l);
    if c3 then L26() else L27(r22, l);
  L31():
    c4 = `as.logical`(r33);
    if c4 then L32() else L4();
  L4():
    goto L5();
  L5():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L40() else L41();
  L25(r26, dx5):
    st object = dx5;
    goto L3();
  L26():
    dr4 = tryDispatchBuiltin.0("$<-", l, r22);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L28() else L27(r22, dr4);
  L27(r24, l2):
    r27 = `$<-`(l2, <sym author>, r22);
    goto L25(r24, r27);
  L32():
    format_author1 = ldf format_author;
    check L33() else D10();
  D10():
    deopt 39 [];
  L6(r44):
    st rval = r44;
    isTRUE = ldf isTRUE;
    check L46() else D16();
  L28():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L25(r22, dx4);
  L33():
    p5 = prom<V +>{
      object15 = ld object;
      object16 = force? object15;
      checkMissing(object16);
      c5 = `is.object`(object16);
      if c5 then L1() else L2(object16);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", object16);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(object18):
      r34 = `$`(object18, <sym editor>);
      goto L0(r34);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r36 = dyn format_author1(p5);
    check L34() else D11();
  L40():
    rval = ld rval;
    check L42() else D12();
  L41():
    r43 = dyn base5(<sym rval>, <lang vapply(names(object), function((n=), paste0("  ", n, " = {", `[[`(object, n), "},"), NULL), "")>, "}", "");
    goto L6(r43);
  D11():
    deopt 41 [r36];
  D12():
    deopt 49 [rval];
  D16():
    deopt 63 [];
  L34():
    l3 = ld object;
    c6 = `is.object`(l3);
    if c6 then L36() else L37(r36, l3);
  L42():
    rval1 = force? rval;
    checkMissing(rval1);
    vapply = ldf vapply;
    check L43() else D13();
  L46():
    p8 = prom<V +>{
      escape = ld escape;
      escape1 = force? escape;
      checkMissing(escape1);
      return escape1;
    };
    r54 = dyn isTRUE(p8);
    check L47() else D17();
  D13():
    deopt 52 [];
  D17():
    deopt 65 [r54];
  L35(r40, dx9):
    st object = dx9;
    goto L5();
  L36():
    dr8 = tryDispatchBuiltin.0("$<-", l3, r36);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L38() else L37(r36, dr8);
  L37(r38, l5):
    r41 = `$<-`(l5, <sym editor>, r36);
    goto L35(r38, r41);
  L43():
    p6 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r46):
      return r46;
    L1():
      object19 = ld object;
      object20 = force? object19;
      checkMissing(object20);
      names2 = ldf names in base;
      r47 = dyn names2(object20);
      goto L0(r47);
    L2():
      r45 = dyn base6(<sym object>);
      goto L0(r45);
    };
    p7 = prom<V +>{
      r49 = clos inner4266987626;
      return r49;
    };
    r51 = dyn vapply(p6, p7, "");
    check L44() else D14();
  L47():
    c8 = `as.logical`(r54);
    if c8 then L48() else L7();
  D14():
    deopt 56 [r51];
  L7():
    goto L10();
  L10():
    rval10 = ld rval;
    check L63() else D26();
  L38():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L35(r36, dx8);
  L44():
    c7 = ldf c in base;
    r52 = dyn c7(rval1, r51, "}", "");
    check L45() else D15();
  L48():
    sym7 = ldf enc2utf8;
    base7 = ldf enc2utf8 in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L49() else L50();
  D15():
    deopt 60 [r52];
  D26():
    deopt 96 [rval10];
  L8(r56):
    st rval = r56;
    Encoding = ldf Encoding;
    check L53() else D20();
  L45():
    goto L6(r52);
  L49():
    rval2 = ld rval;
    check L51() else D18();
  L50():
    r55 = dyn base7(<sym rval>);
    goto L8(r55);
  L63():
    rval11 = force? rval10;
    checkMissing(rval11);
    popenv;
    return rval11;
  D18():
    deopt 68 [rval2];
  D20():
    deopt 74 [];
  L51():
    rval3 = force? rval2;
    checkMissing(rval3);
    enc2utf8 = ldf enc2utf8 in base;
    r57 = dyn enc2utf8(rval3);
    check L52() else D19();
  L53():
    p9 = prom<V +>{
      rval4 = ld rval;
      rval5 = force? rval4;
      checkMissing(rval5);
      return rval5;
    };
    r59 = dyn Encoding(p9);
    check L54() else D21();
  D19():
    deopt 71 [r57];
  D21():
    deopt 76 [r59];
  L52():
    goto L8(r57);
  L54():
    r60 = `==`(r59, "UTF-8");
    st ind = r60;
    __1 = ldf `::`;
    check L55() else D22();
  D22():
    deopt 81 [];
  L55():
    r61 = dyn __1("tools", "encoded_text_to_latex");
    check L56() else D23();
  D23():
    deopt 84 [r61];
  L56():
    checkFun.0(r61);
    r62 = r61 as cls;
    p10 = prom<V +>{
      rval6 = ld rval;
      rval7 = force? rval6;
      checkMissing(rval7);
      c9 = `is.object`(rval7);
      if c9 then L1() else L2(rval7);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", rval7);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(rval9):
      ind = ld ind;
      ind1 = force? ind;
      __2 = ldf `[` in base;
      r63 = dyn __2(rval9, ind1);
      goto L0(r63);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r65 = dyn r62(p10, "UTF-8");
    check L57() else D24();
  D24():
    deopt 88 [r65];
  L57():
    l6 = ld rval;
    c10 = `is.object`(l6);
    if c10 then L58() else L59(r65, l6);
  L9(r69, dx13):
    st rval = dx13;
    goto L10();
  L58():
    dr12 = tryDispatchBuiltin.0("[<-", l6, r65);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L60() else L59(r65, dr12);
  L59(r67, l8):
    ind2 = ld ind;
    check L61() else D25();
  D25():
    deopt 90 [r67, l8, r65, ind2];
  L60():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L9(r65, dx12);
  L61():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r70 = dyn ___(l8, r65, ind3);
    goto L9(r67, r70);
  }
}
fun inner4266987626(n) {
  (reg n:*) -+> V { var n:*, reg paste0:cls, reg n1:*, reg n2:V, reg p:p(V +), reg object:*, reg object1:V, reg c:L, reg object3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg n3:*, reg n4:V, reg __:cls, reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st n = n;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p1 = prom<V +>{
      object = ld object;
      object1 = force? object;
      checkMissing(object1);
      c = `is.object`(object1);
      if c then L1() else L2(object1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[[", object1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(object3):
      n3 = ld n;
      n4 = force? n3;
      __ = ldf `[[` in base;
      r1 = dyn __(object3, n4);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn paste0("  ", p, " = {", p1, "},");
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}
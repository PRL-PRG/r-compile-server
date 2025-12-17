fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3431265135;
    st `terms.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3431265135(x, specials, abb, data, `neg.out`, `keep.order`, simplify, `...`, allowDotAsName) {
  (reg x:*, reg specials:*, reg abb:*, reg data:*, reg neg_out:*, reg keep_order:*, reg simplify:*, reg ddd:dots, reg allowDotAsName:*) -+> V { var x:*, var specials:*, reg specials_isMissing:L, reg specials_orDefault:*, var abb:*, reg abb_isMissing:L, reg abb_orDefault:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var `neg.out`:*, reg neg_out_isMissing:L, reg neg_out_orDefault:*, var `keep.order`:*, reg keep_order_isMissing:L, reg keep_order_orDefault:*, var simplify:*, reg simplify_isMissing:L, reg simplify_orDefault:*, var `...`:dots?, var allowDotAsName:*, reg allowDotAsName_isMissing:L, reg allowDotAsName_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg r3:V, reg c:L, reg _Deprecated:cls, reg gettextf:cls, reg r4:V, reg p:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg missing1:cls, reg r10:V, reg r11:V, reg c1:L, reg _Deprecated1:cls, reg gettextf1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg simplify1:*, reg simplify2:V, reg c2:L, reg r16:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg data1:*, reg data2:V, reg c3:V, reg r20:V, reg c4:L, reg c6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg c9:L, reg r22:V, reg data3:*, reg data4:V, reg is_environment:cls, reg r23:V, reg r24:V, reg c10:L, reg c11:V, reg c13:L, reg c15:V, reg is_data_frame:cls, reg data5:*, reg data6:V, reg p2:p(V +), reg r26:V, reg r27:V, reg c16:L, reg c17:V, reg c19:L, reg as_data_frame:cls, reg data7:*, reg data8:V, reg p3:p(V +), reg r29:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg C_termsform:*, reg C_termsform1:V, reg x1:*, reg x2:V, reg specials1:*, reg specials2:V, reg data9:*, reg data10:V, reg keep_order1:*, reg keep_order2:V, reg allowDotAsName1:*, reg allowDotAsName2:V, reg _External:cls, reg r33:V, reg simplify3:*, reg simplify4:V, reg c20:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg terms:*, reg terms1:V, reg attributes:cls, reg r36:V, reg fixFormulaObject:cls, reg terms2:*, reg terms3:V, reg p4:p(V +), reg r38:V, reg a:*, reg a1:V, reg l:*, reg attributes__:cls, reg r39:V, reg environment:cls, reg x3:*, reg x4:V, reg p5:p(V +), reg r41:V, reg l1:*, reg environment__:cls, reg r42:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r43:V, reg r44:V, reg terms4:*, reg terms5:V, reg inherits:cls, reg r45:V, reg r46:V, reg c21:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg terms6:*, reg terms7:V, reg oldClass:cls, reg r51:V, reg c22:cls, reg r52:V, reg l2:*, reg class__:cls, reg r53:V, reg terms8:*, reg terms9:V |
    mkenv;
    st x = x;
    specials_isMissing = missing.0(specials);
    if specials_isMissing then L0(NULL) else L0(specials);
  L0(specials_orDefault):
    st specials = specials_orDefault;
    abb_isMissing = missing.0(abb);
    if abb_isMissing then L1(NULL) else L1(abb);
  L1(abb_orDefault):
    st abb = abb_orDefault;
    data_isMissing = missing.0(data);
    if data_isMissing then L2(NULL) else L2(data);
  L2(data_orDefault):
    st data = data_orDefault;
    neg_out_isMissing = missing.0(neg_out);
    if neg_out_isMissing then L3(TRUE) else L3(neg_out);
  L3(neg_out_orDefault):
    st `neg.out` = neg_out_orDefault;
    keep_order_isMissing = missing.0(keep_order);
    if keep_order_isMissing then L4(FALSE) else L4(keep_order);
  L4(keep_order_orDefault):
    st `keep.order` = keep_order_orDefault;
    simplify_isMissing = missing.0(simplify);
    if simplify_isMissing then L5(FALSE) else L5(simplify);
  L5(simplify_orDefault):
    st simplify = simplify_orDefault;
    st `...` = ddd;
    allowDotAsName_isMissing = missing.0(allowDotAsName);
    if allowDotAsName_isMissing then L6(FALSE) else L6(allowDotAsName);
  L6(allowDotAsName_orDefault):
    st allowDotAsName = allowDotAsName_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L7(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L32() else L8();
  L30():
    missing = ldf missing in base;
    r2 = dyn missing(<sym abb>);
    goto L7(r2);
  L31():
    r = dyn base(<sym abb>);
    goto L7(r);
  L8():
    goto L9();
  L9():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L32():
    _Deprecated = ldf `.Deprecated`;
    check L33() else D0();
  D0():
    deopt 5 [];
  L10(r9):
    r11 = `!`(r9);
    c1 = `as.logical`(r11);
    if c1 then L38() else L11();
  L33():
    p = prom<V +>{
      gettextf = ldf gettextf;
      r4 = dyn gettextf("setting '%s' in terms.formula() is deprecated", "abb");
      return r4;
    };
    r6 = dyn _Deprecated[msg](p);
    check L34() else D1();
  L36():
    missing1 = ldf missing in base;
    r10 = dyn missing1(<sym neg.out>);
    goto L10(r10);
  L37():
    r8 = dyn base1(<sym neg.out>);
    goto L10(r8);
  D1():
    deopt 8 [r6];
  L11():
    goto L12();
  L12():
    simplify1 = ld simplify;
    check L42() else D4();
  L34():
    goto L9();
  L38():
    _Deprecated1 = ldf `.Deprecated`;
    check L39() else D2();
  D2():
    deopt 16 [];
  D4():
    deopt 22 [simplify1];
  L39():
    p1 = prom<V +>{
      gettextf1 = ldf gettextf;
      r12 = dyn gettextf1("setting '%s' in terms.formula() is deprecated", "neg.out");
      return r12;
    };
    r14 = dyn _Deprecated1[msg](p1);
    check L40() else D3();
  L42():
    simplify2 = force? simplify1;
    checkMissing(simplify2);
    c2 = `as.logical`(simplify2);
    if c2 then L43() else L13();
  D3():
    deopt 19 [r14];
  L13():
    goto L14();
  L14():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L40():
    goto L12();
  L43():
    r16 = clos inner4102710431;
    st fixFormulaObject = r16;
    goto L14();
  L15(r19):
    r20 = `!`(r19);
    c4 = `as.logical`(r20);
    if c4 then L48() else L16(c4);
  L45():
    data1 = ld data;
    check L47() else D5();
  L46():
    r18 = dyn base2(<sym data>);
    goto L15(r18);
  D5():
    deopt 30 [data1];
  L16(c6):
    c13 = `as.logical`(c6);
    if c13 then L54() else L18(c13);
  L47():
    data2 = force? data1;
    checkMissing(data2);
    c3 = `==`(data2, NULL);
    goto L15(c3);
  L48():
    sym3 = ldf `is.environment`;
    base3 = ldf `is.environment` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L49() else L50();
  L17(c9, r22):
    r24 = `!`(r22);
    c10 = `as.logical`(r24);
    c11 = `&&`(c9, c10);
    goto L16(c11);
  L18(c15):
    c19 = `as.logical`(c15);
    if c19 then L58() else L19();
  L49():
    data3 = ld data;
    check L51() else D6();
  L50():
    r21 = dyn base3(<sym data>);
    goto L17(c4, r21);
  L54():
    is_data_frame = ldf `is.data.frame`;
    check L55() else D8();
  D6():
    deopt 36 [c4, data3];
  D8():
    deopt 43 [c13];
  L19():
    goto L20();
  L20():
    sym4 = ldf `.External`;
    base4 = ldf `.External` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L62() else L63();
  L51():
    data4 = force? data3;
    checkMissing(data4);
    is_environment = ldf `is.environment` in base;
    r23 = dyn is_environment(data4);
    check L52() else D7();
  L55():
    p2 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r26 = dyn is_data_frame(p2);
    check L56() else D9();
  L58():
    as_data_frame = ldf `as.data.frame`;
    check L59() else D10();
  D7():
    deopt 39 [c4, r23];
  D9():
    deopt 45 [c13, r26];
  D10():
    deopt 49 [];
  L21(r32):
    st terms = r32;
    simplify3 = ld simplify;
    check L71() else D19();
  L52():
    goto L17(c4, r23);
  L56():
    r27 = `!`(r26);
    c16 = `as.logical`(r27);
    c17 = `&&`(c13, c16);
    goto L18(c17);
  L59():
    p3 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    r29 = dyn as_data_frame[, optional](p3, TRUE);
    check L60() else D11();
  L62():
    C_termsform = ld C_termsform;
    check L64() else D12();
  L63():
    r31 = dyn base4(<sym C_termsform>, <sym x>, <sym specials>, <sym data>, <sym keep.order>, <sym allowDotAsName>);
    goto L21(r31);
  D11():
    deopt 53 [r29];
  D12():
    deopt 59 [C_termsform];
  D19():
    deopt 74 [simplify3];
  L60():
    st data = r29;
    goto L20();
  L64():
    C_termsform1 = force? C_termsform;
    checkMissing(C_termsform1);
    x1 = ld x;
    check L65() else D13();
  L71():
    simplify4 = force? simplify3;
    checkMissing(simplify4);
    c20 = `as.logical`(simplify4);
    if c20 then L72() else L22();
  D13():
    deopt 61 [x1];
  L22():
    goto L24();
  L24():
    environment = ldf environment;
    check L83() else D27();
  L65():
    x2 = force? x1;
    checkMissing(x2);
    specials1 = ld specials;
    check L66() else D14();
  L72():
    sym5 = ldf attributes;
    base5 = ldf attributes in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L73() else L74();
  D14():
    deopt 63 [specials1];
  D27():
    deopt 98 [];
  L23(r35):
    st a = r35;
    fixFormulaObject = ldf fixFormulaObject;
    check L77() else D22();
  L66():
    specials2 = force? specials1;
    checkMissing(specials2);
    data9 = ld data;
    check L67() else D15();
  L73():
    terms = ld terms;
    check L75() else D20();
  L74():
    r34 = dyn base5(<sym terms>);
    goto L23(r34);
  L83():
    p5 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r41 = dyn environment(p5);
    check L84() else D28();
  D15():
    deopt 65 [data9];
  D20():
    deopt 78 [terms];
  D22():
    deopt 84 [];
  D28():
    deopt 100 [r41];
  L67():
    data10 = force? data9;
    checkMissing(data10);
    keep_order1 = ld `keep.order`;
    check L68() else D16();
  L75():
    terms1 = force? terms;
    checkMissing(terms1);
    attributes = ldf attributes in base;
    r36 = dyn attributes(terms1);
    check L76() else D21();
  L77():
    p4 = prom<V +>{
      terms2 = ld terms;
      terms3 = force? terms2;
      checkMissing(terms3);
      return terms3;
    };
    r38 = dyn fixFormulaObject(p4);
    check L78() else D23();
  L84():
    l1 = ld terms;
    environment__ = ldf `environment<-`;
    check L85() else D29();
  D16():
    deopt 67 [keep_order1];
  D21():
    deopt 81 [r36];
  D23():
    deopt 86 [r38];
  D29():
    deopt 102 [r41, l1, r41];
  L68():
    keep_order2 = force? keep_order1;
    checkMissing(keep_order2);
    allowDotAsName1 = ld allowDotAsName;
    check L69() else D17();
  L76():
    goto L23(r36);
  L78():
    st terms = r38;
    a = ld a;
    check L79() else D24();
  L85():
    r42 = dyn environment__(l1, NULL, r41);
    check L86() else D30();
  D17():
    deopt 69 [allowDotAsName1];
  D24():
    deopt 88 [a];
  D30():
    deopt 104 [r41, r42];
  L69():
    allowDotAsName2 = force? allowDotAsName1;
    checkMissing(allowDotAsName2);
    _External = ldf `.External` in base;
    r33 = dyn _External(C_termsform1, x2, specials2, data10, keep_order2, allowDotAsName2);
    check L70() else D18();
  L79():
    a1 = force? a;
    checkMissing(a1);
    l = ld terms;
    attributes__ = ldf `attributes<-`;
    check L80() else D25();
  L86():
    st terms = r42;
    sym6 = ldf inherits;
    base6 = ldf inherits in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L87() else L88();
  D18():
    deopt 72 [r33];
  D25():
    deopt 91 [a1, l, a1];
  L25(r44):
    r46 = `!`(r44);
    c21 = `as.logical`(r46);
    if c21 then L91() else L26();
  L70():
    goto L21(r33);
  L80():
    r39 = dyn attributes__(l, NULL, a1);
    check L81() else D26();
  L87():
    terms4 = ld terms;
    check L89() else D31();
  L88():
    r43 = dyn base6(<sym terms>, "formula");
    goto L25(r43);
  D26():
    deopt 93 [a1, r39];
  D31():
    deopt 108 [terms4];
  L26():
    goto L29();
  L29():
    terms8 = ld terms;
    check L102() else D38();
  L81():
    st terms = r39;
    goto L24();
  L89():
    terms5 = force? terms4;
    checkMissing(terms5);
    inherits = ldf inherits in base;
    r45 = dyn inherits(terms5, "formula", FALSE);
    check L90() else D32();
  L91():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L92() else L93();
  D32():
    deopt 113 [r45];
  D38():
    deopt 133 [terms8];
  L27(r48):
    l2 = ld terms;
    class__ = ldf `class<-`;
    check L99() else D36();
  L90():
    goto L25(r45);
  L92():
    sym8 = ldf oldClass;
    base8 = ldf oldClass in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  L93():
    r47 = dyn base7(<lang oldClass(terms)>, "formula");
    goto L27(r47);
  L102():
    terms9 = force? terms8;
    checkMissing(terms9);
    popenv;
    return terms9;
  D36():
    deopt 127 [r48, l2, r48];
  L28(r50):
    c22 = ldf c in base;
    r52 = dyn c22(r50, "formula");
    check L98() else D35();
  L94():
    terms6 = ld terms;
    check L96() else D33();
  L95():
    r49 = dyn base8(<sym terms>);
    goto L28(r49);
  L99():
    r53 = dyn class__(l2, NULL, r48);
    check L100() else D37();
  D33():
    deopt 119 [terms6];
  D35():
    deopt 125 [r52];
  D37():
    deopt 129 [r48, r53];
  L96():
    terms7 = force? terms6;
    checkMissing(terms7);
    oldClass = ldf oldClass in base;
    r51 = dyn oldClass(terms7);
    check L97() else D34();
  L98():
    goto L27(r52);
  L100():
    st terms = r53;
    goto L29();
  D34():
    deopt 122 [r51];
  L97():
    goto L28(r51);
  }
}
fun inner4102710431(object) {
  (reg object:*) -+> V { var object:*, reg terms:cls, reg object1:*, reg object2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg Terms:*, reg Terms1:V, reg attr:cls, reg r4:V, reg grep:cls, reg tmp:*, reg tmp1:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg ind:*, reg ind1:V, reg length:cls, reg r9:V, reg c:L, reg paste:cls, reg tmp2:*, reg tmp3:V, reg c1:L, reg tmp5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r10:V, reg p2:p(V +), reg r12:V, reg l:*, reg c2:L, reg r14:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r16:V, reg dx3:V, reg ind4:*, reg ind5:V, reg ___:cls, reg r17:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg Terms2:*, reg Terms3:V, reg attr1:cls, reg r23:V, reg length1:cls, reg r24:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r27:V, reg r28:V, reg Terms4:*, reg Terms5:V, reg attr2:cls, reg r29:V, reg as_character:cls, reg r30:V, reg c4:L, reg r32:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg tmp6:*, reg tmp7:V, reg tmp8:*, reg tmp9:V, reg c5:L, reg tmp11:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind6:*, reg ind7:V, reg __2:cls, reg r36:V, reg c6:cls, reg r37:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg tmp12:*, reg tmp13:V, reg length2:cls, reg r41:V, reg c7:L, reg paste1:cls, reg tmp14:*, reg tmp15:V, reg p3:p(V +), reg r43:V, reg r44:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r45:V, reg r46:V, reg Terms6:*, reg Terms7:V, reg attr3:cls, reg r47:V, reg r48:V, reg c8:L, reg paste2:cls, reg rhs:*, reg rhs1:V, reg p4:p(V +), reg r50:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:V, reg formula:cls, reg object3:*, reg object4:V, reg p5:p(V +), reg r55:V, reg length3:cls, reg r56:V, reg r57:V, reg c9:L, reg formula1:cls, reg paste3:cls, reg rhs2:*, reg rhs3:V, reg p6:p(V +), reg r59:V, reg p7:p(V +), reg r61:V, reg form:*, reg form1:V, reg c10:L, reg form3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r62:V, reg l3:*, reg c11:L, reg dx11:V, reg l5:*, reg dr10:V, reg dc5:L, reg dx13:V, reg dx15:V, reg ____:cls, reg r63:V, reg res:*, reg res1:V, reg formula2:cls, reg paste4:cls, reg rhs4:*, reg rhs5:V, reg p8:p(V +), reg r65:V, reg p9:p(V +), reg r67:V |
    mkenv;
    st object = object;
    terms = ldf terms;
    check L24() else D0();
  D0():
    deopt 1 [];
  L24():
    p = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r1 = dyn terms(p);
    check L25() else D1();
  D1():
    deopt 3 [r1];
  L25():
    st Terms = r1;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r3):
    st tmp = r3;
    grep = ldf grep;
    check L30() else D4();
  L26():
    Terms = ld Terms;
    check L28() else D2();
  L27():
    r2 = dyn base(<sym Terms>, "term.labels");
    goto L0(r2);
  D2():
    deopt 7 [Terms];
  D4():
    deopt 14 [];
  L28():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    attr = ldf attr in base;
    r4 = dyn attr(Terms1, "term.labels");
    check L29() else D3();
  L30():
    p1 = prom<V +>{
      tmp = ld tmp;
      tmp1 = force? tmp;
      checkMissing(tmp1);
      return tmp1;
    };
    r6 = dyn grep[, , fixed]("|", p1, TRUE);
    check L31() else D5();
  D3():
    deopt 11 [r4];
  D5():
    deopt 19 [r6];
  L29():
    goto L0(r4);
  L31():
    st ind = r6;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L1(r8):
    c = `as.logical`(r8);
    if c then L36() else L2();
  L32():
    ind = ld ind;
    check L34() else D6();
  L33():
    r7 = dyn base1(<sym ind>);
    goto L1(r7);
  D6():
    deopt 23 [ind];
  L2():
    goto L4();
  L4():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L44() else L45();
  L34():
    ind1 = force? ind;
    checkMissing(ind1);
    length = ldf length in base;
    r9 = dyn length(ind1);
    check L35() else D7();
  L36():
    paste = ldf paste;
    check L37() else D8();
  D7():
    deopt 26 [r9];
  D8():
    deopt 28 [];
  L5(r20):
    c3 = `as.logical`(r20);
    if c3 then L51() else L7();
  L35():
    goto L1(r9);
  L37():
    p2 = prom<V +>{
      tmp2 = ld tmp;
      tmp3 = force? tmp2;
      checkMissing(tmp3);
      c1 = `is.object`(tmp3);
      if c1 then L1() else L2(tmp3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", tmp3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(tmp5):
      ind2 = ld ind;
      ind3 = force? ind2;
      __ = ldf `[` in base;
      r10 = dyn __(tmp5, ind3);
      goto L0(r10);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r12 = dyn paste("(", p2, ")");
    check L38() else D9();
  L44():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  L45():
    r19 = dyn base2(<lang `<-`(ind, attr(Terms, "offset"))>);
    goto L5(r19);
  D9():
    deopt 32 [r12];
  L6(r22):
    st ind = r22;
    length1 = ldf length in base;
    r24 = dyn length1(r22);
    check L50() else D13();
  L7():
    goto L13();
  L13():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  L38():
    l = ld tmp;
    c2 = `is.object`(l);
    if c2 then L39() else L40(r12, l);
  L46():
    Terms2 = ld Terms;
    check L48() else D11();
  L47():
    r21 = dyn base3(<sym Terms>, "offset");
    goto L6(r21);
  L51():
    sym4 = ldf `as.character`;
    base4 = ldf `as.character` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  D11():
    deopt 44 [Terms2];
  D13():
    deopt 51 [r24];
  L3(r16, dx3):
    st tmp = dx3;
    goto L4();
  L8(r26):
    c4 = `is.object`(r26);
    if c4 then L59() else L60(r26);
  L14(r40):
    c7 = `as.logical`(r40);
    if c7 then L76() else L15();
  L39():
    dr2 = tryDispatchBuiltin.0("[<-", l, r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L41() else L40(r12, dr2);
  L40(r14, l2):
    ind4 = ld ind;
    check L42() else D10();
  L48():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    attr1 = ldf attr in base;
    r23 = dyn attr1(Terms3, "offset");
    check L49() else D12();
  L50():
    goto L5(r24);
  L52():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L53():
    r25 = dyn base4(<lang attr(Terms, "variables")>);
    goto L8(r25);
  L72():
    tmp12 = ld tmp;
    check L74() else D21();
  L73():
    r39 = dyn base7(<sym tmp>);
    goto L14(r39);
  D10():
    deopt 34 [r14, l2, r12, ind4];
  D12():
    deopt 48 [r23];
  D21():
    deopt 83 [tmp12];
  L9(r28):
    as_character = ldf `as.character` in base;
    r30 = dyn as_character(r28);
    check L58() else D16();
  L10(dx5):
    st tmp2 = dx5;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L62() else L63();
  L15():
    goto L16("1");
  L16(r44):
    st rhs = r44;
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L80() else L81();
  L41():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(r12, dx2);
  L42():
    ind5 = force? ind4;
    ___ = ldf `[<-` in base;
    r17 = dyn ___(l2, r12, ind5);
    goto L3(r14, r17);
  L49():
    goto L6(r23);
  L54():
    Terms4 = ld Terms;
    check L56() else D14();
  L55():
    r27 = dyn base5(<sym Terms>, "variables");
    goto L9(r27);
  L59():
    dr4 = tryDispatchBuiltin.1("[", r26);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(dr4);
  L60(r32):
    __1 = ldf `[` in base;
    r33 = dyn __1(r32, -1);
    goto L10(r33);
  L74():
    tmp13 = force? tmp12;
    checkMissing(tmp13);
    length2 = ldf length in base;
    r41 = dyn length2(tmp13);
    check L75() else D22();
  L76():
    paste1 = ldf paste;
    check L77() else D23();
  D14():
    deopt 56 [Terms4];
  D16():
    deopt 62 [r30];
  D22():
    deopt 86 [r41];
  D23():
    deopt 88 [];
  L11(r35):
    st tmp = r35;
    goto L13();
  L17(r46):
    r48 = `!`(r46);
    c8 = `as.logical`(r48);
    if c8 then L84() else L18();
  L56():
    Terms5 = force? Terms4;
    checkMissing(Terms5);
    attr2 = ldf attr in base;
    r29 = dyn attr2(Terms5, "variables");
    check L57() else D15();
  L58():
    goto L8(r30);
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L10(dx4);
  L62():
    tmp6 = ld tmp;
    check L64() else D17();
  L63():
    r34 = dyn base6(<sym tmp>, <lang `[`(tmp2, ind)>);
    goto L11(r34);
  L75():
    goto L14(r41);
  L77():
    p3 = prom<V +>{
      tmp14 = ld tmp;
      tmp15 = force? tmp14;
      checkMissing(tmp15);
      return tmp15;
    };
    r43 = dyn paste1[, collapse](p3, " + ");
    check L78() else D24();
  L80():
    Terms6 = ld Terms;
    check L82() else D25();
  L81():
    r45 = dyn base8(<sym Terms>, "intercept");
    goto L17(r45);
  D15():
    deopt 60 [r29];
  D17():
    deopt 69 [tmp6];
  D24():
    deopt 92 [r43];
  D25():
    deopt 98 [Terms6];
  L18():
    goto L19();
  L19():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L88() else L89();
  L57():
    goto L9(r29);
  L64():
    tmp7 = force? tmp6;
    checkMissing(tmp7);
    tmp8 = ld tmp2;
    check L65() else D18();
  L78():
    goto L16(r43);
  L82():
    Terms7 = force? Terms6;
    checkMissing(Terms7);
    attr3 = ldf attr in base;
    r47 = dyn attr3(Terms7, "intercept");
    check L83() else D26();
  L84():
    paste2 = ldf paste;
    check L85() else D27();
  D18():
    deopt 71 [tmp8];
  D26():
    deopt 102 [r47];
  D27():
    deopt 105 [];
  L20(r53):
    r57 = `>`(r53, 2);
    c9 = `as.logical`(r57);
    if c9 then L93() else L21();
  L65():
    tmp9 = force? tmp8;
    checkMissing(tmp9);
    c5 = `is.object`(tmp9);
    if c5 then L66() else L67(tmp9);
  L83():
    goto L17(r47);
  L85():
    p4 = prom<V +>{
      rhs = ld rhs;
      rhs1 = force? rhs;
      checkMissing(rhs1);
      return rhs1;
    };
    r50 = dyn paste2(p4, "- 1");
    check L86() else D28();
  L88():
    formula = ldf formula;
    check L90() else D29();
  L89():
    r52 = dyn base9(<lang `<-`(form, formula(object))>);
    goto L20(r52);
  D28():
    deopt 108 [r50];
  D29():
    deopt 115 [];
  L12(dx7):
    c6 = ldf c in base;
    r37 = dyn c6(tmp7, dx7);
    check L70() else D20();
  L21():
    formula2 = ldf formula;
    check L105() else D36();
  L66():
    dr6 = tryDispatchBuiltin.1("[", tmp9);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L68() else L67(dr6);
  L67(tmp11):
    ind6 = ld ind;
    check L69() else D19();
  L86():
    st rhs = r50;
    goto L19();
  L90():
    p5 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r55 = dyn formula(p5);
    check L91() else D30();
  L93():
    formula1 = ldf formula;
    check L94() else D32();
  D19():
    deopt 73 [tmp11, ind6];
  D20():
    deopt 77 [r37];
  D30():
    deopt 117 [r55];
  D32():
    deopt 124 [];
  D36():
    deopt 141 [];
  L68():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L69():
    ind7 = force? ind6;
    __2 = ldf `[` in base;
    r36 = dyn __2(tmp11, ind7);
    goto L12(r36);
  L70():
    goto L11(r37);
  L91():
    st form = r55;
    length3 = ldf length in base;
    r56 = dyn length3(r55);
    check L92() else D31();
  L94():
    p7 = prom<V +>{
      paste3 = ldf paste;
      p6 = prom<V +>{
        rhs2 = ld rhs;
        rhs3 = force? rhs2;
        checkMissing(rhs3);
        return rhs3;
      };
      r59 = dyn paste3("lhs ~", p6);
      return r59;
    };
    r61 = dyn formula1(p7);
    check L95() else D33();
  L105():
    p9 = prom<V +>{
      paste4 = ldf paste;
      p8 = prom<V +>{
        rhs4 = ld rhs;
        rhs5 = force? rhs4;
        checkMissing(rhs5);
        return rhs5;
      };
      r65 = dyn paste4("~", p8);
      return r65;
    };
    r67 = dyn formula2(p9);
    check L106() else D37();
  D31():
    deopt 120 [r56];
  D33():
    deopt 126 [r61];
  D37():
    deopt 143 [r67];
  L92():
    goto L20(r56);
  L95():
    st res = r61;
    form = ld form;
    check L96() else D34();
  L106():
    popenv;
    return r67;
  D34():
    deopt 128 [form];
  L96():
    form1 = force? form;
    checkMissing(form1);
    c10 = `is.object`(form1);
    if c10 then L97() else L98(form1);
  L22(dx9):
    l3 = ld res;
    c11 = `is.object`(l3);
    if c11 then L100() else L101(dx9, l3);
  L97():
    dr8 = tryDispatchBuiltin.1("[[", form1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L99() else L98(dr8);
  L98(form3):
    __3 = ldf `[[` in base;
    r62 = dyn __3(form3, 2);
    goto L22(r62);
  L23(dx15):
    st res = dx15;
    res = ld res;
    check L103() else D35();
  L99():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L22(dx8);
  L100():
    dr10 = tryDispatchBuiltin.0("[[<-", l3, dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L102() else L101(dx9, dr10);
  L101(dx11, l5):
    ____ = ldf `[[<-` in base;
    r63 = dyn ____(l5, dx9, 2);
    goto L23(r63);
  D35():
    deopt 138 [res];
  L102():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L23(dx13);
  L103():
    res1 = force? res;
    checkMissing(res1);
    popenv;
    return res1;
  }
}